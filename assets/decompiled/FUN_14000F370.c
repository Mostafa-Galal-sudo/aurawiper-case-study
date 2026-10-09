undefined8 FUN_14000f370(DWORD *param_1)

{
  Sleep(*param_1);
  CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,*(LPTHREAD_START_ROUTINE *)(param_1 + 2),(LPVOID)0x0,0,
               (LPDWORD)0x0);
  FUN_140026c34(param_1,0x10);
  return 0;
}
