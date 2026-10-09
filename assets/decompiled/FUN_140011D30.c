void FUN_140011d30(void)

{
  int iVar1;
  int iVar2;
  DWORD DVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = GetSystemMetrics(0);
  iVar2 = GetSystemMetrics(1);
  DVar3 = GetTickCount();
  FUN_14002c350(DVar3);
  do {
    iVar4 = FUN_14002c324();
    iVar5 = FUN_14002c324();
    SetCursorPos(iVar5 % iVar1,iVar4 % iVar2);
    Sleep(0x78);
  } while( true );
}
