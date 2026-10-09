undefined8 FUN_14000fc00(undefined4 *param_1)

{
  longlong lVar1;
  DWORD dwThreadId;
  HHOOK hhk;
  uint uVar2;
  
  lVar1 = *(longlong *)ThreadLocalStoragePointer;
  *(undefined4 *)(lVar1 + 4) = *param_1;
  *(undefined4 *)(lVar1 + 8) = param_1[1];
  dwThreadId = GetCurrentThreadId();
  hhk = SetWindowsHookExW(5,FUN_14000e110,(HINSTANCE)0x0,dwThreadId);
  uVar2 = DAT_14006ad10 & 0x80000003;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
  }
  MessageBoxA((HWND)0x0,
              (&PTR_DAT_14005dca8)
              [(int)(DAT_14006ad10 +
                    ((int)DAT_14006ad10 / 6 + ((int)DAT_14006ad10 >> 0x1f) +
                    (int)(((longlong)(int)DAT_14006ad10 / 6 + ((longlong)(int)DAT_14006ad10 >> 0x3f)
                          & 0xffffffffU) >> 0x1f)) * -6)],(&PTR_DAT_14005e238)[(int)uVar2],0x1030);
  DAT_14006ad10 = DAT_14006ad10 + 1;
  UnhookWindowsHookEx(hhk);
  FUN_140026c34(param_1,8);
  return 0;
}
