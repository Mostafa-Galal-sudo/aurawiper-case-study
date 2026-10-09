undefined8 FUN_14000f9a0(void)

{
  int iVar1;
  int iVar2;
  DWORD DVar3;
  int iVar4;
  int iVar5;
  int *lpParameter;
  HWND pHVar6;
  int iVar7;
  
  CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_14000fbc0,(LPVOID)0x0,0,(LPDWORD)0x0);
  iVar1 = GetSystemMetrics(0);
  iVar2 = GetSystemMetrics(1);
  DVar3 = GetTickCount();
  FUN_14002c350(DVar3);
  iVar7 = 0;
  do {
    if (DAT_14006aba6 != '\0') break;
    iVar4 = FUN_14002c324();
    iVar5 = FUN_14002c324();
    lpParameter = (int *)FUN_1400269b0(8);
    *lpParameter = iVar4 % iVar1;
    lpParameter[1] = iVar5 % iVar2;
    CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_14000fc00,lpParameter,0,(LPDWORD)0x0);
    Sleep(400);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0xf);
  while (DAT_14006aba6 == '\0') {
    pHVar6 = FindWindowExA((HWND)0x0,(HWND)0x0,"#32770",(LPCSTR)0x0);
    for (iVar7 = 0; (pHVar6 != (HWND)0x0 && (iVar7 < 0x32)); iVar7 = iVar7 + 1) {
      iVar4 = FUN_14002c324();
      iVar5 = FUN_14002c324();
      SetWindowPos(pHVar6,(HWND)&DAT_ffffffffffffffff,iVar4 % (iVar1 + -200),iVar5 % (iVar2 + -100),
                   0,0,0x11);
      pHVar6 = FindWindowExA((HWND)0x0,pHVar6,"#32770",(LPCSTR)0x0);
    }
    Sleep(0x96);
  }
  Sleep(500);
  iVar7 = 0x32;
  do {
    pHVar6 = FindWindowA("#32770",(LPCSTR)0x0);
    while (pHVar6 != (HWND)0x0) {
      PostMessageA(pHVar6,0x10,0,0);
      pHVar6 = FindWindowA("#32770",(LPCSTR)0x0);
    }
    Sleep(0x32);
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  return 0;
}
