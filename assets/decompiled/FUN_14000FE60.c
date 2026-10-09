undefined8 FUN_14000fe60(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014000fe79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = CallNextHookEx(DAT_14006ab80,param_1,param_2,param_3);
  return uVar1;
}
