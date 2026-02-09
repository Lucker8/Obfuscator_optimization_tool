/* Ghidra decompiler output (pseudo-C) */


/* ===== Function: _DT_INIT ===== */

void _DT_INIT(void)

{
  if (PTR___gmon_start___00166fe8 != (undefined *)0x0) {
    (*(code *)PTR___gmon_start___00166fe8)();
  }
  return;
}



/* ===== Function: FUN_00101020 ===== */

void FUN_00101020(void)

{
  (*(code *)PTR_00166f90)();
  return;
}



/* ===== Function: FUN_001010b0 ===== */

void FUN_001010b0(void)

{
  (*(code *)PTR___cxa_finalize_00166ff8)();
  return;
}



/* ===== Function: free ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00166f98)();
  return;
}



/* ===== Function: putchar ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_00166fa0)();
  return iVar1;
}



/* ===== Function: puts ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_00166fa8)();
  return iVar1;
}



/* ===== Function: __stack_chk_fail ===== */

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00166fb0)();
  return;
}



/* ===== Function: printf ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00166fb8)();
  return iVar1;
}



/* ===== Function: malloc ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00166fc0)();
  return pvVar1;
}



/* ===== Function: __isoc99_scanf ===== */

void __isoc99_scanf(void)

{
  (*(code *)PTR___isoc99_scanf_00166fc8)();
  return;
}



/* ===== Function: exit ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00166fd0)();
  return;
}



/* ===== Function: entry ===== */

void processEntry entry(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00166fd8)
            (FUN_00101be3,param_2,&stack0x00000008,0,0,param_1,auStack_8);
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
  if (DAT_00167020 == '\0') {
    if (PTR___cxa_finalize_00166ff8 != (undefined *)0x0) {
      FUN_001010b0(PTR_LOOP_00167008);
    }
    FUN_00101170();
    DAT_00167020 = 1;
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
  undefined8 uVar1;
  long in_FS_OFFSET;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = __isoc99_scanf("%d %d %d %d %d %d",&local_44,&local_40,&local_3c,&local_38,&local_34,
                            &local_30);
  if (local_18 == 6) {
    FUN_00101593(&local_44,&local_40,&local_3c,&local_38,&local_34,&local_30);
    local_2c = local_38 - local_44;
    local_28 = local_34 - local_40;
    local_24 = local_30 - local_3c;
    if ((int)local_24 < 0) {
      local_28 = local_28 - 1;
      local_20 = local_38;
      local_1c = local_34 + -1;
      if (local_1c == 0) {
        local_1c = 0xc;
        local_20 = local_38 + -1;
      }
      local_14 = FUN_00163f09(local_20,local_1c);
      local_24 = local_24 + local_14;
    }
    if ((int)local_28 < 0) {
      local_2c = local_2c - 1;
      local_28 = local_28 + 0xc;
    }
    printf("%d years %d months %d days\n",(ulong)local_2c,(ulong)local_28,(ulong)local_24);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



/* ===== Function: FUN_00101366 ===== */

undefined4 FUN_00101366(uint param_1)

{
  undefined4 local_c;
  
  if ((int)param_1 % 400 == 0) {
    local_c = 1;
  }
  else if ((param_1 & 3) == 0) {
    if ((int)param_1 % 100 == 0) {
      local_c = 0;
    }
    else {
      local_c = 1;
    }
  }
  else {
    local_c = 0;
  }
  return local_c;
}



/* ===== Function: FUN_001013f1 ===== */

undefined8 FUN_001013f1(void)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = __isoc99_scanf(&DAT_00165032,&local_2c);
  if (local_20 == 1) {
    if (local_2c < 0) {
      puts("-1");
      uVar1 = 1;
    }
    else {
      if (200000 < local_2c) {
        local_2c = 200000;
      }
      for (local_24 = 0; local_24 < local_2c; local_24 = local_24 + 1) {
        local_14 = __isoc99_scanf(&DAT_00165032,&DAT_00167060 + (long)local_24 * 4);
        if (local_14 != 1) {
          *(undefined4 *)(&DAT_00167060 + (long)local_24 * 4) = 0;
        }
      }
      local_1c = __isoc99_scanf(&DAT_00165032,&local_28);
      if (local_1c != 1) {
        local_28 = 0;
      }
      local_18 = FUN_00163f81(&DAT_00167060,local_2c,local_28);
      printf("%d\n",(ulong)local_18);
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



/* ===== Function: FUN_0010154b ===== */

void FUN_0010154b(void *param_1)

{
  if (param_1 != (void *)0x0) {
    FUN_0010154b(*(undefined8 *)((long)param_1 + 8));
    FUN_0010154b(*(undefined8 *)((long)param_1 + 0x10));
    free(param_1);
  }
  return;
}



/* ===== Function: FUN_00101593 ===== */

void FUN_00101593(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6)

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



/* ===== Function: FUN_0010167e ===== */

void FUN_0010167e(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}



/* ===== Function: FUN_001016af ===== */

int FUN_001016af(long param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar1 = *(int *)(param_1 + (long)param_3 * 4);
  local_14 = param_2 + -1;
  for (local_10 = param_2; local_10 < param_3; local_10 = local_10 + 1) {
    if (*(int *)(param_1 + (long)local_10 * 4) <= iVar1) {
      local_14 = local_14 + 1;
      FUN_0010167e(param_1 + (long)local_14 * 4,(long)local_10 * 4 + param_1);
    }
  }
  FUN_0010167e(param_1 + ((long)local_14 + 1) * 4,(long)param_3 * 4 + param_1);
  return local_14 + 1;
}



/* ===== Function: FUN_0010178c ===== */

int FUN_0010178c(long param_1,long param_2,int param_3)

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



/* ===== Function: FUN_0010181b ===== */

undefined8 FUN_0010181b(void)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  double local_20;
  double local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = __isoc99_scanf(&DAT_00165032,&local_30);
  if (local_28 == 1) {
    if (local_30 < 1) {
      puts("0.000000");
      uVar1 = 1;
    }
    else {
      local_18 = 0.0;
      for (local_2c = 0; local_2c < local_30; local_2c = local_2c + 1) {
        local_24 = __isoc99_scanf(&DAT_00165045,&local_20);
        if (local_24 != 1) {
          local_20 = 0.0;
        }
        local_18 = local_20 + local_18;
      }
      printf("%.6f\n",local_18 / (double)local_30);
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



/* ===== Function: FUN_0010192f ===== */

undefined8 FUN_0010192f(void)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = __isoc99_scanf(&DAT_00165032,&local_2c);
  if (local_20 == 1) {
    if (local_2c < 0) {
      putchar(10);
      putchar(10);
      putchar(10);
      uVar1 = 1;
    }
    else {
      local_18 = 0;
      for (local_24 = 0; local_24 < local_2c; local_24 = local_24 + 1) {
        local_1c = __isoc99_scanf(&DAT_00165032,&local_28);
        if (local_1c != 1) {
          local_28 = 0;
        }
        local_18 = FUN_0016417b(local_18,local_28);
      }
      FUN_00164079(local_18);
      putchar(10);
      FUN_00163eb1(local_18);
      putchar(10);
      FUN_00164610(local_18);
      putchar(10);
      FUN_0010154b(local_18);
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



/* ===== Function: FUN_00101a6d ===== */

undefined8 FUN_00101a6d(void)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = __isoc99_scanf(&DAT_00165032,&local_24);
  if (local_18 == 1) {
    if (local_24 < 0) {
      putchar(10);
      uVar1 = 1;
    }
    else {
      if (200000 < local_24) {
        local_24 = 200000;
      }
      for (local_20 = 0; local_20 < local_24; local_20 = local_20 + 1) {
        local_14 = __isoc99_scanf(&DAT_00165032,&DAT_00251660 + (long)local_20 * 4);
        if (local_14 != 1) {
          *(undefined4 *)(&DAT_00251660 + (long)local_20 * 4) = 0;
        }
      }
      if (0 < local_24) {
        FUN_001640d1(&DAT_00251660,0,local_24 + -1);
      }
      for (local_1c = 0; local_1c < local_24; local_1c = local_1c + 1) {
        if (local_1c != 0) {
          putchar(0x20);
        }
        printf("%d",(ulong)*(uint *)(&DAT_00251660 + (long)local_1c * 4));
      }
      putchar(10);
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



/* ===== Function: FUN_00101be3 (decompile failed) ===== */
/* reason: Exception while decompiling 00101be3: process: timeout
 */

/* ===== Function: FUN_001639ee ===== */

undefined8 FUN_001639ee(void)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  int local_690;
  int local_68c;
  int local_688;
  int local_684;
  int local_680;
  int local_67c;
  int local_678;
  int local_674;
  int local_670;
  int local_66c;
  int local_668;
  int local_664;
  uint local_660;
  int local_65c;
  uint local_658 [200];
  int local_338 [202];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_670 = __isoc99_scanf(&DAT_00165032,&local_690);
  if (local_670 == 1) {
    if (local_690 < 1) {
      putchar(10);
      uVar1 = 1;
    }
    else if (local_690 < 0xc9) {
      for (local_688 = 0; local_688 < local_690; local_688 = local_688 + 1) {
        for (local_684 = 0; local_684 < local_690; local_684 = local_684 + 1) {
          local_65c = __isoc99_scanf(&DAT_00165032,
                                     &DAT_0022a560 + ((long)local_688 * 200 + (long)local_684) * 4);
          if (local_65c != 1) {
            *(undefined4 *)(&DAT_0022a560 + ((long)local_688 * 200 + (long)local_684) * 4) =
                 0xffffffff;
          }
        }
      }
      local_66c = __isoc99_scanf(&DAT_00165032,&local_68c);
      if (local_66c == 1) {
        if (local_68c < 0) {
          putchar(10);
          uVar1 = 1;
        }
        else if (local_68c < local_690) {
          for (local_680 = 0; local_680 < local_690; local_680 = local_680 + 1) {
            local_658[local_680] = 0x7fffffff;
            local_338[local_680] = 0;
          }
          local_658[local_68c] = 0;
          local_67c = 0;
          while ((local_67c < local_690 &&
                 (local_668 = FUN_0010178c(local_658,local_338,local_690), local_664 = local_668,
                 local_668 != -1))) {
            local_338[local_668] = 1;
            for (local_678 = 0; local_678 < local_690; local_678 = local_678 + 1) {
              if ((((-1 < *(int *)(&DAT_0022a560 + ((long)local_668 * 200 + (long)local_678) * 4))
                   && (local_338[local_678] == 0)) && (local_658[local_668] != 0x7fffffff)) &&
                 (local_660 = *(int *)(&DAT_0022a560 + ((long)local_668 * 200 + (long)local_678) * 4
                                      ) + local_658[local_668],
                 (int)local_660 < (int)local_658[local_678])) {
                local_658[local_678] = local_660;
              }
            }
            local_67c = local_67c + 1;
          }
          for (local_674 = 0; local_674 < local_690; local_674 = local_674 + 1) {
            if (local_658[local_674] == 0x7fffffff) {
              printf("INF");
            }
            else {
              printf("%d",(ulong)local_658[local_674]);
            }
            if (local_674 + 1 < local_690) {
              putchar(0x20);
            }
          }
          putchar(10);
          uVar1 = 1;
        }
        else {
          putchar(10);
          uVar1 = 1;
        }
      }
      else {
        putchar(10);
        uVar1 = 1;
      }
    }
    else {
      putchar(10);
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== Function: FUN_00163eb1 ===== */

void FUN_00163eb1(uint *param_1)

{
  if (param_1 != (uint *)0x0) {
    printf("%d ",(ulong)*param_1);
    FUN_00163eb1(*(undefined8 *)(param_1 + 2));
    FUN_00163eb1(*(undefined8 *)(param_1 + 4));
  }
  return;
}



/* ===== Function: FUN_00163f09 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00163f09(undefined4 param_1,int param_2)

{
  int iVar1;
  uint local_10;
  
  if (param_2 == 2) {
    iVar1 = FUN_00101366(param_1);
    local_10 = (uint)(iVar1 != 0);
    iVar1 = local_10 + _DAT_00314b64;
  }
  else {
    iVar1 = *(int *)(&DAT_00314b60 + (long)(param_2 + -1) * 4);
  }
  return iVar1;
}



/* ===== Function: FUN_00163f81 ===== */

int FUN_00163f81(long param_1,int param_2,int param_3)

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



/* ===== Function: FUN_0016401c ===== */

undefined4 * FUN_0016401c(undefined4 param_1)

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



/* ===== Function: FUN_00164079 ===== */

void FUN_00164079(uint *param_1)

{
  if (param_1 != (uint *)0x0) {
    FUN_00164079(*(undefined8 *)(param_1 + 2));
    printf("%d ",(ulong)*param_1);
    FUN_00164079(*(undefined8 *)(param_1 + 4));
  }
  return;
}



/* ===== Function: FUN_001640d1 ===== */

void FUN_001640d1(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 < param_3) {
    iVar1 = FUN_001016af(param_1,param_2,param_3);
    FUN_001640d1(param_1,param_2,iVar1 + -1);
    FUN_001640d1(param_1,iVar1 + 1,param_3);
  }
  return;
}



/* ===== Function: FUN_0016413e ===== */

long FUN_0016413e(long param_1,int param_2)

{
  undefined4 local_24;
  undefined8 local_10;
  
  local_10 = 1;
  local_24 = param_2;
  while( true ) {
    if (local_24 < 1) break;
    local_10 = local_10 * param_1;
    local_24 = local_24 + -1;
  }
  return local_10;
}



/* ===== Function: FUN_0016417b ===== */

int * FUN_0016417b(int *param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_1 == (int *)0x0) {
    param_1 = (int *)FUN_0016401c(param_2);
  }
  else if (param_2 < *param_1) {
    uVar1 = FUN_0016417b(*(undefined8 *)(param_1 + 2),param_2);
    *(undefined8 *)(param_1 + 2) = uVar1;
  }
  else {
    uVar1 = FUN_0016417b(*(undefined8 *)(param_1 + 4),param_2);
    *(undefined8 *)(param_1 + 4) = uVar1;
  }
  return param_1;
}



/* ===== Function: FUN_001641f6 ===== */

undefined8 FUN_001641f6(void)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  int local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = __isoc99_scanf(&DAT_00165032,&local_28);
  if (local_18 == 1) {
    if (local_28 < 1) {
      puts("0");
      uVar1 = 1;
    }
    else {
      if (200000 < local_28) {
        local_28 = 200000;
      }
      local_20 = 0x80000000;
      for (local_1c = 0; local_1c < local_28; local_1c = local_1c + 1) {
        local_14 = __isoc99_scanf(&DAT_00165032,&local_24);
        if (local_14 != 1) {
          local_24 = 0;
        }
        if ((int)local_20 < (int)local_24) {
          local_20 = local_24;
        }
      }
      printf("%d\n",(ulong)local_20);
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



/* ===== Function: FUN_001642f9 ===== */

undefined8 FUN_001642f9(void)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  ulong local_20;
  char *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = __isoc99_scanf(&DAT_00165106,&local_20);
  if (iVar1 == 1) {
    if ((local_20 & 1) == 0) {
      local_18 = "even";
    }
    else {
      local_18 = "odd";
    }
    puts(local_18);
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



/* ===== Function: FUN_0016438a ===== */

undefined8 FUN_0016438a(void)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_44;
  long local_38;
  long local_30;
  long local_28;
  char *local_20;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = __isoc99_scanf(&DAT_00165106,&local_38);
  if (iVar1 == 1) {
    if (local_38 < 0) {
      puts("no");
      uVar2 = 1;
    }
    else {
      local_30 = local_38;
      local_44 = 0;
      do {
        local_44 = local_44 + 1;
        local_30 = local_30 / 10;
      } while (local_30 != 0);
      local_30 = local_38;
      local_28 = 0;
      do {
        local_18 = FUN_0016413e((long)((int)local_30 + (int)(local_30 / 10) * -10),local_44);
        local_28 = local_28 + local_18;
        local_30 = local_30 / 10;
      } while (local_30 != 0);
      if (local_28 == local_38) {
        local_20 = "yes";
      }
      else {
        local_20 = "no";
      }
      puts(local_20);
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



/* ===== Function: FUN_00164526 ===== */

undefined8 FUN_00164526(void)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  uint local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  char acStack_58 [72];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = __isoc99_scanf(&DAT_0016511b,&local_6c);
  if (local_60 == 1) {
    if (local_6c == 0) {
      puts("0");
      uVar1 = 1;
    }
    else {
      local_68 = 0;
      for (; local_64 = local_68, local_6c != 0; local_6c = local_6c >> 1) {
        local_5c = local_68;
        acStack_58[local_68] = ((byte)local_6c & 1) + 0x30;
        local_68 = local_68 + 1;
      }
      while (local_64 = local_64 + -1, -1 < local_64) {
        putchar((int)acStack_58[local_64]);
      }
      putchar(10);
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== Function: FUN_00164610 ===== */

void FUN_00164610(uint *param_1)

{
  if (param_1 != (uint *)0x0) {
    FUN_00164610(*(undefined8 *)(param_1 + 2));
    FUN_00164610(*(undefined8 *)(param_1 + 4));
    printf("%d ",(ulong)*param_1);
  }
  return;
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


