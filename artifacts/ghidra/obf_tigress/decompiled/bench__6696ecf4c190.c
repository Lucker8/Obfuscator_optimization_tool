/* Ghidra decompiler output (pseudo-C) */


/* ===== Function: _DT_INIT ===== */

void _DT_INIT(void)

{
  if (PTR___gmon_start___0013afe8 != (undefined *)0x0) {
    (*(code *)PTR___gmon_start___0013afe8)();
  }
  return;
}



/* ===== Function: FUN_00101020 ===== */

void FUN_00101020(void)

{
  (*(code *)PTR_0013af88)();
  return;
}



/* ===== Function: FUN_001010c0 ===== */

void FUN_001010c0(void)

{
  (*(code *)PTR___cxa_finalize_0013aff8)();
  return;
}



/* ===== Function: free ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0013af90)();
  return;
}



/* ===== Function: putchar ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0013af98)();
  return iVar1;
}



/* ===== Function: __stack_chk_fail ===== */

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_0013afa8)();
  return;
}



/* ===== Function: printf ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0013afb0)();
  return iVar1;
}



/* ===== Function: memset ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_0013afb8)();
  return pvVar1;
}



/* ===== Function: malloc ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0013afc0)();
  return pvVar1;
}



/* ===== Function: __isoc99_scanf ===== */

void __isoc99_scanf(void)

{
  (*(code *)PTR___isoc99_scanf_0013afc8)();
  return;
}



/* ===== Function: exit ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_0013afd0)();
  return;
}



/* ===== Function: FUN_00101160 (decompile failed) ===== */
/* reason: Exception while decompiling 00101160: process: timeout
 */

/* ===== Function: entry ===== */

void processEntry entry(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_0013afd8)
            (FUN_00101160,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ===== Function: FUN_00137670 ===== */

/* WARNING: Removing unreachable block (ram,0x00137683) */
/* WARNING: Removing unreachable block (ram,0x0013768f) */

void FUN_00137670(void)

{
  return;
}



/* ===== Function: FUN_001376a0 ===== */

/* WARNING: Removing unreachable block (ram,0x001376c4) */
/* WARNING: Removing unreachable block (ram,0x001376d0) */

void FUN_001376a0(void)

{
  return;
}



/* ===== Function: _FINI_0 ===== */

void _FINI_0(void)

{
  if (DAT_0013b020 == '\0') {
    if (PTR___cxa_finalize_0013aff8 != (undefined *)0x0) {
      FUN_001010c0(PTR_LOOP_0013b008);
    }
    FUN_00137670();
    DAT_0013b020 = 1;
    return;
  }
  return;
}



/* ===== Function: _INIT_0 ===== */

void _INIT_0(void)

{
  FUN_001376a0();
  return;
}



/* ===== Function: FUN_00137730 ===== */

int * FUN_00137730(int *param_1,int param_2)

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
  else {
    if (param_2 < *param_1) {
      uVar1 = FUN_00137730(*(undefined8 *)(param_1 + 2));
      *(undefined8 *)(param_1 + 2) = uVar1;
      return param_1;
    }
    uVar1 = FUN_00137730(*(undefined8 *)(param_1 + 4));
    *(undefined8 *)(param_1 + 4) = uVar1;
  }
  return param_1;
}



/* ===== Function: FUN_001377c0 ===== */

void FUN_001377c0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  
  if (param_1 < param_2) {
    piVar1 = (int *)(&DAT_0013b0a0 + (long)param_2 * 4);
    do {
      iVar2 = *piVar1;
      iVar5 = param_1 + -1;
      lVar4 = (long)param_1;
      do {
        if (*(int *)(&DAT_0013b0a0 + lVar4 * 4) <= iVar2) {
          iVar5 = iVar5 + 1;
          iVar3 = *(int *)(&DAT_0013b0a0 + (long)iVar5 * 4);
          *(int *)(&DAT_0013b0a0 + (long)iVar5 * 4) = *(int *)(&DAT_0013b0a0 + lVar4 * 4);
          *(int *)(&DAT_0013b0a0 + lVar4 * 4) = iVar3;
        }
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < param_2);
      iVar2 = *(int *)(&DAT_0013b0a4 + (long)iVar5 * 4);
      *(int *)(&DAT_0013b0a4 + (long)iVar5 * 4) = *piVar1;
      *piVar1 = iVar2;
      FUN_001377c0(param_1,iVar5);
      param_1 = iVar5 + 2;
    } while (param_1 < param_2);
    return;
  }
  return;
}



/* ===== Function: FUN_00137850 ===== */

void FUN_00137850(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long in_FS_OFFSET;
  byte bVar11;
  int local_690;
  int local_68c;
  int local_688 [200];
  int local_368 [202];
  long local_40;
  
  bVar11 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = __isoc99_scanf("%d",&local_690);
  if (iVar1 == 1) {
    if (local_690 - 1U < 200) {
      lVar9 = 0;
      lVar8 = 0;
      iVar1 = 0;
      do {
        iVar10 = 0;
        lVar5 = (long)&DAT_001fe5a0 - lVar8;
        do {
          iVar2 = __isoc99_scanf("%d",lVar5);
          if (iVar2 != 1) {
            *(undefined4 *)(lVar5 + lVar8 + lVar9) = 0xffffffff;
          }
          iVar10 = iVar10 + 1;
          lVar5 = lVar5 + 4;
        } while (iVar10 < local_690);
        iVar1 = iVar1 + 1;
        lVar8 = lVar8 + -800;
        lVar9 = lVar9 + 800;
      } while ((iVar1 < local_690) && (0 < local_690));
      iVar1 = __isoc99_scanf("%d",&local_68c);
      if (iVar1 == 1) {
        if ((-1 < local_68c) && (local_68c < local_690)) {
          lVar8 = 0;
          piVar6 = local_688;
          do {
            piVar6[lVar8] = 0x7fffffff;
            lVar8 = lVar8 + 1;
          } while ((int)lVar8 < local_690);
          uVar3 = local_690 << 2;
          if (local_690 < 1) {
            uVar3 = 4;
          }
          piVar7 = local_368;
          if (7 < uVar3) {
            for (uVar4 = (ulong)(uVar3 >> 3); uVar4 != 0; uVar4 = uVar4 - 1) {
              piVar7[0] = 0;
              piVar7[1] = 0;
              piVar7 = piVar7 + ((ulong)bVar11 * -2 + 1) * 2;
            }
          }
          if ((uVar3 & 4) != 0) {
            *piVar7 = 0;
          }
          local_688[local_68c] = 0;
          iVar1 = 0;
          do {
            lVar8 = 0;
            lVar9 = -1;
            iVar10 = 0x7fffffff;
            do {
              if ((local_368[lVar8] == 0) && (piVar6[lVar8] < iVar10)) {
                lVar9 = (long)(int)lVar8;
                iVar10 = piVar6[lVar8];
              }
              lVar8 = lVar8 + 1;
            } while ((int)lVar8 < local_690);
            if ((int)lVar9 == -1) break;
            local_368[lVar9] = 1;
            lVar8 = 0;
            do {
              if ((((-1 < (int)(&DAT_001fe5a0)[lVar9 * 200 + lVar8]) && (local_368[lVar8] == 0)) &&
                  (local_688[lVar9] != 0x7fffffff)) &&
                 (iVar10 = (&DAT_001fe5a0)[lVar9 * 200 + lVar8] + local_688[lVar9],
                 iVar10 < piVar6[lVar8])) {
                piVar6[lVar8] = iVar10;
              }
              lVar8 = lVar8 + 1;
            } while ((int)lVar8 < local_690);
            iVar1 = iVar1 + 1;
          } while (iVar1 < local_690);
          iVar1 = 0;
          do {
            if (*piVar6 == 0x7fffffff) {
              printf("INF");
            }
            else {
              printf("%d");
            }
            iVar1 = iVar1 + 1;
            if (local_690 <= iVar1) break;
            piVar6 = piVar6 + 1;
            putchar(0x20);
          } while (iVar1 < local_690);
        }
      }
    }
    putchar(10);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ===== Function: FUN_00137ad0 ===== */

void FUN_00137ad0(uint *param_1)

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
                      FUN_00137ad0(*(undefined8 *)(puVar8 + 2));
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



/* ===== Function: FUN_00137c90 ===== */

void FUN_00137c90(uint *param_1)

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
                      FUN_00137c90(*(undefined8 *)(puVar8 + 2));
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



/* ===== Function: FUN_00137e50 ===== */

void FUN_00137e50(void *param_1)

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
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            free(pvVar4);
          }
          pvVar4 = *(void **)((long)pvVar3 + 0x10);
          if (pvVar4 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar4 + 8);
            if (pvVar5 != (void *)0x0) {
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 0x10));
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
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            free(pvVar4);
          }
          pvVar4 = *(void **)((long)pvVar3 + 0x10);
          if (pvVar4 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar4 + 8);
            if (pvVar5 != (void *)0x0) {
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 0x10));
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
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            free(pvVar4);
          }
          pvVar4 = *(void **)((long)pvVar3 + 0x10);
          if (pvVar4 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar4 + 8);
            if (pvVar5 != (void *)0x0) {
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 0x10));
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
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            free(pvVar4);
          }
          pvVar4 = *(void **)((long)pvVar3 + 0x10);
          if (pvVar4 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar4 + 8);
            if (pvVar5 != (void *)0x0) {
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 0x10));
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
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            free(pvVar4);
          }
          pvVar4 = *(void **)((long)pvVar3 + 0x10);
          if (pvVar4 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar4 + 8);
            if (pvVar5 != (void *)0x0) {
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 0x10));
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
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            free(pvVar4);
          }
          pvVar4 = *(void **)((long)pvVar3 + 0x10);
          if (pvVar4 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar4 + 8);
            if (pvVar5 != (void *)0x0) {
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 0x10));
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
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            free(pvVar4);
          }
          pvVar4 = *(void **)((long)pvVar3 + 0x10);
          if (pvVar4 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar4 + 8);
            if (pvVar5 != (void *)0x0) {
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 0x10));
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
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            free(pvVar4);
          }
          pvVar4 = *(void **)((long)pvVar3 + 0x10);
          if (pvVar4 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar4 + 8);
            if (pvVar5 != (void *)0x0) {
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00137e50(*(undefined8 *)((long)pvVar5 + 0x10));
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



/* ===== Function: FUN_00138530 ===== */

void FUN_00138530(uint *param_1)

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
              FUN_00138530(*(undefined8 *)(puVar5 + 2));
              FUN_00138530(*(undefined8 *)(puVar5 + 4));
              printf("%d ",(ulong)*puVar5);
            }
            puVar5 = *(uint **)(puVar4 + 4);
            if (puVar5 != (uint *)0x0) {
              FUN_00138530(*(undefined8 *)(puVar5 + 2));
              FUN_00138530(*(undefined8 *)(puVar5 + 4));
              printf("%d ",(ulong)*puVar5);
            }
            printf("%d ",(ulong)*puVar4);
          }
          puVar4 = *(uint **)(puVar3 + 4);
          if (puVar4 != (uint *)0x0) {
            puVar5 = *(uint **)(puVar4 + 2);
            if (puVar5 != (uint *)0x0) {
              FUN_00138530(*(undefined8 *)(puVar5 + 2));
              FUN_00138530(*(undefined8 *)(puVar5 + 4));
              printf("%d ",(ulong)*puVar5);
            }
            puVar5 = *(uint **)(puVar4 + 4);
            if (puVar5 != (uint *)0x0) {
              FUN_00138530(*(undefined8 *)(puVar5 + 2));
              FUN_00138530(*(undefined8 *)(puVar5 + 4));
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
              FUN_00138530(*(undefined8 *)(puVar5 + 2));
              FUN_00138530(*(undefined8 *)(puVar5 + 4));
              printf("%d ",(ulong)*puVar5);
            }
            puVar5 = *(uint **)(puVar4 + 4);
            if (puVar5 != (uint *)0x0) {
              FUN_00138530(*(undefined8 *)(puVar5 + 2));
              FUN_00138530(*(undefined8 *)(puVar5 + 4));
              printf("%d ",(ulong)*puVar5);
            }
            printf("%d ",(ulong)*puVar4);
          }
          puVar4 = *(uint **)(puVar3 + 4);
          if (puVar4 != (uint *)0x0) {
            FUN_00138530(*(undefined8 *)(puVar4 + 2));
            FUN_00138530(*(undefined8 *)(puVar4 + 4));
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
              FUN_00138530(*(undefined8 *)(puVar5 + 2));
              FUN_00138530(*(undefined8 *)(puVar5 + 4));
              printf("%d ",(ulong)*puVar5);
            }
            puVar5 = *(uint **)(puVar4 + 4);
            if (puVar5 != (uint *)0x0) {
              FUN_00138530(*(undefined8 *)(puVar5 + 2));
              FUN_00138530(*(undefined8 *)(puVar5 + 4));
              printf("%d ",(ulong)*puVar5);
            }
            printf("%d ",(ulong)*puVar4);
          }
          puVar4 = *(uint **)(puVar3 + 4);
          if (puVar4 != (uint *)0x0) {
            FUN_00138530(*(undefined8 *)(puVar4 + 2));
            FUN_00138530(*(undefined8 *)(puVar4 + 4));
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
              FUN_00138530(*(undefined8 *)(puVar5 + 2));
              FUN_00138530(*(undefined8 *)(puVar5 + 4));
              printf("%d ",(ulong)*puVar5);
            }
            puVar5 = *(uint **)(puVar4 + 4);
            if (puVar5 != (uint *)0x0) {
              FUN_00138530(*(undefined8 *)(puVar5 + 2));
              FUN_00138530(*(undefined8 *)(puVar5 + 4));
              printf("%d ",(ulong)*puVar5);
            }
            printf("%d ",(ulong)*puVar4);
          }
          puVar4 = *(uint **)(puVar3 + 4);
          if (puVar4 != (uint *)0x0) {
            FUN_00138530(*(undefined8 *)(puVar4 + 2));
            FUN_00138530(*(undefined8 *)(puVar4 + 4));
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
            FUN_00138530(*(undefined8 *)(puVar4 + 2));
            FUN_00138530(*(undefined8 *)(puVar4 + 4));
            printf("%d ",(ulong)*puVar4);
          }
          puVar4 = *(uint **)(puVar3 + 4);
          if (puVar4 != (uint *)0x0) {
            puVar5 = *(uint **)(puVar4 + 2);
            if (puVar5 != (uint *)0x0) {
              FUN_00138530(*(undefined8 *)(puVar5 + 2));
              FUN_00138530(*(undefined8 *)(puVar5 + 4));
              printf("%d ",(ulong)*puVar5);
            }
            puVar5 = *(uint **)(puVar4 + 4);
            if (puVar5 != (uint *)0x0) {
              FUN_00138530(*(undefined8 *)(puVar5 + 2));
              FUN_00138530(*(undefined8 *)(puVar5 + 4));
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
              FUN_00138530(*(undefined8 *)(puVar5 + 2));
              FUN_00138530(*(undefined8 *)(puVar5 + 4));
              printf("%d ",(ulong)*puVar5);
            }
            puVar5 = *(uint **)(puVar4 + 4);
            if (puVar5 != (uint *)0x0) {
              FUN_00138530(*(undefined8 *)(puVar5 + 2));
              FUN_00138530(*(undefined8 *)(puVar5 + 4));
              printf("%d ",(ulong)*puVar5);
            }
            printf("%d ",(ulong)*puVar4);
          }
          puVar4 = *(uint **)(puVar3 + 4);
          if (puVar4 != (uint *)0x0) {
            puVar5 = *(uint **)(puVar4 + 2);
            if (puVar5 != (uint *)0x0) {
              FUN_00138530(*(undefined8 *)(puVar5 + 2));
              FUN_00138530(*(undefined8 *)(puVar5 + 4));
              printf("%d ",(ulong)*puVar5);
            }
            puVar5 = *(uint **)(puVar4 + 4);
            if (puVar5 != (uint *)0x0) {
              FUN_00138530(*(undefined8 *)(puVar5 + 2));
              FUN_00138530(*(undefined8 *)(puVar5 + 4));
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
              FUN_00138530(*(undefined8 *)(puVar5 + 2));
              FUN_00138530(*(undefined8 *)(puVar5 + 4));
              printf("%d ",(ulong)*puVar5);
            }
            puVar5 = *(uint **)(puVar4 + 4);
            if (puVar5 != (uint *)0x0) {
              FUN_00138530(*(undefined8 *)(puVar5 + 2));
              FUN_00138530(*(undefined8 *)(puVar5 + 4));
              printf("%d ",(ulong)*puVar5);
            }
            printf("%d ",(ulong)*puVar4);
          }
          puVar4 = *(uint **)(puVar3 + 4);
          if (puVar4 != (uint *)0x0) {
            puVar5 = *(uint **)(puVar4 + 2);
            if (puVar5 != (uint *)0x0) {
              FUN_00138530(*(undefined8 *)(puVar5 + 2));
              FUN_00138530(*(undefined8 *)(puVar5 + 4));
              printf("%d ",(ulong)*puVar5);
            }
            FUN_00138530(*(undefined8 *)(puVar4 + 4));
            printf("%d ",(ulong)*puVar4);
          }
          printf("%d ",(ulong)*puVar3);
        }
        puVar3 = *(uint **)(puVar2 + 4);
        if (puVar3 != (uint *)0x0) {
          puVar4 = *(uint **)(puVar3 + 2);
          if (puVar4 != (uint *)0x0) {
            FUN_00138530(*(undefined8 *)(puVar4 + 2));
            FUN_00138530(*(undefined8 *)(puVar4 + 4));
            printf("%d ",(ulong)*puVar4);
          }
          puVar4 = *(uint **)(puVar3 + 4);
          if (puVar4 != (uint *)0x0) {
            puVar5 = *(uint **)(puVar4 + 2);
            if (puVar5 != (uint *)0x0) {
              FUN_00138530(*(undefined8 *)(puVar5 + 2));
              FUN_00138530(*(undefined8 *)(puVar5 + 4));
              printf("%d ",(ulong)*puVar5);
            }
            puVar5 = *(uint **)(puVar4 + 4);
            if (puVar5 != (uint *)0x0) {
              FUN_00138530(*(undefined8 *)(puVar5 + 2));
              FUN_00138530(*(undefined8 *)(puVar5 + 4));
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


