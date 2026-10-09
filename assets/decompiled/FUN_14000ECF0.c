
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000ecf0(void)

{
  double dVar1;
  double dVar2;
  int iVar3;
  DWORD DVar4;
  int iVar5;
  int iVar6;
  HMODULE hInstance;
  HDC pHVar7;
  HFONT h;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  bool bVar11;
  double dVar12;
  tagSIZE local_res10;
  undefined8 local_res18 [2];
  WNDCLASSA local_128 [3];
  
  uVar9 = 0;
  if (DAT_14006abf0 == (HWND)0x0) {
    local_128[0].style = 0;
    local_128[0]._4_4_ = 0;
    local_128[0].cbClsExtra = 0;
    local_128[0].cbWndExtra = 0;
    local_128[0].hInstance = (HINSTANCE)0x0;
    local_128[0].hIcon = (HICON)0x0;
    local_128[0].hCursor = (HCURSOR)0x0;
    local_128[0].hbrBackground = (HBRUSH)0x0;
    local_128[0].lpszMenuName = (LPCSTR)0x0;
    local_128[0].lpszClassName = (LPCSTR)0x0;
    local_128[0].lpfnWndProc = (WNDPROC)&LAB_14000e4c0;
    local_128[0].hInstance = GetModuleHandleW((LPCWSTR)0x0);
    local_128[0].lpszClassName = "SFVerifFxOverlay";
    RegisterClassA(local_128);
    DAT_14006abf8 = GetSystemMetrics(0);
    DAT_14006abb4 = GetSystemMetrics(1);
    hInstance = GetModuleHandleW((LPCWSTR)0x0);
    DAT_14006abf0 =
         CreateWindowExA(0x88,"SFVerifFxOverlay","",0x90000000,0,0,DAT_14006abf8,DAT_14006abb4,
                         (HWND)0x0,(HMENU)0x0,hInstance,(LPVOID)0x0);
    ShowWindow(DAT_14006abf0,5);
    UpdateWindow(DAT_14006abf0);
    pHVar7 = GetDC((HWND)0x0);
    DAT_14006abc0 = GetDC(DAT_14006abf0);
    DAT_14006aba8 = CreateCompatibleDC(pHVar7);
    _DAT_14006ab98 = CreateCompatibleBitmap(pHVar7,DAT_14006abf8,DAT_14006abb4);
    SelectObject(DAT_14006aba8,_DAT_14006ab98);
    ReleaseDC((HWND)0x0,pHVar7);
  }
  FUN_14000e4e0();
  FUN_14000e2d0();
  FUN_14000e410();
  h = CreateFontA(0x78,0,0,0,700,0,0,0,1,0,0,0,0,"Arial");
  local_res18[0] = 0;
  uVar8 = uVar9;
  do {
    iVar3 = PeekMessageA((LPMSG)local_128,(HWND)0x0,0,0,1);
    while ((iVar3 != 0 && ((int)local_128[0].lpfnWndProc != 0x12))) {
      TranslateMessage((MSG *)local_128);
      DispatchMessageA((MSG *)local_128);
      iVar3 = PeekMessageA((LPMSG)local_128,(HWND)0x0,0,0,1);
    }
    LOCK();
    bVar11 = DAT_14006abb0 == 0;
    if (bVar11) {
      DAT_14006abb0 = 1;
    }
    UNLOCK();
    if (bVar11) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14006abc8);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14006abc8);
    DVar4 = GetTickCount();
    if ((2999 < DVar4 - _DAT_14006aba0) &&
       (_DAT_14006aba0 = DVar4, pHVar7 = GetDC((HWND)0x0), pHVar7 != (HDC)0x0)) {
      BitBlt(DAT_14006aba8,0,0,DAT_14006abf8,DAT_14006abb4,pHVar7,0,0,0xcc0020);
      ReleaseDC((HWND)0x0,pHVar7);
    }
    FUN_14000e650(local_res18);
    iVar3 = (int)uVar8;
    if (iVar3 + (iVar3 / 3 + (iVar3 >> 0x1f) +
                (int)(((longlong)iVar3 / 3 + ((longlong)iVar3 >> 0x3f) & 0xffffffffU) >> 0x1f)) * -3
        == 1) {
      FUN_14000e9a0((int)local_res18[0]);
    }
    pHVar7 = DAT_14006aba8;
    FUN_14000e2d0();
    FUN_14000e410();
    if ((DAT_14006acd0 != (HDC)0x0) && (uVar8 = uVar9, DAT_14006abb8 != 0)) {
      do {
        BitBlt(pHVar7,(&DAT_14006ac00)[uVar8 * 2],(&DAT_14006ac04)[uVar8 * 2],0x96,0x96,
               DAT_14006acd0,0,0,0xcc0020);
        uVar8 = uVar8 + 1;
      } while (uVar8 != 0x19);
    }
    pHVar7 = DAT_14006aba8;
    SelectObject(DAT_14006aba8,h);
    SetBkMode(pHVar7,1);
    local_res10.cx = 0;
    local_res10.cy = 0;
    GetTextExtentPoint32A(pHVar7,".gg/OQTF",8,&local_res10);
    DAT_14006ad00 = DAT_14006ad00 + 0.15;
    DAT_14006acd8 = DAT_14006acd8 + 0.1;
    uVar8 = uVar9;
    do {
      dVar12 = DAT_14006ad00;
      dVar2 = DAT_14006acd8;
      iVar10 = (int)uVar8;
      iVar5 = (DAT_14006abf8 - local_res10.cx) / 2;
      iVar6 = (DAT_14006abb4 - local_res10.cy) / 2;
      dVar1 = (double)FUN_140047df0(SUB84((double)iVar10 * 1.3 + DAT_14006acd8,0));
      iVar5 = (int)(dVar1 * (double)iVar5) + iVar5;
      dVar1 = (double)FUN_140047870(SUB84((double)iVar10 * 1.1 + dVar2 * 0.7,0));
      iVar6 = iVar6 + (int)(dVar1 * (double)iVar6);
      dVar12 = (double)(iVar10 * 300 + 100) * 0.035 + dVar12;
      SetTextColor(pHVar7,0);
      TextOutA(pHVar7,iVar5 + 2,iVar6 + 2,".gg/OQTF",8);
      dVar1 = (double)FUN_140047df0(SUB84(dVar12 + 2.094395102,0));
      dVar2 = (double)FUN_140047df0(SUB84(dVar12 + 4.188790205,0));
      dVar12 = (double)FUN_140047df0(SUB84(dVar12,0));
      SetTextColor(pHVar7,(int)(dVar12 * 127.0 + 128.0) & 0xffU |
                          ((int)(dVar1 * 127.0 + 128.0) & 0xffU) << 8 |
                          ((int)(dVar2 * 127.0 + 128.0) & 0xffU) << 0x10);
      TextOutA(pHVar7,iVar5,iVar6,".gg/OQTF",8);
      uVar8 = (ulonglong)(iVar10 + 1U);
    } while ((int)(iVar10 + 1U) < 0xf);
    uVar8 = (ulonglong)(iVar3 + 1);
    if (((DAT_14006abf0 != (HWND)0x0) && (DAT_14006abc0 != (HDC)0x0)) && (DAT_14006aba8 != (HDC)0x0)
       ) {
      BitBlt(DAT_14006abc0,0,0,DAT_14006abf8,DAT_14006abb4,DAT_14006aba8,0,0,0xcc0020);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14006abc8);
    Sleep(300);
  } while( true );
}

