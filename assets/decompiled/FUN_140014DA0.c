/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140014da0(void)

{
  code *pcVar1;
  undefined8 ****ppppuVar2;
  undefined1 *puVar3;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  undefined8 ***local_38 [2];
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  puVar3 = auStack_58;
  local_18 = DAT_140068100 ^ (ulonglong)auStack_58;
  FUN_14000b290(local_38);
  if (local_28 != 0) {
    ppppuVar2 = local_38;
    if (0xf < local_20) {
      ppppuVar2 = (undefined8 ****)local_38[0];
    }
    SystemParametersInfoA(0x14,0,ppppuVar2,3);
  }
  if (0xf < local_20) {
    ppppuVar2 = (undefined8 ****)local_38[0];
    puVar3 = auStack_58;
    if ((0xfff < local_20 + 1) &&
       (ppppuVar2 = (undefined8 ****)local_38[0][-1], puVar3 = auStack_58,
       0x1f < (ulonglong)((longlong)local_38[0] + (-8 - (longlong)ppppuVar2)))) {
      pcVar1 = (code *)swi(0x29);
      ppppuVar2 = (undefined8 ****)(*pcVar1)(5);
      puVar3 = auStack_50;
    }
    *(undefined8 *)(puVar3 + -8) = 0x140014e2b;
    FUN_140026c34(ppppuVar2);
  }
  *(undefined8 *)(puVar3 + -8) = 0x140014e3a;
  return 0;
}
