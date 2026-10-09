
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_14000b290(undefined8 *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  char cVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  HRSRC hResInfo;
  HGLOBAL hResData;
  size_t sVar10;
  undefined8 uVar11;
  int extraout_var;
  int extraout_var_00;
  int extraout_var_01;
  longlong lVar12;
  int extraout_var_02;
  int extraout_var_03;
  longlong lVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  char *pcVar18;
  undefined1 *puVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined8 uStack_390;
  undefined1 auStack_388 [8];
  undefined1 auStack_380 [24];
  int local_368 [6];
  LPVOID local_350 [3];
  longlong local_338 [21];
  undefined8 local_290 [18];
  undefined8 local_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  longlong local_1c0 [8];
  longlong local_180 [4];
  longlong local_160 [2];
  char local_14c [4];
  CHAR local_148 [272];
  ulonglong local_38;
  
  puVar17 = auStack_388;
  local_38 = DAT_140068100 ^ (ulonglong)auStack_388;
  local_368[4] = 0;
  local_350[1] = param_1;
  hResInfo = FindResourceA((HMODULE)0x0,&DAT_000000cc,"RCDATA");
  if (hResInfo == (HRSRC)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    puVar17 = auStack_388;
    goto LAB_14000bdf2;
  }
  hResData = LoadResource((HMODULE)0x0,hResInfo);
  if (hResData == (HGLOBAL)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    puVar17 = auStack_388;
    goto LAB_14000bdf2;
  }
  local_368[5] = SizeofResource((HMODULE)0x0,hResInfo);
  if (local_368[5] == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    puVar17 = auStack_388;
    goto LAB_14000bdf2;
  }
  local_350[0] = LockResource(hResData);
  if (local_350[0] == (LPVOID)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    goto LAB_14000bdf2;
  }
  GetTempPathA(0x104,local_148);
  pcVar18 = local_14c + 1;
  uVar16 = 0xcc;
  do {
    pcVar18 = pcVar18 + -1;
    uVar21 = uVar16 / 10;
    cVar6 = (char)uVar21;
    *pcVar18 = (char)uVar16 + cVar6 * -10 + '0';
    uVar16 = uVar21;
  } while ((int)uVar21 != 0);
  FUN_140017dd0(local_180,pcVar18,local_14c + 1);
  local_1c0[0] = 0;
  local_1c0[1] = 0;
  local_1c0[2] = 0;
  local_1c0[3] = 0;
  sVar10 = strlen(local_148);
  FUN_140017f00(local_1c0,local_148,sVar10);
  pcVar18 = (char *)FUN_1400183c0(local_1c0,&DAT_14005c01c,3);
  local_200._0_4_ = *(undefined4 *)pcVar18;
  local_200._4_4_ = *(undefined4 *)(pcVar18 + 4);
  uStack_1f8 = *(undefined4 *)(pcVar18 + 8);
  uStack_1f4 = *(undefined4 *)(pcVar18 + 0xc);
  local_1f0 = *(undefined4 *)(pcVar18 + 0x10);
  uStack_1ec = *(undefined4 *)(pcVar18 + 0x14);
  uStack_1e8 = *(undefined4 *)(pcVar18 + 0x18);
  uStack_1e4 = *(undefined4 *)(pcVar18 + 0x1c);
  pcVar18[0x10] = '\0';
  pcVar18[0x11] = '\0';
  pcVar18[0x12] = '\0';
  pcVar18[0x13] = '\0';
  pcVar18[0x14] = '\0';
  pcVar18[0x15] = '\0';
  pcVar18[0x16] = '\0';
  pcVar18[0x17] = '\0';
  pcVar18[0x18] = '\x0f';
  pcVar18[0x19] = '\0';
  pcVar18[0x1a] = '\0';
  pcVar18[0x1b] = '\0';
  pcVar18[0x1c] = '\0';
  pcVar18[0x1d] = '\0';
  pcVar18[0x1e] = '\0';
  pcVar18[0x1f] = '\0';
  *pcVar18 = cVar6;
  FUN_140018f30(local_1c0 + 4,local_1f0,&local_200,local_180);
  pcVar18 = (char *)FUN_1400183c0(local_1c0 + 4,&DAT_14005da28,4);
  local_1e0 = *(undefined8 *)pcVar18;
  uStack_1d8 = *(undefined8 *)(pcVar18 + 8);
  local_1d0 = *(undefined8 *)(pcVar18 + 0x10);
  uStack_1c8 = *(undefined8 *)(pcVar18 + 0x18);
  pcVar18[0x10] = '\0';
  pcVar18[0x11] = '\0';
  pcVar18[0x12] = '\0';
  pcVar18[0x13] = '\0';
  pcVar18[0x14] = '\0';
  pcVar18[0x15] = '\0';
  pcVar18[0x16] = '\0';
  pcVar18[0x17] = '\0';
  pcVar18[0x18] = '\x0f';
  pcVar18[0x19] = '\0';
  pcVar18[0x1a] = '\0';
  pcVar18[0x1b] = '\0';
  pcVar18[0x1c] = '\0';
  pcVar18[0x1d] = '\0';
  pcVar18[0x1e] = '\0';
  pcVar18[0x1f] = '\0';
  *pcVar18 = cVar6;
  puVar17 = auStack_388;
  if (0xf < (ulonglong)local_1c0[7]) {
    lVar12 = local_1c0[4];
    puVar17 = auStack_388;
    if ((0xfff < local_1c0[7] + 1U) &&
       (lVar12 = *(longlong *)(local_1c0[4] + -8), puVar17 = auStack_388,
       0x1f < (local_1c0[4] - lVar12) - 8U)) {
      pcVar2 = (code *)swi(0x29);
      lVar12 = (*pcVar2)(5);
      puVar17 = auStack_380;
    }
    *(undefined8 *)(puVar17 + -8) = 0x14000b52f;
    FUN_140026c34(lVar12);
  }
  *(undefined8 *)(puVar17 + 0x1f8) = 0;
  *(undefined8 *)(puVar17 + 0x200) = 0xf;
  puVar17[0x1e8] = 0;
  if (0xf < *(ulonglong *)(puVar17 + 0x1a0)) {
    lVar12 = *(longlong *)(puVar17 + 0x188);
    lVar13 = lVar12;
    if ((0xfff < *(ulonglong *)(puVar17 + 0x1a0) + 1) &&
       (lVar13 = *(longlong *)(lVar12 + -8), 0x1f < (lVar12 - lVar13) - 8U)) {
      pcVar2 = (code *)swi(0x29);
      lVar13 = (*pcVar2)(5);
      puVar17 = puVar17 + 8;
    }
    *(undefined8 *)(puVar17 + -8) = 0x14000b593;
    FUN_140026c34(lVar13);
  }
  if (0xf < *(ulonglong *)(puVar17 + 0x1e0)) {
    lVar12 = *(longlong *)(puVar17 + 0x1c8);
    lVar13 = lVar12;
    if ((0xfff < *(ulonglong *)(puVar17 + 0x1e0) + 1) &&
       (lVar13 = *(longlong *)(lVar12 + -8), 0x1f < (lVar12 - lVar13) - 8U)) {
      pcVar2 = (code *)swi(0x29);
      lVar13 = (*pcVar2)(5);
      puVar17 = puVar17 + 8;
    }
    *(undefined8 *)(puVar17 + -8) = 0x14000b5dc;
    FUN_140026c34(lVar13);
  }
  *(undefined8 *)(puVar17 + 0x1d8) = 0;
  *(undefined8 *)(puVar17 + 0x1e0) = 0xf;
  puVar17[0x1c8] = 0;
  if (0xf < *(ulonglong *)(puVar17 + 0x220)) {
    lVar12 = *(longlong *)(puVar17 + 0x208);
    lVar13 = lVar12;
    if ((0xfff < *(ulonglong *)(puVar17 + 0x220) + 1) &&
       (lVar13 = *(longlong *)(lVar12 + -8), 0x1f < (lVar12 - lVar13) - 8U)) {
      pcVar2 = (code *)swi(0x29);
      lVar13 = (*pcVar2)(5);
      puVar17 = puVar17 + 8;
    }
    *(undefined8 *)(puVar17 + -8) = 0x14000b640;
    FUN_140026c34(lVar13);
  }
  *(undefined1 **)(puVar17 + 0x228) = puVar17 + 0x188;
  uVar16 = *(ulonglong *)(puVar17 + 0x1b8);
  puVar14 = puVar17 + 0x1a8;
  if (0xf < *(ulonglong *)(puVar17 + 0x1c0)) {
    puVar14 = *(undefined1 **)(puVar17 + 0x1a8);
  }
  *(undefined8 *)(puVar17 + -8) = 0x14000b677;
  uVar7 = __std_fs_code_page();
  *(undefined8 *)(puVar17 + 0x188) = 0;
  *(undefined8 *)(puVar17 + 400) = 0;
  *(undefined8 *)(puVar17 + 0x198) = 0;
  uVar21 = 7;
  *(undefined8 *)(puVar17 + 0x1a0) = 7;
  *(undefined2 *)(puVar17 + 0x188) = 0;
  *(undefined4 *)(puVar17 + 0x30) = 0x4f8;
  if (uVar16 != 0) {
    if (0x7fffffff < uVar16) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar17 + -8) = 0x14000be24;
      FUN_140008c80();
    }
    *(undefined4 *)(puVar17 + 0x20) = 0;
    *(undefined8 *)(puVar17 + -8) = 0x14000b6d2;
    uVar11 = FUN_140023fbc(uVar7,puVar14,uVar16 & 0xffffffff,0);
    if ((int)((ulonglong)uVar11 >> 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar17 + -8) = 0x14000be29;
      FUN_140009000();
    }
    *(undefined8 *)(puVar17 + -8) = 0x14000b6f7;
    FUN_140016170(puVar17 + 0x188,(longlong)(int)uVar11,0);
    puVar19 = puVar17 + 0x188;
    if (7 < *(ulonglong *)(puVar17 + 0x1a0)) {
      puVar19 = *(undefined1 **)(puVar17 + 0x188);
    }
    *(int *)(puVar17 + 0x20) = (int)uVar11;
    *(undefined8 *)(puVar17 + -8) = 0x14000b722;
    FUN_140023fbc(uVar7,puVar14,uVar16 & 0xffffffff,puVar19);
    if (extraout_var != 0) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar17 + -8) = 0x14000be30;
      FUN_140009000(extraout_var);
    }
  }
  uVar20 = 0x3f8;
  *(undefined4 *)(puVar17 + 0x228) = 0;
  *(undefined ***)(puVar17 + 0x230) = &PTR_vftable_140068d78;
  *(undefined8 *)(puVar17 + -8) = 0x14000b75f;
  cVar6 = FUN_14000ad00(puVar17 + 0x188,puVar17 + 0x228);
  if (*(int *)(puVar17 + 0x228) != 0) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar17 + -8) = 0x14000be4d;
    FUN_14000a5e0("exists",puVar17 + 0x228,puVar17 + 0x188);
  }
  *(undefined8 *)(puVar17 + -8) = 0x14000b77d;
  FUN_140018e20(puVar17 + 0x188);
  if (cVar6 != '\0') {
    *(undefined1 **)(puVar17 + 0x228) = puVar17 + 0x188;
    uVar16 = *(ulonglong *)(puVar17 + 0x1b8);
    puVar14 = puVar17 + 0x1a8;
    if (0xf < *(ulonglong *)(puVar17 + 0x1c0)) {
      puVar14 = *(undefined1 **)(puVar17 + 0x1a8);
    }
    *(undefined8 *)(puVar17 + -8) = 0x14000b7bc;
    uVar7 = __std_fs_code_page();
    *(undefined8 *)(puVar17 + 0x188) = 0;
    *(undefined8 *)(puVar17 + 400) = 0;
    *(undefined8 *)(puVar17 + 0x198) = 0;
    uVar15 = 7;
    *(undefined8 *)(puVar17 + 0x1a0) = 7;
    *(undefined2 *)(puVar17 + 0x188) = 0;
    *(undefined4 *)(puVar17 + 0x30) = 0x23f8;
    if (uVar16 != 0) {
      if (0x7fffffff < uVar16) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar17 + -8) = 0x14000be53;
        FUN_140008c80();
      }
      *(undefined4 *)(puVar17 + 0x20) = 0;
      *(undefined8 *)(puVar17 + -8) = 0x14000b818;
      uVar11 = FUN_140023fbc(uVar7,puVar14,uVar16 & 0xffffffff,0);
      if ((int)((ulonglong)uVar11 >> 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar17 + -8) = 0x14000be58;
        FUN_140009000();
      }
      *(undefined8 *)(puVar17 + -8) = 0x14000b83d;
      FUN_140016170(puVar17 + 0x188,(longlong)(int)uVar11,0);
      puVar19 = puVar17 + 0x188;
      if (7 < *(ulonglong *)(puVar17 + 0x1a0)) {
        puVar19 = *(undefined1 **)(puVar17 + 0x188);
      }
      *(int *)(puVar17 + 0x20) = (int)uVar11;
      *(undefined8 *)(puVar17 + -8) = 0x14000b869;
      FUN_140023fbc(uVar7,puVar14,uVar16 & 0xffffffff,puVar19);
      if (extraout_var_00 != 0) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar17 + -8) = 0x14000be5f;
        FUN_140009000(extraout_var_00);
      }
      uVar15 = *(ulonglong *)(puVar17 + 0x1a0);
    }
    uVar20 = 0x1bf8;
    *(undefined4 *)(puVar17 + 0x30) = 0x1bf8;
    puVar14 = puVar17 + 0x188;
    if (7 < uVar15) {
      puVar14 = *(undefined1 **)(puVar17 + 0x188);
    }
    *(undefined8 *)(puVar17 + -8) = 0x14000b8a2;
    FUN_140024a04(puVar14);
    if (extraout_var_01 != 0) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar17 + -8) = 0x14000be76;
      FUN_14000a510("remove",extraout_var_01,puVar17 + 0x188);
    }
    *(undefined8 *)(puVar17 + -8) = 0x14000b8bb;
    FUN_140018e20(puVar17 + 0x188);
  }
  *(undefined8 *)(puVar17 + -8) = 0x14000b8e8;
  FUN_1400163d0(puVar17 + 0x50,puVar17 + 0x1a8,0x20);
  lVar12 = *(longlong *)(puVar17 + 0x50);
  if ((puVar17[(longlong)*(int *)(lVar12 + 4) + 0x60] & 6) == 0) {
    *(undefined8 *)(puVar17 + -8) = 0x14000b911;
    FUN_140017500(puVar17 + 0x50,*(undefined8 *)(puVar17 + 0x38),*(undefined4 *)(puVar17 + 0x34));
    *(undefined8 *)(puVar17 + -8) = 0x14000b91b;
    lVar12 = FUN_140019310(puVar17 + 0x58);
    if (lVar12 == 0) {
      lVar12 = (longlong)*(int *)(*(longlong *)(puVar17 + 0x50) + 4);
      uVar8 = 6;
      if (*(longlong *)(puVar17 + lVar12 + 0x98) != 0) {
        uVar8 = 2;
      }
      uVar1 = *(uint *)(puVar17 + lVar12 + 0x60);
      *(uint *)(puVar17 + lVar12 + 0x60) = uVar8 | uVar1 & 0x17;
      uVar8 = (uVar8 | uVar1 & 0x17) & *(uint *)(puVar17 + lVar12 + 100);
      if (uVar8 != 0) {
        if ((uVar8 & 4) == 0) {
          pcVar18 = "ios_base::failbit set";
          if ((uVar8 & 2) == 0) {
            pcVar18 = "ios_base::eofbit set";
          }
        }
        else {
          pcVar18 = "ios_base::badbit set";
        }
        *(undefined8 *)(puVar17 + -8) = 0x14000beaa;
        uVar11 = FUN_140008950(puVar17 + 0x228,1);
        *(undefined8 *)(puVar17 + -8) = 0x14000bebd;
        FUN_1400095f0(puVar17 + 0x160,pcVar18,uVar11);
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar17 + -8) = 0x14000bed1;
        FUN_1400285d0(puVar17 + 0x160,&DAT_1400666f8);
      }
    }
    *(undefined1 **)(puVar17 + 0x228) = puVar17 + 0x1c8;
    uVar16 = *(ulonglong *)(puVar17 + 0x1b8);
    puVar14 = puVar17 + 0x1a8;
    if (0xf < *(ulonglong *)(puVar17 + 0x1c0)) {
      puVar14 = *(undefined1 **)(puVar17 + 0x1a8);
    }
    *(undefined8 *)(puVar17 + -8) = 0x14000b98b;
    uVar7 = __std_fs_code_page();
    *(undefined4 *)(puVar17 + 0x38) = uVar7;
    *(undefined8 *)(puVar17 + 0x1c8) = 0;
    *(undefined8 *)(puVar17 + 0x1d0) = 0;
    *(undefined8 *)(puVar17 + 0x1d8) = 0;
    *(undefined8 *)(puVar17 + 0x1e0) = 7;
    *(undefined2 *)(puVar17 + 0x1c8) = 0;
    *(uint *)(puVar17 + 0x30) = uVar20 | 0x10000;
    if (uVar16 != 0) {
      if (0x7fffffff < uVar16) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar17 + -8) = 0x14000bed7;
        FUN_140008c80();
      }
      *(undefined4 *)(puVar17 + 0x20) = 0;
      *(undefined8 *)(puVar17 + -8) = 0x14000b9e2;
      uVar11 = FUN_140023fbc(uVar7,puVar14,uVar16 & 0xffffffff,0);
      if ((int)((ulonglong)uVar11 >> 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar17 + -8) = 0x14000bedc;
        FUN_140009000();
      }
      *(undefined8 *)(puVar17 + -8) = 0x14000ba07;
      FUN_140016170(puVar17 + 0x1c8,(longlong)(int)uVar11,0);
      puVar19 = puVar17 + 0x1c8;
      if (7 < *(ulonglong *)(puVar17 + 0x1e0)) {
        puVar19 = *(undefined1 **)(puVar17 + 0x1c8);
      }
      *(int *)(puVar17 + 0x20) = (int)uVar11;
      *(undefined8 *)(puVar17 + -8) = 0x14000ba34;
      FUN_140023fbc(*(undefined4 *)(puVar17 + 0x38),puVar14,uVar16 & 0xffffffff,puVar19);
      if (extraout_var_02 != 0) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar17 + -8) = 0x14000bee3;
        FUN_140009000(extraout_var_02);
      }
    }
    uVar8 = uVar20 | 0xc002;
    *(uint *)(puVar17 + 0x30) = uVar8;
    *(undefined4 *)(puVar17 + 0x228) = 0;
    *(undefined ***)(puVar17 + 0x230) = &PTR_vftable_140068d78;
    *(undefined8 *)(puVar17 + -8) = 0x14000ba80;
    cVar6 = FUN_14000ad00(puVar17 + 0x1c8,puVar17 + 0x228);
    if (*(int *)(puVar17 + 0x228) != 0) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar17 + -8) = 0x14000bf00;
      FUN_14000a5e0("exists",puVar17 + 0x228,puVar17 + 0x1c8);
    }
    if (cVar6 == '\0') {
LAB_14000bbeb:
      bVar5 = false;
    }
    else {
      *(undefined1 **)(puVar17 + 0x228) = puVar17 + 0x188;
      uVar16 = *(ulonglong *)(puVar17 + 0x1b8);
      puVar14 = puVar17 + 0x1a8;
      if (0xf < *(ulonglong *)(puVar17 + 0x1c0)) {
        puVar14 = *(undefined1 **)(puVar17 + 0x1a8);
      }
      *(undefined8 *)(puVar17 + -8) = 0x14000bacd;
      uVar7 = __std_fs_code_page();
      *(undefined4 *)(puVar17 + 0x38) = uVar7;
      *(undefined8 *)(puVar17 + 0x188) = 0;
      *(undefined8 *)(puVar17 + 400) = 0;
      *(undefined8 *)(puVar17 + 0x198) = 0;
      *(undefined8 *)(puVar17 + 0x1a0) = 7;
      *(undefined2 *)(puVar17 + 0x188) = 0;
      *(uint *)(puVar17 + 0x30) = uVar20 | 0x8c002;
      if (uVar16 != 0) {
        if (0x7fffffff < uVar16) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(puVar17 + -8) = 0x14000bf06;
          FUN_140008c80();
        }
        *(undefined4 *)(puVar17 + 0x20) = 0;
        *(undefined8 *)(puVar17 + -8) = 0x14000bb28;
        uVar11 = FUN_140023fbc(uVar7,puVar14,uVar16 & 0xffffffff,0);
        if ((int)((ulonglong)uVar11 >> 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(puVar17 + -8) = 0x14000bf0b;
          FUN_140009000();
        }
        *(undefined8 *)(puVar17 + -8) = 0x14000bb4d;
        FUN_140016170(puVar17 + 0x188,(longlong)(int)uVar11,0);
        puVar19 = puVar17 + 0x188;
        if (7 < *(ulonglong *)(puVar17 + 0x1a0)) {
          puVar19 = *(undefined1 **)(puVar17 + 0x188);
        }
        *(int *)(puVar17 + 0x20) = (int)uVar11;
        *(undefined8 *)(puVar17 + -8) = 0x14000bb7a;
        FUN_140023fbc(*(undefined4 *)(puVar17 + 0x38),puVar14,uVar16 & 0xffffffff,puVar19);
        if (extraout_var_03 != 0) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)(puVar17 + -8) = 0x14000bf12;
          FUN_140009000(extraout_var_03);
        }
        uVar21 = *(ulonglong *)(puVar17 + 0x1a0);
      }
      uVar8 = uVar20 | 0x6c006;
      *(uint *)(puVar17 + 0x30) = uVar8;
      puVar14 = puVar17 + 0x188;
      if (7 < uVar21) {
        puVar14 = *(undefined1 **)(puVar17 + 0x188);
      }
      *(undefined8 *)(puVar17 + -8) = 0x14000bbd1;
      iVar9 = FUN_1400245c0(puVar14,puVar17 + 0x208,9,0xffffffff);
      if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar17 + -8) = &UNK_14000bf29;
        FUN_14000a510("file_size",iVar9,puVar17 + 0x188);
      }
      if (*(ulonglong *)(puVar17 + 0x210) != (ulonglong)*(uint *)(puVar17 + 0x34))
      goto LAB_14000bbeb;
      bVar5 = true;
    }
    if ((uVar8 & 4) != 0) {
      uVar8 = uVar8 & 0xfffffffb;
      *(undefined8 *)(puVar17 + -8) = 0x14000bc04;
      FUN_140018e20(puVar17 + 0x188);
    }
    if ((uVar8 & 2) != 0) {
      *(undefined8 *)(puVar17 + -8) = 0x14000bc18;
      FUN_140018e20(puVar17 + 0x1c8);
    }
    if (!bVar5) {
      lVar12 = *(longlong *)(puVar17 + 0x50);
      goto LAB_14000bd19;
    }
    uVar7 = *(undefined4 *)(puVar17 + 0x1ac);
    uVar3 = *(undefined4 *)(puVar17 + 0x1b0);
    uVar4 = *(undefined4 *)(puVar17 + 0x1b4);
    *(undefined4 *)param_1 = *(undefined4 *)(puVar17 + 0x1a8);
    *(undefined4 *)((longlong)param_1 + 4) = uVar7;
    *(undefined4 *)(param_1 + 1) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
    uVar7 = *(undefined4 *)(puVar17 + 0x1bc);
    uVar3 = *(undefined4 *)(puVar17 + 0x1c0);
    uVar4 = *(undefined4 *)(puVar17 + 0x1c4);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar17 + 0x1b8);
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar7;
    *(undefined4 *)(param_1 + 3) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
    *(undefined8 *)(puVar17 + 0x1b8) = 0;
    *(undefined8 *)(puVar17 + 0x1c0) = 0xf;
    puVar17[0x1a8] = 0;
    *(undefined ***)(puVar17 + (longlong)*(int *)(*(longlong *)(puVar17 + 0x50) + 4) + 0x50) =
         std::basic_ofstream<>::vftable;
    *(int *)(puVar17 + (longlong)*(int *)(*(longlong *)(puVar17 + 0x50) + 4) + 0x4c) =
         *(int *)(*(longlong *)(puVar17 + 0x50) + 4) + -0xa8;
    *(undefined8 *)(puVar17 + -8) = 0x14000bc85;
    FUN_140017450(puVar17 + 0x58);
    *(undefined ***)(puVar17 + (longlong)*(int *)(*(longlong *)(puVar17 + 0x50) + 4) + 0x50) =
         std::basic_ostream<>::vftable;
    *(int *)(puVar17 + (longlong)*(int *)(*(longlong *)(puVar17 + 0x50) + 4) + 0x4c) =
         *(int *)(*(longlong *)(puVar17 + 0x50) + 4) + -0x10;
    *(undefined ***)(puVar17 + 0xf8) = std::ios_base::vftable;
    *(undefined8 *)(puVar17 + -8) = 0x14000bcc6;
    std::ios_base::_Ios_base_dtor((ios_base *)(puVar17 + 0xf8));
    uVar16 = *(ulonglong *)(puVar17 + 0x1c0);
    if (uVar16 < 0x10) goto LAB_14000bdf2;
    lVar12 = *(longlong *)(puVar17 + 0x1a8);
    uVar21 = uVar16 + 1;
    if (uVar21 < 0x1000) {
LAB_14000bd07:
      *(undefined8 *)(puVar17 + -8) = 0x14000bd0c;
      FUN_140026c34(lVar12,uVar21);
      goto LAB_14000bdf2;
    }
    if ((lVar12 - *(longlong *)(lVar12 + -8)) - 8U < 0x20) {
      uVar21 = uVar16 + 0x28;
      lVar12 = *(longlong *)(lVar12 + -8);
      goto LAB_14000bd07;
    }
LAB_14000bdc1:
    pcVar2 = (code *)swi(0x29);
    lVar12 = (*pcVar2)(5);
    puVar17 = puVar17 + 8;
LAB_14000bdcb:
    *(undefined8 *)(puVar17 + -8) = 0x14000bdd0;
    FUN_140026c34(lVar12);
  }
  else {
LAB_14000bd19:
    *(undefined ***)(puVar17 + (longlong)*(int *)(lVar12 + 4) + 0x50) =
         std::basic_ofstream<>::vftable;
    *(int *)(puVar17 + (longlong)*(int *)(*(longlong *)(puVar17 + 0x50) + 4) + 0x4c) =
         *(int *)(*(longlong *)(puVar17 + 0x50) + 4) + -0xa8;
    *(undefined8 *)(puVar17 + -8) = 0x14000bd46;
    FUN_140017450(puVar17 + 0x58);
    *(undefined ***)(puVar17 + (longlong)*(int *)(*(longlong *)(puVar17 + 0x50) + 4) + 0x50) =
         std::basic_ostream<>::vftable;
    *(int *)(puVar17 + (longlong)*(int *)(*(longlong *)(puVar17 + 0x50) + 4) + 0x4c) =
         *(int *)(*(longlong *)(puVar17 + 0x50) + 4) + -0x10;
    *(undefined ***)(puVar17 + 0xf8) = std::ios_base::vftable;
    *(undefined8 *)(puVar17 + -8) = 0x14000bd87;
    std::ios_base::_Ios_base_dtor((ios_base *)(puVar17 + 0xf8));
    if (0xf < *(ulonglong *)(puVar17 + 0x1c0)) {
      lVar12 = *(longlong *)(puVar17 + 0x1a8);
      if ((0xfff < *(ulonglong *)(puVar17 + 0x1c0) + 1) &&
         (lVar13 = lVar12 - *(longlong *)(lVar12 + -8), lVar12 = *(longlong *)(lVar12 + -8),
         0x1f < lVar13 - 8U)) goto LAB_14000bdc1;
      goto LAB_14000bdcb;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
LAB_14000bdf2:
  *(undefined8 *)(puVar17 + -8) = 0x14000be02;
  return param_1;
}

