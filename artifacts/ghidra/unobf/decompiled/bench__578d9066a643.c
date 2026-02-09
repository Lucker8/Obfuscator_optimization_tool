/* Ghidra decompiler output (pseudo-C) */


/* ===== Function: _DT_INIT ===== */

void _DT_INIT(void)

{
  if (PTR___gmon_start___00103fe8 != (undefined *)0x0) {
    (*(code *)PTR___gmon_start___00103fe8)();
  }
  return;
}



/* ===== Function: FUN_00101020 ===== */

void FUN_00101020(void)

{
  (*(code *)PTR_00103f98)();
  return;
}



/* ===== Function: FUN_001010a0 ===== */

void FUN_001010a0(void)

{
  (*(code *)PTR___cxa_finalize_00103ff8)();
  return;
}



/* ===== Function: free ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00103fa0)();
  return;
}



/* ===== Function: __stack_chk_fail ===== */

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00103fa8)();
  return;
}



/* ===== Function: putc ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putc_00103fb0)();
  return iVar1;
}



/* ===== Function: malloc ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00103fb8)();
  return pvVar1;
}



/* ===== Function: __printf_chk ===== */

void __printf_chk(void)

{
  (*(code *)PTR___printf_chk_00103fc0)();
  return;
}



/* ===== Function: __isoc99_scanf ===== */

void __isoc99_scanf(void)

{
  (*(code *)PTR___isoc99_scanf_00103fc8)();
  return;
}



/* ===== Function: exit ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00103fd0)();
  return;
}



/* ===== Function: entry ===== */

void processEntry entry(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00103fd8)
            (FUN_001016a5,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ===== Function: FUN_00101150 ===== */

/* WARNING: Removing unreachable block (ram,0x00101163) */
/* WARNING: Removing unreachable block (ram,0x0010116f) */

void FUN_00101150(void)

{
  return;
}



/* ===== Function: FUN_00101180 ===== */

/* WARNING: Removing unreachable block (ram,0x001011a4) */
/* WARNING: Removing unreachable block (ram,0x001011b0) */

void FUN_00101180(void)

{
  return;
}



/* ===== Function: _FINI_0 ===== */

void _FINI_0(void)

{
  if (DAT_00104028 == '\0') {
    if (PTR___cxa_finalize_00103ff8 != (undefined *)0x0) {
      FUN_001010a0(PTR_LOOP_00104008);
    }
    FUN_00101150();
    DAT_00104028 = 1;
    return;
  }
  return;
}



/* ===== Function: _INIT_0 ===== */

void _INIT_0(void)

{
  FUN_00101180();
  return;
}



/* ===== Function: FUN_00101209 ===== */

void FUN_00101209(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    FUN_00101209(*(undefined8 *)(param_1 + 2));
    __printf_chk(1,&DAT_00102004,*param_1);
    FUN_00101209(*(undefined8 *)(param_1 + 4));
    return;
  }
  return;
}



/* ===== Function: FUN_0010123f ===== */

void FUN_0010123f(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    __printf_chk(1,&DAT_00102004,*param_1);
    FUN_0010123f(*(undefined8 *)(param_1 + 2));
    FUN_0010123f(*(undefined8 *)(param_1 + 4));
    return;
  }
  return;
}



/* ===== Function: FUN_00101275 ===== */

void FUN_00101275(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    FUN_00101275(*(undefined8 *)(param_1 + 2));
    FUN_00101275(*(undefined8 *)(param_1 + 4));
    __printf_chk(1,&DAT_00102004,*param_1);
    return;
  }
  return;
}



/* ===== Function: FUN_001012ab ===== */

undefined4 FUN_001012ab(void)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long in_FS_OFFSET;
  int local_690;
  int local_68c;
  int local_688 [200];
  int local_368 [202];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = __isoc99_scanf("%d",&local_690);
  uVar4 = 0;
  if (iVar1 == 1) {
    uVar4 = 1;
    if (local_690 - 1U < 200) {
      lVar10 = 0;
      lVar7 = 0;
      iVar1 = 0;
      do {
        lVar5 = (long)&DAT_00104040 - lVar7;
        iVar6 = 0;
        if (0 < local_690) {
          do {
            iVar3 = __isoc99_scanf("%d",lVar5);
            if (iVar3 != 1) {
              *(undefined4 *)(lVar5 + lVar7 + lVar10) = 0xffffffff;
            }
            iVar6 = iVar6 + 1;
            lVar5 = lVar5 + 4;
          } while (iVar6 < local_690);
        }
        iVar1 = iVar1 + 1;
        lVar7 = lVar7 + -800;
        lVar10 = lVar10 + 800;
      } while (iVar1 < local_690);
      iVar1 = __isoc99_scanf("%d",&local_68c);
      if (iVar1 == 1) {
        uVar4 = 1;
        if ((local_68c < 0) || (lVar7 = 0, local_690 <= local_68c)) {
          putc(10,stdout);
        }
        else {
          do {
            local_688[lVar7] = 0x7fffffff;
            local_368[lVar7] = 0;
            lVar7 = lVar7 + 1;
          } while ((int)lVar7 < local_690);
          local_688[local_68c] = 0;
          iVar1 = 0;
          do {
            uVar2 = 0;
            uVar8 = 0xffffffff;
            iVar6 = 0x7fffffff;
            do {
              if ((local_368[uVar2] == 0) && (local_688[uVar2] < iVar6)) {
                uVar8 = uVar2 & 0xffffffff;
                iVar6 = local_688[uVar2];
              }
              uVar2 = uVar2 + 1;
            } while ((int)uVar2 < local_690);
            iVar6 = (int)uVar8;
            if (iVar6 == -1) break;
            local_368[iVar6] = 1;
            lVar7 = 0;
            do {
              if ((((-1 < *(int *)(&DAT_00104040 + lVar7 * 4 + (long)iVar6 * 800)) &&
                   (local_368[lVar7] == 0)) && (local_688[iVar6] != 0x7fffffff)) &&
                 (iVar3 = *(int *)(&DAT_00104040 + lVar7 * 4 + (long)iVar6 * 800) + local_688[iVar6]
                 , iVar3 < local_688[lVar7])) {
                local_688[lVar7] = iVar3;
              }
              lVar7 = lVar7 + 1;
            } while ((int)lVar7 < local_690);
            iVar1 = iVar1 + 1;
          } while (iVar1 < local_690);
          piVar9 = local_688;
          iVar1 = 0;
          do {
            if (*piVar9 == 0x7fffffff) {
              __printf_chk(1,&DAT_00102008);
            }
            else {
              __printf_chk(1,"%d");
            }
            iVar1 = iVar1 + 1;
            if (local_690 <= iVar1) break;
            putc(0x20,stdout);
            piVar9 = piVar9 + 1;
          } while (iVar1 < local_690);
          putc(10,stdout);
        }
      }
      else {
        putc(10,stdout);
      }
    }
    else {
      putc(10,stdout);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* ===== Function: FUN_0010158d ===== */

int * FUN_0010158d(int *param_1,int param_2)

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
    uVar1 = FUN_0010158d(*(undefined8 *)(param_1 + 2));
    *(undefined8 *)(param_1 + 2) = uVar1;
  }
  else {
    uVar1 = FUN_0010158d(*(undefined8 *)(param_1 + 4));
    *(undefined8 *)(param_1 + 4) = uVar1;
  }
  return param_1;
}



/* ===== Function: FUN_001015f7 ===== */

void FUN_001015f7(void *param_1)

{
  if (param_1 != (void *)0x0) {
    FUN_001015f7(*(undefined8 *)((long)param_1 + 8));
    FUN_001015f7(*(undefined8 *)((long)param_1 + 0x10));
    free(param_1);
    return;
  }
  return;
}



/* ===== Function: FUN_0010161d ===== */

void FUN_0010161d(long param_1,undefined8 param_2,int param_3)

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
  FUN_0010161d(param_1,param_2,iVar7);
  FUN_0010161d(param_1,iVar7 + 2,param_3);
  return;
}



/* ===== Function: FUN_001016a5 ===== */

undefined8 FUN_001016a5(void)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  ulong uVar9;
  double dVar10;
  char *pcVar11;
  long lVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  long in_FS_OFFSET;
  bool bVar15;
  double dVar16;
  int local_a8;
  uint local_a4;
  int local_a0;
  int local_9c;
  uint local_98;
  int local_94;
  undefined8 local_90;
  char acStack_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    iVar4 = __isoc99_scanf("%d",&local_a8);
    if ((iVar4 != 1) || (local_a8 == 0)) {
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return 0;
    }
    switch(local_a8) {
    case 1:
      iVar4 = __isoc99_scanf(&DAT_0010201c,&local_90);
      if (iVar4 == 1) {
        puVar8 = &DAT_0010200c;
        if (((ulong)local_90 & 1) != 0) {
          puVar8 = &DAT_00102011;
        }
        __printf_chk(1,&DAT_00102021,puVar8);
      }
      break;
    case 2:
      iVar4 = __isoc99_scanf(&DAT_0010201c,&local_90);
      if (iVar4 == 1) {
        dVar16 = local_90;
        iVar4 = 0;
        if ((long)local_90 < 0) {
          __printf_chk(1,&DAT_00102025);
        }
        else {
          do {
            iVar2 = iVar4;
            iVar4 = iVar2 + 1;
            dVar16 = (double)((long)dVar16 / 10);
          } while (dVar16 != 0.0);
          dVar10 = 0.0;
          dVar16 = local_90;
          do {
            if (iVar4 < 1) {
              lVar12 = 1;
            }
            else {
              lVar12 = 1;
              iVar3 = iVar2;
              do {
                lVar12 = lVar12 * (SUB84(dVar16,0) + (int)((long)dVar16 / 10) * -10);
                bVar15 = 0 < iVar3;
                iVar3 = iVar3 + -1;
              } while (bVar15);
            }
            dVar10 = (double)((long)dVar10 + lVar12);
            dVar16 = (double)((long)dVar16 / 10);
          } while (dVar16 != 0.0);
          puVar8 = &DAT_00102015;
          if (local_90 != dVar10) {
            puVar8 = &DAT_00102019;
          }
          __printf_chk(1,&DAT_00102021,puVar8);
        }
      }
      break;
    case 3:
      iVar4 = __isoc99_scanf("%d",&local_94);
      if (iVar4 == 1) {
        iVar4 = 0;
        dVar16 = DAT_001020f0;
        if (local_94 < 1) {
          __printf_chk(1,&DAT_00102029);
        }
        else {
          do {
            iVar2 = __isoc99_scanf(&DAT_00102033,&local_90);
            if (iVar2 != 1) {
              local_90 = 0.0;
            }
            dVar16 = dVar16 + local_90;
            iVar4 = iVar4 + 1;
          } while (iVar4 < local_94);
          __printf_chk(dVar16 / (double)local_94,1,"%.6f\n");
        }
      }
      break;
    case 4:
      iVar4 = __isoc99_scanf(&DAT_0010203d,&local_90);
      if (iVar4 == 1) {
        uVar9 = (ulong)local_90 & 0xffffffff;
        uVar1 = 0;
        if ((int)local_90 == 0) {
          __printf_chk(1,&DAT_00102030);
        }
        else {
          do {
            uVar5 = uVar1;
            acStack_88[uVar5] = ((byte)uVar9 & 1) + 0x30;
            uVar6 = (uint)uVar9 >> 1;
            uVar9 = (ulong)uVar6;
            uVar1 = uVar5 + 1;
          } while (uVar6 != 0);
          local_90 = (double)((ulong)local_90 & 0xffffffff00000000);
          iVar4 = (int)uVar5;
          if (-1 < iVar4) {
            pcVar11 = acStack_88 + iVar4;
            do {
              putc((int)*pcVar11,stdout);
              pcVar11 = pcVar11 + -1;
            } while (pcVar11 != acStack_88 + ((long)iVar4 - (uVar5 & 0xffffffff)) + -1);
          }
          putc(10,stdout);
        }
      }
      break;
    case 5:
      iVar3 = __isoc99_scanf("%d %d %d %d %d %d",&local_a4,&local_a0,&local_9c,&local_98,&local_94,
                             &local_90);
      iVar2 = local_9c;
      iVar4 = local_a0;
      uVar6 = local_a4;
      if (iVar3 == 6) {
        if ((int)local_98 < (int)local_a4) {
LAB_00101a18:
          local_a4 = local_98;
          local_a0 = local_94;
          local_9c = (int)local_90;
          local_98 = uVar6;
          local_94 = iVar4;
          local_90 = (double)CONCAT44(local_90._4_4_,iVar2);
LAB_00101a40:
          iVar2 = local_98 - local_a4;
          iVar4 = local_94 - local_a0;
          iVar3 = (int)local_90 - local_9c;
          if (iVar3 < 0) {
LAB_00101a8f:
            iVar4 = iVar4 + -1;
            iVar7 = local_94 + -1;
            if (iVar7 == 0) {
              iVar7 = 0xc;
LAB_00101ae1:
              iVar7 = *(int *)(&DAT_001020c0 + (long)(iVar7 + -1) * 4);
            }
            else {
              if (iVar7 != 2) goto LAB_00101ae1;
              bVar15 = true;
              if (((int)local_98 % 400 != 0) && (bVar15 = false, (local_98 & 3) == 0)) {
                bVar15 = (int)local_98 % 100 != 0;
              }
              iVar7 = 0x1d - (uint)!bVar15;
            }
            iVar3 = iVar3 + iVar7;
          }
          if (iVar4 < 0) {
            iVar2 = iVar2 + -1;
            iVar4 = iVar4 + 0xc;
          }
        }
        else {
          if (local_a4 != local_98) goto LAB_00101a40;
          if (local_94 < local_a0) goto LAB_00101a18;
          if (local_a0 != local_94) goto LAB_00101a40;
          if ((int)local_90 < local_9c) goto LAB_00101a18;
          iVar3 = (int)local_90 - local_9c;
          if (iVar3 < 0) {
            iVar4 = 0;
            iVar2 = 0;
            goto LAB_00101a8f;
          }
          iVar4 = 0;
          iVar2 = 0;
        }
        __printf_chk(1,"%d years %d months %d days\n",iVar2,iVar4,iVar3);
      }
      break;
    case 6:
      iVar4 = __isoc99_scanf("%d",&local_94);
      if (iVar4 == 1) {
        if (local_94 < 1) {
          __printf_chk(1,&DAT_00102030);
        }
        else {
          if (200000 < local_94) {
            local_94 = 200000;
          }
          iVar2 = 0;
          iVar4 = -0x80000000;
          do {
            iVar3 = __isoc99_scanf("%d",&local_90);
            if (iVar3 != 1) {
              local_90 = (double)((ulong)local_90 & 0xffffffff00000000);
            }
            if (iVar4 < (int)local_90) {
              iVar4 = (int)local_90;
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < local_94);
          __printf_chk(1,&DAT_0010206e,iVar4);
        }
      }
      break;
    case 7:
      iVar4 = __isoc99_scanf("%d",&local_90);
      if (iVar4 == 1) {
        if ((int)local_90 < 0) {
          putc(10,stdout);
        }
        else {
          if ((int)local_90 < 0x30d41) {
            if (0 < (int)local_90) goto LAB_00101be2;
          }
          else {
            local_90 = (double)CONCAT44(local_90._4_4_,200000);
LAB_00101be2:
            puVar14 = &DAT_001ee640;
            iVar4 = 0;
            do {
              iVar2 = __isoc99_scanf("%d",puVar14);
              if (iVar2 != 1) {
                *puVar14 = 0;
              }
              iVar4 = iVar4 + 1;
              puVar14 = puVar14 + 1;
            } while (iVar4 < (int)local_90);
            if (0 < (int)local_90) {
              FUN_0010161d(&DAT_001ee640,0,(int)local_90 + -1);
              if (0 < (int)local_90) {
                lVar12 = 1;
                while( true ) {
                  __printf_chk(1,"%d",*(undefined4 *)(&DAT_001ee63c + lVar12 * 4));
                  if ((int)local_90 <= (int)lVar12) break;
                  if ((int)lVar12 != 0) {
                    putc(0x20,stdout);
                  }
                  lVar12 = lVar12 + 1;
                }
              }
            }
          }
          putc(10,stdout);
        }
      }
      break;
    case 8:
      iVar4 = __isoc99_scanf("%d",&local_94);
      if (iVar4 == 1) {
        if (local_94 < 0) {
          putc(10,stdout);
          putc(10,stdout);
          putc(10,stdout);
        }
        else {
          iVar4 = 0;
          uVar13 = 0;
          if (0 < local_94) {
            do {
              iVar2 = __isoc99_scanf("%d",&local_90);
              if (iVar2 != 1) {
                local_90 = (double)((ulong)local_90 & 0xffffffff00000000);
              }
              uVar13 = FUN_0010158d(uVar13,(ulong)local_90 & 0xffffffff);
              iVar4 = iVar4 + 1;
            } while (iVar4 < local_94);
          }
          FUN_00101209(uVar13);
          putc(10,stdout);
          FUN_0010123f(uVar13);
          putc(10,stdout);
          FUN_00101275(uVar13);
          putc(10,stdout);
          FUN_001015f7(uVar13);
        }
      }
      break;
    case 9:
      iVar4 = __isoc99_scanf("%d",&local_94);
      if (iVar4 == 1) {
        if (local_94 < 0) {
          __printf_chk(1,&DAT_00102072);
        }
        else {
          if (local_94 < 0x30d41) {
            if (0 < local_94) goto LAB_00101df0;
          }
          else {
            local_94 = 200000;
LAB_00101df0:
            puVar14 = &DAT_0012b140;
            iVar4 = 0;
            do {
              iVar2 = __isoc99_scanf("%d",puVar14);
              if (iVar2 != 1) {
                *puVar14 = 0;
              }
              iVar4 = iVar4 + 1;
              puVar14 = puVar14 + 1;
            } while (iVar4 < local_94);
          }
          iVar4 = __isoc99_scanf("%d",&local_90);
          if (iVar4 != 1) {
            local_90 = (double)((ulong)local_90 & 0xffffffff00000000);
          }
          iVar4 = local_94 + -1;
          if (iVar4 < 0) {
            iVar2 = -1;
          }
          else {
            iVar3 = 0;
            do {
              iVar2 = (iVar4 - iVar3) / 2 + iVar3;
              if ((int)local_90 == (&DAT_0012b140)[iVar2]) goto LAB_00101eb3;
              if ((int)(&DAT_0012b140)[iVar2] < (int)local_90) {
                iVar3 = iVar2 + 1;
              }
              else {
                iVar4 = iVar2 + -1;
              }
            } while (iVar3 <= iVar4);
            iVar2 = -1;
          }
LAB_00101eb3:
          __printf_chk(1,&DAT_0010206e,iVar2);
        }
      }
      break;
    case 10:
      FUN_001012ab();
    }
  } while( true );
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



/* ===== Function: __stack_chk_fail ===== */

/* WARNING: Control flow encountered bad instruction data */

void __stack_chk_fail(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* ===== Function: putc ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putc(int __c,FILE *__stream)

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



/* ===== Function: __printf_chk ===== */

/* WARNING: Control flow encountered bad instruction data */

void __printf_chk(void)

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


