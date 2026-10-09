undefined8 FUN_14000e160(void)

{
  int iVar1;
  int iVar2;
  DWORD DVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  HWND pHVar7;
  LRESULT LVar8;
  uint uVar9;
  
  pHVar7 = FindWindowA("Progman",(LPCSTR)0x0);
  if (pHVar7 == (HWND)0x0) {
    pHVar7 = FindWindowA("WorkerW",(LPCSTR)0x0);
  }
  pHVar7 = FindWindowExA(pHVar7,(HWND)0x0,"SHELLDLL_DefView",(LPCSTR)0x0);
  if (pHVar7 == (HWND)0x0) {
    return 0;
  }
  pHVar7 = FindWindowExA(pHVar7,(HWND)0x0,"SysListView32",(LPCSTR)0x0);
  if (pHVar7 != (HWND)0x0) {
    iVar1 = GetSystemMetrics(0);
    iVar2 = GetSystemMetrics(1);
    DVar3 = GetTickCount();
    FUN_14002c350(DVar3);
    uVar9 = 0;
    do {
      LVar8 = SendMessageA(pHVar7,0x1004,0,0);
      if (0 < (int)LVar8) {
        iVar4 = FUN_14002c324();
        iVar5 = FUN_14002c324();
        iVar6 = FUN_14002c324();
        SendMessageA(pHVar7,0x100f,(longlong)(iVar4 % (int)LVar8),
                     ((longlong)iVar6 % (longlong)(iVar2 + -100) & 0xffffU) << 0x10 |
                     (longlong)iVar5 % (longlong)(iVar1 + -100) & 0xffffU);
        InvalidateRect(pHVar7,(RECT *)0x0,1);
        UpdateWindow(pHVar7);
      }
      if (uVar9 < 2) {
        Sleep(800);
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < 3);
  }
  return 0;
}
