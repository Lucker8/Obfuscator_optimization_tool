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
  (*(code *)PTR_00105f98)();
  return;
}



/* ===== Function: FUN_001010a0 ===== */

void FUN_001010a0(void)

{
  (*(code *)PTR___cxa_finalize_00105ff8)();
  return;
}



/* ===== Function: free ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_00105fa0)();
  return;
}



/* ===== Function: __stack_chk_fail ===== */

void __stack_chk_fail(void)

{
  (*(code *)PTR___stack_chk_fail_00105fa8)();
  return;
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



/* ===== Function: FUN_00101120 ===== */

undefined8 FUN_00101120(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined4 *puVar13;
  long lVar14;
  undefined4 *puVar15;
  long in_FS_OFFSET;
  bool bVar16;
  double dVar17;
  double dVar18;
  int local_a8;
  uint local_a4;
  int local_a0;
  uint local_9c;
  uint local_98;
  int local_94;
  uint local_90;
  undefined4 uStack_8c;
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
switchD_00101192_default:
  iVar3 = __isoc99_scanf("%d",&local_a8);
  if ((iVar3 != 1) || (local_a8 == 0)) {
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return 0;
  }
  switch(local_a8) {
  case 1:
    iVar3 = __isoc99_scanf(&DAT_0010401c,&local_90);
    if (iVar3 == 1) {
      bVar16 = (local_90 & 1) == 0;
      puVar9 = &DAT_0010400c;
      puVar6 = &DAT_00104011;
      goto LAB_0010164a;
    }
    goto switchD_00101192_default;
  case 2:
    iVar3 = __isoc99_scanf(&DAT_0010401c,&local_90);
    if (iVar3 == 1) {
      uVar2 = CONCAT44(uStack_8c,local_90);
      uVar11 = uVar2;
      iVar3 = 0;
      if (uStack_8c < 0) {
        __printf_chk(1,&DAT_00104025);
      }
      else {
        do {
          iVar4 = iVar3;
          uVar11 = uVar11 / 10;
          iVar3 = iVar4 + 1;
        } while (uVar11 != 0);
        uVar11 = 0;
        uVar12 = uVar2;
        do {
          lVar14 = 1;
          iVar3 = iVar4;
          do {
            lVar14 = lVar14 * (uVar12 % 10);
            bVar16 = iVar3 != 0;
            iVar3 = iVar3 + -1;
          } while (bVar16);
          uVar11 = uVar11 + lVar14;
          uVar12 = uVar12 / 10;
        } while (uVar12 != 0);
        bVar16 = uVar2 == uVar11;
        puVar9 = &DAT_00104015;
        puVar6 = &DAT_00104019;
LAB_0010164a:
        if (!bVar16) {
          puVar9 = puVar6;
        }
        __printf_chk(1,&DAT_00104021,puVar9);
      }
    }
    goto switchD_00101192_default;
  case 3:
    iVar3 = __isoc99_scanf("%d",&local_94);
    if (iVar3 == 1) {
      if (local_94 < 1) {
        __printf_chk(1,&DAT_00104029);
      }
      else {
        iVar3 = 0;
        dVar17 = 0.0;
        do {
          iVar4 = __isoc99_scanf(&DAT_00104033,&local_90);
          dVar18 = 0.0;
          if (iVar4 == 1) {
            dVar18 = (double)CONCAT44(uStack_8c,local_90);
          }
          iVar3 = iVar3 + 1;
          dVar17 = dVar17 + dVar18;
        } while (iVar3 < local_94);
        __printf_chk(dVar17 / (double)local_94,1,"%.6f\n");
      }
    }
    goto switchD_00101192_default;
  case 4:
    iVar3 = __isoc99_scanf(&DAT_0010403d,&local_90);
    if (iVar3 != 1) goto switchD_00101192_default;
    lVar14 = 0;
    if (local_90 == 0) {
      __printf_chk(1,&DAT_00104030);
      goto switchD_00101192_default;
    }
    do {
      iVar3 = (int)lVar14;
      uVar10 = (local_90 & 1) + 0x30;
      local_88[lVar14] = (char)uVar10;
      lVar14 = lVar14 + 1;
      local_90 = local_90 >> 1;
    } while (local_90 != 0);
    local_90 = 0;
    lVar14 = (long)iVar3;
    while( true ) {
      putc((int)(char)uVar10,stdout);
      if ((int)(lVar14 + -1) == -1) break;
      uVar10 = (uint)(byte)local_88[lVar14 + -1];
      lVar14 = lVar14 + -1;
    }
    break;
  case 5:
    iVar4 = __isoc99_scanf("%d %d %d %d %d %d",&local_a4,&local_a0,&local_9c,&local_98,&local_94,
                           &local_90);
    uVar5 = local_90;
    iVar3 = local_94;
    uVar10 = local_98;
    if (iVar4 == 6) {
      if ((int)local_98 < (int)local_a4) {
LAB_001015ae:
        local_98 = local_a4;
        local_94 = local_a0;
        local_90 = local_9c;
        local_a4 = uVar10;
        local_a0 = iVar3;
        local_9c = uVar5;
LAB_001015ce:
        iVar4 = local_98 - local_a4;
        iVar7 = local_94 - local_a0;
        iVar3 = local_90 - local_9c;
        if (iVar3 < 0) {
          iVar7 = iVar7 + -1;
          iVar8 = local_94 + -1;
          if (iVar8 == 0) {
            iVar8 = 0xc;
LAB_001018f7:
            iVar8 = *(int *)(&DAT_001040c0 + (long)(iVar8 + -1) * 4);
          }
          else {
            if (iVar8 != 2) goto LAB_001018f7;
            uVar10 = 1;
            if (((int)local_98 % 400 != 0) && (uVar10 = 0, (local_98 & 3) == 0)) {
              uVar10 = (uint)((int)local_98 % 100 != 0);
            }
            iVar8 = uVar10 + 0x1c;
          }
          iVar3 = iVar3 + iVar8;
        }
        if (iVar7 < 0) {
          iVar4 = iVar4 + -1;
          iVar7 = iVar7 + 0xc;
        }
      }
      else {
        if (local_a4 != local_98) goto LAB_001015ce;
        if (local_94 < local_a0) goto LAB_001015ae;
        if (local_94 != local_a0) goto LAB_001015ce;
        if ((int)local_90 < (int)local_9c) goto LAB_001015ae;
        iVar3 = local_90 - local_9c;
        iVar7 = 0;
        iVar4 = 0;
      }
      __printf_chk(1,"%d years %d months %d days\n",iVar4,iVar7,iVar3);
    }
    goto switchD_00101192_default;
  case 6:
    iVar3 = __isoc99_scanf("%d",&local_94);
    if (iVar3 == 1) {
      if (local_94 < 1) {
        __printf_chk(1,&DAT_00104030);
      }
      else {
        if (200000 < local_94) {
          local_94 = 200000;
        }
        iVar3 = 0;
        uVar10 = 0x80000000;
        do {
          iVar4 = __isoc99_scanf("%d",&local_90);
          uVar5 = 0;
          if (iVar4 == 1) {
            uVar5 = local_90;
          }
          if ((int)uVar10 < (int)uVar5) {
            uVar10 = uVar5;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < local_94);
        __printf_chk(1,&DAT_0010406e,uVar10);
      }
    }
    goto switchD_00101192_default;
  case 7:
    iVar3 = __isoc99_scanf("%d",&local_90);
    if (iVar3 != 1) goto switchD_00101192_default;
    if (-1 < (int)local_90) {
      if ((int)local_90 < 0x30d41) {
        if (local_90 == 0) break;
      }
      else {
        local_90 = 200000;
      }
      iVar3 = 0;
      puVar13 = &DAT_001f0640;
      do {
        iVar4 = __isoc99_scanf("%d",puVar13);
        if (iVar4 != 1) {
          *puVar13 = 0;
        }
        iVar3 = iVar3 + 1;
        puVar13 = puVar13 + 1;
      } while (iVar3 < (int)local_90);
      if ((0 < (int)local_90) && (FUN_00101b40(0,local_90 - 1), 0 < (int)local_90)) {
        lVar14 = 0;
        while( true ) {
          puVar13 = &DAT_001f0640 + lVar14;
          lVar14 = lVar14 + 1;
          __printf_chk(1,"%d",*puVar13);
          if ((int)local_90 <= (int)lVar14) break;
          putc(0x20,stdout);
        }
      }
    }
    break;
  case 8:
    iVar3 = __isoc99_scanf("%d",&local_94);
    if (iVar3 != 1) goto switchD_00101192_default;
    if (-1 < local_94) {
      iVar3 = 0;
      puVar13 = (undefined4 *)0x0;
      if (local_94 != 0) {
        do {
          iVar4 = __isoc99_scanf("%d",&local_90);
          if (iVar4 != 1) {
            local_90 = 0;
          }
          iVar3 = iVar3 + 1;
          puVar13 = (undefined4 *)FUN_00101ab0(puVar13,local_90);
        } while (iVar3 < local_94);
        puVar15 = puVar13;
        if (puVar13 != (undefined4 *)0x0) {
          do {
            FUN_00102570(*(undefined8 *)(puVar15 + 2));
            __printf_chk(1,&DAT_00104008,*puVar15);
            puVar1 = (undefined8 *)(puVar15 + 4);
            puVar15 = (undefined4 *)*puVar1;
          } while ((undefined4 *)*puVar1 != (undefined4 *)0x0);
          putc(10,stdout);
          puVar15 = puVar13;
          do {
            __printf_chk(1,&DAT_00104008,*puVar15);
            FUN_00102760(*(undefined8 *)(puVar15 + 2));
            puVar15 = *(undefined4 **)(puVar15 + 4);
          } while (puVar15 != (undefined4 *)0x0);
          putc(10,stdout);
          FUN_00102950(*(undefined8 *)(puVar13 + 2));
          FUN_00102950(*(undefined8 *)(puVar13 + 4));
          __printf_chk(1,&DAT_00104008,*puVar13);
          putc(10,stdout);
          FUN_00101e90(*(undefined8 *)(puVar13 + 2));
          FUN_00101e90(*(undefined8 *)(puVar13 + 4));
          free(puVar13);
          goto switchD_00101192_default;
        }
      }
    }
    putc(10,stdout);
    putc(10,stdout);
    break;
  case 9:
    iVar3 = __isoc99_scanf("%d",&local_94);
    if (iVar3 == 1) {
      if (local_94 < 0) {
        __printf_chk(1,&DAT_00104072);
      }
      else {
        if (local_94 < 0x30d41) {
          if (local_94 != 0) goto LAB_001011cf;
        }
        else {
          local_94 = 200000;
LAB_001011cf:
          puVar13 = &DAT_0012d140;
          iVar3 = 0;
          do {
            iVar4 = __isoc99_scanf("%d",puVar13);
            if (iVar4 != 1) {
              *puVar13 = 0;
            }
            iVar3 = iVar3 + 1;
            puVar13 = puVar13 + 1;
          } while (iVar3 < local_94);
        }
        iVar3 = __isoc99_scanf("%d",&local_90);
        if (iVar3 != 1) {
          local_90 = 0;
        }
        iVar3 = local_94 + -1;
        if (-1 < iVar3) {
          iVar4 = 0;
          do {
            while( true ) {
              iVar7 = (iVar3 - iVar4 >> 1) + iVar4;
              uVar10 = (&DAT_0012d140)[iVar7];
              if (local_90 == uVar10) goto LAB_00101264;
              if (local_90 != uVar10 && (int)uVar10 <= (int)local_90) break;
              iVar3 = iVar7 + -1;
              if (iVar3 < iVar4) goto LAB_00101261;
            }
            iVar4 = iVar7 + 1;
          } while (iVar4 <= iVar3);
        }
LAB_00101261:
        iVar7 = -1;
LAB_00101264:
        __printf_chk(1,&DAT_0010406e,iVar7);
      }
    }
    goto switchD_00101192_default;
  case 10:
    FUN_00101bd0();
  default:
    goto switchD_00101192_default;
  }
  putc(10,stdout);
  goto switchD_00101192_default;
}



/* ===== Function: entry ===== */

void processEntry entry(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00105fd8)
            (FUN_00101120,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ===== Function: FUN_001019f0 ===== */

/* WARNING: Removing unreachable block (ram,0x00101a03) */
/* WARNING: Removing unreachable block (ram,0x00101a0f) */

void FUN_001019f0(void)

{
  return;
}



/* ===== Function: FUN_00101a20 ===== */

/* WARNING: Removing unreachable block (ram,0x00101a44) */
/* WARNING: Removing unreachable block (ram,0x00101a50) */

void FUN_00101a20(void)

{
  return;
}



/* ===== Function: _FINI_0 ===== */

void _FINI_0(void)

{
  if (DAT_00106028 == '\0') {
    if (PTR___cxa_finalize_00105ff8 != (undefined *)0x0) {
      FUN_001010a0(PTR_LOOP_00106008);
    }
    FUN_001019f0();
    DAT_00106028 = 1;
    return;
  }
  return;
}



/* ===== Function: _INIT_0 ===== */

void _INIT_0(void)

{
  FUN_00101a20();
  return;
}



/* ===== Function: FUN_00101ab0 ===== */

int * FUN_00101ab0(int *param_1,int param_2)

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
      uVar1 = FUN_00101ab0(*(undefined8 *)(param_1 + 2));
      *(undefined8 *)(param_1 + 2) = uVar1;
      return param_1;
    }
    uVar1 = FUN_00101ab0(*(undefined8 *)(param_1 + 4));
    *(undefined8 *)(param_1 + 4) = uVar1;
  }
  return param_1;
}



/* ===== Function: FUN_00101b40 ===== */

void FUN_00101b40(int param_1,int param_2)

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
      FUN_00101b40(param_1,iVar5);
      param_1 = iVar5 + 2;
    } while (param_1 < param_2);
    return;
  }
  return;
}



/* ===== Function: FUN_00101bd0 ===== */

void FUN_00101bd0(void)

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
        lVar5 = (long)&DAT_00106040 - lVar8;
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
      if ((iVar1 == 1) && ((-1 < local_68c && (local_68c < local_690)))) {
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
            if ((((-1 < (int)(&DAT_00106040)[lVar9 * 200 + lVar8]) && (local_368[lVar8] == 0)) &&
                (local_688[lVar9] != 0x7fffffff)) &&
               (iVar10 = (&DAT_00106040)[lVar9 * 200 + lVar8] + local_688[lVar9],
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
            __printf_chk(1,&DAT_00104004);
          }
          else {
            __printf_chk(1,"%d");
          }
          iVar1 = iVar1 + 1;
          if (local_690 <= iVar1) break;
          piVar6 = piVar6 + 1;
          putc(0x20,stdout);
        } while (iVar1 < local_690);
        putc(10,stdout);
        goto LAB_00101e09;
      }
    }
    putc(10,stdout);
  }
LAB_00101e09:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ===== Function: FUN_00101e90 ===== */

void FUN_00101e90(void *param_1)

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
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            free(pvVar4);
          }
          pvVar4 = *(void **)((long)pvVar3 + 0x10);
          if (pvVar4 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar4 + 8);
            if (pvVar5 != (void *)0x0) {
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 0x10));
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
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            free(pvVar4);
          }
          pvVar4 = *(void **)((long)pvVar3 + 0x10);
          if (pvVar4 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar4 + 8);
            if (pvVar5 != (void *)0x0) {
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 0x10));
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
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            free(pvVar4);
          }
          pvVar4 = *(void **)((long)pvVar3 + 0x10);
          if (pvVar4 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar4 + 8);
            if (pvVar5 != (void *)0x0) {
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 0x10));
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
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            free(pvVar4);
          }
          pvVar4 = *(void **)((long)pvVar3 + 0x10);
          if (pvVar4 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar4 + 8);
            if (pvVar5 != (void *)0x0) {
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 0x10));
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
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            free(pvVar4);
          }
          pvVar4 = *(void **)((long)pvVar3 + 0x10);
          if (pvVar4 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar4 + 8);
            if (pvVar5 != (void *)0x0) {
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 0x10));
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
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            free(pvVar4);
          }
          pvVar4 = *(void **)((long)pvVar3 + 0x10);
          if (pvVar4 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar4 + 8);
            if (pvVar5 != (void *)0x0) {
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 0x10));
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
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            free(pvVar4);
          }
          pvVar4 = *(void **)((long)pvVar3 + 0x10);
          if (pvVar4 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar4 + 8);
            if (pvVar5 != (void *)0x0) {
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 0x10));
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
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            free(pvVar4);
          }
          pvVar4 = *(void **)((long)pvVar3 + 0x10);
          if (pvVar4 != (void *)0x0) {
            pvVar5 = *(void **)((long)pvVar4 + 8);
            if (pvVar5 != (void *)0x0) {
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 0x10));
              free(pvVar5);
            }
            pvVar5 = *(void **)((long)pvVar4 + 0x10);
            if (pvVar5 != (void *)0x0) {
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 8));
              FUN_00101e90(*(undefined8 *)((long)pvVar5 + 0x10));
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



/* ===== Function: FUN_00102570 ===== */

void FUN_00102570(undefined4 *param_1)

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
                      FUN_00102570(*(undefined8 *)(puVar8 + 2));
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



/* ===== Function: FUN_00102760 ===== */

void FUN_00102760(undefined4 *param_1)

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
                      FUN_00102760(*(undefined8 *)(puVar8 + 2));
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



/* ===== Function: FUN_00102950 ===== */

void FUN_00102950(undefined4 *param_1)

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
              FUN_00102950(*(undefined8 *)(puVar5 + 2));
              FUN_00102950(*(undefined8 *)(puVar5 + 4));
              __printf_chk(1,&DAT_00104008,*puVar5);
            }
            FUN_00102950(*(undefined8 *)(puVar4 + 4));
            __printf_chk(1,&DAT_00104008,*puVar4);
          }
          puVar4 = *(undefined4 **)(puVar3 + 4);
          if (puVar4 != (undefined4 *)0x0) {
            puVar5 = *(undefined4 **)(puVar4 + 2);
            if (puVar5 != (undefined4 *)0x0) {
              FUN_00102950(*(undefined8 *)(puVar5 + 2));
              FUN_00102950(*(undefined8 *)(puVar5 + 4));
              __printf_chk(1,&DAT_00104008,*puVar5);
            }
            puVar5 = *(undefined4 **)(puVar4 + 4);
            if (puVar5 != (undefined4 *)0x0) {
              FUN_00102950(*(undefined8 *)(puVar5 + 2));
              FUN_00102950(*(undefined8 *)(puVar5 + 4));
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
              FUN_00102950(*(undefined8 *)(puVar5 + 2));
              FUN_00102950(*(undefined8 *)(puVar5 + 4));
              __printf_chk(1,&DAT_00104008,*puVar5);
            }
            puVar5 = *(undefined4 **)(puVar4 + 4);
            if (puVar5 != (undefined4 *)0x0) {
              FUN_00102950(*(undefined8 *)(puVar5 + 2));
              FUN_00102950(*(undefined8 *)(puVar5 + 4));
              __printf_chk(1,&DAT_00104008,*puVar5);
            }
            __printf_chk(1,&DAT_00104008,*puVar4);
          }
          puVar4 = *(undefined4 **)(puVar3 + 4);
          if (puVar4 != (undefined4 *)0x0) {
            FUN_00102950(*(undefined8 *)(puVar4 + 2));
            FUN_00102950(*(undefined8 *)(puVar4 + 4));
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
            FUN_00102950(*(undefined8 *)(puVar4 + 2));
            FUN_00102950(*(undefined8 *)(puVar4 + 4));
            __printf_chk(1,&DAT_00104008,*puVar4);
          }
          puVar4 = *(undefined4 **)(puVar3 + 4);
          if (puVar4 != (undefined4 *)0x0) {
            FUN_00102950(*(undefined8 *)(puVar4 + 2));
            FUN_00102950(*(undefined8 *)(puVar4 + 4));
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
              FUN_00102950(*(undefined8 *)(puVar5 + 2));
              FUN_00102950(*(undefined8 *)(puVar5 + 4));
              __printf_chk(1,&DAT_00104008,*puVar5);
            }
            puVar5 = *(undefined4 **)(puVar4 + 4);
            if (puVar5 != (undefined4 *)0x0) {
              FUN_00102950(*(undefined8 *)(puVar5 + 2));
              FUN_00102950(*(undefined8 *)(puVar5 + 4));
              __printf_chk(1,&DAT_00104008,*puVar5);
            }
            __printf_chk(1,&DAT_00104008,*puVar4);
          }
          puVar4 = *(undefined4 **)(puVar3 + 4);
          if (puVar4 != (undefined4 *)0x0) {
            FUN_00102950(*(undefined8 *)(puVar4 + 2));
            FUN_00102950(*(undefined8 *)(puVar4 + 4));
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
            FUN_00102950(*(undefined8 *)(puVar4 + 2));
            FUN_00102950(*(undefined8 *)(puVar4 + 4));
            __printf_chk(1,&DAT_00104008,*puVar4);
          }
          puVar4 = *(undefined4 **)(puVar3 + 4);
          if (puVar4 != (undefined4 *)0x0) {
            FUN_00102950(*(undefined8 *)(puVar4 + 2));
            FUN_00102950(*(undefined8 *)(puVar4 + 4));
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
              FUN_00102950(*(undefined8 *)(puVar5 + 2));
              FUN_00102950(*(undefined8 *)(puVar5 + 4));
              __printf_chk(1,&DAT_00104008,*puVar5);
            }
            puVar5 = *(undefined4 **)(puVar4 + 4);
            if (puVar5 != (undefined4 *)0x0) {
              FUN_00102950(*(undefined8 *)(puVar5 + 2));
              FUN_00102950(*(undefined8 *)(puVar5 + 4));
              __printf_chk(1,&DAT_00104008,*puVar5);
            }
            __printf_chk(1,&DAT_00104008,*puVar4);
          }
          puVar4 = *(undefined4 **)(puVar3 + 4);
          if (puVar4 != (undefined4 *)0x0) {
            puVar5 = *(undefined4 **)(puVar4 + 2);
            if (puVar5 != (undefined4 *)0x0) {
              FUN_00102950(*(undefined8 *)(puVar5 + 2));
              FUN_00102950(*(undefined8 *)(puVar5 + 4));
              __printf_chk(1,&DAT_00104008,*puVar5);
            }
            puVar5 = *(undefined4 **)(puVar4 + 4);
            if (puVar5 != (undefined4 *)0x0) {
              FUN_00102950(*(undefined8 *)(puVar5 + 2));
              FUN_00102950(*(undefined8 *)(puVar5 + 4));
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
              FUN_00102950(*(undefined8 *)(puVar5 + 2));
              FUN_00102950(*(undefined8 *)(puVar5 + 4));
              __printf_chk(1,&DAT_00104008,*puVar5);
            }
            puVar5 = *(undefined4 **)(puVar4 + 4);
            if (puVar5 != (undefined4 *)0x0) {
              FUN_00102950(*(undefined8 *)(puVar5 + 2));
              FUN_00102950(*(undefined8 *)(puVar5 + 4));
              __printf_chk(1,&DAT_00104008,*puVar5);
            }
            __printf_chk(1,&DAT_00104008,*puVar4);
          }
          puVar4 = *(undefined4 **)(puVar3 + 4);
          if (puVar4 != (undefined4 *)0x0) {
            FUN_00102950(*(undefined8 *)(puVar4 + 2));
            FUN_00102950(*(undefined8 *)(puVar4 + 4));
            __printf_chk(1,&DAT_00104008,*puVar4);
          }
          __printf_chk(1,&DAT_00104008,*puVar3);
        }
        puVar3 = *(undefined4 **)(puVar2 + 4);
        if (puVar3 != (undefined4 *)0x0) {
          puVar4 = *(undefined4 **)(puVar3 + 2);
          if (puVar4 != (undefined4 *)0x0) {
            FUN_00102950(*(undefined8 *)(puVar4 + 2));
            FUN_00102950(*(undefined8 *)(puVar4 + 4));
            __printf_chk(1,&DAT_00104008,*puVar4);
          }
          puVar4 = *(undefined4 **)(puVar3 + 4);
          if (puVar4 != (undefined4 *)0x0) {
            puVar5 = *(undefined4 **)(puVar4 + 2);
            if (puVar5 != (undefined4 *)0x0) {
              FUN_00102950(*(undefined8 *)(puVar5 + 2));
              FUN_00102950(*(undefined8 *)(puVar5 + 4));
              __printf_chk(1,&DAT_00104008,*puVar5);
            }
            puVar5 = *(undefined4 **)(puVar4 + 4);
            if (puVar5 != (undefined4 *)0x0) {
              FUN_00102950(*(undefined8 *)(puVar5 + 2));
              FUN_00102950(*(undefined8 *)(puVar5 + 4));
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


