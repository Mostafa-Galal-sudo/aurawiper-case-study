/* WARNING: Removing unreachable block (ram,0x00014000fd88) */
/* WARNING: Removing unreachable block (ram,0x00014000fd90) */
/* WARNING: Removing unreachable block (ram,0x00014000fdab) */
/* WARNING: Removing unreachable block (ram,0x00014000fdd9) */
/* WARNING: Removing unreachable block (ram,0x00014000fe05) */
/* WARNING: Removing unreachable block (ram,0x00014000fe10) */

undefined8 FUN_14000fce0(void)

{
  HRESULT HVar1;
  int iVar2;
  longlong *local_res20;
  longlong *local_20 [3];
  
  HVar1 = CoInitializeEx((LPVOID)0x0,0);
  if (-1 < HVar1) {
    do {
      local_20[0] = (longlong *)0x0;
      HVar1 = CoCreateInstance((IID *)&DAT_14005df20,(LPUNKNOWN)0x0,0x17,(IID *)&DAT_14005e118,
                               local_20);
      if (-1 < HVar1) {
        local_res20 = (longlong *)0x0;
        iVar2 = (**(code **)(*local_20[0] + 0x18))(local_20[0],0,1,&local_res20);
        if (-1 < iVar2) {
          (**(code **)(*local_res20 + 0x18))();
          (**(code **)(*local_res20 + 0x10))();
        }
        (**(code **)(*local_20[0] + 0x10))();
      }
      Sleep(200);
    } while( true );
  }
  return 1;
}
