/* Ghidra decompiler output (pseudo-C) */


/* ===== Function: _DT_INIT ===== */

void _DT_INIT(void)

{
  if (PTR___gmon_start___00105fe8 != (undefined *)0x0) {
    (*(code *)PTR___gmon_start___00105fe8)();
  }
  return;
}



/* ===== Function: FUN_00101020 ===== */

void FUN_00101020(void)

{
  (*(code *)PTR_00105f90)();
  return;
}



/* ===== Function: FUN_001010b0 ===== */

void FUN_001010b0(void)

{
  (*(code *)PTR___cxa_finalize_00105ff8)();
  return;
}



/* ===== Function: free ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00105f98)();
  return;
}



/* ===== Function: __stack_chk_fail ===== */

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00105fa0)();
  return;
}



/* ===== Function: memset ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_memset_00105fa8)();
  return pvVar1;
}



/* ===== Function: putc ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putc_00105fb0)();
  return iVar1;
}



/* ===== Function: malloc ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_00105fb8)();
  return pvVar1;
}



/* ===== Function: __printf_chk ===== */

void __printf_chk(void)

{
  (*(code *)PTR___printf_chk_00105fc0)();
  return;
}



/* ===== Function: __isoc99_scanf ===== */

void __isoc99_scanf(void)

{
  (*(code *)PTR___isoc99_scanf_00105fc8)();
  return;
}



/* ===== Function: exit ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*(code *)PTR_exit_00105fd0)();
  return;
}



/* ===== Function: FUN_00101140 ===== */

undefined8 FUN_00101140(void)

{
  char cVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined *puVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  char *pcVar21;
  uint *puVar22;
  uint uVar23;
  undefined4 *puVar24;
  long in_FS_OFFSET;
  bool bVar25;
  double dVar26;
  int local_a8;
  uint local_a4;
  int local_a0;
  uint local_9c;
  uint local_98;
  int local_94;
  uint local_90;
  undefined4 uStack_8c;
  char local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
switchD_001011b2_default:
  iVar5 = __isoc99_scanf("%d",&local_a8);
  if ((iVar5 != 1) || (local_a8 == 0)) {
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return 0;
  }
  switch(local_a8) {
  case 1:
    iVar5 = __isoc99_scanf(&DAT_0010401c,&local_90);
    if (iVar5 == 1) {
      bVar25 = (local_90 & 1) == 0;
      puVar16 = &DAT_0010400c;
      puVar9 = &DAT_00104011;
      goto LAB_001016d2;
    }
    goto switchD_001011b2_default;
  case 2:
    iVar5 = __isoc99_scanf(&DAT_0010401c,&local_90);
    if (iVar5 == 1) {
      uVar2 = CONCAT44(uStack_8c,local_90);
      uVar18 = uVar2;
      iVar5 = 0;
      if (uStack_8c < 0) {
        __printf_chk(1,&DAT_00104025);
      }
      else {
        do {
          iVar6 = iVar5;
          uVar18 = uVar18 / 10;
          iVar5 = iVar6 + 1;
        } while (uVar18 != 0);
        uVar18 = 0;
        uVar19 = uVar2;
        do {
          lVar20 = 1;
          iVar5 = iVar6;
          do {
            lVar20 = lVar20 * (uVar19 % 10);
            bVar25 = iVar5 != 0;
            iVar5 = iVar5 + -1;
          } while (bVar25);
          uVar18 = uVar18 + lVar20;
          uVar19 = uVar19 / 10;
        } while (uVar19 != 0);
        bVar25 = uVar2 == uVar18;
        puVar16 = &DAT_00104015;
        puVar9 = &DAT_00104019;
LAB_001016d2:
        if (!bVar25) {
          puVar16 = puVar9;
        }
        __printf_chk(1,&DAT_00104021,puVar16);
      }
    }
    goto switchD_001011b2_default;
  case 3:
    iVar5 = __isoc99_scanf("%d",&local_94);
    if (iVar5 == 1) {
      if (local_94 < 1) {
        __printf_chk(1,&DAT_00104029);
      }
      else {
        iVar5 = 0;
        dVar26 = 0.0;
        do {
          while (iVar6 = __isoc99_scanf(&DAT_00104033,&local_90), iVar6 != 1) {
            iVar5 = iVar5 + 1;
            dVar26 = dVar26 + 0.0;
            if (local_94 <= iVar5) goto LAB_00101677;
          }
          iVar5 = iVar5 + 1;
          dVar26 = dVar26 + (double)CONCAT44(uStack_8c,local_90);
        } while (iVar5 < local_94);
LAB_00101677:
        __printf_chk(dVar26 / (double)local_94,1,"%.6f\n");
      }
    }
    goto switchD_001011b2_default;
  case 4:
    iVar5 = __isoc99_scanf(&DAT_0010403d,&local_90);
    if (iVar5 != 1) goto switchD_001011b2_default;
    lVar20 = 0;
    if (local_90 == 0) {
      __printf_chk(1,&DAT_00104030);
      goto switchD_001011b2_default;
    }
    do {
      lVar8 = lVar20;
      local_88[lVar8] = ((byte)local_90 & 1) + 0x30;
      local_90 = local_90 >> 1;
      lVar20 = lVar8 + 1;
    } while (local_90 != 0);
    local_90 = 0;
    pcVar21 = local_88 + (int)lVar8;
    do {
      cVar1 = *pcVar21;
      pcVar21 = pcVar21 + -1;
      putc((int)cVar1,stdout);
    } while (pcVar21 != local_88 + ((int)lVar8 - lVar8) + -1);
    break;
  case 5:
    iVar6 = __isoc99_scanf("%d %d %d %d %d %d",&local_a4,&local_a0,&local_9c,&local_98,&local_94,
                           &local_90);
    uVar4 = local_98;
    uVar3 = local_9c;
    iVar5 = local_a0;
    uVar23 = local_a4;
    if (iVar6 == 6) {
      if ((int)local_98 < (int)local_a4) {
LAB_00101b63:
        local_a4 = local_98;
        local_a0 = local_94;
        local_9c = local_90;
        local_98 = uVar23;
        local_94 = iVar5;
        local_90 = uVar3;
        uVar17 = uVar23;
        uVar13 = uVar4;
LAB_00101b7c:
        iVar14 = uVar17 - uVar13;
        iVar6 = local_94 - local_a0;
        iVar5 = local_90 - local_9c;
        if (iVar5 < 0) {
          iVar6 = iVar6 + -1;
          iVar15 = local_94 + -1;
          if (iVar15 == 0) {
            iVar15 = 0xc;
LAB_00101d49:
            iVar15 = *(int *)(&DAT_001040c0 + (long)(iVar15 + -1) * 4);
          }
          else {
            if (iVar15 != 2) goto LAB_00101d49;
            uVar23 = 1;
            if (((int)uVar17 % 400 != 0) && (uVar23 = 0, (uVar17 & 3) == 0)) {
              uVar23 = (uint)((int)uVar17 % 100 != 0);
            }
            iVar15 = uVar23 + 0x1c;
          }
          iVar5 = iVar5 + iVar15;
        }
        if (iVar6 < 0) {
          iVar14 = iVar14 + -1;
          iVar6 = iVar6 + 0xc;
        }
      }
      else {
        uVar17 = local_98;
        uVar13 = local_a4;
        if (local_a4 != local_98) goto LAB_00101b7c;
        if (local_94 < local_a0) goto LAB_00101b63;
        uVar17 = uVar23;
        uVar13 = uVar4;
        if (local_a0 != local_94) goto LAB_00101b7c;
        if ((int)local_90 < (int)local_9c) goto LAB_00101b63;
        iVar5 = local_90 - local_9c;
        iVar6 = 0;
        iVar14 = 0;
      }
      __printf_chk(1,"%d years %d months %d days\n",iVar14,iVar6,iVar5);
    }
    goto switchD_001011b2_default;
  case 6:
    iVar5 = __isoc99_scanf("%d",&local_94);
    if (iVar5 == 1) {
      if (local_94 < 1) {
        __printf_chk(1,&DAT_00104030);
      }
      else {
        if (200000 < local_94) {
          local_94 = 200000;
        }
        iVar5 = 0;
        uVar23 = 0x80000000;
        do {
          while (iVar6 = __isoc99_scanf("%d",&local_90), iVar6 != 1) {
            if ((int)uVar23 < 0) {
              uVar23 = 0;
            }
            iVar5 = iVar5 + 1;
            if (local_94 <= iVar5) goto LAB_001014da;
          }
          if ((int)uVar23 < (int)local_90) {
            uVar23 = local_90;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < local_94);
LAB_001014da:
        __printf_chk(1,&DAT_0010406e,uVar23);
      }
    }
    goto switchD_001011b2_default;
  case 7:
    iVar5 = __isoc99_scanf("%d",&local_90);
    if (iVar5 != 1) goto switchD_001011b2_default;
    if (-1 < (int)local_90) {
      if ((int)local_90 < 0x30d41) {
        if (local_90 == 0) break;
      }
      else {
        local_90 = 200000;
      }
      iVar5 = 0;
      puVar24 = &DAT_001f0640;
      do {
        iVar6 = __isoc99_scanf("%d",puVar24);
        if (iVar6 != 1) {
          *puVar24 = 0;
        }
        iVar5 = iVar5 + 1;
        puVar24 = puVar24 + 1;
      } while (iVar5 < (int)local_90);
      if (0 < (int)local_90) {
        FUN_001022d0(0,local_90 - 1);
      }
      if (0 < (int)local_90) {
        lVar20 = 0;
        while( true ) {
          puVar24 = &DAT_001f0640 + lVar20;
          lVar20 = lVar20 + 1;
          __printf_chk(1,"%d",*puVar24);
          if ((int)local_90 <= (int)lVar20) break;
          putc(0x20,stdout);
        }
      }
    }
    break;
  case 8:
    iVar5 = __isoc99_scanf("%d",&local_94);
    if (iVar5 != 1) goto switchD_001011b2_default;
    if (-1 < local_94) {
      iVar5 = 0;
      puVar22 = (uint *)0x0;
      if (local_94 == 0) {
        FUN_00102d60(0);
        putc(10,stdout);
        FUN_00102f50(0);
        putc(10,stdout);
      }
      else {
        do {
          iVar6 = __isoc99_scanf("%d",&local_90);
          if (iVar6 != 1) {
            local_90 = 0;
          }
          uVar23 = local_90;
          if (puVar22 == (uint *)0x0) {
            puVar22 = (uint *)malloc(0x18);
            if (puVar22 == (uint *)0x0) {
LAB_001021d4:
                    /* WARNING: Subroutine does not return */
              exit(1);
            }
            *puVar22 = uVar23;
            *(undefined1 (*) [16])(puVar22 + 2) = (undefined1  [16])0x0;
          }
          else if ((int)local_90 < (int)*puVar22) {
            puVar10 = *(uint **)(puVar22 + 2);
            if (puVar10 == (uint *)0x0) {
              puVar10 = (uint *)malloc(0x18);
              if (puVar10 == (uint *)0x0) goto LAB_001021d4;
              *(undefined1 (*) [16])(puVar10 + 2) = (undefined1  [16])0x0;
              *puVar10 = uVar23;
            }
            else if ((int)local_90 < (int)*puVar10) {
              puVar11 = *(uint **)(puVar10 + 2);
              if (puVar11 == (uint *)0x0) {
                puVar11 = (uint *)malloc(0x18);
                if (puVar11 == (uint *)0x0) goto LAB_001021d4;
                *(undefined1 (*) [16])(puVar11 + 2) = (undefined1  [16])0x0;
                *puVar11 = uVar23;
              }
              else if ((int)local_90 < (int)*puVar11) {
                puVar12 = *(uint **)(puVar11 + 2);
                if (puVar12 == (uint *)0x0) {
                  puVar12 = (uint *)malloc(0x18);
                  if (puVar12 == (uint *)0x0) goto LAB_001021d4;
                  *(undefined1 (*) [16])(puVar12 + 2) = (undefined1  [16])0x0;
                  *puVar12 = uVar23;
                }
                else if ((int)local_90 < (int)*puVar12) {
                  uVar7 = FUN_00103920(*(undefined8 *)(puVar12 + 2));
                  *(undefined8 *)(puVar12 + 2) = uVar7;
                }
                else {
                  uVar7 = FUN_00103920(*(undefined8 *)(puVar12 + 4));
                  *(undefined8 *)(puVar12 + 4) = uVar7;
                }
                *(uint **)(puVar11 + 2) = puVar12;
              }
              else {
                puVar12 = *(uint **)(puVar11 + 4);
                if (puVar12 == (uint *)0x0) {
                  puVar12 = (uint *)malloc(0x18);
                  if (puVar12 == (uint *)0x0) goto LAB_001021d4;
                  *(undefined1 (*) [16])(puVar12 + 2) = (undefined1  [16])0x0;
                  *puVar12 = uVar23;
                }
                else if ((int)local_90 < (int)*puVar12) {
                  uVar7 = FUN_00103920(*(undefined8 *)(puVar12 + 2));
                  *(undefined8 *)(puVar12 + 2) = uVar7;
                }
                else {
                  uVar7 = FUN_00103920(*(undefined8 *)(puVar12 + 4));
                  *(undefined8 *)(puVar12 + 4) = uVar7;
                }
                *(uint **)(puVar11 + 4) = puVar12;
              }
              *(uint **)(puVar10 + 2) = puVar11;
            }
            else {
              puVar11 = *(uint **)(puVar10 + 4);
              if (puVar11 == (uint *)0x0) {
                puVar11 = (uint *)malloc(0x18);
                if (puVar11 == (uint *)0x0) goto LAB_001021d4;
                *(undefined1 (*) [16])(puVar11 + 2) = (undefined1  [16])0x0;
                *puVar11 = uVar23;
              }
              else if ((int)local_90 < (int)*puVar11) {
                puVar12 = *(uint **)(puVar11 + 2);
                if (puVar12 == (uint *)0x0) {
                  puVar12 = (uint *)malloc(0x18);
                  if (puVar12 == (uint *)0x0) goto LAB_001021d4;
                  *(undefined1 (*) [16])(puVar12 + 2) = (undefined1  [16])0x0;
                  *puVar12 = uVar23;
                }
                else if ((int)local_90 < (int)*puVar12) {
                  uVar7 = FUN_00103920(*(undefined8 *)(puVar12 + 2));
                  *(undefined8 *)(puVar12 + 2) = uVar7;
                }
                else {
                  uVar7 = FUN_00103920(*(undefined8 *)(puVar12 + 4));
                  *(undefined8 *)(puVar12 + 4) = uVar7;
                }
                *(uint **)(puVar11 + 2) = puVar12;
              }
              else {
                puVar12 = *(uint **)(puVar11 + 4);
                if (puVar12 == (uint *)0x0) {
                  puVar12 = (uint *)malloc(0x18);
                  if (puVar12 == (uint *)0x0) goto LAB_001021d4;
                  *(undefined1 (*) [16])(puVar12 + 2) = (undefined1  [16])0x0;
                  *puVar12 = uVar23;
                }
                else if ((int)local_90 < (int)*puVar12) {
                  uVar7 = FUN_00103920(*(undefined8 *)(puVar12 + 2));
                  *(undefined8 *)(puVar12 + 2) = uVar7;
                }
                else {
                  uVar7 = FUN_00103920(*(undefined8 *)(puVar12 + 4));
                  *(undefined8 *)(puVar12 + 4) = uVar7;
                }
                *(uint **)(puVar11 + 4) = puVar12;
              }
              *(uint **)(puVar10 + 4) = puVar11;
            }
            *(uint **)(puVar22 + 2) = puVar10;
          }
          else {
            puVar10 = *(uint **)(puVar22 + 4);
            if (puVar10 == (uint *)0x0) {
              puVar10 = (uint *)malloc(0x18);
              if (puVar10 == (uint *)0x0) goto LAB_001021d4;
              *(undefined1 (*) [16])(puVar10 + 2) = (undefined1  [16])0x0;
              *puVar10 = uVar23;
            }
            else if ((int)local_90 < (int)*puVar10) {
              puVar11 = *(uint **)(puVar10 + 2);
              if (puVar11 == (uint *)0x0) {
                puVar11 = (uint *)malloc(0x18);
                if (puVar11 == (uint *)0x0) goto LAB_001021d4;
                *(undefined1 (*) [16])(puVar11 + 2) = (undefined1  [16])0x0;
                *puVar11 = uVar23;
              }
              else if ((int)local_90 < (int)*puVar11) {
                puVar12 = *(uint **)(puVar11 + 2);
                if (puVar12 == (uint *)0x0) {
                  puVar12 = (uint *)malloc(0x18);
                  if (puVar12 == (uint *)0x0) goto LAB_001021d4;
                  *(undefined1 (*) [16])(puVar12 + 2) = (undefined1  [16])0x0;
                  *puVar12 = uVar23;
                }
                else if ((int)local_90 < (int)*puVar12) {
                  uVar7 = FUN_00103920(*(undefined8 *)(puVar12 + 2));
                  *(undefined8 *)(puVar12 + 2) = uVar7;
                }
                else {
                  uVar7 = FUN_00103920(*(undefined8 *)(puVar12 + 4));
                  *(undefined8 *)(puVar12 + 4) = uVar7;
                }
                *(uint **)(puVar11 + 2) = puVar12;
              }
              else {
                puVar12 = *(uint **)(puVar11 + 4);
                if (puVar12 == (uint *)0x0) {
                  puVar12 = (uint *)malloc(0x18);
                  if (puVar12 == (uint *)0x0) goto LAB_001021d4;
                  *(undefined1 (*) [16])(puVar12 + 2) = (undefined1  [16])0x0;
                  *puVar12 = uVar23;
                }
                else if ((int)local_90 < (int)*puVar12) {
                  uVar7 = FUN_00103920(*(undefined8 *)(puVar12 + 2));
                  *(undefined8 *)(puVar12 + 2) = uVar7;
                }
                else {
                  uVar7 = FUN_00103920(*(undefined8 *)(puVar12 + 4));
                  *(undefined8 *)(puVar12 + 4) = uVar7;
                }
                *(uint **)(puVar11 + 4) = puVar12;
              }
              *(uint **)(puVar10 + 2) = puVar11;
            }
            else {
              puVar11 = *(uint **)(puVar10 + 4);
              if (puVar11 == (uint *)0x0) {
                puVar11 = (uint *)malloc(0x18);
                if (puVar11 == (uint *)0x0) goto LAB_001021d4;
                *(undefined1 (*) [16])(puVar11 + 2) = (undefined1  [16])0x0;
                *puVar11 = uVar23;
              }
              else if ((int)local_90 < (int)*puVar11) {
                puVar12 = *(uint **)(puVar11 + 2);
                if (puVar12 == (uint *)0x0) {
                  puVar12 = (uint *)malloc(0x18);
                  if (puVar12 == (uint *)0x0) goto LAB_001021d4;
                  *(undefined1 (*) [16])(puVar12 + 2) = (undefined1  [16])0x0;
                  *puVar12 = uVar23;
                }
                else if ((int)local_90 < (int)*puVar12) {
                  uVar7 = FUN_00103920(*(undefined8 *)(puVar12 + 2));
                  *(undefined8 *)(puVar12 + 2) = uVar7;
                }
                else {
                  uVar7 = FUN_00103920(*(undefined8 *)(puVar12 + 4));
                  *(undefined8 *)(puVar12 + 4) = uVar7;
                }
                *(uint **)(puVar11 + 2) = puVar12;
              }
              else {
                puVar12 = *(uint **)(puVar11 + 4);
                if (puVar12 == (uint *)0x0) {
                  puVar12 = (uint *)malloc(0x18);
                  if (puVar12 == (uint *)0x0) goto LAB_001021d4;
                  *(undefined1 (*) [16])(puVar12 + 2) = (undefined1  [16])0x0;
                  *puVar12 = uVar23;
                }
                else if ((int)local_90 < (int)*puVar12) {
                  uVar7 = FUN_00103920(*(undefined8 *)(puVar12 + 2));
                  *(undefined8 *)(puVar12 + 2) = uVar7;
                }
                else {
                  uVar7 = FUN_00103920(*(undefined8 *)(puVar12 + 4));
                  *(undefined8 *)(puVar12 + 4) = uVar7;
                }
                *(uint **)(puVar11 + 4) = puVar12;
              }
              *(uint **)(puVar10 + 4) = puVar11;
            }
            *(uint **)(puVar22 + 4) = puVar10;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < local_94);
        FUN_00102d60(puVar22);
        putc(10,stdout);
        FUN_00102f50(puVar22);
        putc(10,stdout);
        FUN_00103140(*(undefined8 *)(puVar22 + 2));
        FUN_00103140(*(undefined8 *)(puVar22 + 4));
        __printf_chk(1,&DAT_00104008,*puVar22);
      }
      putc(10,stdout);
      FUN_00102680(puVar22);
      goto switchD_001011b2_default;
    }
    putc(10,stdout);
    putc(10,stdout);
    break;
  case 9:
    iVar5 = __isoc99_scanf("%d",&local_94);
    if (iVar5 == 1) {
      if (local_94 < 0) {
        __printf_chk(1,&DAT_00104072);
      }
      else {
        if (local_94 < 0x30d41) {
          if (local_94 != 0) goto LAB_001011ef;
        }
        else {
          local_94 = 200000;
LAB_001011ef:
          puVar24 = &DAT_0012d140;
          iVar5 = 0;
          do {
            while (iVar6 = __isoc99_scanf("%d",puVar24), iVar6 != 1) {
              *puVar24 = 0;
              iVar5 = iVar5 + 1;
              puVar24 = puVar24 + 1;
              if (local_94 <= iVar5) goto LAB_0010122c;
            }
            iVar5 = iVar5 + 1;
            puVar24 = puVar24 + 1;
          } while (iVar5 < local_94);
        }
LAB_0010122c:
        iVar5 = __isoc99_scanf("%d",&local_90);
        if (iVar5 != 1) {
          local_90 = 0;
        }
        iVar5 = local_94 + -1;
        if (-1 < iVar5) {
          iVar6 = 0;
          do {
            while( true ) {
              iVar14 = (iVar5 - iVar6 >> 1) + iVar6;
              if (local_90 == (&DAT_0012d140)[iVar14]) goto LAB_00101289;
              if ((int)local_90 <= (int)(&DAT_0012d140)[iVar14]) break;
              iVar6 = iVar14 + 1;
              if (iVar5 < iVar6) goto LAB_00101286;
            }
            iVar5 = iVar14 + -1;
          } while (iVar6 <= iVar5);
        }
LAB_00101286:
        iVar14 = -1;
LAB_00101289:
        __printf_chk(1,&DAT_0010406e,iVar14);
      }
    }
    goto switchD_001011b2_default;
  case 10:
    FUN_00102360();
  default:
    goto switchD_001011b2_default;
  }
  putc(10,stdout);
  goto switchD_001011b2_default;
}



/* ===== Function: entry ===== */

void processEntry entry(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00105fd8)
            (FUN_00101140,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ===== Function: FUN_00102210 ===== */

/* WARNING: Removing unreachable block (ram,0x00102223) */
/* WARNING: Removing unreachable block (ram,0x0010222f) */

void FUN_00102210(void)

{
  return;
}



/* ===== Function: FUN_00102240 ===== */

/* WARNING: Removing unreachable block (ram,0x00102264) */
/* WARNING: Removing unreachable block (ram,0x00102270) */

void FUN_00102240(void)

{
  return;
}



/* ===== Function: _FINI_0 ===== */

void _FINI_0(void)

{
  if (DAT_00106028 == '\0') {
    if (PTR___cxa_finalize_00105ff8 != (undefined *)0x0) {
      FUN_001010b0(PTR_LOOP_00106008);
    }
    FUN_00102210();
    DAT_00106028 = 1;
    return;
  }
  return;
}



/* ===== Function: _INIT_0 ===== */

void _INIT_0(void)

{
  FUN_00102240();
  return;
}



/* ===== Function: FUN_001022d0 ===== */

void FUN_001022d0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  
  if (param_1 < param_2) {
    piVar1 = &DAT_001f0640 + param_2;
    do {
      iVar2 = *piVar1;
      iVar5 = param_1 + -1;
      lVar4 = (long)param_1;
      do {
        if ((int)(&DAT_001f0640)[lVar4] <= iVar2) {
          iVar5 = iVar5 + 1;
          iVar3 = (&DAT_001f0640)[iVar5];
          (&DAT_001f0640)[iVar5] = (&DAT_001f0640)[lVar4];
          (&DAT_001f0640)[lVar4] = iVar3;
        }
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < param_2);
      iVar2 = (&DAT_001f0644)[iVar5];
      (&DAT_001f0644)[iVar5] = *piVar1;
      *piVar1 = iVar2;
      FUN_001022d0(param_1,iVar5);
      param_1 = iVar5 + 2;
    } while (param_1 < param_2);
    return;
  }
  return;
}



/* ===== Function: FUN_00102360 ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00102360(void)

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
  if (iVar2 != 1) goto LAB_001025e9;
  if (local_690 - 1 < 200) {
    lVar10 = 0;
    lVar9 = 0;
    iVar2 = 0;
    while( true ) {
      iVar11 = 0;
      lVar8 = (long)&DAT_00106040 - lVar9;
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
    if (((iVar2 == 1) && (-1 < local_68c)) && (local_68c < (int)local_690)) {
      uVar4 = 1;
      if (0 < (int)local_690) {
        uVar4 = local_690;
      }
      if ((int)local_690 < 4) {
        uVar5 = 0;
LAB_0010249e:
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
          *(undefined8 *)piVar6 = _DAT_001040f0;
          *(undefined8 *)(piVar6 + 2) = _UNK_001040f8;
          piVar6 = piVar6 + 4;
        } while (piVar6 != aiStack_678 + (ulong)((uVar4 >> 2) - 1) * 4);
        uVar5 = uVar4 & 0xfffffffc;
        if ((uVar4 & 3) != 0) goto LAB_0010249e;
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
          if (((-1 < (int)(&DAT_00106040)[lVar10 * 200 + lVar9]) &&
              (*(int *)((long)pvVar7 + lVar9 * 4) == 0)) &&
             ((local_688[lVar10] != 0x7fffffff &&
              (iVar11 = (&DAT_00106040)[lVar10 * 200 + lVar9] + local_688[lVar10],
              iVar11 < piVar6[lVar9])))) {
            piVar6[lVar9] = iVar11;
          }
          lVar9 = lVar9 + 1;
        } while ((int)lVar9 < (int)uVar1);
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)uVar1);
      iVar2 = 0;
      do {
        if (*piVar6 == 0x7fffffff) {
          __printf_chk(1,&DAT_00104004);
        }
        else {
          __printf_chk(1,"%d");
        }
        iVar2 = iVar2 + 1;
        if ((int)local_690 <= iVar2) break;
        piVar6 = piVar6 + 1;
        putc(0x20,stdout);
      } while (iVar2 < (int)local_690);
      putc(10,stdout);
      goto LAB_001025e9;
    }
  }
  putc(10,stdout);
LAB_001025e9:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== Function: FUN_00102680 ===== */

void FUN_00102680(void *param_1)

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
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            free(pvVar4);
          }
          pvVar4 = *(void **)((long)pvVar3 + 0x10);
          if (pvVar4 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar4 + 8);
            if (pvVar5 != (void *)0x0) {
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 0x10));
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
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            free(pvVar4);
          }
          pvVar4 = *(void **)((long)pvVar3 + 0x10);
          if (pvVar4 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar4 + 8);
            if (pvVar5 != (void *)0x0) {
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 0x10));
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
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            free(pvVar4);
          }
          pvVar4 = *(void **)((long)pvVar3 + 0x10);
          if (pvVar4 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar4 + 8);
            if (pvVar5 != (void *)0x0) {
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 0x10));
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
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            free(pvVar4);
          }
          pvVar4 = *(void **)((long)pvVar3 + 0x10);
          if (pvVar4 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar4 + 8);
            if (pvVar5 != (void *)0x0) {
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 0x10));
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
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            free(pvVar4);
          }
          pvVar4 = *(void **)((long)pvVar3 + 0x10);
          if (pvVar4 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar4 + 8);
            if (pvVar5 != (void *)0x0) {
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 0x10));
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
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            free(pvVar4);
          }
          pvVar4 = *(void **)((long)pvVar3 + 0x10);
          if (pvVar4 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar4 + 8);
            if (pvVar5 != (void *)0x0) {
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 0x10));
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
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            free(pvVar4);
          }
          pvVar4 = *(void **)((long)pvVar3 + 0x10);
          if (pvVar4 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar4 + 8);
            if (pvVar5 != (void *)0x0) {
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 0x10));
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
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            free(pvVar4);
          }
          pvVar4 = *(void **)((long)pvVar3 + 0x10);
          if (pvVar4 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar4 + 8);
            if (pvVar5 != (void *)0x0) {
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00102680(*(undefined8 *)((long)pvVar5 + 0x10));
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



/* ===== Function: FUN_00102d60 ===== */

void FUN_00102d60(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *local_48;
  
  local_48 = param_1;
  if (param_1 != (undefined4 *)0x0) {
    do {
      for (puVar1 = *(undefined4 **)(local_48 + 2); puVar1 != (undefined4 *)0x0;
          puVar1 = *(undefined4 **)(puVar1 + 4)) {
        for (puVar2 = *(undefined4 **)(puVar1 + 2); puVar2 != (undefined4 *)0x0;
            puVar2 = *(undefined4 **)(puVar2 + 4)) {
          for (puVar3 = *(undefined4 **)(puVar2 + 2); puVar3 != (undefined4 *)0x0;
              puVar3 = *(undefined4 **)(puVar3 + 4)) {
            for (puVar4 = *(undefined4 **)(puVar3 + 2); puVar4 != (undefined4 *)0x0;
                puVar4 = *(undefined4 **)(puVar4 + 4)) {
              for (puVar5 = *(undefined4 **)(puVar4 + 2); puVar5 != (undefined4 *)0x0;
                  puVar5 = *(undefined4 **)(puVar5 + 4)) {
                for (puVar6 = *(undefined4 **)(puVar5 + 2); puVar6 != (undefined4 *)0x0;
                    puVar6 = *(undefined4 **)(puVar6 + 4)) {
                  for (puVar7 = *(undefined4 **)(puVar6 + 2); puVar7 != (undefined4 *)0x0;
                      puVar7 = *(undefined4 **)(puVar7 + 4)) {
                    for (puVar8 = *(undefined4 **)(puVar7 + 2); puVar8 != (undefined4 *)0x0;
                        puVar8 = *(undefined4 **)(puVar8 + 4)) {
                      FUN_00102d60(*(undefined8 *)(puVar8 + 2));
                      __printf_chk(1,&DAT_00104008,*puVar8);
                    }
                    __printf_chk(1,&DAT_00104008,*puVar7);
                  }
                  __printf_chk(1,&DAT_00104008,*puVar6);
                }
                __printf_chk(1,&DAT_00104008,*puVar5);
              }
              __printf_chk(1,&DAT_00104008,*puVar4);
            }
            __printf_chk(1,&DAT_00104008,*puVar3);
          }
          __printf_chk(1,&DAT_00104008,*puVar2);
        }
        __printf_chk(1,&DAT_00104008,*puVar1);
      }
      __printf_chk(1,&DAT_00104008,*local_48);
      local_48 = *(undefined4 **)(local_48 + 4);
    } while (local_48 != (undefined4 *)0x0);
  }
  return;
}



/* ===== Function: FUN_00102f50 ===== */

void FUN_00102f50(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *local_48;
  
  local_48 = param_1;
  if (param_1 != (undefined4 *)0x0) {
    do {
      __printf_chk(1,&DAT_00104008,*local_48);
      for (puVar1 = *(undefined4 **)(local_48 + 2); puVar1 != (undefined4 *)0x0;
          puVar1 = *(undefined4 **)(puVar1 + 4)) {
        __printf_chk(1,&DAT_00104008,*puVar1);
        for (puVar2 = *(undefined4 **)(puVar1 + 2); puVar2 != (undefined4 *)0x0;
            puVar2 = *(undefined4 **)(puVar2 + 4)) {
          __printf_chk(1,&DAT_00104008,*puVar2);
          for (puVar3 = *(undefined4 **)(puVar2 + 2); puVar3 != (undefined4 *)0x0;
              puVar3 = *(undefined4 **)(puVar3 + 4)) {
            __printf_chk(1,&DAT_00104008,*puVar3);
            for (puVar4 = *(undefined4 **)(puVar3 + 2); puVar4 != (undefined4 *)0x0;
                puVar4 = *(undefined4 **)(puVar4 + 4)) {
              __printf_chk(1,&DAT_00104008,*puVar4);
              for (puVar5 = *(undefined4 **)(puVar4 + 2); puVar5 != (undefined4 *)0x0;
                  puVar5 = *(undefined4 **)(puVar5 + 4)) {
                __printf_chk(1,&DAT_00104008,*puVar5);
                for (puVar6 = *(undefined4 **)(puVar5 + 2); puVar6 != (undefined4 *)0x0;
                    puVar6 = *(undefined4 **)(puVar6 + 4)) {
                  __printf_chk(1,&DAT_00104008,*puVar6);
                  for (puVar7 = *(undefined4 **)(puVar6 + 2); puVar7 != (undefined4 *)0x0;
                      puVar7 = *(undefined4 **)(puVar7 + 4)) {
                    __printf_chk(1,&DAT_00104008,*puVar7);
                    for (puVar8 = *(undefined4 **)(puVar7 + 2); puVar8 != (undefined4 *)0x0;
                        puVar8 = *(undefined4 **)(puVar8 + 4)) {
                      __printf_chk(1,&DAT_00104008,*puVar8);
                      FUN_00102f50(*(undefined8 *)(puVar8 + 2));
                    }
                  }
                }
              }
            }
          }
        }
      }
      local_48 = *(undefined4 **)(local_48 + 4);
    } while (local_48 != (undefined4 *)0x0);
  }
  return;
}



/* ===== Function: FUN_00103140 ===== */

void FUN_00103140(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_1 + 2);
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(puVar1 + 2);
      if (puVar2 != (undefined4 *)0x0) {
        puVar3 = *(undefined4 **)(puVar2 + 2);
        if (puVar3 != (undefined4 *)0x0) {
          puVar4 = *(undefined4 **)(puVar3 + 2);
          if (puVar4 != (undefined4 *)0x0) {
            puVar5 = *(undefined4 **)(puVar4 + 2);
            if (puVar5 != (undefined4 *)0x0) {
              FUN_00103140(*(undefined8 *)(puVar5 + 2));
              FUN_00103140(*(undefined8 *)(puVar5 + 4));
              __printf_chk(1,&DAT_00104008,*puVar5);
            }
            FUN_00103140(*(undefined8 *)(puVar4 + 4));
            __printf_chk(1,&DAT_00104008,*puVar4);
          }
          puVar4 = *(undefined4 **)(puVar3 + 4);
          if (puVar4 != (undefined4 *)0x0) {
            puVar5 = *(undefined4 **)(puVar4 + 2);
            if (puVar5 != (undefined4 *)0x0) {
              FUN_00103140(*(undefined8 *)(puVar5 + 2));
              FUN_00103140(*(undefined8 *)(puVar5 + 4));
              __printf_chk(1,&DAT_00104008,*puVar5);
            }
            puVar5 = *(undefined4 **)(puVar4 + 4);
            if (puVar5 != (undefined4 *)0x0) {
              FUN_00103140(*(undefined8 *)(puVar5 + 2));
              FUN_00103140(*(undefined8 *)(puVar5 + 4));
              __printf_chk(1,&DAT_00104008,*puVar5);
            }
            __printf_chk(1,&DAT_00104008,*puVar4);
          }
          __printf_chk(1,&DAT_00104008,*puVar3);
        }
        puVar3 = *(undefined4 **)(puVar2 + 4);
        if (puVar3 != (undefined4 *)0x0) {
          puVar4 = *(undefined4 **)(puVar3 + 2);
          if (puVar4 != (undefined4 *)0x0) {
            puVar5 = *(undefined4 **)(puVar4 + 2);
            if (puVar5 != (undefined4 *)0x0) {
              FUN_00103140(*(undefined8 *)(puVar5 + 2));
              FUN_00103140(*(undefined8 *)(puVar5 + 4));
              __printf_chk(1,&DAT_00104008,*puVar5);
            }
            puVar5 = *(undefined4 **)(puVar4 + 4);
            if (puVar5 != (undefined4 *)0x0) {
              FUN_00103140(*(undefined8 *)(puVar5 + 2));
              FUN_00103140(*(undefined8 *)(puVar5 + 4));
              __printf_chk(1,&DAT_00104008,*puVar5);
            }
            __printf_chk(1,&DAT_00104008,*puVar4);
          }
          puVar4 = *(undefined4 **)(puVar3 + 4);
          if (puVar4 != (undefined4 *)0x0) {
            FUN_00103140(*(undefined8 *)(puVar4 + 2));
            FUN_00103140(*(undefined8 *)(puVar4 + 4));
            __printf_chk(1,&DAT_00104008,*puVar4);
          }
          __printf_chk(1,&DAT_00104008,*puVar3);
        }
        __printf_chk(1,&DAT_00104008,*puVar2);
      }
      puVar2 = *(undefined4 **)(puVar1 + 4);
      if (puVar2 != (undefined4 *)0x0) {
        puVar3 = *(undefined4 **)(puVar2 + 2);
        if (puVar3 != (undefined4 *)0x0) {
          puVar4 = *(undefined4 **)(puVar3 + 2);
          if (puVar4 != (undefined4 *)0x0) {
            FUN_00103140(*(undefined8 *)(puVar4 + 2));
            FUN_00103140(*(undefined8 *)(puVar4 + 4));
            __printf_chk(1,&DAT_00104008,*puVar4);
          }
          puVar4 = *(undefined4 **)(puVar3 + 4);
          if (puVar4 != (undefined4 *)0x0) {
            FUN_00103140(*(undefined8 *)(puVar4 + 2));
            FUN_00103140(*(undefined8 *)(puVar4 + 4));
            __printf_chk(1,&DAT_00104008,*puVar4);
          }
          __printf_chk(1,&DAT_00104008,*puVar3);
        }
        puVar3 = *(undefined4 **)(puVar2 + 4);
        if (puVar3 != (undefined4 *)0x0) {
          puVar4 = *(undefined4 **)(puVar3 + 2);
          if (puVar4 != (undefined4 *)0x0) {
            puVar5 = *(undefined4 **)(puVar4 + 2);
            if (puVar5 != (undefined4 *)0x0) {
              FUN_00103140(*(undefined8 *)(puVar5 + 2));
              FUN_00103140(*(undefined8 *)(puVar5 + 4));
              __printf_chk(1,&DAT_00104008,*puVar5);
            }
            puVar5 = *(undefined4 **)(puVar4 + 4);
            if (puVar5 != (undefined4 *)0x0) {
              FUN_00103140(*(undefined8 *)(puVar5 + 2));
              FUN_00103140(*(undefined8 *)(puVar5 + 4));
              __printf_chk(1,&DAT_00104008,*puVar5);
            }
            __printf_chk(1,&DAT_00104008,*puVar4);
          }
          puVar4 = *(undefined4 **)(puVar3 + 4);
          if (puVar4 != (undefined4 *)0x0) {
            FUN_00103140(*(undefined8 *)(puVar4 + 2));
            FUN_00103140(*(undefined8 *)(puVar4 + 4));
            __printf_chk(1,&DAT_00104008,*puVar4);
          }
          __printf_chk(1,&DAT_00104008,*puVar3);
        }
        __printf_chk(1,&DAT_00104008,*puVar2);
      }
      __printf_chk(1,&DAT_00104008,*puVar1);
    }
    puVar1 = *(undefined4 **)(param_1 + 4);
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(puVar1 + 2);
      if (puVar2 != (undefined4 *)0x0) {
        puVar3 = *(undefined4 **)(puVar2 + 2);
        if (puVar3 != (undefined4 *)0x0) {
          puVar4 = *(undefined4 **)(puVar3 + 2);
          if (puVar4 != (undefined4 *)0x0) {
            FUN_00103140(*(undefined8 *)(puVar4 + 2));
            FUN_00103140(*(undefined8 *)(puVar4 + 4));
            __printf_chk(1,&DAT_00104008,*puVar4);
          }
          puVar4 = *(undefined4 **)(puVar3 + 4);
          if (puVar4 != (undefined4 *)0x0) {
            FUN_00103140(*(undefined8 *)(puVar4 + 2));
            FUN_00103140(*(undefined8 *)(puVar4 + 4));
            __printf_chk(1,&DAT_00104008,*puVar4);
          }
          __printf_chk(1,&DAT_00104008,*puVar3);
        }
        puVar3 = *(undefined4 **)(puVar2 + 4);
        if (puVar3 != (undefined4 *)0x0) {
          puVar4 = *(undefined4 **)(puVar3 + 2);
          if (puVar4 != (undefined4 *)0x0) {
            puVar5 = *(undefined4 **)(puVar4 + 2);
            if (puVar5 != (undefined4 *)0x0) {
              FUN_00103140(*(undefined8 *)(puVar5 + 2));
              FUN_00103140(*(undefined8 *)(puVar5 + 4));
              __printf_chk(1,&DAT_00104008,*puVar5);
            }
            puVar5 = *(undefined4 **)(puVar4 + 4);
            if (puVar5 != (undefined4 *)0x0) {
              FUN_00103140(*(undefined8 *)(puVar5 + 2));
              FUN_00103140(*(undefined8 *)(puVar5 + 4));
              __printf_chk(1,&DAT_00104008,*puVar5);
            }
            __printf_chk(1,&DAT_00104008,*puVar4);
          }
          puVar4 = *(undefined4 **)(puVar3 + 4);
          if (puVar4 != (undefined4 *)0x0) {
            puVar5 = *(undefined4 **)(puVar4 + 2);
            if (puVar5 != (undefined4 *)0x0) {
              FUN_00103140(*(undefined8 *)(puVar5 + 2));
              FUN_00103140(*(undefined8 *)(puVar5 + 4));
              __printf_chk(1,&DAT_00104008,*puVar5);
            }
            puVar5 = *(undefined4 **)(puVar4 + 4);
            if (puVar5 != (undefined4 *)0x0) {
              FUN_00103140(*(undefined8 *)(puVar5 + 2));
              FUN_00103140(*(undefined8 *)(puVar5 + 4));
              __printf_chk(1,&DAT_00104008,*puVar5);
            }
            __printf_chk(1,&DAT_00104008,*puVar4);
          }
          __printf_chk(1,&DAT_00104008,*puVar3);
        }
        __printf_chk(1,&DAT_00104008,*puVar2);
      }
      puVar2 = *(undefined4 **)(puVar1 + 4);
      if (puVar2 != (undefined4 *)0x0) {
        puVar3 = *(undefined4 **)(puVar2 + 2);
        if (puVar3 != (undefined4 *)0x0) {
          puVar4 = *(undefined4 **)(puVar3 + 2);
          if (puVar4 != (undefined4 *)0x0) {
            puVar5 = *(undefined4 **)(puVar4 + 2);
            if (puVar5 != (undefined4 *)0x0) {
              FUN_00103140(*(undefined8 *)(puVar5 + 2));
              FUN_00103140(*(undefined8 *)(puVar5 + 4));
              __printf_chk(1,&DAT_00104008,*puVar5);
            }
            puVar5 = *(undefined4 **)(puVar4 + 4);
            if (puVar5 != (undefined4 *)0x0) {
              FUN_00103140(*(undefined8 *)(puVar5 + 2));
              FUN_00103140(*(undefined8 *)(puVar5 + 4));
              __printf_chk(1,&DAT_00104008,*puVar5);
            }
            __printf_chk(1,&DAT_00104008,*puVar4);
          }
          puVar4 = *(undefined4 **)(puVar3 + 4);
          if (puVar4 != (undefined4 *)0x0) {
            FUN_00103140(*(undefined8 *)(puVar4 + 2));
            FUN_00103140(*(undefined8 *)(puVar4 + 4));
            __printf_chk(1,&DAT_00104008,*puVar4);
          }
          __printf_chk(1,&DAT_00104008,*puVar3);
        }
        puVar3 = *(undefined4 **)(puVar2 + 4);
        if (puVar3 != (undefined4 *)0x0) {
          puVar4 = *(undefined4 **)(puVar3 + 2);
          if (puVar4 != (undefined4 *)0x0) {
            FUN_00103140(*(undefined8 *)(puVar4 + 2));
            FUN_00103140(*(undefined8 *)(puVar4 + 4));
            __printf_chk(1,&DAT_00104008,*puVar4);
          }
          puVar4 = *(undefined4 **)(puVar3 + 4);
          if (puVar4 != (undefined4 *)0x0) {
            puVar5 = *(undefined4 **)(puVar4 + 2);
            if (puVar5 != (undefined4 *)0x0) {
              FUN_00103140(*(undefined8 *)(puVar5 + 2));
              FUN_00103140(*(undefined8 *)(puVar5 + 4));
              __printf_chk(1,&DAT_00104008,*puVar5);
            }
            puVar5 = *(undefined4 **)(puVar4 + 4);
            if (puVar5 != (undefined4 *)0x0) {
              FUN_00103140(*(undefined8 *)(puVar5 + 2));
              FUN_00103140(*(undefined8 *)(puVar5 + 4));
              __printf_chk(1,&DAT_00104008,*puVar5);
            }
            __printf_chk(1,&DAT_00104008,*puVar4);
          }
          __printf_chk(1,&DAT_00104008,*puVar3);
        }
        __printf_chk(1,&DAT_00104008,*puVar2);
      }
      __printf_chk(1,&DAT_00104008,*puVar1);
    }
    __printf_chk(1,&DAT_00104008,*param_1);
    return;
  }
  return;
}



/* ===== Function: FUN_00103920 ===== */

int * FUN_00103920(int *param_1,int param_2)

{
  undefined8 uVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_1 == (int *)0x0) {
    param_1 = (int *)malloc(0x18);
    if (param_1 == (int *)0x0) {
LAB_00103be9:
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
        if (piVar3 == (int *)0x0) goto LAB_00103be9;
        *(undefined1 (*) [16])(piVar3 + 2) = (undefined1  [16])0x0;
        *piVar3 = param_2;
      }
      else if (param_2 < *piVar3) {
        piVar2 = *(int **)(piVar3 + 2);
        if (piVar2 == (int *)0x0) {
          piVar2 = (int *)malloc(0x18);
          if (piVar2 == (int *)0x0) goto LAB_00103be9;
          *(undefined1 (*) [16])(piVar2 + 2) = (undefined1  [16])0x0;
          *piVar2 = param_2;
        }
        else if (param_2 < *piVar2) {
          uVar1 = FUN_00103920(*(undefined8 *)(piVar2 + 2));
          *(undefined8 *)(piVar2 + 2) = uVar1;
        }
        else {
          uVar1 = FUN_00103920(*(undefined8 *)(piVar2 + 4));
          *(undefined8 *)(piVar2 + 4) = uVar1;
        }
        *(int **)(piVar3 + 2) = piVar2;
      }
      else {
        piVar2 = *(int **)(piVar3 + 4);
        if (piVar2 == (int *)0x0) {
          piVar2 = (int *)malloc(0x18);
          if (piVar2 == (int *)0x0) goto LAB_00103be9;
          *(undefined1 (*) [16])(piVar2 + 2) = (undefined1  [16])0x0;
          *piVar2 = param_2;
        }
        else if (param_2 < *piVar2) {
          uVar1 = FUN_00103920(*(undefined8 *)(piVar2 + 2));
          *(undefined8 *)(piVar2 + 2) = uVar1;
        }
        else {
          uVar1 = FUN_00103920(*(undefined8 *)(piVar2 + 4));
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
      if (piVar3 == (int *)0x0) goto LAB_00103be9;
      *(undefined1 (*) [16])(piVar3 + 2) = (undefined1  [16])0x0;
      *piVar3 = param_2;
    }
    else if (param_2 < *piVar3) {
      piVar2 = *(int **)(piVar3 + 2);
      if (piVar2 == (int *)0x0) {
        piVar2 = (int *)malloc(0x18);
        if (piVar2 == (int *)0x0) goto LAB_00103be9;
        *(undefined1 (*) [16])(piVar2 + 2) = (undefined1  [16])0x0;
        *piVar2 = param_2;
      }
      else if (param_2 < *piVar2) {
        uVar1 = FUN_00103920(*(undefined8 *)(piVar2 + 2));
        *(undefined8 *)(piVar2 + 2) = uVar1;
      }
      else {
        uVar1 = FUN_00103920(*(undefined8 *)(piVar2 + 4));
        *(undefined8 *)(piVar2 + 4) = uVar1;
      }
      *(int **)(piVar3 + 2) = piVar2;
    }
    else {
      piVar2 = *(int **)(piVar3 + 4);
      if (piVar2 == (int *)0x0) {
        piVar2 = (int *)malloc(0x18);
        if (piVar2 == (int *)0x0) goto LAB_00103be9;
        *(undefined1 (*) [16])(piVar2 + 2) = (undefined1  [16])0x0;
        *piVar2 = param_2;
      }
      else if (param_2 < *piVar2) {
        uVar1 = FUN_00103920(*(undefined8 *)(piVar2 + 2));
        *(undefined8 *)(piVar2 + 2) = uVar1;
      }
      else {
        uVar1 = FUN_00103920(*(undefined8 *)(piVar2 + 4));
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



/* ===== Function: memset ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * memset(void *__s,int __c,size_t __n)

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


