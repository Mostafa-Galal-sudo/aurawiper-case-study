
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14000ff20(char *param_1,DWORD param_2)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined8 ****ppppuVar3;
  code *pcVar4;
  BOOL BVar5;
  size_t sVar6;
  ulonglong *puVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 *****pppppuVar12;
  char *pcVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined8 uStack_2e0;
  undefined1 auStack_2d8 [8];
  undefined1 auStack_2d0 [24];
  DWORD local_2b8 [4];
  longlong local_2a8 [7];
  uint local_270 [2];
  undefined1 *local_268 [18];
  undefined8 ****local_1d8;
  longlong lStack_1d0;
  undefined1 *local_1c8;
  ulonglong uStack_1c0;
  ulonglong local_1b8;
  ulonglong uStack_1b0;
  ulonglong local_1a8;
  ulonglong uStack_1a0;
  ulonglong local_198;
  ulonglong uStack_190;
  ulonglong local_188;
  ulonglong uStack_180;
  ulonglong local_178 [4];
  CHAR local_158 [272];
  ulonglong local_48;
  
  pppppuVar12 = &local_1d8;
  puVar17 = auStack_2d8;
  local_48 = DAT_140068100 ^ (ulonglong)auStack_2d8;
  puVar18 = (undefined1 *)0x0;
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    uVar10 = 0xffffffff;
    goto LAB_140010524;
  }
  FUN_140049100(local_158,0,0x104);
  GetSystemDirectoryA(local_158,0x104);
  local_178[1] = 0;
  local_178[2] = 1;
  local_178[3] = 0xf;
  local_178[0] = 0x22;
  sVar6 = strlen(local_158);
  puVar7 = (ulonglong *)FUN_1400183c0(local_178,local_158,sVar6);
  local_198 = *puVar7;
  uStack_190 = puVar7[1];
  local_188 = puVar7[2];
  uStack_180 = puVar7[3];
  puVar7[2] = 0;
  puVar7[3] = 0xf;
  *(undefined1 *)puVar7 = 0;
  puVar7 = (ulonglong *)FUN_1400183c0(&local_198,"\\cmd.exe\" /q /c ",0x10);
  local_1b8 = *puVar7;
  uStack_1b0 = puVar7[1];
  local_1a8 = puVar7[2];
  uStack_1a0 = puVar7[3];
  puVar7[2] = 0;
  puVar7[3] = 0xf;
  *(undefined1 *)puVar7 = 0;
  sVar6 = strlen(param_1);
  plVar8 = (longlong *)FUN_1400183c0(&local_1b8,param_1,sVar6);
  local_1d8 = (undefined8 ****)*plVar8;
  lStack_1d0 = plVar8[1];
  local_1c8 = (undefined1 *)plVar8[2];
  uStack_1c0 = plVar8[3];
  plVar8[2] = 0;
  plVar8[3] = 0xf;
  *(undefined1 *)plVar8 = 0;
  puVar17 = auStack_2d8;
  if (0xf < uStack_1a0) {
    uVar10 = local_1b8;
    puVar17 = auStack_2d8;
    if ((0xfff < uStack_1a0 + 1) &&
       (uVar10 = *(ulonglong *)(local_1b8 - 8), puVar17 = auStack_2d8,
       0x1f < (local_1b8 - uVar10) - 8)) {
      pcVar4 = (code *)swi(0x29);
      uVar10 = (*pcVar4)(5);
      puVar17 = auStack_2d0;
    }
    *(undefined8 *)(puVar17 + -8) = 0x1400100c9;
    FUN_140026c34(uVar10);
  }
  local_1a8 = 0;
  uStack_1a0 = 0xf;
  local_1b8 = local_1b8 & 0xffffffffffffff00;
  if (0xf < uStack_180) {
    uVar10 = local_198;
    if ((0xfff < uStack_180 + 1) &&
       (uVar10 = *(ulonglong *)(local_198 - 8), 0x1f < (local_198 - uVar10) - 8)) {
      pcVar4 = (code *)swi(0x29);
      uVar10 = (*pcVar4)(5);
      puVar17 = puVar17 + 8;
    }
    *(undefined8 *)(puVar17 + -8) = 0x140010119;
    FUN_140026c34(uVar10);
  }
  local_188 = 0;
  uStack_180 = 0xf;
  local_198 = local_198 & 0xffffffffffffff00;
  if (local_178[3] < 0x10) {
LAB_140010166:
    puVar2 = local_1c8;
    local_178[2] = 0;
    local_178[3] = 0xf;
    local_178[0] = local_178[0] & 0xffffffffffffff00;
    if (0xf < uStack_1c0) {
      pppppuVar12 = (undefined8 *****)local_1d8;
    }
    *(undefined8 *)(puVar17 + 0x50) = 0;
    *(undefined8 *)(puVar17 + 0x58) = 0;
    *(undefined8 *)(puVar17 + 0x60) = 0;
    param_1 = (char *)0x7fffffffffffffff;
    if (local_1c8 == (undefined1 *)0x0) {
      puVar16 = *(undefined1 **)(puVar17 + 0x58);
      puVar14 = puVar18;
    }
    else {
      if ((undefined1 *)0x7fffffffffffffff < local_1c8) {
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar17 + -8) = &UNK_14001055f;
        FUN_140008650();
      }
      if (local_1c8 < (undefined1 *)0x1000) {
        *(undefined8 *)(puVar17 + -8) = 0x1400101fc;
        uVar10 = FUN_1400269b0(local_1c8);
      }
      else {
        if (local_1c8 + 0x27 <= local_1c8) {
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar17 + -8) = &UNK_140010565;
          FUN_140007bc0();
        }
        *(undefined8 *)(puVar17 + -8) = 0x1400101da;
        lVar9 = FUN_1400269b0();
        if (lVar9 == 0) goto LAB_1400104b7;
        uVar10 = lVar9 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar10 - 8) = lVar9;
      }
      *(ulonglong *)(puVar17 + 0x50) = uVar10;
      *(ulonglong *)(puVar17 + 0x58) = uVar10;
      puVar16 = puVar2 + uVar10;
      *(undefined1 **)(puVar17 + 0x60) = puVar16;
      *(undefined8 *)(puVar17 + -8) = 0x14001021d;
      FUN_140048960(uVar10,pppppuVar12,puVar2);
      *(undefined1 **)(puVar17 + 0x58) = puVar16;
      puVar14 = *(undefined1 **)(puVar17 + 0x60);
    }
    if (puVar16 == puVar14) {
      lVar9 = (longlong)puVar16 - *(longlong *)(puVar17 + 0x50);
      if (lVar9 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar17 + -8) = 0x140010553;
        FUN_140008650();
      }
      pcVar1 = (char *)(lVar9 + 1);
      uVar10 = (longlong)puVar14 - *(longlong *)(puVar17 + 0x50);
      if (0x7fffffffffffffff - (uVar10 >> 1) < uVar10) {
        pcVar13 = (char *)0x8000000000000026;
LAB_140010276:
        *(undefined8 *)(puVar17 + -8) = 0x14001027b;
        lVar11 = FUN_1400269b0(pcVar13);
        puVar18 = puVar2;
        if (lVar11 != 0) {
          puVar18 = (undefined1 *)(lVar11 + 0x27U & 0xffffffffffffffe0);
          *(longlong *)(puVar18 + -8) = lVar11;
          goto LAB_1400102cd;
        }
LAB_14001033d:
        pcVar4 = (code *)swi(0x29);
        lVar9 = (*pcVar4)(5);
        puVar17 = puVar17 + 8;
LAB_140010347:
        *(undefined8 *)(puVar17 + -8) = 0x14001034c;
        FUN_140026c34(lVar9);
      }
      else {
        pcVar13 = (char *)((uVar10 >> 1) + uVar10);
        param_1 = pcVar1;
        if (pcVar1 <= pcVar13) {
          param_1 = pcVar13;
        }
        if (param_1 != (char *)0x0) {
          if ((char *)0xfff < param_1) {
            pcVar13 = param_1 + 0x27;
            if (pcVar13 <= param_1) {
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)(puVar17 + -8) = 0x140010559;
              FUN_140007bc0();
            }
            goto LAB_140010276;
          }
          *(undefined8 *)(puVar17 + -8) = 0x1400102ca;
          puVar18 = (undefined1 *)FUN_1400269b0(param_1);
        }
LAB_1400102cd:
        puVar18[lVar9] = 0;
        puVar2 = *(undefined1 **)(puVar17 + 0x50);
        if (puVar16 == *(undefined1 **)(puVar17 + 0x58)) {
          lVar11 = (longlong)*(undefined1 **)(puVar17 + 0x58) - (longlong)puVar2;
          puVar14 = puVar18;
          puVar16 = puVar2;
        }
        else {
          *(undefined8 *)(puVar17 + -8) = 0x1400102f4;
          FUN_140048960(puVar18,puVar2,(longlong)puVar16 - (longlong)puVar2);
          lVar11 = *(longlong *)(puVar17 + 0x58) - (longlong)puVar16;
          puVar14 = puVar18 + lVar9 + 1;
        }
        *(undefined8 *)(puVar17 + -8) = 0x14001030b;
        FUN_140048960(puVar14,puVar16,lVar11);
        lVar9 = *(longlong *)(puVar17 + 0x50);
        if (lVar9 != 0) {
          if ((0xfff < (ulonglong)(*(longlong *)(puVar17 + 0x60) - lVar9)) &&
             (lVar11 = lVar9 - *(longlong *)(lVar9 + -8), lVar9 = *(longlong *)(lVar9 + -8),
             0x1f < lVar11 - 8U)) goto LAB_14001033d;
          goto LAB_140010347;
        }
      }
      *(undefined1 **)(puVar17 + 0x50) = puVar18;
      *(undefined1 **)(puVar17 + 0x58) = puVar18 + (longlong)pcVar1;
      *(undefined1 **)(puVar17 + 0x60) = puVar18 + (longlong)param_1;
    }
    else {
      *puVar16 = 0;
      *(longlong *)(puVar17 + 0x58) = *(longlong *)(puVar17 + 0x58) + 1;
    }
    local_268[5] = (undefined1 *)0x0;
    local_268[6] = (undefined1 *)0x0;
    local_268[7] = (undefined1 *)0x0;
    local_268[8] = (undefined1 *)0x0;
    local_268[9] = (undefined1 *)0x0;
    local_268[10] = (undefined1 *)0x0;
    local_268[0xd] = (undefined1 *)0x0;
    local_268[0xe] = (undefined1 *)0x0;
    local_268[0xf] = (undefined1 *)0x0;
    local_268[0x10] = (undefined1 *)0x0;
    local_268[4] = (undefined1 *)0x68;
    local_268[0xb] = (undefined1 *)0x10100000000;
    local_268[0xc] = (undefined1 *)0x0;
    if (DAT_140068d60 == &DAT_ffffffffffffffff) {
      *(undefined8 *)(puVar17 + 0x30) = 0;
      *(undefined4 *)(puVar17 + 0x28) = 0;
      *(undefined4 *)(puVar17 + 0x20) = 3;
      *(undefined8 *)(puVar17 + -8) = 0x1400103d1;
      DAT_140068d60 =
           CreateFileA("NUL",0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,*(DWORD *)(puVar17 + 0x20),
                       *(DWORD *)(puVar17 + 0x28),*(HANDLE *)(puVar17 + 0x30));
      if (DAT_140068d60 != &DAT_ffffffffffffffff) goto LAB_1400103de;
    }
    else {
LAB_1400103de:
      local_268[0xe] = DAT_140068d60;
      local_268[0xf] = DAT_140068d60;
      local_268[0x10] = DAT_140068d60;
    }
    *(undefined8 *)(puVar17 + 0x70) = 0;
    *(undefined8 *)(puVar17 + 0x78) = 0;
    local_268[2] = (undefined1 *)0x0;
    *(undefined1 **)(puVar17 + 0x48) = puVar17 + 0x70;
    *(undefined1 ***)(puVar17 + 0x40) = local_268 + 4;
    *(undefined8 *)(puVar17 + 0x38) = 0;
    *(undefined8 *)(puVar17 + 0x30) = 0;
    *(undefined4 *)(puVar17 + 0x28) = 0x9000208;
    *(undefined4 *)(puVar17 + 0x20) = 1;
    *(undefined8 *)(puVar17 + -8) = 0x140010438;
    BVar5 = CreateProcessA((LPCSTR)0x0,*(LPSTR *)(puVar17 + 0x50),(LPSECURITY_ATTRIBUTES)0x0,
                           (LPSECURITY_ATTRIBUTES)0x0,*(BOOL *)(puVar17 + 0x20),
                           *(DWORD *)(puVar17 + 0x28),*(LPVOID *)(puVar17 + 0x30),
                           *(LPCSTR *)(puVar17 + 0x38),*(LPSTARTUPINFOA *)(puVar17 + 0x40),
                           *(LPPROCESS_INFORMATION *)(puVar17 + 0x48));
    if (BVar5 == 0) {
      param_1 = (char *)0xffffffff;
    }
    else {
      if (param_2 != 0) {
        *(undefined8 *)(puVar17 + -8) = 0x140010456;
        WaitForSingleObject(*(HANDLE *)(puVar17 + 0x70),param_2);
      }
      *(undefined4 *)(puVar17 + 0x68) = 0;
      *(undefined8 *)(puVar17 + -8) = 0x14001046b;
      GetExitCodeProcess(*(HANDLE *)(puVar17 + 0x70),(LPDWORD)(puVar17 + 0x68));
      *(undefined8 *)(puVar17 + -8) = 0x140010476;
      CloseHandle(*(HANDLE *)(puVar17 + 0x78));
      *(undefined8 *)(puVar17 + -8) = 0x140010481;
      CloseHandle(*(HANDLE *)(puVar17 + 0x70));
      param_1 = (char *)(ulonglong)*(uint *)(puVar17 + 0x68);
    }
    lVar9 = *(longlong *)(puVar17 + 0x50);
    if (lVar9 != 0) {
      if ((0xfff < (ulonglong)(*(longlong *)(puVar17 + 0x60) - lVar9)) &&
         (lVar11 = lVar9 - *(longlong *)(lVar9 + -8), lVar9 = *(longlong *)(lVar9 + -8),
         0x1f < lVar11 - 8U)) goto LAB_1400104b7;
      goto LAB_1400104c1;
    }
  }
  else {
    uVar15 = local_178[3] + 1;
    uVar10 = local_178[0];
    if (uVar15 < 0x1000) {
LAB_140010161:
      *(undefined8 *)(puVar17 + -8) = 0x140010166;
      FUN_140026c34(uVar10,uVar15);
      goto LAB_140010166;
    }
    if ((local_178[0] - *(ulonglong *)(local_178[0] - 8)) - 8 < 0x20) {
      uVar15 = local_178[3] + 0x28;
      uVar10 = *(ulonglong *)(local_178[0] - 8);
      goto LAB_140010161;
    }
LAB_1400104b7:
    pcVar4 = (code *)swi(0x29);
    lVar9 = (*pcVar4)(5);
    puVar17 = puVar17 + 8;
LAB_1400104c1:
    *(undefined8 *)(puVar17 + -8) = 0x1400104c6;
    FUN_140026c34(lVar9);
    *(undefined8 *)(puVar17 + 0x50) = 0;
    *(undefined8 *)(puVar17 + 0x58) = 0;
    *(undefined8 *)(puVar17 + 0x60) = 0;
  }
  if (0xf < uStack_1c0) {
    pppppuVar12 = (undefined8 *****)local_1d8;
    if (0xfff < uStack_1c0 + 1) {
      ppppuVar3 = (undefined8 ****)local_1d8[-1];
      if ((ulonglong)((longlong)local_1d8 + (-8 - (longlong)ppppuVar3)) < 0x20) {
        *(undefined8 *)(puVar17 + -8) = 0x140010508;
        FUN_140026c34(ppppuVar3,uStack_1c0 + 0x28);
        uVar10 = (ulonglong)param_1 & 0xffffffff;
        goto LAB_140010524;
      }
      pcVar4 = (code *)swi(0x29);
      pppppuVar12 = (undefined8 *****)(*pcVar4)(5);
      puVar17 = puVar17 + 8;
    }
    *(undefined8 *)(puVar17 + -8) = 0x14001051b;
    FUN_140026c34(pppppuVar12);
  }
  uVar10 = (ulonglong)param_1 & 0xffffffff;
LAB_140010524:
  *(undefined8 *)(puVar17 + -8) = 0x140010533;
  return uVar10;
}

