/* Ghidra decompiler output (pseudo-C) */


/* ===== Function: _DT_INIT ===== */

void _DT_INIT(void)

{
  if (PTR___gmon_start___00165fe8 != (undefined *)0x0) {
    (*(code *)PTR___gmon_start___00165fe8)();
  }
  return;
}



/* ===== Function: FUN_00101020 ===== */

void FUN_00101020(void)

{
  (*(code *)PTR_00165f90)();
  return;
}



/* ===== Function: FUN_001010b0 ===== */

void FUN_001010b0(void)

{
  (*(code *)PTR___cxa_finalize_00165ff8)();
  return;
}



/* ===== Function: free ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00165f98)();
  return;
}



/* ===== Function: putchar ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_00165fa0)();
  return iVar1;
}



/* ===== Function: __stack_chk_fail ===== */

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00165fb0)();
  return;
}



/* ===== Function: printf ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_00165fb8)();
  return iVar1;
}



/* ===== Function: malloc ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00165fc0)();
  return pvVar1;
}



/* ===== Function: __isoc99_scanf ===== */

void __isoc99_scanf(void)

{
  (*(code *)PTR___isoc99_scanf_00165fc8)();
  return;
}



/* ===== Function: exit ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00165fd0)();
  return;
}



/* ===== Function: entry ===== */

void processEntry entry(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00165fd8)
            (FUN_001016b3,param_2,&stack0x00000008,0,0,param_1,auStack_8);
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
  if (DAT_00166020 == '\0') {
    if (PTR___cxa_finalize_00165ff8 != (undefined *)0x0) {
      FUN_001010b0(PTR_LOOP_00166008);
    }
    FUN_00101170();
    DAT_00166020 = 1;
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

void FUN_00101229(uint *param_1)

{
  if (param_1 != (uint *)0x0) {
    FUN_00101229(*(undefined8 *)(param_1 + 2));
    printf("%d ",(ulong)*param_1);
    FUN_00101229(*(undefined8 *)(param_1 + 4));
    return;
  }
  return;
}



/* ===== Function: FUN_0010125a ===== */

void FUN_0010125a(uint *param_1)

{
  if (param_1 != (uint *)0x0) {
    printf("%d ",(ulong)*param_1);
    FUN_0010125a(*(undefined8 *)(param_1 + 2));
    FUN_0010125a(*(undefined8 *)(param_1 + 4));
    return;
  }
  return;
}



/* ===== Function: FUN_0010128b ===== */

void FUN_0010128b(uint *param_1)

{
  if (param_1 != (uint *)0x0) {
    FUN_0010128b(*(undefined8 *)(param_1 + 2));
    FUN_0010128b(*(undefined8 *)(param_1 + 4));
    printf("%d ",(ulong)*param_1);
    return;
  }
  return;
}



/* ===== Function: FUN_001012bc ===== */

undefined4 FUN_001012bc(void)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  long in_FS_OFFSET;
  undefined4 local_69c;
  int local_690;
  int local_68c;
  int local_688 [200];
  int local_368 [202];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = __isoc99_scanf("%d",&local_690);
  if (iVar1 == 1) {
    local_69c = 1;
    if (local_690 < 1) {
      putchar(10);
    }
    else if (local_690 < 0xc9) {
      lVar9 = 0;
      lVar6 = 0;
      iVar1 = 0;
      do {
        lVar4 = (long)&DAT_002295a0 - lVar6;
        iVar5 = 0;
        if (0 < local_690) {
          do {
            iVar3 = __isoc99_scanf("%d",lVar4);
            if (iVar3 != 1) {
              *(undefined4 *)(lVar4 + lVar6 + lVar9) = 0xffffffff;
            }
            iVar5 = iVar5 + 1;
            lVar4 = lVar4 + 4;
          } while (iVar5 < local_690);
        }
        iVar1 = iVar1 + 1;
        lVar6 = lVar6 + -800;
        lVar9 = lVar9 + 800;
      } while (iVar1 < local_690);
      iVar1 = __isoc99_scanf("%d",&local_68c);
      if (iVar1 == 1) {
        local_69c = 1;
        if (local_68c < 0) {
          putchar(10);
        }
        else {
          lVar6 = 0;
          if (local_68c < local_690) {
            do {
              local_688[lVar6] = 0x7fffffff;
              local_368[lVar6] = 0;
              lVar6 = lVar6 + 1;
            } while ((int)lVar6 < local_690);
            local_688[local_68c] = 0;
            iVar1 = 0;
            do {
              uVar2 = 0;
              uVar7 = 0xffffffff;
              iVar5 = 0x7fffffff;
              do {
                if ((local_368[uVar2] == 0) && (local_688[uVar2] < iVar5)) {
                  uVar7 = uVar2 & 0xffffffff;
                  iVar5 = local_688[uVar2];
                }
                uVar2 = uVar2 + 1;
              } while ((int)uVar2 < local_690);
              iVar5 = (int)uVar7;
              if (iVar5 == -1) break;
              local_368[iVar5] = 1;
              lVar6 = 0;
              do {
                if ((((-1 < *(int *)(&DAT_002295a0 + lVar6 * 4 + (long)iVar5 * 800)) &&
                     (local_368[lVar6] == 0)) && (local_688[iVar5] != 0x7fffffff)) &&
                   (iVar3 = *(int *)(&DAT_002295a0 + lVar6 * 4 + (long)iVar5 * 800) +
                            local_688[iVar5], iVar3 < local_688[lVar6])) {
                  local_688[lVar6] = iVar3;
                }
                lVar6 = lVar6 + 1;
              } while ((int)lVar6 < local_690);
              iVar1 = iVar1 + 1;
            } while (iVar1 < local_690);
            piVar8 = local_688;
            iVar1 = 0;
            do {
              if (*piVar8 == 0x7fffffff) {
                printf("INF");
              }
              else {
                printf("%d");
              }
              iVar1 = iVar1 + 1;
              if (local_690 <= iVar1) break;
              putchar(0x20);
              piVar8 = piVar8 + 1;
            } while (iVar1 < local_690);
            putchar(10);
          }
          else {
            putchar(10);
          }
        }
      }
      else {
        putchar(10);
      }
    }
    else {
      putchar(10);
    }
  }
  else {
    local_69c = 0;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_69c;
}



/* ===== Function: FUN_0010159b ===== */

int * FUN_0010159b(int *param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_1 == (int *)0x0) {
    param_1 = (int *)malloc(0x18);
    if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    *param_1 = param_2;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  else if (param_2 < *param_1) {
    uVar1 = FUN_0010159b(*(undefined8 *)(param_1 + 2));
    *(undefined8 *)(param_1 + 2) = uVar1;
  }
  else {
    uVar1 = FUN_0010159b(*(undefined8 *)(param_1 + 4));
    *(undefined8 *)(param_1 + 4) = uVar1;
  }
  return param_1;
}



/* ===== Function: FUN_00101605 ===== */

void FUN_00101605(void *param_1)

{
  if (param_1 != (void *)0x0) {
    FUN_00101605(*(undefined8 *)((long)param_1 + 8));
    FUN_00101605(*(undefined8 *)((long)param_1 + 0x10));
    free(param_1);
    return;
  }
  return;
}



/* ===== Function: FUN_0010162b ===== */

void FUN_0010162b(long param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = (int)param_2;
  if (param_3 <= iVar6) {
    return;
  }
  piVar1 = (int *)(param_1 + (long)param_3 * 4);
  iVar3 = *piVar1;
  iVar7 = iVar6 + -1;
  piVar5 = (int *)(param_1 + (long)iVar6 * 4);
  do {
    if (*piVar5 <= iVar3) {
      iVar7 = iVar7 + 1;
      piVar2 = (int *)(param_1 + (long)iVar7 * 4);
      iVar4 = *piVar2;
      *piVar2 = *piVar5;
      *piVar5 = iVar4;
    }
    piVar5 = piVar5 + 1;
  } while (piVar5 != (int *)(param_1 + 4 + ((ulong)(uint)((param_3 + -1) - iVar6) + (long)iVar6) * 4
                            ));
  piVar5 = (int *)(param_1 + 4 + (long)iVar7 * 4);
  iVar6 = *piVar5;
  *piVar5 = *piVar1;
  *piVar1 = iVar6;
  FUN_0010162b(param_1,param_2,iVar7);
  FUN_0010162b(param_1,iVar7 + 2,param_3);
  return;
}



/* ===== Function: FUN_001016b3 (decompile failed) ===== */
/* reason: Exception while decompiling 001016b3: process: timeout
 */

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


