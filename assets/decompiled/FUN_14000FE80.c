undefined8 FUN_14000fe80(void)

{
  int iVar1;
  tagMSG local_38;
  
  DAT_14006ab80 = SetWindowsHookExW(0xd,FUN_14000fe60,(HINSTANCE)0x0,0);
  if (DAT_14006ab80 != (HHOOK)0x0) {
    iVar1 = GetMessageW(&local_38,(HWND)0x0,0,0);
    while (iVar1 != 0) {
      TranslateMessage(&local_38);
      DispatchMessageW(&local_38);
      iVar1 = GetMessageW(&local_38,(HWND)0x0,0,0);
    }
    UnhookWindowsHookEx(DAT_14006ab80);
    return 0;
  }
  return 1;
}
