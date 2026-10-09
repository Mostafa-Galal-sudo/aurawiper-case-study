(() => {
  "use strict";

  const body = document.body;
  if ("scrollRestoration" in history) history.scrollRestoration = "manual";
  scrollTo(0, 0);
  addEventListener("load", () => setTimeout(() => scrollTo(0, 0), 0), { once: true });
  const boot = document.getElementById("boot");
  const progressFill = document.getElementById("progressFill");
  const hudProgress = document.getElementById("hudProgress");
  const hudPhase = document.getElementById("hudPhase");
  const atmosphere = document.getElementById("atmosphere");
  const lightbox = document.getElementById("lightbox");
  const lightboxImage = document.getElementById("lightboxImage");
  const lightboxCaption = document.getElementById("lightboxCaption");
  const bootVideo = document.getElementById("bootVideo");
  const startInvestigation = document.getElementById("startInvestigation");

  if (bootVideo && matchMedia("(prefers-reduced-motion: reduce)").matches) {
    bootVideo.addEventListener("loadeddata", () => bootVideo.pause(), { once: true });
  }

  startInvestigation.addEventListener("click", async () => {
    startInvestigation.disabled = true;
    bootVideo.currentTime = 0;
    bootVideo.muted = false;
    bootVideo.volume = 1;
    boot.classList.add("is-playing");
    try {
      await bootVideo.play();
    } catch (_) {
      boot.classList.remove("is-playing");
      startInvestigation.disabled = false;
      startInvestigation.textContent = "START INVESTIGATION AGAIN";
    }
  });

  bootVideo.addEventListener("ended", () => {
    dismissBoot();
  });

  function dismissBoot() {
    if (boot.classList.contains("is-dismissed")) return;
    scrollTo(0, 0);
    boot.classList.add("is-dismissed");
    body.classList.remove("intro-locked");
    body.classList.add("case-open");
    bootVideo.pause();
    if (window.gsap && !matchMedia("(prefers-reduced-motion: reduce)").matches) {
      gsap.fromTo(".hero__sub, .hero__lead, .hero__actions", {
        opacity: 0,
        y: 22,
      }, {
        opacity: 1,
        y: 0,
        duration: .65,
        stagger: .12,
        delay: .12,
        ease: "power3.out",
      });
      gsap.fromTo(".hero__facts > div", {
        opacity: 0,
        y: 28,
        rotateX: -18,
      }, {
        opacity: 1,
        y: 0,
        rotateX: 0,
        duration: .58,
        stagger: .09,
        delay: .28,
        ease: "back.out(1.35)",
      });
    }
    if (window.ScrollTrigger) ScrollTrigger.refresh();
  }

  function updateProgress() {
    const root = document.documentElement;
    const max = root.scrollHeight - innerHeight;
    const progress = max > 0 ? Math.min(1, scrollY / max) : 0;
    progressFill.style.width = `${progress * 100}%`;
    hudProgress.textContent = `${String(Math.round(progress * 100)).padStart(2, "0")}%`;
    body.style.setProperty("--corruption", Math.min(.9, progress * 1.15).toFixed(2));
  }

  addEventListener("scroll", updateProgress, { passive: true });
  updateProgress();

  const phaseObserver = new IntersectionObserver((entries) => {
    entries.forEach((entry) => {
      if (entry.isIntersecting) hudPhase.textContent = entry.target.dataset.phase || "INVESTIGATION";
    });
  }, { rootMargin: "-40% 0px -50%" });
  document.querySelectorAll("[data-phase]").forEach((section) => phaseObserver.observe(section));

  atmosphere.addEventListener("click", () => {
    const pressed = body.classList.toggle("interference-suppressed");
    atmosphere.setAttribute("aria-pressed", String(pressed));
    atmosphere.textContent = pressed ? "Restore interference" : "Suppress interference";
  });

  const persistence = {
    hkcu: ["Finding 03 / mechanism 01", "HKCU Run Key", "HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Run", "Attempts to configure autorun values for the current user. This route is distinct from machine-wide persistence even where the loops and value data are similar."],
    hklm: ["Finding 03 / mechanism 02", "HKLM Run Key", "HKLM\\Software\\Microsoft\\Windows\\CurrentVersion\\Run", "Attempts machine-wide autorun configuration. Successful modification depends on the process having sufficient permissions."],
    startup: ["Finding 03 / mechanism 03", "Startup Folder", "%APPDATA%\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\", "Constructs a Startup path and uses an executable name resembling a legitimate security component: SecurityHealthSystray.exe."],
    shell: ["Finding 03 / mechanism 04", "Winlogon Shell", "HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon → Shell", "Changes a fundamental interactive-logon configuration rather than relying on an ordinary Run value."],
  };
  const persistDetail = document.getElementById("persistDetail");
  const persistenceMap = document.getElementById("persistenceMap");
  const persistButtons = [...document.querySelectorAll("[data-persist]")];
  const replayPersistenceButton = document.getElementById("replayPersistence");
  let persistenceSequence;

  function selectPersistence(button) {
    const index = persistButtons.indexOf(button);
    persistButtons.forEach((node) => node.classList.remove("is-active"));
    button.classList.add("is-active");
    persistenceMap.style.setProperty("--persist-step", `${index * 100}%`);
    const [label, title, path, copy] = persistence[button.dataset.persist];
    persistDetail.classList.add("is-switching");
    setTimeout(() => {
      persistDetail.innerHTML = `<span>${label}</span><h3>${title}</h3><code>${path}</code><p>${copy}</p>`;
      persistDetail.classList.remove("is-switching");
    }, 150);
  }

  persistButtons.forEach((button) => button.addEventListener("click", () => selectPersistence(button)));

  function replayPersistence() {
    clearInterval(persistenceSequence);
    let index = 0;
    replayPersistenceButton.disabled = true;
    replayPersistenceButton.textContent = "Tracing persistence route 1 / 4";
    selectPersistence(persistButtons[index]);
    persistenceSequence = setInterval(() => {
      index += 1;
      if (index >= persistButtons.length) {
        clearInterval(persistenceSequence);
        replayPersistenceButton.disabled = false;
        replayPersistenceButton.textContent = "Replay four-technique sequence";
        return;
      }
      replayPersistenceButton.textContent = `Tracing persistence route ${index + 1} / 4`;
      selectPersistence(persistButtons[index]);
    }, 1050);
  }

  replayPersistenceButton.addEventListener("click", replayPersistence);

  const suppressionButton = document.getElementById("runSuppression");
  const processRows = [...document.querySelectorAll("[data-process]")];
  suppressionButton.addEventListener("click", () => {
    processRows.forEach((row) => { row.classList.remove("is-terminated"); row.querySelector("b").textContent = "VISIBLE"; });
    suppressionButton.disabled = true;
    suppressionButton.textContent = "MONITOR LOOP ACTIVE";
    processRows.forEach((row, index) => setTimeout(() => {
      row.classList.add("is-terminated");
      row.querySelector("b").textContent = "TERMINATION ATTEMPT";
      if (index === processRows.length - 1) {
        suppressionButton.disabled = false;
        suppressionButton.textContent = "Replay illustrative cycle";
      }
    }, 300 + index * 320));
  });

  const architectureCopy = {
    controller: ["Payload controller", "Hides the console, prevents ordinary sleep, creates a hidden system marker, schedules worker targets, waits 75 seconds, then proceeds toward native hard-error resolution and cleanup."],
    wrapper: ["Confirmed delay wrapper", "Sleeps for the supplied millisecond value, starts the supplied target in a new thread, then frees the 16-byte scheduling context."],
    mbr: ["Destructive worker", "FUN_140011AA0 implements the raw disk overwrite attempt. It is a worker scheduled by the controller, not the controller itself."],
  };
  const archReadout = document.getElementById("archReadout");
  document.querySelectorAll("[data-arch]").forEach((button) => button.addEventListener("click", () => {
    document.querySelectorAll("[data-arch]").forEach((node) => node.classList.remove("is-selected"));
    button.classList.add("is-selected");
    const [title, copy] = architectureCopy[button.dataset.arch];
    archReadout.innerHTML = `<span>Selected component</span><h3>${title}</h3><p>${copy}</p>`;
  }));

  const functionCatalog = {
    FUN_140014E40: {
      title: "Payload controller",
      file: "assets/decompiled/FUN_140014E40.c",
      summary: "Coordinates the destructive sequence: hides the console, changes execution state, creates a hidden marker, schedules nine worker targets, waits 75 seconds, resolves native failure APIs, and prepares self-cleanup.",
      role: "Controller",
      behavior: "Thread orchestration / hard-error path",
      confidence: "High · direct static evidence",
    },
    FUN_14000F370: {
      title: "Execution delay wrapper",
      file: "assets/decompiled/FUN_14000F370.c",
      summary: "Treats the first DWORD in its context as a millisecond delay, sleeps for that duration, starts the function pointer stored at offset 8, then frees the 16-byte context.",
      role: "Controller support routine",
      behavior: "Confirmed delayed thread launch",
      confidence: "High · complete wrapper body",
    },
    FUN_140011AA0: {
      title: "Raw disk overwrite worker",
      file: "assets/decompiled/FUN_140011AA0.c",
      summary: "Waits ten seconds, clears a 512-byte buffer, opens \\\\.\\PhysicalDrive0, attempts a 0x200-byte write, then repeats every 200 milliseconds.",
      role: "Worker · scheduled at 14000",
      behavior: "Physical disk sector-zero overwrite attempt",
      confidence: "High · direct API sequence",
    },
    FUN_14000FCE0: {
      title: "Audio endpoint enumeration loop",
      file: "assets/decompiled/FUN_14000FCE0.c",
      summary: "The supplied GUID bytes resolve to MMDeviceEnumerator and IMMDeviceEnumerator. The worker repeatedly creates the enumerator and requests active render endpoints through COM every 200 milliseconds.",
      role: "Worker · scheduled at 0",
      behavior: "Active audio render-endpoint enumeration",
      confidence: "High · CLSID and IID resolved",
    },
    FUN_14000FE80: {
      title: "Keyboard suppression hook",
      file: "assets/decompiled/FUN_14000FE80.c",
      summary: "Installs a global WH_KEYBOARD_LL hook and keeps it active through a Windows message loop. Its recovered callback returns 1 for HC_ACTION events, preventing those keyboard messages from continuing through the hook chain.",
      role: "Worker · scheduled at 2000",
      behavior: "Global low-level keyboard input suppression",
      confidence: "High · hook and callback recovered",
    },
    FUN_140011B50: {
      title: "Task Manager restriction",
      file: "assets/decompiled/FUN_140011B50.c",
      summary: "Creates or opens the current-user Policies\\System key and writes DisableTaskMgr as a DWORD value of 1.",
      role: "Worker · scheduled at 4000",
      behavior: "Registry policy tampering",
      confidence: "High · explicit registry value",
    },
    FUN_140011C70: {
      title: "Defender suppression worker",
      file: "assets/decompiled/FUN_140011C70.c",
      summary: "Writes multiple Windows Defender policy values, then repeatedly targets System Settings, SecurityHealthService, and SecHealthUI through the sample's process-handling routine.",
      role: "Worker · scheduled at 6000",
      behavior: "Security policy changes and process targeting",
      confidence: "High · explicit commands and process names",
    },
    FUN_140011CD0: {
      title: "Optical-drive tray loop",
      file: "assets/decompiled/FUN_140011CD0.c",
      summary: "Alternates Media Control Interface commands that open and close the CD-audio tray, sleeping two seconds between actions.",
      role: "Worker · scheduled at 8000",
      behavior: "Repeated MCI device commands",
      confidence: "High · literal command strings",
    },
    FUN_14000F3C0: {
      title: "Nested worker scheduler",
      file: "assets/decompiled/FUN_14000F3C0.c",
      summary: "Schedules four now-recovered child routines: a fullscreen graphics overlay, desktop-icon repositioning, a MessageBox swarm, and continuous cursor displacement at 0, 2000, 4000, and 6000 milliseconds.",
      role: "Worker · scheduled at 10000",
      behavior: "Secondary thread orchestration",
      confidence: "High · scheduler and child bodies recovered",
    },
    FUN_140014DA0: {
      title: "Desktop wallpaper setter",
      file: "assets/decompiled/FUN_140014DA0.c",
      summary: "Calls the recovered resource extractor, then supplies its returned temporary path to SystemParametersInfoA with SPI_SETDESKWALLPAPER and update flags 3.",
      role: "Worker · scheduled at 12000",
      behavior: "Desktop wallpaper change attempt",
      confidence: "High · source extractor recovered",
    },
    FUN_140011A70: {
      title: "Recovery destruction worker",
      file: "assets/decompiled/FUN_140011A70.c",
      summary: "Issues BCDEdit, REAgentC, WMIC, and VSSAdmin commands intended to disable recovery and remove boot entries and shadow copies, then calls two internal deletion routines.",
      role: "Worker · scheduled at 16000",
      behavior: "Recovery suppression / boot-path deletion chain",
      confidence: "High intent · runtime success unverified",
    },
    FUN_14000FE60: {
      title: "Keyboard-hook callback",
      file: "assets/decompiled/FUN_14000FE60.c",
      summary: "Returns the nonzero value 1 when nCode equals HC_ACTION (0), suppressing the corresponding keyboard event. Other hook notifications are forwarded with CallNextHookEx.",
      role: "Callback for FUN_14000FE80",
      behavior: "Keyboard event suppression",
      confidence: "High · complete callback body",
    },
    FUN_14000ECF0: {
      title: "Fullscreen graphics overlay",
      file: "assets/decompiled/FUN_14000ECF0.c",
      summary: "Registers the SFVerifFxOverlay class, creates a fullscreen topmost window, captures the desktop, renders repeated bitmap effects, and draws the string .gg/OQTF at changing positions and colors.",
      role: "Nested worker · delay 0",
      behavior: "GDI screen overlay and visual interference",
      confidence: "High · direct window and GDI calls",
    },
    FUN_14000E160: {
      title: "Desktop icon repositioning",
      file: "assets/decompiled/FUN_14000E160.c",
      summary: "Finds the desktop SysListView32, obtains its icon count, then sends LVM_SETITEMPOSITION messages that move three randomly selected icons to random screen coordinates.",
      role: "Nested worker · delay 2000",
      behavior: "Desktop icon displacement",
      confidence: "High · explicit window messages",
    },
    FUN_14000F9A0: {
      title: "MessageBox swarm controller",
      file: "assets/decompiled/FUN_14000F9A0.c",
      summary: "Spawns fifteen MessageBox threads at random coordinates, repeatedly repositions dialog-class windows, and later posts close messages to remaining dialogs.",
      role: "Nested worker · delay 4000",
      behavior: "Dialog spawning, movement, and cleanup",
      confidence: "High · complete control loop",
    },
    FUN_140011D30: {
      title: "Cursor displacement loop",
      file: "assets/decompiled/FUN_140011D30.c",
      summary: "Continuously moves the cursor to pseudo-random positions within the current screen dimensions, sleeping 0x78 (120) milliseconds between moves.",
      role: "Nested worker · delay 6000",
      behavior: "Continuous pointer interference",
      confidence: "High · direct SetCursorPos loop",
    },
    FUN_140010570: {
      title: "Process termination helper",
      file: "assets/decompiled/FUN_140010570.c",
      summary: "Enumerates processes using a Toolhelp snapshot, compares executable names, and opens matching processes with PROCESS_TERMINATE before calling TerminateProcess.",
      role: "Defense-suppression helper",
      behavior: "Name-based process termination",
      confidence: "High · complete enumeration path",
    },
    FUN_140011BE0: {
      title: "Monitoring termination loop",
      file: "assets/decompiled/FUN_140011BE0.c",
      summary: "After an initial 20-second delay, repeatedly targets Task Manager, Process Hacker, Process Explorer, and PowerShell, raises its own priority to REALTIME_PRIORITY_CLASS, then repeats every 100 milliseconds.",
      role: "Long-running suppression routine",
      behavior: "Monitoring-tool termination and priority escalation",
      confidence: "High · complete loop recovered",
    },
    FUN_14000FC00: {
      title: "MessageBox display routine",
      file: "assets/decompiled/FUN_14000FC00.c",
      summary: "Installs a thread-local WH_CBT hook, selects one of six recovered “67” text variants and one of four captions, displays a system-modal MessageBox, then unhooks and frees its coordinate context.",
      role: "UI interference routine",
      behavior: "Counter-driven MessageBox creation",
      confidence: "High · function and pointer tables recovered",
    },
    FUN_14000FF20: {
      title: "Hidden command runner",
      file: "assets/decompiled/FUN_14000FF20.c",
      summary: "Builds a System32\\cmd.exe /q /c command line, redirects standard handles to NUL, starts the process without a visible window, and applies the supplied wait timeout.",
      role: "Command-execution helper",
      behavior: "Hidden shell command execution",
      confidence: "High · CreateProcess path recovered",
    },
    FUN_14000B290: {
      title: "Embedded wallpaper extractor",
      file: "assets/decompiled/FUN_14000B290.c",
      summary: "Loads RCDATA resource ID 204 from the executable, locks and measures the resource, constructs a path under the temporary directory, writes the embedded content, and returns the path used by the wallpaper setter.",
      role: "Resource extraction helper",
      behavior: "Embedded resource to temporary file",
      confidence: "High · resource path recovered",
    },
    FUN_1400106A0: {
      title: "Recovery suppression chain",
      file: "assets/decompiled/FUN_1400106A0.c",
      summary: "Builds and runs an extensive command chain that disables Windows recovery and restore features, removes recovery directories and components, deletes shadow copies, alters recovery policies, and disables backup-related tasks and services.",
      role: "Destructive helper",
      behavior: "Recovery, restore, and backup inhibition",
      confidence: "High intent · runtime success unverified",
    },
    FUN_140011650: {
      title: "Boot-critical file deletion",
      file: "assets/decompiled/FUN_140011650.c",
      summary: "Attempts direct deletion of OS loaders, boot managers, kernel components, Registry hives, and legacy boot files, then enumerates drive letters C through Z for EFI and BCD paths.",
      role: "Destructive helper",
      behavior: "Targeted boot-chain and system-file deletion",
      confidence: "High intent · deletion success unverified",
    },
    FUN_140013E00: {
      title: "Persistence configuration routine",
      file: "assets/decompiled/FUN_140013E00.c",
      summary: "Configures autorun through HKCU Run, HKLM Run, Startup-folder copies, and Winlogon Shell using SecurityHealthSystray-themed names and paths.",
      role: "Persistence routine",
      behavior: "Four persistence configurations",
      confidence: "High · Registry and filesystem paths recovered",
    },
    FUN_1400130F0: {
      title: "Payload copy deployment",
      file: "assets/decompiled/FUN_1400130F0.c",
      summary: "Resolves the current executable and destination paths, creates directories where needed, and deploys three SecurityHealthSystray-themed copies with two-second spacing.",
      role: "Persistence support routine",
      behavior: "Executable copy staging",
      confidence: "High · copy loop recovered",
    },
  };

  const decompileModal = document.getElementById("decompileModal");
  const decompileTitle = document.getElementById("decompileTitle");
  const decompileAddress = document.getElementById("decompileAddress");
  const decompileSummary = document.getElementById("decompileSummary");
  const decompileFacts = document.getElementById("decompileFacts");
  const decompileCode = document.getElementById("decompileCode");
  const copyDecompile = document.getElementById("copyDecompile");
  let activeDecompile = "";

  const escapeCode = (value) => value.replace(/[&<>]/g, (character) => ({ "&": "&amp;", "<": "&lt;", ">": "&gt;" }[character]));
  const highlightCode = (value) => {
    const tokenPattern = /(\/\*[\s\S]*?\*\/|\/\/[^\n]*|"(?:\\.|[^"\\])*"|'(?:\\.|[^'\\])*'|\b(?:void|return|if|else|do|while|for|true|false|undefined\d*|longlong|ulonglong|DWORD|HANDLE|HRESULT|LSTATUS|BYTE|HKEY|HWND|HMODULE|FARPROC|LPSTR|LPCSTR|WCHAR|CHAR|code|int|char)\b|\b(?:0x[0-9a-fA-F]+|\d+)\b)/g;
    let output = "";
    let cursor = 0;
    for (const match of value.matchAll(tokenPattern)) {
      output += escapeCode(value.slice(cursor, match.index));
      const token = match[0];
      let type = "number";
      if (token.startsWith("/*") || token.startsWith("//")) type = "comment";
      else if (token.startsWith('"') || token.startsWith("'")) type = "string";
      else if (/^[A-Za-z]/.test(token)) type = "keyword";
      output += `<span class="tok-${type}">${escapeCode(token)}</span>`;
      cursor = match.index + token.length;
    }
    return output + escapeCode(value.slice(cursor));
  };

  async function openDecompile(functionId) {
    const entry = functionCatalog[functionId];
    if (!entry) return;
    decompileAddress.textContent = functionId.replace("FUN_", "VIRTUAL ADDRESS 0x");
    decompileTitle.textContent = entry.title;
    decompileSummary.textContent = entry.summary;
    decompileFacts.innerHTML = `<div><dt>Role</dt><dd>${entry.role}</dd></div><div><dt>Behavior</dt><dd>${entry.behavior}</dd></div><div><dt>Confidence</dt><dd>${entry.confidence}</dd></div>`;
    decompileCode.textContent = "Loading preserved Ghidra decompile…";
    copyDecompile.textContent = "Copy code";
    decompileModal.showModal();
    try {
      const response = await fetch(entry.file);
      if (!response.ok) throw new Error(`HTTP ${response.status}`);
      activeDecompile = await response.text();
      decompileCode.innerHTML = highlightCode(activeDecompile);
    } catch (error) {
      activeDecompile = "";
      decompileCode.textContent = "The decompiled text could not be loaded. Open this case study through its local web server and try again.";
    }
  }

  document.querySelectorAll("[data-function]").forEach((button) => button.addEventListener("click", () => openDecompile(button.dataset.function)));
  document.getElementById("decompileClose").addEventListener("click", () => decompileModal.close());
  decompileModal.addEventListener("click", (event) => { if (event.target === decompileModal) decompileModal.close(); });
  copyDecompile.addEventListener("click", async () => {
    if (!activeDecompile) return;
    await navigator.clipboard.writeText(activeDecompile);
    copyDecompile.textContent = "Copied";
    setTimeout(() => { copyDecompile.textContent = "Copy code"; }, 1400);
  });

  const sectorGrid = document.getElementById("sectorGrid");
  const sectorStatus = document.getElementById("sectorStatus");
  const wipeButton = document.getElementById("simulateWipe");
  for (let index = 0; index < 64; index += 1) {
    const cell = document.createElement("i");
    cell.style.setProperty("--v", (Math.random() * .65).toFixed(2));
    if (index >= 56 && index < 63) cell.classList.add("partition");
    if (index === 63) cell.classList.add("signature");
    sectorGrid.appendChild(cell);
  }
  wipeButton.addEventListener("click", () => {
    const cells = [...sectorGrid.children];
    if (wipeButton.dataset.state === "wiped") {
      cells.forEach((cell) => cell.classList.remove("zero"));
      wipeButton.dataset.state = "";
      wipeButton.textContent = "Simulate zero overwrite";
      sectorStatus.textContent = "PRESERVED";
      sectorStatus.style.color = "var(--green)";
      return;
    }
    wipeButton.disabled = true;
    sectorStatus.textContent = "WRITE IN PROGRESS";
    sectorStatus.style.color = "var(--amber)";
    cells.forEach((cell, index) => setTimeout(() => {
      cell.classList.add("zero");
      if (index === cells.length - 1) {
        wipeButton.disabled = false;
        wipeButton.dataset.state = "wiped";
        wipeButton.textContent = "Restore simulation";
        sectorStatus.textContent = "ZEROED / SIMULATED";
        sectorStatus.style.color = "var(--red)";
      }
    }, index * 22));
  });

  const bootCopy = {
    manager: ["Boot managers", "Targets bootmgr and bootmgfw.efi paths across legacy and UEFI-oriented locations."],
    loader: ["OS loaders", "Targets winload.exe, winresume.exe, winload.efi, and winresume.efi."],
    bcd: ["Boot configuration", "Enumerates drive letters C through Z for EFI and Boot BCD stores. EFI partitions often lack a normal drive letter, limiting this approach."],
    kernel: ["Kernel components", "Attempts deletion of ntoskrnl.exe, hal.dll, and kernel32.dll. API calls establish intent, not successful removal."],
    hives: ["Registry hives", "Targets SAM, SECURITY, SYSTEM, and SOFTWARE. These files are normally protected and commonly locked while Windows runs."],
  };
  const bootReadout = document.getElementById("bootReadout");
  const bootNodes = [...document.querySelectorAll("[data-boot]")];
  bootNodes.forEach((button) => button.addEventListener("click", () => {
    const [title, copy] = bootCopy[button.dataset.boot];
    bootReadout.innerHTML = `<strong>${title}</strong><p>${copy}</p>`;
  }));
  document.getElementById("traceDeletion").addEventListener("click", (event) => {
    const traceButton = event.currentTarget;
    bootNodes.forEach((node) => node.classList.remove("is-targeted"));
    traceButton.disabled = true;
    traceButton.textContent = "TRACING ATTEMPTED DELETIONS";
    bootNodes.forEach((node, index) => setTimeout(() => {
      node.classList.add("is-targeted");
      if (index === bootNodes.length - 1) {
        traceButton.disabled = false;
        traceButton.textContent = "Replay attempted deletion path";
      }
    }, index * 330));
  });

  document.addEventListener("click", (event) => {
    const trigger = event.target.closest("[data-image]");
    if (!trigger) return;
    lightboxImage.src = trigger.dataset.image;
    lightboxImage.alt = trigger.dataset.caption || "Ghidra evidence";
    lightboxCaption.textContent = trigger.dataset.caption || "Ghidra evidence";
    lightbox.showModal();
  });

  document.getElementById("lightboxClose").addEventListener("click", () => lightbox.close());
  lightbox.addEventListener("click", (event) => {
    if (event.target === lightbox) lightbox.close();
  });

  if (window.gsap && window.ScrollTrigger && !matchMedia("(prefers-reduced-motion: reduce)").matches) {
    gsap.registerPlugin(ScrollTrigger);

    gsap.utils.toArray(".chapter:not(.hero)").forEach((chapter, chapterIndex) => {
      const inner = chapter.querySelector(".chapter__inner, .closing__content");
      if (!inner) return;
      const leadTargets = [
        chapter.querySelector(".section-index"),
        chapter.querySelector(".question"),
        chapter.querySelector(".answer-strip"),
        chapter.querySelector("h2"),
      ].filter(Boolean);
      const detailTargets = [...inner.children].filter((element) => !leadTargets.includes(element));
      const direction = chapterIndex % 2 === 0 ? -38 : 38;
      const timeline = gsap.timeline({
        scrollTrigger: { trigger: chapter, start: "top 76%", once: true },
      });
      timeline
        .from(leadTargets, {
          opacity: 0,
          x: direction,
          duration: .58,
          stagger: .085,
          ease: "power3.out",
        })
        .from(detailTargets, {
          opacity: 0,
          y: 34,
          duration: .64,
          stagger: .065,
          ease: "power2.out",
        }, "-=.32");
    });

    gsap.from(".persistence-map .persist-node", {
      opacity: 0,
      y: 28,
      scale: .92,
      duration: .55,
      stagger: .12,
      ease: "back.out(1.5)",
      scrollTrigger: {
        trigger: "#persistenceMap",
        start: "top 78%",
        once: true,
        onEnter: () => setTimeout(replayPersistence, 420),
      },
    });

    gsap.from(".architecture .arch-node, .architecture .worker", {
      opacity: 0,
      scale: .88,
      y: 24,
      duration: .52,
      stagger: .07,
      ease: "back.out(1.4)",
      scrollTrigger: { trigger: ".architecture", start: "top 76%", once: true },
    });
    gsap.from(".architecture .arch-line", {
      scaleY: 0,
      transformOrigin: "top",
      duration: .72,
      stagger: .1,
      ease: "power2.inOut",
      scrollTrigger: { trigger: ".architecture", start: "top 76%", once: true },
    });

    gsap.from(".xref-meter b", {
      scaleX: 0,
      transformOrigin: "left",
      duration: 1.15,
      ease: "power3.out",
      scrollTrigger: { trigger: ".xref-meter", start: "top 82%", once: true },
    });

    document.querySelectorAll(".schedule").forEach((schedule) => {
      ScrollTrigger.create({
        trigger: schedule,
        start: "top 82%",
        once: true,
        onEnter: () => schedule.classList.add("is-animated"),
      });
    });

    gsap.from(".sector-grid i", {
      opacity: 0,
      scale: .35,
      duration: .32,
      stagger: { each: .012, from: "random" },
      ease: "power2.out",
      scrollTrigger: { trigger: ".sector-grid", start: "top 82%", once: true },
    });

    gsap.from(".case-closed", {
      opacity: 0,
      scale: 1.35,
      rotate: -8,
      duration: .6,
      ease: "back.out(1.7)",
      scrollTrigger: { trigger: ".case-closed", start: "top 82%", once: true },
    });
  }
})();
