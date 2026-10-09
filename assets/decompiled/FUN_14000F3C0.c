undefined8 FUN_14000f3c0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_1400269b0(0x10);
  *(code **)(puVar1 + 2) = FUN_14000ecf0;
  *puVar1 = 0;
  CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_14000f370,puVar1,0,(LPDWORD)0x0);
  puVar1 = (undefined4 *)FUN_1400269b0(0x10);
  *(code **)(puVar1 + 2) = FUN_14000e160;
  *puVar1 = 2000;
  CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_14000f370,puVar1,0,(LPDWORD)0x0);
  puVar1 = (undefined4 *)FUN_1400269b0(0x10);
  *(code **)(puVar1 + 2) = FUN_14000f9a0;
  *puVar1 = 4000;
  CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_14000f370,puVar1,0,(LPDWORD)0x0);
  puVar1 = (undefined4 *)FUN_1400269b0(0x10);
  *(code **)(puVar1 + 2) = FUN_140011d30;
  *puVar1 = 6000;
  CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_14000f370,puVar1,0,(LPDWORD)0x0);
  return 0;
}
