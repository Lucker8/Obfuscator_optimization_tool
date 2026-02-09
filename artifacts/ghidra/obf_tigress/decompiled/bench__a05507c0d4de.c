/* Ghidra decompiler output (pseudo-C) */


/* ===== Function: _DT_INIT ===== */

void _DT_INIT(void)

{
  if (PTR___gmon_start___0013bfe8 != (undefined *)0x0) {
    (*(code *)PTR___gmon_start___0013bfe8)();
  }
  return;
}



/* ===== Function: FUN_00101020 ===== */

void FUN_00101020(void)

{
  (*(code *)PTR_0013bf88)();
  return;
}



/* ===== Function: FUN_001010c0 ===== */

void FUN_001010c0(void)

{
  (*(code *)PTR___cxa_finalize_0013bff8)();
  return;
}



/* ===== Function: free ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0013bf90)();
  return;
}



/* ===== Function: putchar ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0013bf98)();
  return iVar1;
}



/* ===== Function: __stack_chk_fail ===== */

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_0013bfa8)();
  return;
}



/* ===== Function: printf ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0013bfb0)();
  return iVar1;
}



/* ===== Function: memset ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0013bfb8)();
  return pvVar1;
}



/* ===== Function: malloc ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0013bfc0)();
  return pvVar1;
}



/* ===== Function: __isoc99_scanf ===== */

void __isoc99_scanf(void)

{
  (*(code *)PTR___isoc99_scanf_0013bfc8)();
  return;
}



/* ===== Function: exit ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0013bfd0)();
  return;
}



/* ===== Function: FUN_00101160 (decompile failed) ===== */
/* reason: Exception while decompiling 00101160: process: timeout
 */

/* ===== Function: entry ===== */

void processEntry entry(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_0013bfd8)
            (FUN_00101160,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ===== Function: FUN_00137740 ===== */

/* WARNING: Removing unreachable block (ram,0x00137753) */
/* WARNING: Removing unreachable block (ram,0x0013775f) */

void FUN_00137740(void)

{
  return;
}



/* ===== Function: FUN_00137770 ===== */

/* WARNING: Removing unreachable block (ram,0x00137794) */
/* WARNING: Removing unreachable block (ram,0x001377a0) */

void FUN_00137770(void)

{
  return;
}



/* ===== Function: _FINI_0 ===== */

void _FINI_0(void)

{
  if (DAT_0013c020 == '\0') {
    if (PTR___cxa_finalize_0013bff8 != (undefined *)0x0) {
      FUN_001010c0(PTR_LOOP_0013c008);
    }
    FUN_00137740();
    DAT_0013c020 = 1;
    return;
  }
  return;
}



/* ===== Function: _INIT_0 ===== */

void _INIT_0(void)

{
  FUN_00137770();
  return;
}



/* ===== Function: FUN_00137800 ===== */

void FUN_00137800(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  
  if (param_1 < param_2) {
    piVar1 = (int *)(&DAT_0013c0a0 + (long)param_2 * 4);
    do {
      iVar2 = *piVar1;
      iVar5 = param_1 + -1;
      lVar4 = (long)param_1;
      do {
        if (*(int *)(&DAT_0013c0a0 + lVar4 * 4) <= iVar2) {
          iVar5 = iVar5 + 1;
          iVar3 = *(int *)(&DAT_0013c0a0 + (long)iVar5 * 4);
          *(int *)(&DAT_0013c0a0 + (long)iVar5 * 4) = *(int *)(&DAT_0013c0a0 + lVar4 * 4);
          *(int *)(&DAT_0013c0a0 + lVar4 * 4) = iVar3;
        }
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < param_2);
      iVar2 = *(int *)(&DAT_0013c0a4 + (long)iVar5 * 4);
      *(int *)(&DAT_0013c0a4 + (long)iVar5 * 4) = *piVar1;
      *piVar1 = iVar2;
      FUN_00137800(param_1,iVar5);
      param_1 = iVar5 + 2;
    } while (param_1 < param_2);
    return;
  }
  return;
}



/* ===== Function: FUN_00137890 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00137890(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  void *pvVar7;
  size_t __n;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  long in_FS_OFFSET;
  uint local_690;
  int local_68c;
  int local_688 [2];
  undefined8 uStack_680;
  int aiStack_678 [196];
  undefined4 local_368 [202];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = __isoc99_scanf("%d",&local_690);
  if (iVar2 != 1) goto LAB_00137b1d;
  if (local_690 - 1 < 200) {
    lVar10 = 0;
    lVar9 = 0;
    iVar2 = 0;
    while( true ) {
      iVar11 = 0;
      lVar8 = (long)&DAT_001ff5a0 - lVar9;
      do {
        iVar3 = __isoc99_scanf("%d",lVar8);
        if (iVar3 != 1) {
          *(undefined4 *)(lVar8 + lVar9 + lVar10) = 0xffffffff;
        }
        iVar11 = iVar11 + 1;
        lVar8 = lVar8 + 4;
      } while (iVar11 < (int)local_690);
      iVar2 = iVar2 + 1;
      if ((int)local_690 <= iVar2) break;
      lVar9 = lVar9 + -800;
      lVar10 = lVar10 + 800;
    }
    iVar2 = __isoc99_scanf("%d");
    uVar1 = local_690;
    if (iVar2 == 1) {
      if ((-1 < local_68c) && (local_68c < (int)local_690)) {
        uVar4 = 1;
        if (0 < (int)local_690) {
          uVar4 = local_690;
        }
        if ((int)local_690 < 4) {
          uVar5 = 0;
LAB_001379ce:
          local_688[(int)uVar5] = 0x7fffffff;
          if ((int)(uVar5 + 1) < (int)local_690) {
            local_688[(int)(uVar5 + 1)] = 0x7fffffff;
            if ((int)(uVar5 + 2) < (int)local_690) {
              local_688[(int)(uVar5 + 2)] = 0x7fffffff;
            }
          }
        }
        else {
          piVar6 = local_688;
          do {
            *(undefined8 *)piVar6 = _DAT_0013a0a0;
            *(undefined8 *)(piVar6 + 2) = _UNK_0013a0a8;
            piVar6 = piVar6 + 4;
          } while (piVar6 != aiStack_678 + (ulong)((uVar4 >> 2) - 1) * 4);
          uVar5 = uVar4 & 0xfffffffc;
          if ((uVar4 & 3) != 0) goto LAB_001379ce;
        }
        piVar6 = local_688;
        __n = (ulong)local_690 << 2;
        if ((int)local_690 < 1) {
          __n = 4;
        }
        pvVar7 = memset(local_368,0,__n);
        iVar2 = 0;
        local_688[local_68c] = 0;
        do {
          lVar9 = 0;
          lVar10 = -1;
          iVar11 = 0x7fffffff;
          do {
            if ((*(int *)((long)pvVar7 + lVar9 * 4) == 0) && (piVar6[lVar9] < iVar11)) {
              lVar10 = (long)(int)lVar9;
              iVar11 = piVar6[lVar9];
            }
            lVar9 = lVar9 + 1;
          } while ((int)lVar9 < (int)uVar1);
          if ((int)lVar10 == -1) break;
          local_368[lVar10] = 1;
          lVar9 = 0;
          do {
            if ((((-1 < (int)(&DAT_001ff5a0)[lVar10 * 200 + lVar9]) &&
                 (*(int *)((long)pvVar7 + lVar9 * 4) == 0)) && (local_688[lVar10] != 0x7fffffff)) &&
               (iVar11 = (&DAT_001ff5a0)[lVar10 * 200 + lVar9] + local_688[lVar10],
               iVar11 < piVar6[lVar9])) {
              piVar6[lVar9] = iVar11;
            }
            lVar9 = lVar9 + 1;
          } while ((int)lVar9 < (int)uVar1);
          iVar2 = iVar2 + 1;
        } while (iVar2 < (int)uVar1);
        iVar2 = 0;
        do {
          if (*piVar6 == 0x7fffffff) {
            printf("INF");
          }
          else {
            printf("%d");
          }
          iVar2 = iVar2 + 1;
          if ((int)local_690 <= iVar2) break;
          piVar6 = piVar6 + 1;
          putchar(0x20);
        } while (iVar2 < (int)local_690);
      }
    }
  }
  putchar(10);
LAB_00137b1d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== Function: FUN_00137b70 ===== */

void FUN_00137b70(uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *local_48;
  
  local_48 = param_1;
  if (param_1 != (uint *)0x0) {
    do {
      for (puVar1 = *(uint **)(local_48 + 2); puVar1 != (uint *)0x0; puVar1 = *(uint **)(puVar1 + 4)
          ) {
        for (puVar2 = *(uint **)(puVar1 + 2); puVar2 != (uint *)0x0; puVar2 = *(uint **)(puVar2 + 4)
            ) {
          for (puVar3 = *(uint **)(puVar2 + 2); puVar3 != (uint *)0x0;
              puVar3 = *(uint **)(puVar3 + 4)) {
            for (puVar4 = *(uint **)(puVar3 + 2); puVar4 != (uint *)0x0;
                puVar4 = *(uint **)(puVar4 + 4)) {
              for (puVar5 = *(uint **)(puVar4 + 2); puVar5 != (uint *)0x0;
                  puVar5 = *(uint **)(puVar5 + 4)) {
                for (puVar6 = *(uint **)(puVar5 + 2); puVar6 != (uint *)0x0;
                    puVar6 = *(uint **)(puVar6 + 4)) {
                  for (puVar7 = *(uint **)(puVar6 + 2); puVar7 != (uint *)0x0;
                      puVar7 = *(uint **)(puVar7 + 4)) {
                    for (puVar8 = *(uint **)(puVar7 + 2); puVar8 != (uint *)0x0;
                        puVar8 = *(uint **)(puVar8 + 4)) {
                      FUN_00137b70(*(undefined8 *)(puVar8 + 2));
                      printf("%d ",(ulong)*puVar8);
                    }
                    printf("%d ",(ulong)*puVar7);
                  }
                  printf("%d ",(ulong)*puVar6);
                }
                printf("%d ",(ulong)*puVar5);
              }
              printf("%d ",(ulong)*puVar4);
            }
            printf("%d ",(ulong)*puVar3);
          }
          printf("%d ",(ulong)*puVar2);
        }
        printf("%d ",(ulong)*puVar1);
      }
      printf("%d ",(ulong)*local_48);
      local_48 = *(uint **)(local_48 + 4);
    } while (local_48 != (uint *)0x0);
  }
  return;
}



/* ===== Function: FUN_00137d30 ===== */

void FUN_00137d30(uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *local_48;
  
  local_48 = param_1;
  if (param_1 != (uint *)0x0) {
    do {
      printf("%d ",(ulong)*local_48);
      for (puVar1 = *(uint **)(local_48 + 2); puVar1 != (uint *)0x0; puVar1 = *(uint **)(puVar1 + 4)
          ) {
        printf("%d ",(ulong)*puVar1);
        for (puVar2 = *(uint **)(puVar1 + 2); puVar2 != (uint *)0x0; puVar2 = *(uint **)(puVar2 + 4)
            ) {
          printf("%d ",(ulong)*puVar2);
          for (puVar3 = *(uint **)(puVar2 + 2); puVar3 != (uint *)0x0;
              puVar3 = *(uint **)(puVar3 + 4)) {
            printf("%d ",(ulong)*puVar3);
            for (puVar4 = *(uint **)(puVar3 + 2); puVar4 != (uint *)0x0;
                puVar4 = *(uint **)(puVar4 + 4)) {
              printf("%d ",(ulong)*puVar4);
              for (puVar5 = *(uint **)(puVar4 + 2); puVar5 != (uint *)0x0;
                  puVar5 = *(uint **)(puVar5 + 4)) {
                printf("%d ",(ulong)*puVar5);
                for (puVar6 = *(uint **)(puVar5 + 2); puVar6 != (uint *)0x0;
                    puVar6 = *(uint **)(puVar6 + 4)) {
                  printf("%d ",(ulong)*puVar6);
                  for (puVar7 = *(uint **)(puVar6 + 2); puVar7 != (uint *)0x0;
                      puVar7 = *(uint **)(puVar7 + 4)) {
                    printf("%d ",(ulong)*puVar7);
                    for (puVar8 = *(uint **)(puVar7 + 2); puVar8 != (uint *)0x0;
                        puVar8 = *(uint **)(puVar8 + 4)) {
                      printf("%d ",(ulong)*puVar8);
                      FUN_00137d30(*(undefined8 *)(puVar8 + 2));
                    }
                  }
                }
              }
            }
          }
        }
      }
      local_48 = *(uint **)(local_48 + 4);
    } while (local_48 != (uint *)0x0);
  }
  return;
}



/* ===== Function: FUN_00137ef0 ===== */

void FUN_00137ef0(void *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  
  if (param_1 != (void *)0x0) {
    pvVar1 = *(void **)((long)param_1 + 8);
    if (pvVar1 != (void *)0x0) {
      pvVar2 = *(void **)((long)pvVar1 + 8);
      if (pvVar2 != (void *)0x0) {
        pvVar3 = *(void **)((long)pvVar2 + 8);
        if (pvVar3 != (void *)0x0) {
          pvVar4 = *(void **)((long)pvVar3 + 8);
          if (pvVar4 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar4 + 8);
            if (pvVar5 != (void *)0x0) {
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            free(pvVar4);
          }
          pvVar4 = *(void **)((long)pvVar3 + 0x10);
          if (pvVar4 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar4 + 8);
            if (pvVar5 != (void *)0x0) {
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            free(pvVar4);
          }
          free(pvVar3);
        }
        pvVar3 = *(void **)((long)pvVar2 + 0x10);
        if (pvVar3 != (void *)0x0) {
          pvVar4 = *(void **)((long)pvVar3 + 8);
          if (pvVar4 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar4 + 8);
            if (pvVar5 != (void *)0x0) {
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            free(pvVar4);
          }
          pvVar4 = *(void **)((long)pvVar3 + 0x10);
          if (pvVar4 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar4 + 8);
            if (pvVar5 != (void *)0x0) {
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            free(pvVar4);
          }
          free(pvVar3);
        }
        free(pvVar2);
      }
      pvVar2 = *(void **)((long)pvVar1 + 0x10);
      if (pvVar2 != (void *)0x0) {
        pvVar3 = *(void **)((long)pvVar2 + 8);
        if (pvVar3 != (void *)0x0) {
          pvVar4 = *(void **)((long)pvVar3 + 8);
          if (pvVar4 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar4 + 8);
            if (pvVar5 != (void *)0x0) {
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            free(pvVar4);
          }
          pvVar4 = *(void **)((long)pvVar3 + 0x10);
          if (pvVar4 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar4 + 8);
            if (pvVar5 != (void *)0x0) {
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            free(pvVar4);
          }
          free(pvVar3);
        }
        pvVar3 = *(void **)((long)pvVar2 + 0x10);
        if (pvVar3 != (void *)0x0) {
          pvVar4 = *(void **)((long)pvVar3 + 8);
          if (pvVar4 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar4 + 8);
            if (pvVar5 != (void *)0x0) {
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            free(pvVar4);
          }
          pvVar4 = *(void **)((long)pvVar3 + 0x10);
          if (pvVar4 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar4 + 8);
            if (pvVar5 != (void *)0x0) {
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            free(pvVar4);
          }
          free(pvVar3);
        }
        free(pvVar2);
      }
      free(pvVar1);
    }
    pvVar1 = *(void **)((long)param_1 + 0x10);
    if (pvVar1 != (void *)0x0) {
      pvVar2 = *(void **)((long)pvVar1 + 8);
      if (pvVar2 != (void *)0x0) {
        pvVar3 = *(void **)((long)pvVar2 + 8);
        if (pvVar3 != (void *)0x0) {
          pvVar4 = *(void **)((long)pvVar3 + 8);
          if (pvVar4 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar4 + 8);
            if (pvVar5 != (void *)0x0) {
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            free(pvVar4);
          }
          pvVar4 = *(void **)((long)pvVar3 + 0x10);
          if (pvVar4 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar4 + 8);
            if (pvVar5 != (void *)0x0) {
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            free(pvVar4);
          }
          free(pvVar3);
        }
        pvVar3 = *(void **)((long)pvVar2 + 0x10);
        if (pvVar3 != (void *)0x0) {
          pvVar4 = *(void **)((long)pvVar3 + 8);
          if (pvVar4 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar4 + 8);
            if (pvVar5 != (void *)0x0) {
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            free(pvVar4);
          }
          pvVar4 = *(void **)((long)pvVar3 + 0x10);
          if (pvVar4 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar4 + 8);
            if (pvVar5 != (void *)0x0) {
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            free(pvVar4);
          }
          free(pvVar3);
        }
        free(pvVar2);
      }
      pvVar2 = *(void **)((long)pvVar1 + 0x10);
      if (pvVar2 != (void *)0x0) {
        pvVar3 = *(void **)((long)pvVar2 + 8);
        if (pvVar3 != (void *)0x0) {
          pvVar4 = *(void **)((long)pvVar3 + 8);
          if (pvVar4 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar4 + 8);
            if (pvVar5 != (void *)0x0) {
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            free(pvVar4);
          }
          pvVar4 = *(void **)((long)pvVar3 + 0x10);
          if (pvVar4 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar4 + 8);
            if (pvVar5 != (void *)0x0) {
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            free(pvVar4);
          }
          free(pvVar3);
        }
        pvVar3 = *(void **)((long)pvVar2 + 0x10);
        if (pvVar3 != (void *)0x0) {
          pvVar4 = *(void **)((long)pvVar3 + 8);
          if (pvVar4 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar4 + 8);
            if (pvVar5 != (void *)0x0) {
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            free(pvVar4);
          }
          pvVar4 = *(void **)((long)pvVar3 + 0x10);
          if (pvVar4 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar4 + 8);
            if (pvVar5 != (void *)0x0) {
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137ef0(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            free(pvVar4);
          }
          free(pvVar3);
        }
        free(pvVar2);
      }
      free(pvVar1);
    }
    free(param_1);
    return;
  }
  return;
}



/* ===== Function: FUN_001385d0 ===== */

void FUN_001385d0(uint *param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  
  if (param_1 != (uint *)0x0) {
    puVar1 = *(uint **)(param_1 + 2);
    if (puVar1 != (uint *)0x0) {
      puVar2 = *(uint **)(puVar1 + 2);
      if (puVar2 != (uint *)0x0) {
        puVar3 = *(uint **)(puVar2 + 2);
        if (puVar3 != (uint *)0x0) {
          puVar4 = *(uint **)(puVar3 + 2);
          if (puVar4 != (uint *)0x0) {
            puVar5 = *(uint **)(puVar4 + 2);
            if (puVar5 != (uint *)0x0) {
              FUN_001385d0(*(undefined8 *)(puVar5 + 2));
              FUN_001385d0(*(undefined8 *)(puVar5 + 4));
              printf("%d ",(ulong)*puVar5);
            }
            puVar5 = *(uint **)(puVar4 + 4);
            if (puVar5 != (uint *)0x0) {
              FUN_001385d0(*(undefined8 *)(puVar5 + 2));
              FUN_001385d0(*(undefined8 *)(puVar5 + 4));
              printf("%d ",(ulong)*puVar5);
            }
            printf("%d ",(ulong)*puVar4);
          }
          puVar4 = *(uint **)(puVar3 + 4);
          if (puVar4 != (uint *)0x0) {
            puVar5 = *(uint **)(puVar4 + 2);
            if (puVar5 != (uint *)0x0) {
              FUN_001385d0(*(undefined8 *)(puVar5 + 2));
              FUN_001385d0(*(undefined8 *)(puVar5 + 4));
              printf("%d ",(ulong)*puVar5);
            }
            puVar5 = *(uint **)(puVar4 + 4);
            if (puVar5 != (uint *)0x0) {
              FUN_001385d0(*(undefined8 *)(puVar5 + 2));
              FUN_001385d0(*(undefined8 *)(puVar5 + 4));
              printf("%d ",(ulong)*puVar5);
            }
            printf("%d ",(ulong)*puVar4);
          }
          printf("%d ",(ulong)*puVar3);
        }
        puVar3 = *(uint **)(puVar2 + 4);
        if (puVar3 != (uint *)0x0) {
          puVar4 = *(uint **)(puVar3 + 2);
          if (puVar4 != (uint *)0x0) {
            puVar5 = *(uint **)(puVar4 + 2);
            if (puVar5 != (uint *)0x0) {
              FUN_001385d0(*(undefined8 *)(puVar5 + 2));
              FUN_001385d0(*(undefined8 *)(puVar5 + 4));
              printf("%d ",(ulong)*puVar5);
            }
            puVar5 = *(uint **)(puVar4 + 4);
            if (puVar5 != (uint *)0x0) {
              FUN_001385d0(*(undefined8 *)(puVar5 + 2));
              FUN_001385d0(*(undefined8 *)(puVar5 + 4));
              printf("%d ",(ulong)*puVar5);
            }
            printf("%d ",(ulong)*puVar4);
          }
          puVar4 = *(uint **)(puVar3 + 4);
          if (puVar4 != (uint *)0x0) {
            FUN_001385d0(*(undefined8 *)(puVar4 + 2));
            FUN_001385d0(*(undefined8 *)(puVar4 + 4));
            printf("%d ",(ulong)*puVar4);
          }
          printf("%d ",(ulong)*puVar3);
        }
        printf("%d ",(ulong)*puVar2);
      }
      puVar2 = *(uint **)(puVar1 + 4);
      if (puVar2 != (uint *)0x0) {
        puVar3 = *(uint **)(puVar2 + 2);
        if (puVar3 != (uint *)0x0) {
          puVar4 = *(uint **)(puVar3 + 2);
          if (puVar4 != (uint *)0x0) {
            puVar5 = *(uint **)(puVar4 + 2);
            if (puVar5 != (uint *)0x0) {
              FUN_001385d0(*(undefined8 *)(puVar5 + 2));
              FUN_001385d0(*(undefined8 *)(puVar5 + 4));
              printf("%d ",(ulong)*puVar5);
            }
            puVar5 = *(uint **)(puVar4 + 4);
            if (puVar5 != (uint *)0x0) {
              FUN_001385d0(*(undefined8 *)(puVar5 + 2));
              FUN_001385d0(*(undefined8 *)(puVar5 + 4));
              printf("%d ",(ulong)*puVar5);
            }
            printf("%d ",(ulong)*puVar4);
          }
          puVar4 = *(uint **)(puVar3 + 4);
          if (puVar4 != (uint *)0x0) {
            FUN_001385d0(*(undefined8 *)(puVar4 + 2));
            FUN_001385d0(*(undefined8 *)(puVar4 + 4));
            printf("%d ",(ulong)*puVar4);
          }
          printf("%d ",(ulong)*puVar3);
        }
        puVar3 = *(uint **)(puVar2 + 4);
        if (puVar3 != (uint *)0x0) {
          puVar4 = *(uint **)(puVar3 + 2);
          if (puVar4 != (uint *)0x0) {
            puVar5 = *(uint **)(puVar4 + 2);
            if (puVar5 != (uint *)0x0) {
              FUN_001385d0(*(undefined8 *)(puVar5 + 2));
              FUN_001385d0(*(undefined8 *)(puVar5 + 4));
              printf("%d ",(ulong)*puVar5);
            }
            puVar5 = *(uint **)(puVar4 + 4);
            if (puVar5 != (uint *)0x0) {
              FUN_001385d0(*(undefined8 *)(puVar5 + 2));
              FUN_001385d0(*(undefined8 *)(puVar5 + 4));
              printf("%d ",(ulong)*puVar5);
            }
            printf("%d ",(ulong)*puVar4);
          }
          puVar4 = *(uint **)(puVar3 + 4);
          if (puVar4 != (uint *)0x0) {
            FUN_001385d0(*(undefined8 *)(puVar4 + 2));
            FUN_001385d0(*(undefined8 *)(puVar4 + 4));
            printf("%d ",(ulong)*puVar4);
          }
          printf("%d ",(ulong)*puVar3);
        }
        printf("%d ",(ulong)*puVar2);
      }
      printf("%d ",(ulong)*puVar1);
    }
    puVar1 = *(uint **)(param_1 + 4);
    if (puVar1 != (uint *)0x0) {
      puVar2 = *(uint **)(puVar1 + 2);
      if (puVar2 != (uint *)0x0) {
        puVar3 = *(uint **)(puVar2 + 2);
        if (puVar3 != (uint *)0x0) {
          puVar4 = *(uint **)(puVar3 + 2);
          if (puVar4 != (uint *)0x0) {
            FUN_001385d0(*(undefined8 *)(puVar4 + 2));
            FUN_001385d0(*(undefined8 *)(puVar4 + 4));
            printf("%d ",(ulong)*puVar4);
          }
          puVar4 = *(uint **)(puVar3 + 4);
          if (puVar4 != (uint *)0x0) {
            puVar5 = *(uint **)(puVar4 + 2);
            if (puVar5 != (uint *)0x0) {
              FUN_001385d0(*(undefined8 *)(puVar5 + 2));
              FUN_001385d0(*(undefined8 *)(puVar5 + 4));
              printf("%d ",(ulong)*puVar5);
            }
            puVar5 = *(uint **)(puVar4 + 4);
            if (puVar5 != (uint *)0x0) {
              FUN_001385d0(*(undefined8 *)(puVar5 + 2));
              FUN_001385d0(*(undefined8 *)(puVar5 + 4));
              printf("%d ",(ulong)*puVar5);
            }
            printf("%d ",(ulong)*puVar4);
          }
          printf("%d ",(ulong)*puVar3);
        }
        puVar3 = *(uint **)(puVar2 + 4);
        if (puVar3 != (uint *)0x0) {
          puVar4 = *(uint **)(puVar3 + 2);
          if (puVar4 != (uint *)0x0) {
            puVar5 = *(uint **)(puVar4 + 2);
            if (puVar5 != (uint *)0x0) {
              FUN_001385d0(*(undefined8 *)(puVar5 + 2));
              FUN_001385d0(*(undefined8 *)(puVar5 + 4));
              printf("%d ",(ulong)*puVar5);
            }
            puVar5 = *(uint **)(puVar4 + 4);
            if (puVar5 != (uint *)0x0) {
              FUN_001385d0(*(undefined8 *)(puVar5 + 2));
              FUN_001385d0(*(undefined8 *)(puVar5 + 4));
              printf("%d ",(ulong)*puVar5);
            }
            printf("%d ",(ulong)*puVar4);
          }
          puVar4 = *(uint **)(puVar3 + 4);
          if (puVar4 != (uint *)0x0) {
            puVar5 = *(uint **)(puVar4 + 2);
            if (puVar5 != (uint *)0x0) {
              FUN_001385d0(*(undefined8 *)(puVar5 + 2));
              FUN_001385d0(*(undefined8 *)(puVar5 + 4));
              printf("%d ",(ulong)*puVar5);
            }
            puVar5 = *(uint **)(puVar4 + 4);
            if (puVar5 != (uint *)0x0) {
              FUN_001385d0(*(undefined8 *)(puVar5 + 2));
              FUN_001385d0(*(undefined8 *)(puVar5 + 4));
              printf("%d ",(ulong)*puVar5);
            }
            printf("%d ",(ulong)*puVar4);
          }
          printf("%d ",(ulong)*puVar3);
        }
        printf("%d ",(ulong)*puVar2);
      }
      puVar2 = *(uint **)(puVar1 + 4);
      if (puVar2 != (uint *)0x0) {
        puVar3 = *(uint **)(puVar2 + 2);
        if (puVar3 != (uint *)0x0) {
          puVar4 = *(uint **)(puVar3 + 2);
          if (puVar4 != (uint *)0x0) {
            puVar5 = *(uint **)(puVar4 + 2);
            if (puVar5 != (uint *)0x0) {
              FUN_001385d0(*(undefined8 *)(puVar5 + 2));
              FUN_001385d0(*(undefined8 *)(puVar5 + 4));
              printf("%d ",(ulong)*puVar5);
            }
            puVar5 = *(uint **)(puVar4 + 4);
            if (puVar5 != (uint *)0x0) {
              FUN_001385d0(*(undefined8 *)(puVar5 + 2));
              FUN_001385d0(*(undefined8 *)(puVar5 + 4));
              printf("%d ",(ulong)*puVar5);
            }
            printf("%d ",(ulong)*puVar4);
          }
          puVar4 = *(uint **)(puVar3 + 4);
          if (puVar4 != (uint *)0x0) {
            puVar5 = *(uint **)(puVar4 + 2);
            if (puVar5 != (uint *)0x0) {
              FUN_001385d0(*(undefined8 *)(puVar5 + 2));
              FUN_001385d0(*(undefined8 *)(puVar5 + 4));
              printf("%d ",(ulong)*puVar5);
            }
            FUN_001385d0(*(undefined8 *)(puVar4 + 4));
            printf("%d ",(ulong)*puVar4);
          }
          printf("%d ",(ulong)*puVar3);
        }
        puVar3 = *(uint **)(puVar2 + 4);
        if (puVar3 != (uint *)0x0) {
          puVar4 = *(uint **)(puVar3 + 2);
          if (puVar4 != (uint *)0x0) {
            FUN_001385d0(*(undefined8 *)(puVar4 + 2));
            FUN_001385d0(*(undefined8 *)(puVar4 + 4));
            printf("%d ",(ulong)*puVar4);
          }
          puVar4 = *(uint **)(puVar3 + 4);
          if (puVar4 != (uint *)0x0) {
            puVar5 = *(uint **)(puVar4 + 2);
            if (puVar5 != (uint *)0x0) {
              FUN_001385d0(*(undefined8 *)(puVar5 + 2));
              FUN_001385d0(*(undefined8 *)(puVar5 + 4));
              printf("%d ",(ulong)*puVar5);
            }
            puVar5 = *(uint **)(puVar4 + 4);
            if (puVar5 != (uint *)0x0) {
              FUN_001385d0(*(undefined8 *)(puVar5 + 2));
              FUN_001385d0(*(undefined8 *)(puVar5 + 4));
              printf("%d ",(ulong)*puVar5);
            }
            printf("%d ",(ulong)*puVar4);
          }
          printf("%d ",(ulong)*puVar3);
        }
        printf("%d ",(ulong)*puVar2);
      }
      printf("%d ",(ulong)*puVar1);
    }
    printf("%d ",(ulong)*param_1);
    return;
  }
  return;
}



/* ===== Function: FUN_00138dc0 ===== */

int * FUN_00138dc0(int *param_1,int param_2)

{
  undefined8 uVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_1 == (int *)0x0) {
    param_1 = (int *)malloc(0x18);
    if (param_1 == (int *)0x0) {
LAB_00139089:
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    *param_1 = param_2;
    *(undefined1 (*) [16])(param_1 + 2) = (undefined1  [16])0x0;
  }
  else {
    if (*param_1 <= param_2) {
      piVar3 = *(int **)(param_1 + 4);
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)malloc(0x18);
        if (piVar3 == (int *)0x0) goto LAB_00139089;
        *(undefined1 (*) [16])(piVar3 + 2) = (undefined1  [16])0x0;
        *piVar3 = param_2;
      }
      else if (param_2 < *piVar3) {
        piVar2 = *(int **)(piVar3 + 2);
        if (piVar2 == (int *)0x0) {
          piVar2 = (int *)malloc(0x18);
          if (piVar2 == (int *)0x0) goto LAB_00139089;
          *(undefined1 (*) [16])(piVar2 + 2) = (undefined1  [16])0x0;
          *piVar2 = param_2;
        }
        else if (param_2 < *piVar2) {
          uVar1 = FUN_00138dc0(*(undefined8 *)(piVar2 + 2));
          *(undefined8 *)(piVar2 + 2) = uVar1;
        }
        else {
          uVar1 = FUN_00138dc0(*(undefined8 *)(piVar2 + 4));
          *(undefined8 *)(piVar2 + 4) = uVar1;
        }
        *(int **)(piVar3 + 2) = piVar2;
      }
      else {
        piVar2 = *(int **)(piVar3 + 4);
        if (piVar2 == (int *)0x0) {
          piVar2 = (int *)malloc(0x18);
          if (piVar2 == (int *)0x0) goto LAB_00139089;
          *(undefined1 (*) [16])(piVar2 + 2) = (undefined1  [16])0x0;
          *piVar2 = param_2;
        }
        else if (param_2 < *piVar2) {
          uVar1 = FUN_00138dc0(*(undefined8 *)(piVar2 + 2));
          *(undefined8 *)(piVar2 + 2) = uVar1;
        }
        else {
          uVar1 = FUN_00138dc0(*(undefined8 *)(piVar2 + 4));
          *(undefined8 *)(piVar2 + 4) = uVar1;
        }
        *(int **)(piVar3 + 4) = piVar2;
      }
      *(int **)(param_1 + 4) = piVar3;
      return param_1;
    }
    piVar3 = *(int **)(param_1 + 2);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)malloc(0x18);
      if (piVar3 == (int *)0x0) goto LAB_00139089;
      *(undefined1 (*) [16])(piVar3 + 2) = (undefined1  [16])0x0;
      *piVar3 = param_2;
    }
    else if (param_2 < *piVar3) {
      piVar2 = *(int **)(piVar3 + 2);
      if (piVar2 == (int *)0x0) {
        piVar2 = (int *)malloc(0x18);
        if (piVar2 == (int *)0x0) goto LAB_00139089;
        *(undefined1 (*) [16])(piVar2 + 2) = (undefined1  [16])0x0;
        *piVar2 = param_2;
      }
      else if (param_2 < *piVar2) {
        uVar1 = FUN_00138dc0(*(undefined8 *)(piVar2 + 2));
        *(undefined8 *)(piVar2 + 2) = uVar1;
      }
      else {
        uVar1 = FUN_00138dc0(*(undefined8 *)(piVar2 + 4));
        *(undefined8 *)(piVar2 + 4) = uVar1;
      }
      *(int **)(piVar3 + 2) = piVar2;
    }
    else {
      piVar2 = *(int **)(piVar3 + 4);
      if (piVar2 == (int *)0x0) {
        piVar2 = (int *)malloc(0x18);
        if (piVar2 == (int *)0x0) goto LAB_00139089;
        *(undefined1 (*) [16])(piVar2 + 2) = (undefined1  [16])0x0;
        *piVar2 = param_2;
      }
      else if (param_2 < *piVar2) {
        uVar1 = FUN_00138dc0(*(undefined8 *)(piVar2 + 2));
        *(undefined8 *)(piVar2 + 2) = uVar1;
      }
      else {
        uVar1 = FUN_00138dc0(*(undefined8 *)(piVar2 + 4));
        *(undefined8 *)(piVar2 + 4) = uVar1;
      }
      *(int **)(piVar3 + 4) = piVar2;
    }
    *(int **)(param_1 + 2) = piVar3;
  }
  return param_1;
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



/* ===== Function: memset ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

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


