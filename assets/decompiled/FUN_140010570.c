/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140010570(LPCSTR param_1)

{
  int iVar1;
  undefined1 *hObject;
  HANDLE hProcess;
  undefined1 auStackY_498 [32];
  undefined4 local_468;
  undefined1 local_464 [4];
  DWORD local_460;
  undefined1 local_43c [532];
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_140068100 ^ (ulonglong)auStackY_498;
  FUN_140049100(local_228,0,0x208);
  MultiByteToWideChar(0,0,param_1,-1,local_228,0x104);
  hObject = (undefined1 *)CreateToolhelp32Snapshot(2,0);
  if (hObject != &DAT_ffffffffffffffff) {
    local_468 = 0x238;
    FUN_140049100(local_464,0,0x234);
    iVar1 = Process32FirstW(hObject,&local_468);
    while (iVar1 != 0) {
      iVar1 = FUN_14002c590(local_43c,local_228);
      if ((iVar1 == 0) && (hProcess = OpenProcess(1,0,local_460), hProcess != (HANDLE)0x0)) {
        TerminateProcess(hProcess,0);
        CloseHandle(hProcess);
      }
      iVar1 = Process32NextW(hObject,&local_468);
    }
    CloseHandle(hObject);
  }
  return;
}
