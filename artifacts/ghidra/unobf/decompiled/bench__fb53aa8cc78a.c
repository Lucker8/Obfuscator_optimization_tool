/* Ghidra decompiler output (pseudo-C) */


/* ===== Function: _DT_INIT ===== */

void _DT_INIT(void)

{
  if (PTR___gmon_start___00104fe8 != (undefined *)0x0) {
    (*(code *)PTR___gmon_start___00104fe8)();
  }
  return;
}



/* ===== Function: FUN_00101020 ===== */

void FUN_00101020(void)

{
  (*(code *)PTR_00104f90)();
  return;
}



/* ===== Function: FUN_001010b0 ===== */

void FUN_001010b0(void)

{
  (*(code *)PTR___cxa_finalize_00104ff8)();
  return;
}



/* ===== Function: free ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00104f98)();
  return;
}



/* ===== Function: putchar ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_00104fa0)();
  return iVar1;
}



/* ===== Function: puts ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00104fa8)();
  return iVar1;
}



/* ===== Function: __stack_chk_fail ===== */

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00104fb0)();
  return;
}



/* ===== Function: printf ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00104fb8)();
  return iVar1;
}



/* ===== Function: malloc ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00104fc0)();
  return pvVar1;
}



/* ===== Function: __isoc99_scanf ===== */

void __isoc99_scanf(void)

{
  (*(code *)PTR___isoc99_scanf_00104fc8)();
  return;
}



/* ===== Function: exit ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00104fd0)();
  return;
}



/* ===== Function: entry ===== */

void processEntry entry(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00104fd8)
            (FUN_00102749,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ===== Function: FUN_00101170 ===== */

/* WARNING: Removing unreachable block (ram,0x00101183) */
/* WARNING: Removing unreachable block (ram,0x0010118f) */

void FUN_00101170(void)

{
  return;
}



/* ===== Function: FUN_001011a0 ===== */

/* WARNING: Removing unreachable block (ram,0x001011c4) */
/* WARNING: Removing unreachable block (ram,0x001011d0) */

void FUN_001011a0(void)

{
  return;
}



/* ===== Function: _FINI_0 ===== */

void _FINI_0(void)

{
  if (DAT_00105020 == '\0') {
    if (PTR___cxa_finalize_00104ff8 != (undefined *)0x0) {
      FUN_001010b0(PTR_LOOP_00105008);
    }
    FUN_00101170();
    DAT_00105020 = 1;
    return;
  }
  return;
}



/* ===== Function: _INIT_0 ===== */

void _INIT_0(void)

{
  FUN_001011a0();
  return;
}



/* ===== Function: FUN_00101229 ===== */

undefined8 FUN_00101229(void)

{
  int iVar1;
  undefined8 uVar2;
  char *__s;
  long in_FS_OFFSET;
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = __isoc99_scanf(&DAT_00103020,&local_18);
  if (iVar1 == 1) {
    if ((local_18 & 1) == 0) {
      __s = "even";
    }
    else {
      __s = "odd";
    }
    puts(__s);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* ===== Function: FUN_001012aa ===== */

long FUN_001012aa(long param_1,int param_2)

{
  undefined4 local_24;
  undefined8 local_10;
  
  local_10 = 1;
  local_24 = param_2;
  while (0 < local_24) {
    local_10 = local_10 * param_1;
    local_24 = local_24 + -1;
  }
  return local_10;
}



/* ===== Function: FUN_001012e3 ===== */

undefined8 FUN_001012e3(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  char *__s;
  long in_FS_OFFSET;
  int local_30;
  long local_28;
  long local_20;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = __isoc99_scanf(&DAT_00103020,&local_28);
  if (iVar1 == 1) {
    if (local_28 < 0) {
      puts("no");
      uVar2 = 1;
    }
    else {
      local_20 = local_28;
      local_30 = 0;
      do {
        local_30 = local_30 + 1;
        local_20 = local_20 / 10;
      } while (local_20 != 0);
      local_20 = local_28;
      local_18 = 0;
      do {
        lVar3 = FUN_001012aa((long)((int)local_20 + (int)(local_20 / 10) * -10),local_30);
        local_18 = local_18 + lVar3;
        local_20 = local_20 / 10;
      } while (local_20 != 0);
      if (local_18 == local_28) {
        __s = "yes";
      }
      else {
        __s = "no";
      }
      puts(__s);
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* ===== Function: FUN_00101462 ===== */

undefined8 FUN_00101462(void)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_28;
  int local_24;
  double local_20;
  double local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = __isoc99_scanf(&DAT_00103035,&local_28);
  if (iVar1 == 1) {
    if (local_28 < 1) {
      puts("0.000000");
      uVar2 = 1;
    }
    else {
      local_18 = 0.0;
      for (local_24 = 0; local_24 < local_28; local_24 = local_24 + 1) {
        iVar1 = __isoc99_scanf(&DAT_00103041,&local_20);
        if (iVar1 != 1) {
          local_20 = 0.0;
        }
        local_18 = local_20 + local_18;
      }
      printf("%.6f\n",local_18 / (double)local_28);
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* ===== Function: FUN_0010156e ===== */

undefined8 FUN_0010156e(void)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  uint local_64;
  int local_60;
  int local_5c;
  char acStack_58 [72];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = __isoc99_scanf(&DAT_0010304b,&local_64);
  if (iVar1 == 1) {
    if (local_64 == 0) {
      puts("0");
      uVar2 = 1;
    }
    else {
      local_60 = 0;
      for (; local_5c = local_60, local_64 != 0; local_64 = local_64 >> 1) {
        acStack_58[local_60] = ((byte)local_64 & 1) + 0x30;
        local_60 = local_60 + 1;
      }
      while (local_5c = local_5c + -1, -1 < local_5c) {
        putchar((int)acStack_58[local_5c]);
      }
      putchar(10);
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== Function: FUN_00101650 ===== */

undefined8 FUN_00101650(uint param_1)

{
  undefined8 uVar1;
  
  if (((int)param_1 % 400 == 0) || (((param_1 & 3) == 0 && ((int)param_1 % 100 != 0)))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== Function: FUN_001016c2 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_001016c2(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = _UNK_001030c4;
  if (param_2 == 2) {
    iVar1 = FUN_00101650(param_1);
    iVar2 = (uint)(iVar1 != 0) + iVar2;
  }
  else {
    iVar2 = *(int *)(&DAT_001030c0 + (long)(param_2 + -1) * 4);
  }
  return iVar2;
}



/* ===== Function: FUN_0010172b ===== */

void FUN_0010172b(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (((*param_4 < *param_1) || ((*param_1 == *param_4 && (*param_5 < *param_2)))) ||
     ((*param_1 == *param_4 && ((*param_2 == *param_5 && (*param_6 < *param_3)))))) {
    iVar1 = *param_1;
    iVar2 = *param_2;
    iVar3 = *param_3;
    *param_1 = *param_4;
    *param_2 = *param_5;
    *param_3 = *param_6;
    *param_4 = iVar1;
    *param_5 = iVar2;
    *param_6 = iVar3;
  }
  return;
}



/* ===== Function: FUN_00101808 ===== */

undefined8 FUN_00101808(void)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = __isoc99_scanf("%d %d %d %d %d %d",&local_3c,&local_38,&local_34,&local_30,&local_2c,
                         &local_28);
  if (iVar1 == 6) {
    FUN_0010172b(&local_3c,&local_38,&local_34,&local_30,&local_2c,&local_28);
    local_24 = local_30 - local_3c;
    local_20 = local_2c - local_38;
    local_1c = local_28 - local_34;
    if ((int)local_1c < 0) {
      local_20 = local_20 - 1;
      local_18 = local_30;
      local_14 = local_2c + -1;
      if (local_14 == 0) {
        local_14 = 0xc;
        local_18 = local_30 + -1;
      }
      iVar1 = FUN_001016c2(local_18,local_14);
      local_1c = local_1c + iVar1;
    }
    if ((int)local_20 < 0) {
      local_24 = local_24 - 1;
      local_20 = local_20 + 0xc;
    }
    printf("%d years %d months %d days\n",(ulong)local_24,(ulong)local_20,(ulong)local_1c);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* ===== Function: FUN_0010193b ===== */

undefined8 FUN_0010193b(void)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = __isoc99_scanf(&DAT_00103035,&local_20);
  if (iVar1 == 1) {
    if (local_20 < 1) {
      puts("0");
      uVar2 = 1;
    }
    else {
      if (200000 < local_20) {
        local_20 = 200000;
      }
      local_18 = 0x80000000;
      for (local_14 = 0; local_14 < local_20; local_14 = local_14 + 1) {
        iVar1 = __isoc99_scanf(&DAT_00103035,&local_1c);
        if (iVar1 != 1) {
          local_1c = 0;
        }
        if ((int)local_18 < (int)local_1c) {
          local_18 = local_1c;
        }
      }
      printf("%d\n",(ulong)local_18);
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* ===== Function: FUN_00101a36 ===== */

void FUN_00101a36(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}



/* ===== Function: FUN_00101a67 ===== */

int FUN_00101a67(long param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar1 = *(int *)(param_1 + (long)param_3 * 4);
  local_14 = param_2 + -1;
  for (local_10 = param_2; local_10 < param_3; local_10 = local_10 + 1) {
    if (*(int *)(param_1 + (long)local_10 * 4) <= iVar1) {
      local_14 = local_14 + 1;
      FUN_00101a36(param_1 + (long)local_14 * 4,(long)local_10 * 4 + param_1);
    }
  }
  FUN_00101a36(param_1 + ((long)local_14 + 1) * 4,(long)param_3 * 4 + param_1);
  return local_14 + 1;
}



/* ===== Function: FUN_00101b44 ===== */

void FUN_00101b44(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 < param_3) {
    iVar1 = FUN_00101a67(param_1,param_2,param_3);
    FUN_00101b44(param_1,param_2,iVar1 + -1);
    FUN_00101b44(param_1,iVar1 + 1,param_3);
  }
  return;
}



/* ===== Function: FUN_00101baa ===== */

undefined8 FUN_00101baa(void)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_1c;
  int local_18;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = __isoc99_scanf(&DAT_00103035,&local_1c);
  if (iVar1 == 1) {
    if (local_1c < 0) {
      putchar(10);
      uVar2 = 1;
    }
    else {
      if (200000 < local_1c) {
        local_1c = 200000;
      }
      for (local_18 = 0; local_18 < local_1c; local_18 = local_18 + 1) {
        iVar1 = __isoc99_scanf(&DAT_00103035,&DAT_00105040 + (long)local_18 * 4);
        if (iVar1 != 1) {
          *(undefined4 *)(&DAT_00105040 + (long)local_18 * 4) = 0;
        }
      }
      if (0 < local_1c) {
        FUN_00101b44(&DAT_00105040,0,local_1c + -1);
      }
      for (local_14 = 0; local_14 < local_1c; local_14 = local_14 + 1) {
        if (local_14 != 0) {
          putchar(0x20);
        }
        printf("%d",(ulong)*(uint *)(&DAT_00105040 + (long)local_14 * 4));
      }
      putchar(10);
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* ===== Function: FUN_00101d18 ===== */

undefined4 * FUN_00101d18(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(0x18);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  *puVar1 = param_1;
  *(undefined8 *)(puVar1 + 2) = 0;
  *(undefined8 *)(puVar1 + 4) = 0;
  return puVar1;
}



/* ===== Function: FUN_00101d6d ===== */

int * FUN_00101d6d(int *param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_1 == (int *)0x0) {
    param_1 = (int *)FUN_00101d18(param_2);
  }
  else if (param_2 < *param_1) {
    uVar1 = FUN_00101d6d(*(undefined8 *)(param_1 + 2),param_2);
    *(undefined8 *)(param_1 + 2) = uVar1;
  }
  else {
    uVar1 = FUN_00101d6d(*(undefined8 *)(param_1 + 4),param_2);
    *(undefined8 *)(param_1 + 4) = uVar1;
  }
  return param_1;
}



/* ===== Function: FUN_00101de0 ===== */

void FUN_00101de0(uint *param_1)

{
  if (param_1 != (uint *)0x0) {
    FUN_00101de0(*(undefined8 *)(param_1 + 2));
    printf("%d ",(ulong)*param_1);
    FUN_00101de0(*(undefined8 *)(param_1 + 4));
  }
  return;
}



/* ===== Function: FUN_00101e38 ===== */

void FUN_00101e38(uint *param_1)

{
  if (param_1 != (uint *)0x0) {
    printf("%d ",(ulong)*param_1);
    FUN_00101e38(*(undefined8 *)(param_1 + 2));
    FUN_00101e38(*(undefined8 *)(param_1 + 4));
  }
  return;
}



/* ===== Function: FUN_00101e90 ===== */

void FUN_00101e90(uint *param_1)

{
  if (param_1 != (uint *)0x0) {
    FUN_00101e90(*(undefined8 *)(param_1 + 2));
    FUN_00101e90(*(undefined8 *)(param_1 + 4));
    printf("%d ",(ulong)*param_1);
  }
  return;
}



/* ===== Function: FUN_00101ee8 ===== */

void FUN_00101ee8(void *param_1)

{
  if (param_1 != (void *)0x0) {
    FUN_00101ee8(*(undefined8 *)((long)param_1 + 8));
    FUN_00101ee8(*(undefined8 *)((long)param_1 + 0x10));
    free(param_1);
  }
  return;
}



/* ===== Function: FUN_00101f30 ===== */

undefined8 FUN_00101f30(void)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = __isoc99_scanf(&DAT_00103035,&local_24);
  if (iVar1 == 1) {
    if (local_24 < 0) {
      putchar(10);
      putchar(10);
      putchar(10);
      uVar2 = 1;
    }
    else {
      local_18 = 0;
      for (local_1c = 0; local_1c < local_24; local_1c = local_1c + 1) {
        iVar1 = __isoc99_scanf(&DAT_00103035,&local_20);
        if (iVar1 != 1) {
          local_20 = 0;
        }
        local_18 = FUN_00101d6d(local_18,local_20);
      }
      FUN_00101de0(local_18);
      putchar(10);
      FUN_00101e38(local_18);
      putchar(10);
      FUN_00101e90(local_18);
      putchar(10);
      FUN_00101ee8(local_18);
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* ===== Function: FUN_00102066 ===== */

int FUN_00102066(long param_1,int param_2,int param_3)

{
  int iVar1;
  int local_14;
  int local_10;
  
  local_14 = 0;
  local_10 = param_2 + -1;
  while( true ) {
    if (local_10 < local_14) {
      return -1;
    }
    iVar1 = local_14 + (local_10 - local_14) / 2;
    if (param_3 == *(int *)(param_1 + (long)iVar1 * 4)) break;
    if (*(int *)(param_1 + (long)iVar1 * 4) < param_3) {
      local_14 = iVar1 + 1;
    }
    else {
      local_10 = iVar1 + -1;
    }
  }
  return iVar1;
}



/* ===== Function: FUN_00102101 ===== */

undefined8 FUN_00102101(void)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  int local_1c;
  undefined4 local_18;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = __isoc99_scanf(&DAT_00103035,&local_1c);
  if (iVar1 == 1) {
    if (local_1c < 0) {
      puts("-1");
      uVar3 = 1;
    }
    else {
      if (200000 < local_1c) {
        local_1c = 200000;
      }
      for (local_14 = 0; local_14 < local_1c; local_14 = local_14 + 1) {
        iVar1 = __isoc99_scanf(&DAT_00103035,&DAT_001c8540 + (long)local_14 * 4);
        if (iVar1 != 1) {
          *(undefined4 *)(&DAT_001c8540 + (long)local_14 * 4) = 0;
        }
      }
      iVar1 = __isoc99_scanf(&DAT_00103035,&local_18);
      if (iVar1 != 1) {
        local_18 = 0;
      }
      uVar2 = FUN_00102066(&DAT_001c8540,local_1c,local_18);
      printf("%d\n",(ulong)uVar2);
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



/* ===== Function: FUN_00102249 ===== */

int FUN_00102249(long param_1,long param_2,int param_3)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_14 = 0x7fffffff;
  local_10 = -1;
  for (local_c = 0; local_c < param_3; local_c = local_c + 1) {
    if ((*(int *)(param_2 + (long)local_c * 4) == 0) &&
       (*(int *)(param_1 + (long)local_c * 4) < local_14)) {
      local_14 = *(int *)(param_1 + (long)local_c * 4);
      local_10 = local_c;
    }
  }
  return local_10;
}



/* ===== Function: FUN_001022d8 ===== */

undefined8 FUN_001022d8(void)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_680;
  int local_67c;
  int local_678;
  int local_674;
  int local_670;
  int local_66c;
  int local_668;
  int local_664;
  int local_660;
  uint local_65c;
  uint local_658 [200];
  int local_338 [202];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = __isoc99_scanf(&DAT_00103035,&local_680);
  if (iVar1 == 1) {
    if ((local_680 < 1) || (200 < local_680)) {
      putchar(10);
      uVar2 = 1;
    }
    else {
      for (local_678 = 0; local_678 < local_680; local_678 = local_678 + 1) {
        for (local_674 = 0; local_674 < local_680; local_674 = local_674 + 1) {
          iVar1 = __isoc99_scanf(&DAT_00103035,
                                 &DAT_0028ba40 + ((long)local_678 * 200 + (long)local_674) * 4);
          if (iVar1 != 1) {
            *(undefined4 *)(&DAT_0028ba40 + ((long)local_678 * 200 + (long)local_674) * 4) =
                 0xffffffff;
          }
        }
      }
      iVar1 = __isoc99_scanf(&DAT_00103035,&local_67c);
      if (iVar1 == 1) {
        if ((local_67c < 0) || (local_680 <= local_67c)) {
          putchar(10);
          uVar2 = 1;
        }
        else {
          for (local_670 = 0; local_670 < local_680; local_670 = local_670 + 1) {
            local_658[local_670] = 0x7fffffff;
            local_338[local_670] = 0;
          }
          local_658[local_67c] = 0;
          local_66c = 0;
          while ((local_66c < local_680 &&
                 (local_660 = FUN_00102249(local_658,local_338,local_680), local_660 != -1))) {
            local_338[local_660] = 1;
            for (local_668 = 0; local_668 < local_680; local_668 = local_668 + 1) {
              if ((((-1 < *(int *)(&DAT_0028ba40 + ((long)local_660 * 200 + (long)local_668) * 4))
                   && (local_338[local_668] == 0)) && (local_658[local_660] != 0x7fffffff)) &&
                 (local_65c = *(int *)(&DAT_0028ba40 + ((long)local_660 * 200 + (long)local_668) * 4
                                      ) + local_658[local_660],
                 (int)local_65c < (int)local_658[local_668])) {
                local_658[local_668] = local_65c;
              }
            }
            local_66c = local_66c + 1;
          }
          for (local_664 = 0; local_664 < local_680; local_664 = local_664 + 1) {
            if (local_658[local_664] == 0x7fffffff) {
              printf("INF");
            }
            else {
              printf("%d",(ulong)local_658[local_664]);
            }
            if (local_664 + 1 < local_680) {
              putchar(0x20);
            }
          }
          putchar(10);
          uVar2 = 1;
        }
      }
      else {
        putchar(10);
        uVar2 = 1;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== Function: FUN_00102749 ===== */

undefined8 FUN_00102749(void)

{
  int iVar1;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  while ((iVar1 = __isoc99_scanf(&DAT_00103035,&local_14), iVar1 == 1 && (local_14 != 0))) {
    switch(local_14) {
    case 1:
      FUN_00101229();
      break;
    case 2:
      FUN_001012e3();
      break;
    case 3:
      FUN_00101462();
      break;
    case 4:
      FUN_0010156e();
      break;
    case 5:
      FUN_00101808();
      break;
    case 6:
      FUN_0010193b();
      break;
    case 7:
      FUN_00101baa();
      break;
    case 8:
      FUN_00101f30();
      break;
    case 9:
      FUN_00102101();
      break;
    case 10:
      FUN_001022d8();
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== Function: _DT_FINI ===== */

void _DT_FINI(void)

{
  return;
}



/* ===== Function: free ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== Function: putchar ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== Function: __libc_start_main ===== */

/* WARNING: Control flow encountered bad instruction data */

void __libc_start_main(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== Function: _ITM_deregisterTMCloneTable ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_deregisterTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== Function: puts ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== Function: __stack_chk_fail ===== */

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== Function: printf ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== Function: __gmon_start__ ===== */

/* WARNING: Control flow encountered bad instruction data */

void __gmon_start__(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== Function: malloc ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== Function: __isoc99_scanf ===== */

/* WARNING: Control flow encountered bad instruction data */

void __isoc99_scanf(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== Function: exit ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== Function: _ITM_registerTMCloneTable ===== */

/* WARNING: Control flow encountered bad instruction data */

void _ITM_registerTMCloneTable(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== Function: __cxa_finalize ===== */

/* WARNING: Control flow encountered bad instruction data */

void __cxa_finalize(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


