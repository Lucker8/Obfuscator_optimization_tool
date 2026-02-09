/* Ghidra decompiler output (pseudo-C) */


/* ===== Function: _DT_INIT ===== */

void _DT_INIT(void)

{
  if (PTR___gmon_start___0040aff8 != (undefined *)0x0) {
    (*(code *)PTR___gmon_start___0040aff8)();
  }
  return;
}



/* ===== Function: FUN_00401020 ===== */

void FUN_00401020(void)

{
  (*(code *)PTR_0040b010)();
  return;
}



/* ===== Function: free ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0040b018)();
  return;
}



/* ===== Function: putchar ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0040b020)();
  return iVar1;
}



/* ===== Function: puts ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0040b028)();
  return iVar1;
}



/* ===== Function: printf ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0040b030)();
  return iVar1;
}



/* ===== Function: malloc ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0040b038)();
  return pvVar1;
}



/* ===== Function: __isoc99_scanf ===== */

void __isoc99_scanf(void)

{
  (*(code *)PTR___isoc99_scanf_0040b040)();
  return;
}



/* ===== Function: exit ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*_DAT_0040b048)();
  return;
}



/* ===== Function: entry ===== */

void processEntry entry(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_0040aff0)
            (FUN_00401190,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ===== Function: FUN_004010d0 ===== */

void FUN_004010d0(void)

{
  return;
}



/* ===== Function: FUN_004010e0 ===== */

/* WARNING: Removing unreachable block (ram,0x004010ed) */
/* WARNING: Removing unreachable block (ram,0x004010f7) */

void FUN_004010e0(void)

{
  return;
}



/* ===== Function: FUN_00401110 ===== */

/* WARNING: Removing unreachable block (ram,0x0040112f) */
/* WARNING: Removing unreachable block (ram,0x00401139) */

void FUN_00401110(void)

{
  return;
}



/* ===== Function: _FINI_0 ===== */

void _FINI_0(void)

{
  if (DAT_0040b060 == '\0') {
    FUN_004010e0();
    DAT_0040b060 = 1;
    return;
  }
  return;
}



/* ===== Function: _INIT_0 ===== */

void _INIT_0(void)

{
  FUN_00401110();
  return;
}



/* ===== Function: FUN_00401190 ===== */

/* WARNING: Removing unreachable block (ram,0x004011e9) */
/* WARNING: Removing unreachable block (ram,0x0040128a) */
/* WARNING: Removing unreachable block (ram,0x004011d7) */
/* WARNING: Removing unreachable block (ram,0x00401503) */

undefined8 FUN_00401190(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  int local_40;
  int local_3c;
  int *local_38;
  
  local_38 = &local_3c;
  iVar2 = 0x6bc9271f;
LAB_0040120c:
  do {
    if (0x433572fa < iVar2) {
      if (iVar2 < 0x6e269dba) {
        if (iVar2 < 0x6675f429) {
          if (iVar2 == 0x433572fb) {
            bVar5 = (~((DAT_005b8b88 + -1) * DAT_005b8b88) | 0xfffffffeU) == 0xffffffff;
            iVar2 = -0x7b8d39a5;
            if (bVar5) {
              iVar2 = -0x10313bc3;
            }
            if (9 < DAT_005b8be8) {
              iVar2 = -0x7b8d39a5;
            }
            if (DAT_005b8be8 < 10 != bVar5) {
              iVar2 = -0x10313bc3;
            }
          }
          else if (iVar2 == 0x6349f5f0) {
            return 0;
          }
          goto joined_r0x0040134b;
        }
        if (iVar2 == 0x6675f429) {
          FUN_00403630();
        }
        else if (iVar2 != 0x6bc9271f) goto joined_r0x0040134b;
LAB_004014f2:
        iVar2 = 0x151c382f;
      }
      else if (iVar2 < 0x71a52746) {
        if (iVar2 == 0x6e269dba) {
          bVar6 = SBORROW4(local_40,9);
          bVar5 = local_40 + -9 < 0;
          iVar2 = 0x1f248340;
          iVar1 = 0x433572fb;
          goto LAB_004016da;
        }
        if (iVar2 != 0x6fc10fbb) goto joined_r0x0040134b;
        FUN_00402350();
        iVar2 = 0x7c0deedf;
      }
      else {
        if (iVar2 != 0x71a52746) {
          if (iVar2 == 0x7c0deedf) {
            FUN_00402350();
            bVar5 = (~((DAT_005b8b88 + -1) * DAT_005b8b88) | 0xfffffffeU) == 0xffffffff;
            iVar2 = 0x6fc10fbb;
            if (bVar5) {
              iVar2 = 0x71a52746;
            }
            if (9 < DAT_005b8be8) {
              iVar2 = 0x6fc10fbb;
            }
            if (DAT_005b8be8 < 10 != bVar5) {
              iVar2 = 0x71a52746;
            }
          }
          goto joined_r0x0040134b;
        }
LAB_004011dc:
        iVar2 = 0x151c382f;
      }
      goto LAB_0040120c;
    }
    if (iVar2 < 0x151c382f) {
      if (iVar2 < 0x2af998a) {
        if (iVar2 == -0x4823aa0) {
          iVar2 = -0x68f78a6a;
          goto LAB_00401510;
        }
        if (iVar2 == -0x341ea9d) {
          FUN_00404ed0();
          goto LAB_004014f2;
        }
      }
      else {
        if (iVar2 == 0x2af998a) {
          bVar6 = SBORROW4(local_40,7);
          bVar5 = local_40 + -7 < 0;
          iVar2 = 0x6675f429;
          iVar1 = -0x24790223;
          goto LAB_004016da;
        }
        if (iVar2 == 0xcd40981) {
          uVar3 = (DAT_005b8b88 + -1) * DAT_005b8b88;
          uVar3 = (uVar3 ^ 0xfffffffe) & uVar3;
          iVar1 = 0x6fc10fbb;
          if (DAT_005b8be8 < 10 != (uVar3 == 0)) {
            iVar1 = 0x7c0deedf;
          }
          iVar2 = iVar1;
          if (uVar3 == 0) {
            iVar2 = 0x7c0deedf;
          }
          if (9 < DAT_005b8be8) {
            iVar2 = iVar1;
          }
        }
      }
    }
    else if (iVar2 < 0x2b3ab27f) {
      if (iVar2 == 0x151c382f) {
        iVar1 = __isoc99_scanf("%d",&local_3c);
        iVar4 = -0x4823aa0;
        if ((local_3c == 0) != (iVar1 != 1)) {
          iVar4 = 0x6349f5f0;
        }
        iVar2 = iVar4;
        if (local_3c == 0) {
          iVar2 = 0x6349f5f0;
        }
        local_40 = local_3c;
        if (iVar1 == 1) {
          iVar2 = iVar4;
        }
      }
      else if (iVar2 == 0x1f248340) {
        bVar6 = SBORROW4(local_40,10);
        bVar5 = local_40 + -10 < 0;
        iVar2 = 0x2b3ab27f;
        iVar1 = -0x3abd057b;
        goto LAB_004016da;
      }
    }
    else {
      if (iVar2 == 0x2b3ab27f) {
        bVar5 = local_40 == 10;
        iVar1 = -0x341ea9d;
        goto LAB_00401627;
      }
      if (iVar2 == 0x4143caba) {
        FUN_00401a50();
        goto LAB_004014f2;
      }
    }
joined_r0x0040134b:
    if (iVar2 < -0x4823aa0) {
LAB_00401510:
      if (-0x3abd057c < iVar2) {
        if (iVar2 < -0x14f7e713) {
          if (iVar2 < -0x24790223) {
            if (iVar2 == -0x3abd057b) {
              FUN_00404510();
              goto LAB_004014f2;
            }
            if (iVar2 == -0x2e7451d8) {
              bVar6 = SBORROW4(local_40,5);
              bVar5 = local_40 + -5 < 0;
              iVar2 = -0x596a07a2;
              iVar1 = 0xcd40981;
              goto LAB_004016da;
            }
            goto joined_r0x0040134b;
          }
          if (iVar2 == -0x24790223) {
            FUN_004030c0();
            goto LAB_004014f2;
          }
          if (iVar2 != -0x155415a6) goto joined_r0x0040134b;
          bVar5 = local_40 == 1;
          iVar1 = -0x10b7cce0;
LAB_00401627:
          iVar2 = 0x6bc9271f;
          if (bVar5) {
            iVar2 = iVar1;
          }
        }
        else {
          if (iVar2 < -0x10313bc3) {
            if (iVar2 == -0x14f7e713) goto LAB_004014f2;
            if (iVar2 == -0x10b7cce0) {
              FUN_00401770();
              goto LAB_004014f2;
            }
            goto joined_r0x0040134b;
          }
          if (iVar2 != -0x10313bc3) {
            if (iVar2 == -0xf1fb4c0) {
              bVar6 = SBORROW4(local_40,3);
              bVar5 = local_40 + -3 < 0;
              iVar2 = -0x65c92341;
              iVar1 = -0x722d3e42;
              goto LAB_004016da;
            }
            goto joined_r0x0040134b;
          }
          FUN_004040a0();
          uVar3 = ~((DAT_005b8b88 + -1) * DAT_005b8b88) | 0xfffffffe;
          iVar1 = -0x7b8d39a5;
          if (DAT_005b8be8 < 10 != (uVar3 == 0xffffffff)) {
            iVar1 = -0x14f7e713;
          }
          iVar2 = iVar1;
          if (uVar3 == 0xffffffff) {
            iVar2 = -0x14f7e713;
          }
          if (9 < DAT_005b8be8) {
            iVar2 = iVar1;
          }
        }
joined_r0x00401740:
        if (-0x4823aa1 < iVar2) goto LAB_0040120c;
        goto LAB_00401510;
      }
      if (iVar2 < -0x65c92341) {
        if (iVar2 == -0x7b8d39a5) {
          FUN_004040a0();
          iVar2 = -0x10313bc3;
          goto LAB_00401510;
        }
        if (iVar2 != -0x722d3e42) {
          if (iVar2 == -0x68f78a6a) {
            bVar6 = SBORROW4(local_40,6);
            bVar5 = local_40 + -6 < 0;
            iVar2 = -0x43386972;
            iVar1 = -0xf1fb4c0;
            goto LAB_004016da;
          }
          goto joined_r0x0040134b;
        }
        bVar6 = SBORROW4(local_40,2);
        bVar5 = local_40 + -2 < 0;
        iVar2 = 0x4143caba;
        iVar1 = -0x155415a6;
      }
      else if (iVar2 < -0x4f4971a3) {
        if (iVar2 != -0x65c92341) {
          if (iVar2 == -0x596a07a2) {
            FUN_00402990();
            goto LAB_004014f2;
          }
          goto joined_r0x0040134b;
        }
        bVar6 = SBORROW4(local_40,4);
        bVar5 = local_40 + -4 < 0;
        iVar2 = -0x2e7451d8;
        iVar1 = -0x4f4971a3;
      }
      else {
        if (iVar2 == -0x4f4971a3) {
          FUN_00401ee0();
          goto LAB_004011dc;
        }
        if (iVar2 != -0x43386972) goto joined_r0x0040134b;
        bVar6 = SBORROW4(local_40,8);
        bVar5 = local_40 + -8 < 0;
        iVar2 = 0x6e269dba;
        iVar1 = 0x2af998a;
      }
LAB_004016da:
      if (bVar6 != bVar5) {
        iVar2 = iVar1;
      }
      goto joined_r0x00401740;
    }
  } while( true );
}



/* ===== Function: FUN_00401770 ===== */

undefined4 FUN_00401770(void)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  char *__s;
  undefined4 unaff_R14D;
  undefined8 auStack_70 [3];
  undefined1 auStack_58 [8];
  uint *local_50;
  undefined4 local_44;
  uint *local_40;
  char local_33;
  char local_32;
  char local_31;
  
  puVar5 = (uint *)auStack_58;
  uVar3 = (DAT_005b8b84 + -1) * DAT_005b8b84;
  local_31 = ((uVar3 ^ 0xfffffffe) & uVar3) == 0;
  local_32 = DAT_005b8bac < 10;
  uVar3 = 0x3ead41ef;
  do {
    do {
      while ((int)uVar3 < 0x458f4a7a) {
        if (uVar3 != 0x11ff072f) {
          if (uVar3 != 0x3ead41ef) goto joined_r0x0040195d;
          uVar4 = 0x84841d98;
          if (local_31 != local_32) {
            uVar4 = 0xe04870a3;
          }
          uVar3 = uVar4;
          if (local_32 != '\0') {
            uVar3 = 0xe04870a3;
          }
          if (local_31 != '\0') goto joined_r0x0040195d;
          uVar3 = uVar4;
          goto joined_r0x0040195d;
        }
        __s = "odd";
        if (((ulong)~*local_40 | 0xfffffffffffffffe) == 0xffffffffffffffff) {
          __s = "even";
        }
        *(undefined8 *)((long)puVar5 + -8) = 0x401a15;
        puts(__s);
        unaff_R14D = 1;
        uVar3 = 0x737a0241;
      }
      if (uVar3 != 0x458f4a7a) {
        if (uVar3 == 0x737a0241) {
          uVar4 = ~((DAT_005b8b84 + -1) * DAT_005b8b84) | 0xfffffffe;
          uVar6 = 0x3c15e13;
          if (DAT_005b8bac < 10 != (uVar4 == 0xffffffff)) {
            uVar6 = 0x458f4a7a;
          }
          puVar2 = puVar5;
          uVar3 = uVar6;
          local_44 = unaff_R14D;
          if (uVar4 != 0xffffffff) goto LAB_004017c8;
          uVar3 = 0x458f4a7a;
          goto LAB_004017c8;
        }
        if (uVar3 != 0x789e2901) goto joined_r0x0040195d;
        return local_44;
      }
      uVar4 = (DAT_005b8b84 + -1) * DAT_005b8b84;
      uVar4 = (uVar4 ^ 0xfffffffe) & uVar4;
      uVar3 = 0x3c15e13;
      if (uVar4 == 0) {
        uVar3 = 0x789e2901;
      }
      if (9 < DAT_005b8bac) {
        uVar3 = 0x3c15e13;
      }
      if (DAT_005b8bac < 10 != (uVar4 == 0)) {
        uVar3 = 0x789e2901;
      }
    } while (0x11ff072e < uVar3);
LAB_004017db:
    do {
      if ((int)uVar3 < -0x1fb78f5d) {
        if (uVar3 == 0x84841d98) {
          *(undefined8 *)((long)puVar5 + -0x18) = 0x4018df;
          __isoc99_scanf(&DAT_00409004);
          uVar3 = 0xe04870a3;
          puVar5 = (uint *)((long)puVar5 + -0x10);
          goto LAB_004017db;
        }
        if ((uVar3 == 0xa2244b1c) && (uVar3 = 0x11ff072f, local_33 != '\0')) {
          uVar3 = 0xf3c86542;
        }
      }
      else if (uVar3 == 0xe04870a3) {
        puVar2 = (uint *)((long)puVar5 + -0x10);
        *(undefined8 *)((long)puVar5 + -0x18) = 0x40186b;
        local_50 = puVar2;
        local_40 = puVar2;
        iVar1 = __isoc99_scanf(&DAT_00409004,puVar2);
        local_33 = iVar1 != 1;
        uVar4 = ~(~-DAT_005b8b84 * DAT_005b8b84) | 0xfffffffe;
        uVar6 = 0x84841d98;
        if (DAT_005b8bac < 10 != (uVar4 == 0xffffffff)) {
          uVar6 = 0xa2244b1c;
        }
        uVar3 = uVar6;
        if (uVar4 == 0xffffffff) {
          uVar3 = 0xa2244b1c;
        }
LAB_004017c8:
        puVar5 = puVar2;
        if (9 < DAT_005b8bac) {
          uVar3 = uVar6;
        }
      }
      else {
        if (uVar3 == 0xf3c86542) {
          uVar3 = 0x737a0241;
          unaff_R14D = 0;
          break;
        }
        if (uVar3 == 0x3c15e13) {
          uVar3 = 0x458f4a7a;
          break;
        }
      }
joined_r0x0040195d:
    } while ((int)uVar3 < 0x11ff072f);
  } while( true );
}



/* ===== Function: FUN_00401a50 ===== */

/* WARNING: Removing unreachable block (ram,0x00401a8f) */
/* WARNING: Removing unreachable block (ram,0x00401eb8) */
/* WARNING: Removing unreachable block (ram,0x00401dba) */

long * FUN_00401a50(void)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  int unaff_EBP;
  uint uVar6;
  char *pcVar7;
  long unaff_R12;
  long unaff_R14;
  long unaff_R15;
  bool bVar8;
  int local_5c;
  long local_58;
  long local_50;
  int local_44;
  long *local_40;
  long local_38;
  
  local_40 = &local_58;
  local_44 = __isoc99_scanf(&DAT_00409004);
  uVar2 = 0x2e8b2a61;
LAB_00401aab:
  do {
    if (0x432c9009 < (int)uVar2) {
      if (0x526cdc23 < (int)uVar2) {
        if (uVar2 == 0x526cdc24) goto LAB_00401a94;
        if (uVar2 != 0x75cd0b35) goto joined_r0x00401af1;
        pcVar7 = "no";
        if (local_50 == local_58) {
          pcVar7 = "yes";
        }
        puts(pcVar7);
        uVar5 = ~((DAT_005b8c0c + -1) * DAT_005b8c0c) | 0xfffffffe;
        uVar6 = 0xdb36dce9;
        if (DAT_005b8ba0 < 10 != (uVar5 == 0xffffffff)) {
          uVar6 = 0x2d69ea53;
        }
        uVar2 = uVar6;
        if (uVar5 != 0xffffffff) goto LAB_00401e75;
        uVar2 = 0x2d69ea53;
        goto LAB_00401e75;
      }
      if (uVar2 != 0x432c900a) {
        if (uVar2 != 0x51460e04) goto joined_r0x00401af1;
        lVar1 = unaff_R15 / 10;
        lVar3 = FUN_00406320(unaff_R15 % 10,local_5c);
        unaff_R12 = lVar3 + unaff_R12;
        uVar4 = unaff_R15 + 9;
        unaff_R15 = lVar1;
        uVar2 = 0xb6a93cc0;
        local_50 = unaff_R12;
        if (uVar4 < 0x13) goto joined_r0x00401af1;
        uVar2 = 0x51460e04;
        goto joined_r0x00401af1;
      }
      puts("no");
      uVar2 = 0xbbb1f880;
      goto LAB_00401ca0;
    }
    if ((int)uVar2 < 0x2d69ea53) {
      if (uVar2 != 0xf831ba3) {
        if (uVar2 != 0x11819c32) goto joined_r0x00401af1;
        local_38 = local_58;
        uVar2 = 0xf831ba3;
        if (-1 < local_58) goto joined_r0x00401af1;
        uVar2 = 0xd5c7f50b;
        goto joined_r0x00401af1;
      }
      uVar2 = 0xc8900c35;
      unaff_EBP = 0;
      unaff_R14 = local_38;
      goto LAB_00401ca0;
    }
    if (uVar2 == 0x2d69ea53) {
      uVar2 = 0x86566af4;
      goto LAB_00401ca0;
    }
    if (uVar2 != 0x2e8b2a61) goto joined_r0x00401af1;
    uVar2 = 0x11819c32;
    if (local_44 != 1) {
      uVar2 = 0x526cdc24;
    }
    if (uVar2 < 0xf831ba3) {
LAB_00401ca0:
      do {
        while (-0x376ff3cc < (int)uVar2) {
          if ((int)uVar2 < -0x24c92317) {
            if (uVar2 == 0xc8900c35) {
              local_5c = unaff_EBP + 1;
              lVar1 = unaff_R14 / 10;
              uVar4 = unaff_R14 + 9;
              unaff_R14 = lVar1;
              unaff_EBP = local_5c;
              uVar2 = 0xe1beded2;
              if (0x12 < uVar4) {
                uVar2 = 0xc8900c35;
              }
            }
            else if (uVar2 == 0xd5c7f50b) {
              bVar8 = (~((DAT_005b8c0c + -1) * DAT_005b8c0c) | 0xfffffffeU) == 0xffffffff;
              uVar2 = 0x432c900a;
              if (bVar8) {
                uVar2 = 0xbbb1f880;
              }
              if (9 < DAT_005b8ba0) {
                uVar2 = 0x432c900a;
              }
              if (DAT_005b8ba0 < 10 != bVar8) {
                uVar2 = 0xbbb1f880;
              }
            }
          }
          else {
            if (uVar2 == 0xdb36dce9) {
              pcVar7 = "no";
              if (local_50 == local_58) {
                pcVar7 = "yes";
              }
              puts(pcVar7);
              uVar2 = 0x75cd0b35;
              goto LAB_00401aab;
            }
            if (uVar2 == 0xe1beded2) {
              uVar2 = 0x51460e04;
              unaff_R12 = 0;
              unaff_R15 = local_58;
              goto LAB_00401aab;
            }
          }
joined_r0x00401af1:
          if (0xf831ba2 < (int)uVar2) goto LAB_00401aab;
        }
        if ((int)uVar2 < -0x4956c340) {
          if (uVar2 == 0x8119227f) {
LAB_00401a94:
            uVar2 = 0x86566af4;
          }
          else if (uVar2 == 0x86566af4) {
            return local_40;
          }
          goto joined_r0x00401af1;
        }
        if (uVar2 != 0xb6a93cc0) {
          if (uVar2 == 0xbbb1f880) {
            puts("no");
            uVar5 = (~-DAT_005b8c0c * DAT_005b8c0c ^ 0xfffffffeU) & ~-DAT_005b8c0c * DAT_005b8c0c;
            uVar6 = 0x432c900a;
            if (DAT_005b8ba0 < 10 != (uVar5 == 0)) {
              uVar6 = 0x8119227f;
            }
            uVar2 = uVar6;
            if (uVar5 == 0) {
              uVar2 = 0x8119227f;
            }
            if (9 < DAT_005b8ba0) {
              uVar2 = uVar6;
            }
          }
          goto joined_r0x00401af1;
        }
        uVar5 = ~((DAT_005b8c0c + -1) * DAT_005b8c0c) | 0xfffffffe;
        uVar6 = 0xdb36dce9;
        if (DAT_005b8ba0 < 10 != (uVar5 == 0xffffffff)) {
          uVar6 = 0x75cd0b35;
        }
        uVar2 = uVar6;
        if (uVar5 == 0xffffffff) {
          uVar2 = 0x75cd0b35;
        }
LAB_00401e75:
        if (9 < DAT_005b8ba0) {
          uVar2 = uVar6;
        }
      } while ((int)uVar2 < 0xf831ba3);
    }
  } while( true );
}



/* ===== Function: FUN_00401ee0 ===== */

/* WARNING: Removing unreachable block (ram,0x00402281) */
/* WARNING: Removing unreachable block (ram,0x00402329) */
/* WARNING: Removing unreachable block (ram,0x00402144) */

double * FUN_00401ee0(double param_1)

{
  int iVar1;
  double *pdVar2;
  uint uVar3;
  uint uVar4;
  double *pdVar5;
  uint uVar6;
  int unaff_R14D;
  bool bVar7;
  double dVar8;
  undefined1 auStack_78 [8];
  double local_70;
  double *local_68;
  double *local_60;
  double local_58;
  double *local_50;
  int local_48;
  int local_44;
  double *local_40;
  char local_34;
  char local_33;
  char local_32;
  char local_31;
  
  uVar3 = (DAT_005b8c08 + -1) * DAT_005b8c08;
  local_31 = ((uVar3 ^ 0xfffffffe) & uVar3) == 0;
  local_32 = DAT_005b8b9c < 10;
  uVar3 = 0x9bf9cd93;
  pdVar5 = (double *)auStack_78;
  local_58 = param_1;
LAB_00402110:
  do {
    if (-0x44d4a051 < (int)uVar3) {
      if ((int)uVar3 < -0x28126f17) {
        if (uVar3 == 0xbb2b5fb0) {
          uVar3 = 0x5cc0369c;
          goto LAB_00401fab;
        }
        if (uVar3 == 0xbcdda3bb) {
          uVar3 = 0xb547bea1;
          local_58 = 0.0;
          unaff_R14D = 0;
          goto LAB_00402110;
        }
      }
      else {
        if (uVar3 == 0xd7ed90e9) {
          *local_50 = 0.0;
          uVar3 = 0x5ae2ae9c;
          goto LAB_00401fab;
        }
        if (uVar3 == 0xe49692d7) {
          uVar4 = ~((DAT_005b8c08 + -1) * DAT_005b8c08) | 0xfffffffe;
          uVar6 = 0xbb2b5fb0;
          if (DAT_005b8b9c < 10 != (uVar4 == 0xffffffff)) {
            uVar6 = 0x5cc0369c;
          }
          uVar3 = uVar6;
          if (uVar4 != 0xffffffff) goto LAB_00401f3d;
          uVar3 = 0x5cc0369c;
          goto LAB_00401f3d;
        }
      }
joined_r0x00402262:
      if (0x140bda08 < (int)uVar3) {
LAB_00401fab:
        while (pdVar2 = local_50, 0x5cc0369b < (int)uVar3) {
          if ((int)uVar3 < 0x69701ca3) {
            if (uVar3 == 0x5cc0369c) {
              local_34 = *(int *)local_40 < 1;
              uVar4 = ~((DAT_005b8c08 + -1) * DAT_005b8c08) | 0xfffffffe;
              uVar6 = 0xbb2b5fb0;
              if (DAT_005b8b9c < 10 != (uVar4 == 0xffffffff)) {
                uVar6 = 0x6620b9f6;
              }
              uVar3 = uVar6;
              if (uVar4 == 0xffffffff) {
                uVar3 = 0x6620b9f6;
              }
LAB_00401f3d:
              if (9 < DAT_005b8b9c) {
                uVar3 = uVar6;
              }
              goto joined_r0x00401f48;
            }
            if (uVar3 == 0x6620b9f6) {
              bVar7 = local_34 == '\0';
              uVar3 = 0xbcdda3bb;
              uVar4 = 0x69701ca3;
              goto LAB_00402092;
            }
            goto joined_r0x00402262;
          }
          if (uVar3 == 0x69701ca3) {
            pdVar5[-1] = 2.07643686338753e-317;
            puts("0.000000");
          }
          else {
            if (uVar3 != 0x77177f82) goto joined_r0x00402262;
            dVar8 = local_70 / (double)local_44;
            pdVar5[-1] = 2.07637065859099e-317;
            printf("%.6f\n",dVar8);
          }
LAB_00402134:
          uVar3 = 0x23459cad;
        }
        if ((int)uVar3 < 0x23459cad) {
          if (uVar3 == 0x140bda09) {
            pdVar5[-3] = 2.07642302954944e-317;
            __isoc99_scanf("%d");
            uVar3 = 0xb26f45d7;
            pdVar5 = pdVar5 + -2;
            goto LAB_00402110;
          }
          if (uVar3 != 0x177b751c) goto joined_r0x00402262;
          local_68 = local_50;
          pdVar5[-1] = 2.07633854432401e-317;
          iVar1 = __isoc99_scanf(&DAT_0040902b,pdVar2);
          bVar7 = iVar1 == 1;
          uVar3 = 0x5ae2ae9c;
          uVar4 = 0xd7ed90e9;
        }
        else {
          if (uVar3 != 0x3d5dc461) {
            if (uVar3 == 0x5ae2ae9c) {
              local_58 = local_70 + *local_50;
              unaff_R14D = local_48 + 1;
              uVar3 = 0xb547bea1;
              goto LAB_00402110;
            }
            if (uVar3 == 0x23459cad) {
              return local_60;
            }
            goto joined_r0x00402262;
          }
          bVar7 = local_33 == '\0';
          uVar3 = 0xe49692d7;
          uVar4 = 0xa6021eac;
        }
LAB_00402092:
        if (!bVar7) {
          uVar3 = uVar4;
        }
joined_r0x00401f48:
        if ((int)uVar3 < 0x140bda09) goto LAB_00402110;
        goto LAB_00401fab;
      }
      goto LAB_00402110;
    }
    if ((int)uVar3 < -0x4d90ba29) {
      if (uVar3 == 0x9bf9cd93) {
        uVar3 = 0x140bda09;
        if (local_32 != '\0') {
          uVar3 = 0xb26f45d7;
        }
        if (local_31 == '\0') {
          uVar3 = 0x140bda09;
        }
        if (local_31 != local_32) {
          uVar3 = 0xb26f45d7;
        }
      }
      else if (uVar3 == 0xa6021eac) goto LAB_00402134;
      goto joined_r0x00402262;
    }
    if (uVar3 == 0xb26f45d7) {
      local_60 = pdVar5 + -2;
      pdVar2 = pdVar5 + -4;
      pdVar5[-5] = 2.07665573446864e-317;
      local_50 = pdVar2;
      local_40 = local_60;
      iVar1 = __isoc99_scanf("%d",local_60);
      local_33 = iVar1 != 1;
      uVar4 = (DAT_005b8c08 + -1) * DAT_005b8c08;
      uVar4 = (uVar4 ^ 0xfffffffe) & uVar4;
      uVar3 = 0x140bda09;
      if (uVar4 == 0) {
        uVar3 = 0x3d5dc461;
      }
      if (9 < DAT_005b8b9c) {
        uVar3 = 0x140bda09;
      }
      pdVar5 = pdVar2;
      if (DAT_005b8b9c < 10 != (uVar4 == 0)) {
        uVar3 = 0x3d5dc461;
      }
    }
    else {
      if (uVar3 != 0xb547bea1) goto joined_r0x00402262;
      local_44 = *(int *)local_40;
      uVar3 = 0x77177f82;
      local_70 = local_58;
      local_48 = unaff_R14D;
      if (unaff_R14D < local_44) {
        uVar3 = 0x177b751c;
      }
    }
    if (0x140bda08 < uVar3) goto LAB_00401fab;
  } while( true );
}



/* ===== Function: FUN_00402350 ===== */

/* WARNING: Removing unreachable block (ram,0x00402443) */
/* WARNING: Removing unreachable block (ram,0x004027ec) */
/* WARNING: Removing unreachable block (ram,0x0040239b) */
/* WARNING: Removing unreachable block (ram,0x0040288c) */
/* WARNING: Removing unreachable block (ram,0x00402777) */
/* WARNING: Removing unreachable block (ram,0x004023af) */
/* WARNING: Removing unreachable block (ram,0x00402664) */

undefined4 FUN_00402350(void)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  byte bVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 unaff_R12D;
  int unaff_R13D;
  int unaff_R14D;
  int iVar8;
  bool bVar9;
  undefined1 auStack_78 [8];
  undefined1 *local_70;
  uint *local_68;
  undefined4 local_60;
  int local_5c;
  undefined1 *local_58;
  int local_4c;
  uint *local_48;
  int local_3c;
  char local_38;
  char local_37;
  char local_36;
  char local_35;
  uint local_34;
  
  puVar6 = auStack_78;
  local_35 = (~(~-DAT_005b8c14 * DAT_005b8c14) | 0xfffffffeU) == 0xffffffff;
  local_36 = DAT_005b8ba8 < 10;
  iVar2 = -0x3eb214e4;
LAB_004023cb:
  do {
    if (iVar2 < -0x3eb214e4) {
      if (iVar2 < -0x66a1be2d) {
        if (iVar2 != -0x707094de) {
          if (iVar2 == -0x704b5da2) {
            local_58[local_3c] = ((byte)local_34 & 0x33 | 0x32) ^ 2;
            *local_48 = *local_48 >> 1;
            iVar2 = 0x690c6fe2;
            goto LAB_00402690;
          }
          if (iVar2 == -0x6abfc0c7) {
            iVar2 = -0x2f747b6a;
            iVar8 = -0x250c576a;
            cVar1 = local_38;
            goto LAB_00402666;
          }
          goto joined_r0x004025c4;
        }
        uVar5 = (DAT_005b8c14 + -1) * DAT_005b8c14;
        uVar5 = (uVar5 ^ 0xfffffffe) & uVar5;
        iVar8 = 0x75c0efcd;
        iVar2 = 0xe98fbfd;
        if (uVar5 == 0) {
          iVar2 = 0x75c0efcd;
        }
        iVar7 = 0xe98fbfd;
      }
      else {
        if (iVar2 == -0x66a1be2d) {
          iVar2 = (unaff_R14D >> 0x1f & 0x33a8e436U) + 0xf0a108fa;
          local_4c = unaff_R14D;
          goto joined_r0x004025c4;
        }
        if (iVar2 != -0x5ecb3921) {
          if (iVar2 == -0x4fb97025) {
            bVar9 = (~((DAT_005b8c14 + -1) * DAT_005b8c14) | 0xfffffffeU) == 0xffffffff;
            iVar8 = -0x707094de;
            iVar2 = 0xe98fbfd;
            if (bVar9) {
              iVar2 = -0x707094de;
            }
            iVar7 = 0xe98fbfd;
            puVar3 = puVar6;
            local_60 = unaff_R12D;
            goto LAB_00402676;
          }
          goto joined_r0x004025c4;
        }
        uVar5 = (DAT_005b8c14 + -1) * DAT_005b8c14;
        uVar5 = (uVar5 ^ 0xfffffffe) & uVar5;
        iVar8 = 0x4c290565;
        iVar2 = -0xcdcac9c;
        if (uVar5 == 0) {
          iVar2 = 0x4c290565;
        }
        iVar7 = -0xcdcac9c;
        local_3c = unaff_R13D;
      }
      if (9 < DAT_005b8ba8) {
        iVar2 = iVar7;
      }
      if (DAT_005b8ba8 < 10 != (uVar5 == 0)) {
        iVar2 = iVar8;
      }
joined_r0x004025c4:
      do {
        if (iVar2 < -0x15c9e219) goto LAB_004023cb;
LAB_00402690:
        while (iVar2 < 0x2449ed30) {
          if (0x1a35e36 < iVar2) {
            if (iVar2 == 0x1a35e37) {
              iVar2 = -0x1be211c5;
              iVar8 = -0x2b8af689;
              cVar1 = local_37;
LAB_00402666:
              if (cVar1 != '\0') {
                iVar2 = iVar8;
              }
            }
            else {
              if (iVar2 == 0xe98fbfd) {
                iVar2 = -0x707094de;
                goto LAB_004023cb;
              }
              if (iVar2 == 0x17b83670) {
                local_70 = local_58;
                iVar2 = -0x5ecb3921;
                unaff_R13D = 0;
                goto LAB_004023cb;
              }
            }
            goto joined_r0x004025c4;
          }
          if (iVar2 == -0x15c9e219) {
            *(undefined8 *)(puVar6 + -8) = 0x4027ac;
            puts("0");
            goto LAB_004027d6;
          }
          if (iVar2 == -0xf5ef706) {
            cVar1 = local_58[local_4c];
            *(undefined8 *)(puVar6 + -8) = 0x4027bf;
            putchar((int)cVar1);
            iVar8 = local_4c;
            goto LAB_004023a0;
          }
          if (iVar2 != -0xcdcac9c) goto joined_r0x004025c4;
          iVar2 = 0x4c290565;
        }
        if (0x4c290564 < iVar2) {
          if (iVar2 == 0x4c290565) {
            local_34 = *local_48;
            local_38 = local_34 != 0;
            uVar5 = ~((DAT_005b8c14 + -1) * DAT_005b8c14) | 0xfffffffe;
            bVar9 = DAT_005b8ba8 < 10 == (uVar5 == 0xffffffff);
            iVar8 = -0xcdcac9c;
            iVar7 = -0x6abfc0c7;
LAB_004028d1:
            if (!bVar9) {
              iVar8 = iVar7;
            }
            iVar2 = iVar8;
            if (uVar5 == 0xffffffff) {
              iVar2 = iVar7;
            }
            if (9 < DAT_005b8ba8) {
              iVar2 = iVar8;
            }
          }
          else if (iVar2 == 0x690c6fe2) {
            bVar4 = ((byte)local_34 ^ 0xfe) & (byte)local_34;
            local_58[local_3c] = bVar4 & 0x30 | (bVar4 & 0x16 | ~bVar4 & 0xe9) ^ 0xd9;
            local_5c = local_3c + 1;
            *local_48 = *local_48 >> 1;
            uVar5 = (DAT_005b8c14 + -1) * DAT_005b8c14;
            uVar5 = (uVar5 ^ 0xfffffffe) & uVar5;
            iVar8 = -0x704b5da2;
            if (DAT_005b8ba8 < 10 != (uVar5 == 0)) {
              iVar8 = -0x1d682cc9;
            }
            iVar2 = iVar8;
            if (uVar5 == 0) {
              iVar2 = -0x1d682cc9;
            }
            if (9 < DAT_005b8ba8) {
              iVar2 = iVar8;
            }
          }
          else if (iVar2 == 0x75c0efcd) {
            return local_60;
          }
          goto joined_r0x004025c4;
        }
        if (iVar2 == 0x2449ed30) {
          *(undefined8 *)(puVar6 + -8) = 0x4027d2;
          putchar(10);
LAB_004027d6:
          iVar2 = -0x4fb97025;
          unaff_R12D = 1;
          goto LAB_004023cb;
        }
        if (iVar2 != 0x3a02f952) {
          if (iVar2 != 0x4ac37649) goto joined_r0x004025c4;
          *(undefined8 *)(puVar6 + -0x18) = 0x402722;
          __isoc99_scanf(&DAT_00409035);
          iVar2 = 0x3a02f952;
          puVar6 = puVar6 + -0x10;
          goto LAB_00402690;
        }
        local_68 = (uint *)(puVar6 + -0x10);
        puVar3 = puVar6 + -0x50;
        *(undefined8 *)(puVar6 + -0x58) = 0x402829;
        local_58 = puVar3;
        local_48 = local_68;
        iVar2 = __isoc99_scanf(&DAT_00409035,local_68);
        local_37 = iVar2 != 1;
        bVar9 = (~((DAT_005b8c14 + -1) * DAT_005b8c14) | 0xfffffffeU) == 0xffffffff;
        iVar8 = 0x1a35e37;
        iVar2 = 0x4ac37649;
        if (bVar9) {
          iVar2 = 0x1a35e37;
        }
        iVar7 = 0x4ac37649;
LAB_00402676:
        if (9 < DAT_005b8ba8) {
          iVar2 = iVar7;
        }
        puVar6 = puVar3;
        if ((bool)(DAT_005b8ba8 < 10 ^ bVar9)) {
          iVar2 = iVar8;
        }
      } while( true );
    }
    if (-0x250c576b < iVar2) {
      if (iVar2 == -0x250c576a) {
        uVar5 = ~((DAT_005b8c14 + -1) * DAT_005b8c14) | 0xfffffffe;
        bVar9 = DAT_005b8ba8 < 10 == (uVar5 == 0xffffffff);
        iVar8 = -0x704b5da2;
        iVar7 = 0x690c6fe2;
        goto LAB_004028d1;
      }
      if (iVar2 != -0x1d682cc9) {
        if ((iVar2 == -0x1be211c5) && (iVar2 = 0x17b83670, *local_48 == 0)) {
          iVar2 = -0x15c9e219;
        }
        goto joined_r0x004025c4;
      }
      iVar2 = -0x5ecb3921;
      unaff_R13D = local_5c;
      goto LAB_004023cb;
    }
    if (iVar2 == -0x3eb214e4) {
      iVar8 = 0x4ac37649;
      if (local_35 != local_36) {
        iVar8 = 0x3a02f952;
      }
      iVar2 = iVar8;
      if (local_36 != '\0') {
        iVar2 = 0x3a02f952;
      }
      if (local_35 == '\0') {
        iVar2 = iVar8;
      }
      goto joined_r0x004025c4;
    }
    iVar8 = local_3c;
    if (iVar2 == -0x2f747b6a) {
LAB_004023a0:
      unaff_R14D = iVar8 + -1;
      iVar2 = -0x66a1be2d;
    }
    else {
      if (iVar2 != -0x2b8af689) goto joined_r0x004025c4;
      iVar2 = -0x4fb97025;
      unaff_R12D = 0;
    }
  } while( true );
}



/* ===== Function: FUN_00402990 ===== */

/* WARNING: Removing unreachable block (ram,0x00402ea9) */
/* WARNING: Removing unreachable block (ram,0x00402a31) */
/* WARNING: Removing unreachable block (ram,0x0040307c) */
/* WARNING: Removing unreachable block (ram,0x00402d9e) */
/* WARNING: Removing unreachable block (ram,0x00402cdd) */
/* WARNING: Type propagation algorithm not settling */

int * FUN_00402990(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint unaff_EBP;
  uint uVar7;
  uint unaff_R12D;
  int unaff_R13D;
  ulong unaff_R14;
  ulong unaff_R15;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int *piVar11;
  int local_b8;
  uint local_b4;
  uint local_b0;
  char local_aa;
  char local_a9;
  int local_a8;
  uint local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  uint local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  uint local_70;
  int local_6c;
  uint local_68;
  uint local_64;
  int *local_60;
  int *local_58;
  int *local_50;
  int *local_48;
  int *local_40;
  int *local_38;
  
  local_60 = &local_88;
  local_58 = &local_8c;
  piVar5 = &local_90;
  local_48 = &local_94;
  local_40 = &local_98;
  piVar11 = &local_9c;
  local_50 = piVar5;
  local_38 = piVar11;
  local_74 = __isoc99_scanf("%d %d %d %d %d %d");
  uVar3 = 0xb23833d4;
  local_a0 = (int)piVar5;
LAB_00402a9b:
  do {
    if (-0x38fb15f1 < (int)uVar3) {
      if ((int)uVar3 < -0x15d8f042) {
        if (uVar3 == 0xc704ea10) {
          printf("%d years %d months %d days\n",unaff_R14 & 0xffffffff,unaff_R15 & 0xffffffff,
                 (ulong)local_64);
          goto LAB_00402eea;
        }
        if (uVar3 == 0xc8e0c3c5) {
          iVar2 = FUN_00406610(local_78,local_7c);
          local_68 = iVar2 + local_b4;
          uVar4 = ~((DAT_005b8c10 + -1) * DAT_005b8c10) | 0xfffffffe;
          uVar6 = 0x7d7c4ad7;
          if (DAT_005b8ba4 < 10 != (uVar4 == 0xffffffff)) {
            uVar6 = 0xea270fbe;
          }
          uVar3 = uVar6;
          if (uVar4 == 0xffffffff) {
            uVar3 = 0xea270fbe;
          }
          if (DAT_005b8ba4 < 10) goto joined_r0x00402db5;
          uVar3 = uVar6;
          goto joined_r0x00402db5;
        }
        if (uVar3 != 0xd3eaa615) goto joined_r0x00402db5;
        local_70 = local_b0 - 1;
        local_80 = local_b8 + -1;
        local_aa = local_80 == 0;
        uVar4 = (~-DAT_005b8c10 * DAT_005b8c10 ^ 0xfffffffeU) & ~-DAT_005b8c10 * DAT_005b8c10;
        bVar8 = uVar4 == 0;
        uVar6 = 0x6bc1dbad;
        uVar3 = 0x9d9cee95;
        if (uVar4 == 0) {
          uVar3 = 0x6bc1dbad;
        }
        bVar10 = SBORROW4(DAT_005b8ba4,10);
        bVar9 = DAT_005b8ba4 + -10 < 0;
        bVar1 = DAT_005b8ba4 < 10;
        uVar4 = 0x9d9cee95;
        goto LAB_00402a36;
      }
      if (uVar3 == 0xea270fbe) {
        uVar3 = 0x66dc5d5e;
        unaff_EBP = local_68;
        unaff_R12D = local_70;
      }
      else {
        if (uVar3 == 0xec6b4c7d) {
          bVar8 = (~((DAT_005b8c10 + -1) * DAT_005b8c10) | 0xfffffffeU) == 0xffffffff;
          uVar4 = 0x5bdc2ca3;
          uVar3 = 0x11c105e9;
          if (bVar8) {
            uVar3 = 0x5bdc2ca3;
          }
          uVar6 = 0x11c105e9;
LAB_00402d68:
          if (9 < DAT_005b8ba4) {
            uVar3 = uVar6;
          }
          if (!(bool)(DAT_005b8ba4 < 10 ^ bVar8)) goto joined_r0x00402db5;
          uVar3 = uVar4;
          goto joined_r0x00402db5;
        }
        if (uVar3 != 0x11c105e9) goto joined_r0x00402db5;
        uVar3 = 0x5bdc2ca3;
      }
LAB_00402dc0:
      do {
        if ((int)uVar3 < 0x61b5ab02) {
          if ((int)uVar3 < 0x59eb353e) {
            if (uVar3 == 0x448c000a) {
              local_7c = local_a0;
              uVar6 = (~-DAT_005b8c10 * DAT_005b8c10 ^ 0xfffffffeU) & ~-DAT_005b8c10 * DAT_005b8c10;
              bVar8 = DAT_005b8ba4 < 10 == (uVar6 == 0);
              uVar4 = 0x7d7c4ad7;
              uVar7 = 0xc8e0c3c5;
              local_78 = unaff_R13D;
LAB_00402da0:
              if (!bVar8) {
                uVar4 = uVar7;
              }
              uVar3 = uVar4;
              if (uVar6 == 0) {
                uVar3 = uVar7;
              }
              if (9 < DAT_005b8ba4) {
                uVar3 = uVar4;
              }
            }
            else if (uVar3 == 0x57c6b429) {
              FUN_004063a0(&local_88,&local_8c,&local_90,&local_94,&local_98,&local_9c,piVar11);
              local_84 = local_94 - local_88;
              local_b0 = local_98 - local_8c;
              local_b4 = local_9c - local_90;
              uVar3 = ((int)local_b4 >> 0x1f & 0x48e60811U) + 0x66dc5d5e;
              local_b8 = local_98;
              local_a8 = local_94;
              unaff_EBP = local_b4;
              unaff_R12D = local_b0;
            }
            else if (uVar3 == 0x1b2d5ccc) {
              return local_60;
            }
          }
          else if (uVar3 == 0x59eb353e) {
            uVar3 = 0xc704ea10;
            if (local_a9 != '\0') {
              uVar3 = 0x90e26e30;
            }
            unaff_R14 = (ulong)local_84;
            unaff_R15 = (ulong)local_a4;
          }
          else {
            if (uVar3 == 0x5ac2ee90) {
              uVar3 = 0x448c000a;
              local_a0 = 0xc;
              unaff_R13D = local_6c;
              goto LAB_00402dc0;
            }
            if (uVar3 == 0x5bdc2ca3) {
              local_6c = local_a8 + -1;
              uVar4 = (DAT_005b8c10 + -1) * DAT_005b8c10;
              uVar4 = (uVar4 ^ 0xfffffffe) & uVar4;
              bVar8 = uVar4 == 0;
              uVar6 = 0x5ac2ee90;
              uVar3 = 0x11c105e9;
              if (uVar4 == 0) {
                uVar3 = 0x5ac2ee90;
              }
              bVar10 = SBORROW4(DAT_005b8ba4,10);
              bVar9 = DAT_005b8ba4 + -10 < 0;
              bVar1 = DAT_005b8ba4 < 10;
              uVar4 = 0x11c105e9;
              goto LAB_00402a36;
            }
          }
        }
        else if ((int)uVar3 < 0x66dc5d5e) {
          if (uVar3 == 0x61b5ab02) {
            uVar3 = 0x93bf211e;
            break;
          }
          if (uVar3 == 0x62523f94) {
LAB_00402eea:
            uVar3 = 0x1b2d5ccc;
            goto LAB_00402dc0;
          }
        }
        else if (uVar3 == 0x66dc5d5e) {
          uVar4 = (DAT_005b8c10 + -1) * DAT_005b8c10;
          uVar4 = (uVar4 ^ 0xfffffffe) & uVar4;
          bVar8 = uVar4 == 0;
          uVar6 = 0x93bf211e;
          uVar3 = 0x61b5ab02;
          if (uVar4 == 0) {
            uVar3 = 0x93bf211e;
          }
          bVar10 = SBORROW4(DAT_005b8ba4,10);
          bVar9 = DAT_005b8ba4 + -10 < 0;
          bVar1 = DAT_005b8ba4 < 10;
          uVar4 = 0x61b5ab02;
          local_a4 = unaff_R12D;
          local_64 = unaff_EBP;
LAB_00402a36:
          if (bVar10 == bVar9) {
            uVar3 = uVar4;
          }
          if ((bool)(bVar1 ^ bVar8)) {
            uVar3 = uVar6;
          }
        }
        else if (uVar3 == 0x6bc1dbad) {
          uVar3 = 0x448c000a;
          local_a0 = local_80;
          unaff_R13D = local_a8;
          if (local_aa != '\0') {
            uVar3 = 0xec6b4c7d;
          }
        }
        else if (uVar3 == 0x7d7c4ad7) {
          FUN_00406610(local_78,local_7c);
          uVar3 = 0xc8e0c3c5;
          break;
        }
joined_r0x00402db5:
      } while (0x1b2d5ccb < (int)uVar3);
      goto LAB_00402a9b;
    }
    if ((int)uVar3 < -0x6263116b) {
      if (uVar3 != 0x90e26e30) {
        if (uVar3 != 0x93bf211e) goto joined_r0x00402db5;
        local_a9 = (int)local_a4 < 0;
        uVar6 = (DAT_005b8c10 + -1) * DAT_005b8c10;
        uVar6 = (uVar6 ^ 0xfffffffe) & uVar6;
        bVar8 = DAT_005b8ba4 < 10 == (uVar6 == 0);
        uVar4 = 0x61b5ab02;
        uVar7 = 0x59eb353e;
        goto LAB_00402da0;
      }
      unaff_R14 = (ulong)(local_84 - 1);
      unaff_R15 = (ulong)(local_a4 + 0xc);
      uVar3 = 0xc704ea10;
    }
    else if (uVar3 == 0x9d9cee95) {
      uVar3 = 0xd3eaa615;
    }
    else {
      if (uVar3 == 0xafc2656f) {
        bVar8 = (~((DAT_005b8c10 + -1) * DAT_005b8c10) | 0xfffffffeU) == 0xffffffff;
        uVar4 = 0xd3eaa615;
        uVar3 = 0x9d9cee95;
        if (bVar8) {
          uVar3 = 0xd3eaa615;
        }
        uVar6 = 0x9d9cee95;
        goto LAB_00402d68;
      }
      if (uVar3 != 0xb23833d4) goto joined_r0x00402db5;
      uVar3 = 0x57c6b429;
      if (local_74 != 6) {
        uVar3 = 0x62523f94;
      }
      if (0x1b2d5ccb < uVar3) goto LAB_00402dc0;
    }
  } while( true );
}



/* ===== Function: FUN_004030c0 ===== */

/* WARNING: Removing unreachable block (ram,0x0040347d) */
/* WARNING: Removing unreachable block (ram,0x00403105) */
/* WARNING: Removing unreachable block (ram,0x00403237) */

int * FUN_004030c0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int iVar4;
  uint unaff_R12D;
  uint unaff_R15D;
  bool bVar5;
  char local_5d;
  int local_5c;
  int local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  int local_44;
  int *local_40;
  uint *local_38;
  
  local_40 = &local_5c;
  local_44 = __isoc99_scanf("%d");
  iVar1 = -0x40786bc3;
LAB_0040316b:
  do {
    if (-0x4e90253e < iVar1) {
      if (-0x36ab908d < iVar1) {
        if (iVar1 == -0x36ab908c) goto LAB_00403338;
        if (iVar1 == -0x32c559f6) {
          local_5c = 200000;
          bVar5 = (~((DAT_005b8c04 + -1) * DAT_005b8c04) | 0xfffffffeU) == 0xffffffff;
          iVar1 = -0x5c299b34;
          if (bVar5) {
            iVar1 = -0xb1a9b7f;
          }
          if (9 < DAT_005b8bfc) {
            iVar1 = -0x5c299b34;
          }
          if (DAT_005b8bfc < 10 != bVar5) {
            iVar1 = -0xb1a9b7f;
          }
        }
        else if (iVar1 == -0x2ae4dc65) {
          uVar3 = ~((DAT_005b8c04 + -1) * DAT_005b8c04) | 0xfffffffe;
          bVar5 = DAT_005b8bfc < 10 == (uVar3 == 0xffffffff);
          iVar2 = -0x26f81146;
          goto LAB_004033d5;
        }
        goto joined_r0x004032b0;
      }
      if (iVar1 == -0x4e90253d) {
        bVar5 = local_5d == '\0';
        iVar1 = 0x37a24eef;
        iVar2 = -0x4c327a88;
      }
      else {
        if (iVar1 == -0x4c327a88) {
          bVar5 = (~((DAT_005b8c04 + -1) * DAT_005b8c04) | 0xfffffffeU) == 0xffffffff;
          iVar1 = -0x5c299b34;
          if (bVar5) {
            iVar1 = -0x32c559f6;
          }
          if (9 < DAT_005b8bfc) {
            iVar1 = -0x5c299b34;
          }
          if (DAT_005b8bfc < 10 != bVar5) {
            iVar1 = -0x32c559f6;
          }
          goto joined_r0x004032b0;
        }
        if (iVar1 != -0x40786bc3) goto joined_r0x004032b0;
        bVar5 = local_44 == 1;
        iVar1 = -0x77638cc8;
        iVar2 = -0x36ab908c;
      }
LAB_00403375:
      if (!bVar5) {
        iVar1 = iVar2;
      }
joined_r0x004032b0:
      do {
        if (iVar1 < -0x26f81146) goto LAB_0040316b;
LAB_004033f0:
        if (0x4769eb6a < iVar1) {
          if (0x6525c2ff < iVar1) {
            if (iVar1 == 0x6525c300) {
              local_54 = unaff_R15D;
              local_48 = unaff_EBP;
              iVar1 = -0x76145751;
              if (unaff_EBP < local_5c) {
                iVar1 = -0x6830e219;
              }
              goto joined_r0x004032b0;
            }
            if (iVar1 != 0x661dfa9b) {
              if (iVar1 == 0x77e32cab) {
                return local_40;
              }
              goto joined_r0x004032b0;
            }
            local_50 = 0;
            iVar1 = -0x11e21757;
            goto LAB_004033f0;
          }
          if (iVar1 != 0x4769eb6b) goto code_r0x00403452;
          iVar1 = 0x4f261ae1;
          goto LAB_004033f0;
        }
        if (0x8060cb0 < iVar1) {
          if (iVar1 == 0x8060cb1) {
            uVar3 = ~((DAT_005b8c04 + -1) * DAT_005b8c04) | 0xfffffffe;
            iVar4 = 0x4769eb6b;
            if (DAT_005b8bfc < 10 != (uVar3 == 0xffffffff)) {
              iVar4 = 0x4f261ae1;
            }
            iVar1 = iVar4;
            if (uVar3 == 0xffffffff) {
              iVar1 = 0x4f261ae1;
            }
            goto LAB_0040310a;
          }
          if (iVar1 == 0x2b473ab0) {
            iVar1 = -0x26f81146;
          }
          else {
            if (iVar1 != 0x37a24eef) goto joined_r0x004032b0;
            iVar1 = 0x6525c300;
            unaff_R15D = 0x80000000;
            unaff_EBP = 0;
          }
          goto LAB_004033f0;
        }
        if (iVar1 != -0x26f81146) {
          if (iVar1 == -0x11e21757) {
            local_4c = local_50;
            unaff_R12D = local_54;
            iVar1 = -0x7335b200;
            if ((int)local_54 < (int)local_50) {
              iVar1 = 0x8060cb1;
            }
            goto joined_r0x004032b0;
          }
          if (iVar1 != -0xb1a9b7f) goto joined_r0x004032b0;
          iVar1 = 0x37a24eef;
          goto LAB_004033f0;
        }
        local_5d = 200000 < local_58;
        uVar3 = ~((DAT_005b8c04 + -1) * DAT_005b8c04) | 0xfffffffe;
        bVar5 = DAT_005b8bfc < 10 == (uVar3 == 0xffffffff);
        iVar2 = -0x4e90253d;
LAB_004033d5:
        iVar4 = 0x2b473ab0;
        if (!bVar5) {
          iVar4 = iVar2;
        }
        iVar1 = iVar4;
        if (uVar3 == 0xffffffff) {
          iVar1 = iVar2;
        }
LAB_0040310a:
        if (9 < DAT_005b8bfc) {
          iVar1 = iVar4;
        }
      } while( true );
    }
    if (iVar1 < -0x716fbf32) {
      if (iVar1 == -0x77638cc8) {
        local_58 = local_5c;
        iVar1 = -0x2ae4dc65;
        if (local_5c < 1) {
          iVar1 = -0x716fbf32;
        }
      }
      else {
        if (iVar1 == -0x76145751) {
          printf("%d\n",(ulong)local_54);
          goto LAB_00403338;
        }
        if (iVar1 == -0x7335b200) {
          unaff_EBP = local_48 + 1;
          iVar1 = 0x6525c300;
          unaff_R15D = unaff_R12D;
          goto LAB_004033f0;
        }
      }
      goto joined_r0x004032b0;
    }
    if (iVar1 == -0x716fbf32) {
      puts("0");
LAB_00403338:
      iVar1 = 0x77e32cab;
      goto LAB_004033f0;
    }
    if (iVar1 == -0x6830e219) {
      local_38 = &local_50;
      iVar1 = __isoc99_scanf("%d");
      bVar5 = iVar1 == 1;
      iVar1 = -0x11e21757;
      iVar2 = 0x661dfa9b;
      goto LAB_00403375;
    }
    if (iVar1 != -0x5c299b34) goto joined_r0x004032b0;
    local_5c = 200000;
    iVar1 = -0x32c559f6;
  } while( true );
code_r0x00403452:
  if (iVar1 == 0x4f261ae1) {
    bVar5 = (~((DAT_005b8c04 + -1) * DAT_005b8c04) | 0xfffffffeU) == 0xffffffff;
    iVar1 = 0x4769eb6b;
    if (bVar5) {
      iVar1 = 0x569d80bd;
    }
    if (9 < DAT_005b8bfc) {
      iVar1 = 0x4769eb6b;
    }
    if (DAT_005b8bfc < 10 != bVar5) {
      iVar1 = 0x569d80bd;
    }
    goto joined_r0x004032b0;
  }
  if (iVar1 != 0x569d80bd) goto joined_r0x004032b0;
  iVar1 = -0x7335b200;
  unaff_R12D = local_4c;
  goto LAB_0040316b;
}



/* ===== Function: FUN_00403630 ===== */

/* WARNING: Removing unreachable block (ram,0x00403898) */
/* WARNING: Removing unreachable block (ram,0x00403a59) */
/* WARNING: Removing unreachable block (ram,0x00403db0) */
/* WARNING: Removing unreachable block (ram,0x00404019) */
/* WARNING: Removing unreachable block (ram,0x00403d98) */
/* WARNING: Removing unreachable block (ram,0x00403bf7) */
/* WARNING: Removing unreachable block (ram,0x00403737) */
/* WARNING: Removing unreachable block (ram,0x00403a44) */

undefined4 FUN_00403630(void)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int **ppiVar6;
  uint uVar7;
  int iVar8;
  int unaff_R12D;
  int unaff_R13D;
  undefined4 unaff_R14D;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int *apiStack_80 [5];
  undefined4 local_58;
  int local_54;
  int *local_50;
  int local_44;
  int local_40;
  int local_3c;
  char local_36;
  char local_35;
  char local_34;
  char local_33;
  char local_32;
  char local_31;
  
  local_31 = (~((DAT_005b8bb8 + -1) * DAT_005b8bb8) | 0xfffffffeU) == 0xffffffff;
  local_32 = DAT_005b8bf0 < 10;
  uVar2 = 0xc0e2e0c3;
  ppiVar6 = apiStack_80 + 3;
LAB_00403b40:
  if ((int)uVar2 < -0x295e1c32) {
    if ((int)uVar2 < -0x53dee6ac) {
      if ((int)uVar2 < -0x768403df) {
        if (uVar2 == 0x855c6d69) {
          uVar2 = 0x25b9be8f;
          goto LAB_004036eb;
        }
        if (uVar2 == 0x8782d8e7) {
          *(undefined8 *)((long)ppiVar6 + -8) = 0x403d32;
          putchar(10);
LAB_00403d32:
          uVar2 = 0xe2b01e88;
          unaff_R14D = 1;
          goto LAB_00403b40;
        }
      }
      else {
        if (uVar2 == 0x897bfc21) {
          bVar11 = local_33 == '\0';
          uVar2 = 0x72d4689a;
          uVar4 = 0xa0f94d45;
          goto LAB_00403f80;
        }
        if (uVar2 == 0x9104ae32) {
          uVar5 = (~-DAT_005b8bb8 * DAT_005b8bb8 ^ 0xfffffffeU) & ~-DAT_005b8bb8 * DAT_005b8bb8;
          bVar11 = DAT_005b8bf0 < 10 == (uVar5 == 0);
          uVar4 = 0x2081d9dc;
          uVar7 = 0xeb8c3261;
          piVar3 = (int *)ppiVar6;
          goto LAB_0040367d;
        }
        if (uVar2 == 0xa0f94d45) {
          uVar2 = 0xe2b01e88;
          unaff_R14D = 0;
          goto LAB_00403b40;
        }
      }
    }
    else if ((int)uVar2 < -0x3be37a2f) {
      if (uVar2 == 0xac211954) {
        uVar2 = 0x5c737411;
        goto LAB_004036eb;
      }
      if (uVar2 == 0xacb6b0d6) {
        unaff_R13D = local_44 + 1;
        uVar2 = 0xc41c85d1;
        goto LAB_00403b40;
      }
      if (uVar2 == 0xc0e2e0c3) {
        uVar4 = 0xe6def3b4;
        if (local_31 != local_32) {
          uVar4 = 0xd6a1e3ce;
        }
        uVar2 = uVar4;
        if (local_32 != '\0') {
          uVar2 = 0xd6a1e3ce;
        }
        if (local_31 == '\0') {
          uVar2 = uVar4;
        }
      }
    }
    else {
      if (uVar2 == 0xc41c85d1) {
        local_40 = *local_50;
        bVar11 = SBORROW4(unaff_R13D,local_40);
        iVar8 = unaff_R13D - local_40;
        uVar2 = 0x5e323aa0;
        uVar4 = 0x6715d7f8;
        local_44 = unaff_R13D;
        goto LAB_00403b23;
      }
      if (uVar2 == 0xd02ca796) {
        uVar2 = 0xc41c85d1;
        unaff_R13D = 0;
        goto LAB_00403b40;
      }
      if (uVar2 == 0xd5a5b76d) {
        bVar11 = local_36 == '\0';
        uVar2 = 0xd8fb9707;
        uVar4 = 0x10a50116;
        goto LAB_00403f80;
      }
    }
  }
  else {
    if ((int)uVar2 < -0x1473cd9f) {
      if ((int)uVar2 < -0x20ec2bb0) {
        if (uVar2 == 0xd6a1e3ce) {
          piVar3 = (int *)((long)ppiVar6 + -0x10);
          *(undefined8 *)((long)ppiVar6 + -0x18) = 0x404048;
          apiStack_80[4] = piVar3;
          local_50 = piVar3;
          iVar8 = __isoc99_scanf("%d",piVar3);
          local_33 = iVar8 != 1;
          uVar5 = (DAT_005b8bb8 + -1) * DAT_005b8bb8;
          uVar5 = (uVar5 ^ 0xfffffffe) & uVar5;
          bVar11 = DAT_005b8bf0 < 10 == (uVar5 == 0);
          uVar4 = 0xe6def3b4;
          uVar7 = 0x897bfc21;
          goto LAB_0040367d;
        }
        if (uVar2 == 0xd8fb9707) {
          uVar2 = *(uint *)(&DAT_0040b070 + (long)local_3c * 4);
          *(undefined8 *)((long)ppiVar6 + -8) = 0x403d7a;
          printf("%d",(ulong)uVar2);
          unaff_R12D = local_3c + 1;
          uVar2 = 0x2486a3a8;
          goto LAB_004036eb;
        }
        goto joined_r0x00403ba8;
      }
      if (uVar2 == 0xdf13d450) {
        uVar5 = ~((DAT_005b8bb8 + -1) * DAT_005b8bb8) | 0xfffffffe;
        bVar11 = DAT_005b8bf0 < 10 == (uVar5 == 0xffffffff);
        uVar4 = 0x4b74c08d;
        uVar7 = 0x128218ed;
        goto LAB_00403ec0;
      }
      if (uVar2 == 0xe2b01e88) {
        uVar4 = (DAT_005b8bb8 + -1) * DAT_005b8bb8;
        uVar4 = (uVar4 ^ 0xfffffffe) & uVar4;
        bVar11 = uVar4 == 0;
        uVar5 = 0xdf13d450;
        uVar2 = 0x4b74c08d;
        if (uVar4 == 0) {
          uVar2 = 0xdf13d450;
        }
        bVar10 = SBORROW4(DAT_005b8bf0,10);
        bVar9 = DAT_005b8bf0 + -10 < 0;
        bVar1 = DAT_005b8bf0 < 10;
        uVar4 = 0x4b74c08d;
        local_58 = unaff_R14D;
        goto LAB_00403f1d;
      }
      if (uVar2 != 0xe6def3b4) goto joined_r0x00403ba8;
      *(undefined8 *)((long)ppiVar6 + -0x18) = 0x403c82;
      __isoc99_scanf("%d");
      uVar2 = 0xd6a1e3ce;
      ppiVar6 = (int **)((long)ppiVar6 + -0x10);
      goto LAB_00403b40;
    }
    if (-0xedc8713 < (int)uVar2) {
      if (uVar2 == 0xf12378ee) {
        bVar11 = local_35 == '\0';
        uVar2 = 0xacb6b0d6;
        uVar4 = 0x4087949b;
        goto LAB_00403f80;
      }
      if (uVar2 == 0xfaa26822) {
        apiStack_80[3] = (int *)(&DAT_0040b070 + (long)local_44 * 4);
        *(undefined8 *)((long)ppiVar6 + -8) = 0x403fb3;
        iVar8 = __isoc99_scanf("%d",&DAT_0040b070 + (long)local_44 * 4);
        local_35 = iVar8 != 1;
        uVar4 = (DAT_005b8bb8 + -1) * DAT_005b8bb8;
        uVar4 = (uVar4 ^ 0xfffffffe) & uVar4;
        uVar5 = 0xf12378ee;
        uVar2 = 0xecf750b3;
        if (uVar4 == 0) {
          uVar2 = 0xf12378ee;
        }
        uVar7 = 0xecf750b3;
        goto LAB_00403fee;
      }
      if (uVar2 != 0x6af7c10) goto joined_r0x00403ba8;
      uVar2 = 0x6193df93;
      if (200000 < local_54) {
        uVar2 = 0x2dce3db3;
      }
      if (0x10a50115 < uVar2) goto LAB_004036eb;
      goto LAB_00403b40;
    }
    if (uVar2 == 0xeb8c3261) {
      *(undefined8 *)((long)ppiVar6 + -8) = 0x403de2;
      putchar(10);
      bVar11 = (~((DAT_005b8bb8 + -1) * DAT_005b8bb8) | 0xfffffffeU) == 0xffffffff;
      uVar5 = 0x262f408d;
      uVar2 = 0x2081d9dc;
      if (bVar11) {
        uVar2 = 0x262f408d;
      }
      bVar10 = SBORROW4(DAT_005b8bf0,10);
      bVar9 = DAT_005b8bf0 + -10 < 0;
      bVar1 = DAT_005b8bf0 < 10;
      uVar4 = 0x2081d9dc;
      goto LAB_00403f1d;
    }
    if (uVar2 == 0xecf750b3) {
      *(undefined8 *)((long)ppiVar6 + -8) = 0x403e32;
      __isoc99_scanf("%d",&DAT_0040b070 + (long)local_44 * 4);
      uVar2 = 0xfaa26822;
      goto LAB_00403b40;
    }
    if (uVar2 == 0xf04cc839) {
      uVar2 = 0x65451d0b;
      goto LAB_004036eb;
    }
  }
joined_r0x00403ba8:
  if (0x10a50115 < (int)uVar2) {
LAB_004036eb:
    piVar3 = (int *)ppiVar6;
    if ((int)uVar2 < 0x497cc090) {
      if ((int)uVar2 < 0x25b9be8f) {
        if ((int)uVar2 < 0x1f928b3e) {
          if (uVar2 == 0x128218ed) {
            return local_58;
          }
          if (uVar2 == 0x10a50116) {
            *(undefined8 *)((long)ppiVar6 + -8) = 0x4038f2;
            putchar(0x20);
            uVar2 = 0xd8fb9707;
            goto LAB_00403b40;
          }
          goto joined_r0x00403ba8;
        }
        if (uVar2 != 0x1f928b3e) {
          if (uVar2 == 0x2081d9dc) {
            *(undefined8 *)((long)ppiVar6 + -8) = 0x4039da;
            putchar(10);
            uVar2 = 0xeb8c3261;
            goto LAB_00403b40;
          }
          if (uVar2 == 0x2486a3a8) {
            bVar11 = SBORROW4(unaff_R12D,*local_50);
            iVar8 = unaff_R12D - *local_50;
            uVar2 = 0x9104ae32;
            uVar4 = 0x505b1a1c;
            local_3c = unaff_R12D;
LAB_00403b23:
            if (bVar11 != iVar8 < 0) {
              uVar2 = uVar4;
            }
            goto joined_r0x00403ed6;
          }
          goto joined_r0x00403ba8;
        }
        uVar5 = (~-DAT_005b8bb8 * DAT_005b8bb8 ^ 0xfffffffeU) & ~-DAT_005b8bb8 * DAT_005b8bb8;
        bVar11 = DAT_005b8bf0 < 10 == (uVar5 == 0);
        uVar4 = 0x34ae3041;
        uVar7 = 0x496a051f;
      }
      else {
        if (0x34ae3040 < (int)uVar2) {
          if (uVar2 == 0x34ae3041) {
            uVar2 = 0x1f928b3e;
          }
          else {
            if (uVar2 == 0x4087949b) {
              *apiStack_80[3] = 0;
              uVar2 = 0xacb6b0d6;
              goto LAB_00403b40;
            }
            if (uVar2 != 0x496a051f) goto joined_r0x00403ba8;
            uVar2 = 0x2486a3a8;
            unaff_R12D = 0;
          }
          goto LAB_004036eb;
        }
        if (uVar2 != 0x25b9be8f) {
          if (uVar2 == 0x262f408d) goto LAB_00403d32;
          if (uVar2 != 0x2dce3db3) goto joined_r0x00403ba8;
          *local_50 = 200000;
          uVar2 = 0x6193df93;
          goto LAB_004036eb;
        }
        local_34 = 0 < local_40;
        uVar5 = (DAT_005b8bb8 + -1) * DAT_005b8bb8;
        uVar5 = (uVar5 ^ 0xfffffffe) & uVar5;
        bVar11 = DAT_005b8bf0 < 10 == (uVar5 == 0);
        uVar4 = 0x855c6d69;
        uVar7 = 0x7c71edc5;
      }
LAB_0040367d:
      if (!bVar11) {
        uVar4 = uVar7;
      }
      uVar2 = uVar4;
      if (uVar5 == 0) {
        uVar2 = uVar7;
      }
      ppiVar6 = (int **)piVar3;
      if (9 < DAT_005b8bf0) {
        uVar2 = uVar4;
      }
    }
    else {
      if ((int)uVar2 < 0x5e323aa0) {
        if ((int)uVar2 < 0x505b1a1c) {
          if (uVar2 == 0x497cc090) {
            uVar5 = (~-DAT_005b8bb8 * DAT_005b8bb8 ^ 0xfffffffeU) & ~-DAT_005b8bb8 * DAT_005b8bb8;
            bVar11 = DAT_005b8bf0 < 10 == (uVar5 == 0);
            uVar4 = 0x34ae3041;
            uVar7 = 0x1f928b3e;
            goto LAB_0040367d;
          }
          if (uVar2 == 0x4b74c08d) {
            uVar2 = 0xdf13d450;
            goto LAB_00403b40;
          }
          goto joined_r0x00403ba8;
        }
        if (uVar2 == 0x505b1a1c) {
          uVar4 = (DAT_005b8bb8 + -1) * DAT_005b8bb8;
          uVar4 = (uVar4 ^ 0xfffffffe) & uVar4;
          uVar5 = 0x5c737411;
          uVar2 = 0xac211954;
          if (uVar4 == 0) {
            uVar2 = 0x5c737411;
          }
          uVar7 = 0xac211954;
LAB_00403fee:
          if (9 < DAT_005b8bf0) {
            uVar2 = uVar7;
          }
          if (DAT_005b8bf0 < 10 != (uVar4 == 0)) {
            uVar2 = uVar5;
          }
          goto joined_r0x00403ed6;
        }
        if (uVar2 != 0x596a3445) {
          if (uVar2 == 0x5c737411) {
            local_36 = local_3c != 0;
            bVar11 = (~((DAT_005b8bb8 + -1) * DAT_005b8bb8) | 0xfffffffeU) == 0xffffffff;
            uVar5 = 0xd5a5b76d;
            uVar2 = 0xac211954;
            if (bVar11) {
              uVar2 = 0xd5a5b76d;
            }
            bVar10 = SBORROW4(DAT_005b8bf0,10);
            bVar9 = DAT_005b8bf0 + -10 < 0;
            bVar1 = DAT_005b8bf0 < 10;
            uVar4 = 0xac211954;
LAB_00403f1d:
            if (bVar10 == bVar9) {
              uVar2 = uVar4;
            }
            if ((bool)(bVar1 ^ bVar11)) {
              uVar2 = uVar5;
            }
            goto joined_r0x00403ed6;
          }
          goto joined_r0x00403ba8;
        }
        iVar8 = local_40 + -1;
        *(undefined8 *)((long)ppiVar6 + -8) = 0x403a34;
        FUN_00406890(0,iVar8);
        uVar2 = 0x497cc090;
        goto LAB_004036eb;
      }
      if ((int)uVar2 < 0x6715d7f8) {
        if (uVar2 == 0x5e323aa0) {
          uVar5 = ~((DAT_005b8bb8 + -1) * DAT_005b8bb8) | 0xfffffffe;
          bVar11 = DAT_005b8bf0 < 10 == (uVar5 == 0xffffffff);
          uVar4 = 0x855c6d69;
          uVar7 = 0x25b9be8f;
        }
        else {
          if (uVar2 != 0x6193df93) {
            if (uVar2 == 0x65451d0b) {
              uVar4 = (DAT_005b8bb8 + -1) * DAT_005b8bb8;
              uVar4 = (uVar4 ^ 0xfffffffe) & uVar4;
              bVar11 = uVar4 == 0;
              uVar5 = 0xd02ca796;
              uVar2 = 0xf04cc839;
              if (uVar4 == 0) {
                uVar2 = 0xd02ca796;
              }
              bVar10 = SBORROW4(DAT_005b8bf0,10);
              bVar9 = DAT_005b8bf0 + -10 < 0;
              bVar1 = DAT_005b8bf0 < 10;
              uVar4 = 0xf04cc839;
              goto LAB_00403f1d;
            }
            goto joined_r0x00403ba8;
          }
          uVar5 = ~((DAT_005b8bb8 + -1) * DAT_005b8bb8) | 0xfffffffe;
          bVar11 = DAT_005b8bf0 < 10 == (uVar5 == 0xffffffff);
          uVar4 = 0xf04cc839;
          uVar7 = 0x65451d0b;
        }
LAB_00403ec0:
        if (!bVar11) {
          uVar4 = uVar7;
        }
        uVar2 = uVar4;
        if (uVar5 == 0xffffffff) {
          uVar2 = uVar7;
        }
        if (9 < DAT_005b8bf0) {
          uVar2 = uVar4;
        }
      }
      else if (uVar2 == 0x6715d7f8) {
        uVar4 = (DAT_005b8bb8 + -1) * DAT_005b8bb8;
        uVar4 = (uVar4 ^ 0xfffffffe) & uVar4;
        uVar2 = 0xecf750b3;
        if (uVar4 == 0) {
          uVar2 = 0xfaa26822;
        }
        if (9 < DAT_005b8bf0) {
          uVar2 = 0xecf750b3;
        }
        if (DAT_005b8bf0 < 10 != (uVar4 == 0)) {
          uVar2 = 0xfaa26822;
        }
      }
      else {
        if (uVar2 != 0x72d4689a) {
          if (uVar2 == 0x7c71edc5) {
            bVar11 = local_34 == '\0';
            uVar2 = 0x497cc090;
            uVar4 = 0x596a3445;
LAB_00403f80:
            if (!bVar11) {
              uVar2 = uVar4;
            }
            goto joined_r0x00403ed6;
          }
          goto joined_r0x00403ba8;
        }
        local_54 = *local_50;
        uVar2 = ((local_54 >> 0x1f ^ 0x7f2ca328U) & local_54 >> 0x1f) + 0x6af7c10;
      }
    }
joined_r0x00403ed6:
    if ((int)uVar2 < 0x10a50116) goto LAB_00403b40;
    goto LAB_004036eb;
  }
  goto LAB_00403b40;
}



/* ===== Function: FUN_004040a0 ===== */

/* WARNING: Removing unreachable block (ram,0x004041cc) */
/* WARNING: Removing unreachable block (ram,0x004043b2) */
/* WARNING: Removing unreachable block (ram,0x004044c6) */
/* WARNING: Removing unreachable block (ram,0x00404408) */

int * FUN_004040a0(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 unaff_R13;
  int unaff_R15D;
  bool bVar4;
  char local_5d;
  int local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int *local_40;
  undefined4 *local_38;
  
  local_40 = &local_48;
  local_44 = __isoc99_scanf("%d");
  iVar1 = -0x29679590;
  do {
    if (-0x372739f2 < iVar1) {
      if (-0x29679591 < iVar1) {
        if (iVar1 != -0x29679590) {
          if (iVar1 != -0x203e9c16) goto joined_r0x004044a5;
          bVar4 = local_5d == '\0';
          iVar1 = 0x2300bde2;
          iVar3 = 0x2e17ab80;
          goto LAB_004044dc;
        }
        bVar4 = local_44 == 1;
        iVar1 = -0x72fe2b71;
        iVar3 = -0x17a9af0d;
        goto LAB_004044dc;
      }
      if (iVar1 == -0x372739f1) {
        uVar2 = ~(~-DAT_005b8bc0 * DAT_005b8bc0) | 0xfffffffe;
        iVar3 = -0x12ac669d;
        if (DAT_005b8bec < 10 != (uVar2 == 0xffffffff)) {
          iVar3 = 0x13136af7;
        }
        iVar1 = iVar3;
        if (uVar2 == 0xffffffff) {
          iVar1 = 0x13136af7;
        }
        if (DAT_005b8bec < 10) goto joined_r0x004044a5;
        iVar1 = iVar3;
        goto joined_r0x004044a5;
      }
      if (iVar1 != -0x371e8cce) goto joined_r0x004044a5;
      iVar1 = 0x606e64e6;
      goto joined_r0x004044a5;
    }
    if (iVar1 < -0x49a0312d) {
      if (iVar1 == -0x72fe2b71) {
        iVar1 = ((local_48 >> 0x1f ^ 0xed8708c3U) & local_48 >> 0x1f) + 0xb65fced3;
        goto joined_r0x004044a5;
      }
      if (iVar1 != -0x5a7d7270) goto joined_r0x004044a5;
      unaff_R13 = FUN_00406f90(local_58,local_4c);
      unaff_R15D = local_5c + 1;
      iVar1 = 0x7d39eca3;
    }
    else {
      if (iVar1 != -0x49a0312d) {
        if (iVar1 != -0x3eedb566) goto joined_r0x004044a5;
        goto LAB_004043f8;
      }
      iVar1 = 0x7d39eca3;
      unaff_R15D = 0;
      unaff_R13 = 0;
    }
LAB_0040410b:
    do {
      if (iVar1 < 0x2300bde2) {
        if (iVar1 < -0x11f77f5f) {
          if (iVar1 == -0x17a9af0d) {
LAB_004043f8:
            iVar1 = -0x2d262bc;
            goto LAB_0040410b;
          }
          if (iVar1 == -0x12ac669d) {
            putchar(10);
            putchar(10);
            putchar(10);
            iVar1 = 0x13136af7;
            goto LAB_0040410b;
          }
        }
        else {
          if (iVar1 == -0x11f77f5f) {
            local_4c = 0;
            iVar1 = -0x5a7d7270;
            break;
          }
          if (iVar1 == 0x13136af7) {
            putchar(10);
            putchar(10);
            putchar(10);
            uVar2 = (~-DAT_005b8bc0 * DAT_005b8bc0 ^ 0xfffffffeU) & ~-DAT_005b8bc0 * DAT_005b8bc0;
            iVar1 = -0x12ac669d;
            if (uVar2 == 0) {
              iVar1 = -0x3eedb566;
            }
            if (9 < DAT_005b8bec) {
              iVar1 = -0x12ac669d;
            }
            if (DAT_005b8bec < 10 != (uVar2 == 0)) {
              iVar1 = -0x3eedb566;
            }
          }
          else if (iVar1 == -0x2d262bc) {
            return local_40;
          }
        }
      }
      else if (iVar1 < 0x606e64e6) {
        if (iVar1 == 0x2300bde2) {
          FUN_004071c0(local_58);
          putchar(10);
          FUN_00407320(local_58);
          putchar(10);
          FUN_00407480(local_58);
          putchar(10);
          FUN_00407720(local_58);
          goto LAB_004043f8;
        }
        if (iVar1 == 0x2e17ab80) {
          local_38 = &local_4c;
          iVar1 = __isoc99_scanf("%d",&local_4c);
          bVar4 = iVar1 == 1;
          iVar1 = -0x5a7d7270;
          iVar3 = -0x11f77f5f;
LAB_004044dc:
          if (!bVar4) {
            iVar1 = iVar3;
          }
        }
      }
      else if (iVar1 == 0x606e64e6) {
        local_5d = local_5c < local_48;
        uVar2 = (DAT_005b8bc0 + -1) * DAT_005b8bc0;
        uVar2 = (uVar2 ^ 0xfffffffe) & uVar2;
        iVar1 = -0x371e8cce;
        if (uVar2 == 0) {
          iVar1 = -0x203e9c16;
        }
        if (9 < DAT_005b8bec) {
          iVar1 = -0x371e8cce;
        }
        if (DAT_005b8bec < 10 != (uVar2 == 0)) {
          iVar1 = -0x203e9c16;
        }
      }
      else if (iVar1 == 0x7d39eca3) {
        uVar2 = (DAT_005b8bc0 + -1) * DAT_005b8bc0;
        uVar2 = (uVar2 ^ 0xfffffffe) & uVar2;
        iVar1 = -0x371e8cce;
        if (uVar2 == 0) {
          iVar1 = 0x606e64e6;
        }
        if (9 < DAT_005b8bec) {
          iVar1 = -0x371e8cce;
        }
        local_5c = unaff_R15D;
        local_58 = unaff_R13;
        if (DAT_005b8bec < 10 != (uVar2 == 0)) {
          iVar1 = 0x606e64e6;
        }
      }
joined_r0x004044a5:
    } while (-0x17a9af0e < iVar1);
  } while( true );
}



/* ===== Function: FUN_00404510 ===== */

/* WARNING: Removing unreachable block (ram,0x004046af) */
/* WARNING: Removing unreachable block (ram,0x0040486c) */
/* WARNING: Removing unreachable block (ram,0x00404bbe) */
/* WARNING: Removing unreachable block (ram,0x00404b52) */
/* WARNING: Removing unreachable block (ram,0x004047eb) */
/* WARNING: Removing unreachable block (ram,0x00404708) */

undefined4 FUN_00404510(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int unaff_R12D;
  undefined4 unaff_R13D;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int local_68;
  char local_63;
  char local_62;
  char local_61;
  int local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  int local_50;
  undefined4 local_4c;
  int *local_48;
  undefined4 *local_40;
  undefined4 *local_38;
  
  local_48 = &local_60;
  local_54 = __isoc99_scanf("%d");
  uVar3 = 0x83713d02;
LAB_00404a40:
  do {
    if (-0x45b25aa0 < (int)uVar3) {
      if ((int)uVar3 < -0x1e246d58) {
        if ((int)uVar3 < -0x2b9631e5) {
          if (uVar3 == 0xba4da561) {
            bVar7 = (~(~-DAT_005b8bbc * DAT_005b8bbc) | 0xfffffffeU) == 0xffffffff;
            uVar4 = 0x23e677f6;
            uVar3 = 0x6fbba73;
            if (bVar7) {
              uVar3 = 0x23e677f6;
            }
            bVar9 = SBORROW4(DAT_005b8bf8,10);
            bVar8 = DAT_005b8bf8 + -10 < 0;
            bVar1 = DAT_005b8bf8 < 10;
            uVar5 = 0x6fbba73;
            local_68 = unaff_R12D;
            goto LAB_00404df1;
          }
          if (uVar3 != 0xc6067dfb) goto joined_r0x00404575;
          uVar3 = 0x3b92b595;
          goto LAB_004045bb;
        }
        if (uVar3 == 0xd469ce1b) {
          uVar5 = ~((DAT_005b8bbc + -1) * DAT_005b8bbc) | 0xfffffffe;
          bVar7 = DAT_005b8bf8 < 10 == (uVar5 == 0xffffffff);
          uVar4 = 0xe8b5916e;
          uVar6 = 0x312272c0;
          goto LAB_0040455f;
        }
        if (uVar3 == 0xdc37e1d8) {
          local_40 = &local_5c;
          iVar2 = __isoc99_scanf("%d",&local_5c);
          local_62 = iVar2 != 1;
          uVar5 = ~((DAT_005b8bbc + -1) * DAT_005b8bbc) | 0xfffffffe;
          bVar7 = DAT_005b8bf8 < 10 == (uVar5 == 0xffffffff);
          uVar4 = 0xafd1984b;
          uVar6 = 0x992ea3ac;
          goto LAB_0040455f;
        }
        if (uVar3 != 0xe09d0970) goto joined_r0x00404575;
        bVar7 = local_61 == '\0';
        uVar3 = 0x9fa572fb;
        uVar4 = 0xa07b3f95;
        goto LAB_00404e1a;
      }
      if (-0x13a817f0 < (int)uVar3) {
        if (uVar3 == 0xec57e811) {
          bVar7 = (~((DAT_005b8bbc + -1) * DAT_005b8bbc) | 0xfffffffeU) == 0xffffffff;
          uVar4 = 0x74cc3cdb;
          uVar3 = 0x2a8cf381;
          if (bVar7) {
            uVar3 = 0x74cc3cdb;
          }
          bVar9 = SBORROW4(DAT_005b8bf8,10);
          bVar8 = DAT_005b8bf8 + -10 < 0;
          bVar1 = DAT_005b8bf8 < 10;
          uVar5 = 0x2a8cf381;
          goto LAB_00404df1;
        }
        if (uVar3 == 0xf6b48231) {
          uVar5 = (DAT_005b8bbc + -1) * DAT_005b8bbc;
          uVar5 = (uVar5 ^ 0xfffffffe) & uVar5;
          bVar7 = DAT_005b8bf8 < 10 == (uVar5 == 0);
          uVar4 = 0xe8b5916e;
          uVar6 = 0xd469ce1b;
          goto LAB_00404d97;
        }
        if (uVar3 != 0x6fbba73) goto joined_r0x00404575;
        uVar3 = 0x23e677f6;
        goto LAB_004045bb;
      }
      if (uVar3 == 0xe1db92a8) {
        puts("-1");
LAB_00404e37:
        uVar3 = 0x9ea1e204;
        unaff_R13D = 1;
      }
      else {
        if (uVar3 != 0xe8b5916e) goto joined_r0x00404575;
        uVar3 = 0xd469ce1b;
      }
      goto LAB_00404a40;
    }
    if ((int)uVar3 < -0x5f84c06b) {
      if ((int)uVar3 < -0x66d15c54) {
        if (uVar3 == 0x83713d02) {
          bVar7 = local_54 == 1;
          uVar3 = 0x13185c8d;
          uVar4 = 0xf6b48231;
        }
        else {
          if (uVar3 != 0x838fd544) goto joined_r0x00404575;
          bVar7 = local_63 == '\0';
          uVar3 = 0x9bdb96f;
          uVar4 = 0x78879829;
        }
      }
      else {
        if (uVar3 != 0x992ea3ac) {
          if (uVar3 != 0x9ea1e204) {
            if (uVar3 != 0x9fa572fb) goto joined_r0x00404575;
            uVar5 = (~-DAT_005b8bbc * DAT_005b8bbc ^ 0xfffffffeU) & ~-DAT_005b8bbc * DAT_005b8bbc;
            bVar7 = uVar5 == 0;
            uVar4 = 0xab362174;
            uVar3 = 0x4cc334c1;
            if (uVar5 == 0) {
              uVar3 = 0xab362174;
            }
            bVar9 = SBORROW4(DAT_005b8bf8,10);
            bVar8 = DAT_005b8bf8 + -10 < 0;
            bVar1 = DAT_005b8bf8 < 10;
            uVar5 = 0x4cc334c1;
            goto LAB_00404df1;
          }
          uVar5 = ~((DAT_005b8bbc + -1) * DAT_005b8bbc) | 0xfffffffe;
          bVar7 = DAT_005b8bf8 < 10 == (uVar5 == 0xffffffff);
          uVar4 = 0x3eaaf75e;
          uVar6 = 0x7c2e9bc7;
          local_4c = unaff_R13D;
          goto LAB_0040455f;
        }
        bVar7 = local_62 == '\0';
        uVar3 = 0x3b92b595;
        uVar4 = 0x257eb456;
      }
LAB_00404e1a:
      if (!bVar7) {
        uVar3 = uVar4;
      }
      if (0x9bdb96e < (int)uVar3) {
LAB_004045bb:
        if ((int)uVar3 < 0x3b92b595) {
          if ((int)uVar3 < 0x23e677f6) {
            if ((int)uVar3 < 0x1a011750) {
              if (uVar3 == 0x9bdb96f) {
                bVar7 = (~(~-DAT_005b8bbc * DAT_005b8bbc) | 0xfffffffeU) == 0xffffffff;
                uVar5 = 0xdc37e1d8;
                uVar3 = 0xafd1984b;
                if (bVar7) {
                  uVar3 = 0xdc37e1d8;
                }
                bVar9 = SBORROW4(DAT_005b8bf8,10);
                bVar8 = DAT_005b8bf8 + -10 < 0;
                bVar1 = DAT_005b8bf8 < 10;
                uVar4 = 0xafd1984b;
LAB_00404e96:
                if (bVar9 == bVar8) {
                  uVar3 = uVar4;
                }
                if ((bool)(bVar1 ^ bVar7)) {
                  uVar3 = uVar5;
                }
              }
              else if (uVar3 == 0x13185c8d) {
                uVar3 = 0x6508e0a3 - (~(local_60 >> 0x1f) | 0x832d4dfbU);
                local_58 = local_60;
              }
            }
            else {
              if (uVar3 == 0x1a011750) {
                uVar3 = 0xba4da561;
                unaff_R12D = local_50;
                goto LAB_00404a40;
              }
              if (uVar3 == 0x2052dfc2) {
                local_5c = 0;
                uVar5 = (DAT_005b8bbc + -1) * DAT_005b8bbc;
                uVar5 = (uVar5 ^ 0xfffffffe) & uVar5;
                bVar7 = uVar5 == 0;
                uVar4 = 0xc6067dfb;
                uVar3 = 0x646d438a;
                if (uVar5 == 0) {
                  uVar3 = 0xc6067dfb;
                }
                bVar9 = SBORROW4(DAT_005b8bf8,10);
                bVar8 = DAT_005b8bf8 + -10 < 0;
                bVar1 = DAT_005b8bf8 < 10;
                uVar5 = 0x646d438a;
LAB_00404df1:
                if (bVar9 == bVar8) {
                  uVar3 = uVar5;
                }
                if ((bool)(bVar1 ^ bVar7)) {
                  uVar3 = uVar4;
                }
              }
              else if (uVar3 == 0x224ed7db) {
                local_38 = (undefined4 *)(&DAT_004ce570 + (long)local_68 * 4);
                iVar2 = __isoc99_scanf("%d",local_38);
                local_61 = iVar2 != 1;
                uVar5 = (DAT_005b8bbc + -1) * DAT_005b8bbc;
                uVar5 = (uVar5 ^ 0xfffffffe) & uVar5;
                bVar7 = DAT_005b8bf8 < 10 == (uVar5 == 0);
                uVar4 = 0x39a63c7e;
                uVar6 = 0xe09d0970;
LAB_00404d97:
                if (!bVar7) {
                  uVar4 = uVar6;
                }
                uVar3 = uVar4;
                if (uVar5 == 0) {
                  uVar3 = uVar6;
                }
                if (9 < DAT_005b8bf8) {
                  uVar3 = uVar4;
                }
              }
            }
          }
          else if ((int)uVar3 < 0x2a8cf381) {
            if (uVar3 == 0x23e677f6) {
              local_63 = local_68 < local_60;
              uVar5 = ~((DAT_005b8bbc + -1) * DAT_005b8bbc) | 0xfffffffe;
              bVar7 = DAT_005b8bf8 < 10 == (uVar5 == 0xffffffff);
              uVar4 = 0x6fbba73;
              uVar6 = 0x838fd544;
LAB_0040455f:
              if (!bVar7) {
                uVar4 = uVar6;
              }
              uVar3 = uVar4;
              if (uVar5 == 0xffffffff) {
                uVar3 = uVar6;
              }
              if (9 < DAT_005b8bf8) {
                uVar3 = uVar4;
              }
            }
            else if (uVar3 == 0x257eb456) {
              bVar7 = (~((DAT_005b8bbc + -1) * DAT_005b8bbc) | 0xfffffffeU) == 0xffffffff;
              uVar5 = 0x2052dfc2;
              uVar3 = 0x646d438a;
              if (bVar7) {
                uVar3 = 0x2052dfc2;
              }
              bVar9 = SBORROW4(DAT_005b8bf8,10);
              bVar8 = DAT_005b8bf8 + -10 < 0;
              bVar1 = DAT_005b8bf8 < 10;
              uVar4 = 0x646d438a;
              goto LAB_00404e96;
            }
          }
          else {
            if (uVar3 == 0x2a8cf381) {
              uVar3 = 0xec57e811;
              goto LAB_00404a40;
            }
            if (uVar3 == 0x312272c0) {
              uVar3 = 0x9ea1e204;
              unaff_R13D = 0;
              goto LAB_00404a40;
            }
            if (uVar3 == 0x39a63c7e) {
              __isoc99_scanf("%d",&DAT_004ce570 + (long)local_68 * 4);
              uVar3 = 0x224ed7db;
              goto LAB_004045bb;
            }
          }
        }
        else {
          if (0x6508e0a3 < (int)uVar3) {
            if (0x74cc3cda < (int)uVar3) {
              if (uVar3 != 0x74cc3cdb) {
                if (uVar3 == 0x78879829) {
                  uVar4 = (DAT_005b8bbc + -1) * DAT_005b8bbc;
                  uVar4 = (uVar4 ^ 0xfffffffe) & uVar4;
                  uVar3 = 0x39a63c7e;
                  if (uVar4 == 0) {
                    uVar3 = 0x224ed7db;
                  }
                  if (9 < DAT_005b8bf8) {
                    uVar3 = 0x39a63c7e;
                  }
                  if (DAT_005b8bf8 < 10 != (uVar4 == 0)) {
                    uVar3 = 0x224ed7db;
                  }
                  goto joined_r0x0040496a;
                }
                if (uVar3 == 0x7c2e9bc7) {
                  bVar7 = (~((DAT_005b8bbc + -1) * DAT_005b8bbc) | 0xfffffffeU) == 0xffffffff;
                  uVar3 = 0x3eaaf75e;
                  if (bVar7) {
                    uVar3 = 0xaa3e5e69;
                  }
                  if (9 < DAT_005b8bf8) {
                    uVar3 = 0x3eaaf75e;
                  }
                  if (DAT_005b8bf8 < 10 != bVar7) {
                    uVar3 = 0xaa3e5e69;
                  }
                }
                goto joined_r0x00404575;
              }
              uVar3 = 0xba4da561;
              unaff_R12D = 0;
              goto LAB_00404a40;
            }
            if (uVar3 != 0x6508e0a4) {
              if (uVar3 != 0x690d1beb) goto joined_r0x00404575;
              local_60 = 200000;
              uVar3 = 0x5160370c;
              goto LAB_004045bb;
            }
            uVar3 = 0x5160370c;
            if (200000 < local_58) {
              uVar3 = 0x690d1beb;
            }
joined_r0x0040496a:
            if (uVar3 < 0x9bdb96f) goto LAB_00404a40;
            goto LAB_004045bb;
          }
          if (0x4cc334c0 < (int)uVar3) {
            if (uVar3 == 0x4cc334c1) {
              uVar3 = 0xab362174;
              goto LAB_00404a40;
            }
            if (uVar3 == 0x5160370c) {
              uVar5 = ~((DAT_005b8bbc + -1) * DAT_005b8bbc) | 0xfffffffe;
              bVar7 = DAT_005b8bf8 < 10 == (uVar5 == 0xffffffff);
              uVar4 = 0x2a8cf381;
              uVar6 = 0xec57e811;
              goto LAB_0040455f;
            }
            if (uVar3 != 0x646d438a) goto joined_r0x00404575;
            local_5c = 0;
            uVar3 = 0x2052dfc2;
            goto LAB_004045bb;
          }
          if (uVar3 == 0x3b92b595) {
            uVar3 = FUN_004079a0(local_60,local_5c);
            printf("%d\n",(ulong)uVar3);
            goto LAB_00404e37;
          }
          if (uVar3 == 0x3eaaf75e) {
            uVar3 = 0x7c2e9bc7;
            goto LAB_004045bb;
          }
        }
joined_r0x00404575:
        if ((int)uVar3 < 0x9bdb96f) goto LAB_00404a40;
        goto LAB_004045bb;
      }
    }
    else if ((int)uVar3 < -0x54c9de8c) {
      if (uVar3 == 0xaa3e5e69) {
        return local_4c;
      }
      if (uVar3 != 0xa07b3f95) goto joined_r0x00404575;
      *local_38 = 0;
      uVar3 = 0x9fa572fb;
    }
    else {
      if (uVar3 == 0xab362174) {
        local_50 = local_68 + 1;
        uVar4 = (DAT_005b8bbc + -1) * DAT_005b8bbc;
        uVar4 = (uVar4 ^ 0xfffffffe) & uVar4;
        bVar7 = uVar4 == 0;
        uVar5 = 0x1a011750;
        uVar3 = 0x4cc334c1;
        if (uVar4 == 0) {
          uVar3 = 0x1a011750;
        }
        bVar9 = SBORROW4(DAT_005b8bf8,10);
        bVar8 = DAT_005b8bf8 + -10 < 0;
        bVar1 = DAT_005b8bf8 < 10;
        uVar4 = 0x4cc334c1;
        goto LAB_00404e96;
      }
      if (uVar3 != 0xafd1984b) goto joined_r0x00404575;
      __isoc99_scanf("%d",&local_5c);
      uVar3 = 0xdc37e1d8;
    }
  } while( true );
}



/* ===== Function: FUN_00404ed0 ===== */

/* WARNING: Removing unreachable block (ram,0x0040507a) */
/* WARNING: Removing unreachable block (ram,0x004056bb) */
/* WARNING: Removing unreachable block (ram,0x00405fe5) */
/* WARNING: Removing unreachable block (ram,0x00406271) */
/* WARNING: Removing unreachable block (ram,0x00406035) */
/* WARNING: Removing unreachable block (ram,0x00405e3e) */
/* WARNING: Removing unreachable block (ram,0x00404f14) */
/* WARNING: Removing unreachable block (ram,0x00405f3f) */
/* WARNING: Removing unreachable block (ram,0x004062af) */
/* WARNING: Removing unreachable block (ram,0x004056a3) */
/* WARNING: Removing unreachable block (ram,0x00405279) */
/* WARNING: Removing unreachable block (ram,0x004054da) */
/* WARNING: Removing unreachable block (ram,0x004057ee) */
/* WARNING: Removing unreachable block (ram,0x004057aa) */

int * FUN_00404ed0(void)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  int unaff_EBP;
  int iVar3;
  int iVar4;
  int unaff_R12D;
  int unaff_R13D;
  int unaff_R14D;
  int unaff_R15D;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int local_718;
  int local_714;
  char local_70d;
  char local_70c;
  char local_70b;
  char local_70a;
  char local_709;
  int local_708;
  int local_704;
  int local_700;
  int local_6fc;
  int local_6f8;
  int local_6f4;
  int local_6f0;
  int local_6ec;
  int local_6e8;
  int local_6e4;
  int local_6e0;
  uint local_6dc;
  uint local_6d8;
  uint local_6d4;
  int local_6d0;
  int local_6cc;
  undefined4 *local_6c8;
  long local_6c0;
  long local_6b8;
  int local_6ac;
  int local_6a8;
  int local_6a4;
  int *local_6a0;
  int *local_698;
  uint *local_690;
  int *local_688;
  uint *local_680;
  uint local_678 [200];
  int local_358 [202];
  
  local_6a0 = &local_714;
  local_700 = in_ECX;
  local_6ac = __isoc99_scanf("%d");
  iVar1 = 0x5ce44b53;
  local_6fc = local_700;
LAB_00404f7b:
  if (iVar1 < 0x441813c4) {
    if (iVar1 < 0x24701b4d) {
      if (iVar1 < 0xf3ddb7f) {
        if (iVar1 < 0x5e48c2c) {
          if (iVar1 == -0xce2a99) {
            bVar5 = local_70b == '\0';
            iVar1 = -0x70c1760c;
            iVar3 = -0xb7d01dc;
            goto LAB_004060e4;
          }
          if (iVar1 == 0x1816e83) {
            iVar1 = -0x780e659f;
            goto LAB_004058e0;
          }
        }
        else {
          if (iVar1 == 0x5e48c2c) {
            local_698 = &local_6ec;
            iVar1 = __isoc99_scanf("%d");
            bVar5 = iVar1 == 1;
            iVar1 = -0x1100ddae;
            iVar3 = 0x7e74bfd8;
            goto LAB_004060e4;
          }
          if (iVar1 == 0xab00e64) {
            *local_6c8 = 0xffffffff;
            iVar1 = -0xa6ba01f;
            goto LAB_004058e0;
          }
          if (iVar1 == 0xb3648b8) {
            uVar2 = ~((DAT_005b8bb0 + -1) * DAT_005b8bb0) | 0xfffffffe;
            bVar5 = DAT_005b8bf4 < 10 == (uVar2 == 0xffffffff);
            iVar3 = 0x1816e83;
            iVar4 = -0x780e659f;
            goto LAB_0040606c;
          }
        }
      }
      else if (iVar1 < 0x142ebf4c) {
        if (iVar1 == 0xf3ddb7f) {
          putchar(0x20);
          uVar2 = ~((DAT_005b8bb0 + -1) * DAT_005b8bb0) | 0xfffffffe;
          bVar5 = DAT_005b8bf4 < 10 == (uVar2 == 0xffffffff);
          iVar3 = -0x7209c9f5;
          iVar4 = 0x125aff37;
          goto LAB_0040606c;
        }
        if (iVar1 == 0x12170bd0) {
          uVar2 = (DAT_005b8bb0 + -1) * DAT_005b8bb0;
          uVar2 = (uVar2 ^ 0xfffffffe) & uVar2;
          bVar5 = DAT_005b8bf4 < 10 == (uVar2 == 0);
          iVar3 = -0x7209c9f5;
          iVar4 = 0xf3ddb7f;
          goto LAB_00406239;
        }
        if (iVar1 == 0x125aff37) {
          iVar1 = -0x6c68aecd;
          goto LAB_004058e0;
        }
      }
      else {
        if (iVar1 == 0x142ebf4c) {
          putchar(10);
          goto LAB_0040579a;
        }
        if (iVar1 == 0x19d80999) {
          local_6f0 = local_6fc;
          bVar8 = SBORROW4(local_6fc,local_714);
          bVar5 = local_6fc - local_714 < 0;
          iVar1 = 0x56046861;
          iVar3 = 0x5e254ff5;
          goto LAB_004061d9;
        }
        if (iVar1 == 0x1ae25547) {
          local_6d8 = -(-local_6dc - local_6e0);
          local_680 = local_678 + local_6b8;
          bVar8 = SBORROW4(local_6d8,*local_680);
          bVar5 = (int)(local_6d8 - *local_680) < 0;
          iVar1 = 0x4453b093;
          iVar3 = 0x483ab90a;
          goto LAB_004061d9;
        }
      }
    }
    else if (iVar1 < 0x362723e9) {
      if (iVar1 < 0x32311c54) {
        if (iVar1 == 0x24701b4d) {
          iVar1 = -0x11ed64e9;
          unaff_EBP = local_6a8;
          goto LAB_004058e0;
        }
        if (iVar1 == 0x2d2b175e) {
          iVar1 = -0x11ed64e9;
          unaff_EBP = 0;
          goto LAB_004058e0;
        }
        if (iVar1 == 0x30c76695) {
          local_6b8 = (long)local_6f4;
          local_6e0 = *(int *)(&DAT_00591a70 + local_6b8 * 4 + local_6c0 * 800);
          iVar1 = ((local_6e0 >> 0x1f ^ 0x62df9a4eU) & local_6e0 >> 0x1f) + 0xa3740467;
        }
      }
      else {
        if (iVar1 == 0x32311c54) {
          bVar5 = local_70d == '\0';
          iVar1 = 0x2d2b175e;
          iVar3 = -0x50b920b;
          goto LAB_004060e4;
        }
        if (iVar1 == 0x32945ab3) {
          uVar2 = ~((DAT_005b8bb0 + -1) * DAT_005b8bb0) | 0xfffffffe;
          bVar5 = DAT_005b8bf4 < 10 == (uVar2 == 0xffffffff);
          iVar3 = 0x70c198e2;
          iVar4 = -0x553faf92;
          goto LAB_0040606c;
        }
        if (iVar1 == 0x33a28d36) {
          local_678[local_718] = 0x7fffffff;
          local_358[local_718] = 0;
          local_6a4 = local_718 + 1;
          bVar5 = (~((DAT_005b8bb0 + -1) * DAT_005b8bb0) | 0xfffffffeU) == 0xffffffff;
          iVar3 = 0x44b6fde2;
          iVar1 = -0x35eaada3;
          if (bVar5) {
            iVar1 = 0x44b6fde2;
          }
          bVar7 = SBORROW4(DAT_005b8bf4,10);
          bVar6 = DAT_005b8bf4 + -10 < 0;
          bVar8 = DAT_005b8bf4 < 10;
          iVar4 = -0x35eaada3;
          goto LAB_00404f19;
        }
      }
    }
    else if (iVar1 < 0x3e9adff6) {
      if (iVar1 == 0x362723e9) {
        unaff_R15D = local_6cc + 1;
        iVar1 = -0x80076a5;
        goto LAB_004058e0;
      }
      if (iVar1 == 0x3983ab3e) goto LAB_004061f6;
      if (iVar1 == 0x3b5c6da7) {
        uVar2 = (DAT_005b8bb0 + -1) * DAT_005b8bb0;
        uVar2 = (uVar2 ^ 0xfffffffe) & uVar2;
        bVar5 = uVar2 == 0;
        iVar3 = 0x5819a9a2;
        iVar1 = 0x462210e9;
        if (uVar2 == 0) {
          iVar1 = 0x5819a9a2;
        }
        bVar7 = SBORROW4(DAT_005b8bf4,10);
        bVar6 = DAT_005b8bf4 + -10 < 0;
        bVar8 = DAT_005b8bf4 < 10;
        iVar4 = 0x462210e9;
        local_718 = unaff_R12D;
        goto LAB_00404f19;
      }
    }
    else {
      if (iVar1 == 0x3e9adff6) {
        iVar1 = -0x5865f04c;
        unaff_R14D = 0;
        goto LAB_004058e0;
      }
      if (iVar1 == 0x40946a18) {
        unaff_R14D = local_6f4 + 1;
        iVar1 = -0x5865f04c;
        goto LAB_004058e0;
      }
      if (iVar1 == 0x43721cae) {
LAB_0040579a:
        iVar1 = 0x3983ab3e;
        goto LAB_00404f7b;
      }
    }
  }
  else {
    if (iVar1 < 0x5ce44b53) {
      if (0x4c845360 < iVar1) {
        if (iVar1 < 0x576a6728) {
          if (iVar1 == 0x4c845361) {
            iVar1 = -0x79c8bda2;
            local_700 = 0;
            goto LAB_004058e0;
          }
          if (iVar1 == 0x560083bd) {
            putchar(10);
            uVar2 = (DAT_005b8bb0 + -1) * DAT_005b8bb0;
            uVar2 = (uVar2 ^ 0xfffffffe) & uVar2;
            bVar5 = uVar2 == 0;
            iVar3 = 0x43721cae;
            iVar1 = -0x1e29bc79;
            if (uVar2 == 0) {
              iVar1 = 0x43721cae;
            }
            bVar7 = SBORROW4(DAT_005b8bf4,10);
            bVar6 = DAT_005b8bf4 + -10 < 0;
            bVar8 = DAT_005b8bf4 < 10;
            iVar4 = -0x1e29bc79;
            goto LAB_00404f19;
          }
          if (iVar1 == 0x56046861) {
            putchar(10);
            goto LAB_0040579a;
          }
        }
        else {
          if (iVar1 == 0x576a6728) {
            printf("%d",(ulong)local_6d4);
            goto LAB_004057de;
          }
          if (iVar1 == 0x5819a9a2) {
            local_709 = local_718 < local_714;
            bVar5 = (~((DAT_005b8bb0 + -1) * DAT_005b8bb0) | 0xfffffffeU) == 0xffffffff;
            iVar3 = -0x65fc4a5a;
            iVar1 = 0x462210e9;
            if (bVar5) {
              iVar1 = -0x65fc4a5a;
            }
            bVar7 = SBORROW4(DAT_005b8bf4,10);
            bVar6 = DAT_005b8bf4 + -10 < 0;
            bVar8 = DAT_005b8bf4 < 10;
            iVar4 = 0x462210e9;
            goto LAB_00405bdc;
          }
          if (iVar1 == 0x589a1d68) {
            uVar2 = ~(~-DAT_005b8bb0 * DAT_005b8bb0) | 0xfffffffe;
            bVar5 = DAT_005b8bf4 < 10 == (uVar2 == 0xffffffff);
            iVar3 = -0x703bf491;
            iVar4 = -0x2cadd908;
            goto LAB_0040606c;
          }
        }
        goto joined_r0x00405009;
      }
      if (iVar1 < 0x44b6fde2) {
        if (iVar1 == 0x441813c4) {
          uVar2 = (~-DAT_005b8bb0 * DAT_005b8bb0 ^ 0xfffffffeU) & ~-DAT_005b8bb0 * DAT_005b8bb0;
          bVar5 = uVar2 == 0;
          iVar3 = 0x33a28d36;
          iVar1 = -0x35eaada3;
          if (uVar2 == 0) {
            iVar1 = 0x33a28d36;
          }
          bVar7 = SBORROW4(DAT_005b8bf4,10);
          bVar6 = DAT_005b8bf4 + -10 < 0;
          bVar8 = DAT_005b8bf4 < 10;
          iVar4 = -0x35eaada3;
          goto LAB_00405bdc;
        }
        if (iVar1 != 0x4453b093) goto joined_r0x00405009;
        iVar1 = 0x40946a18;
      }
      else if (iVar1 == 0x44b6fde2) {
        iVar1 = 0x3b5c6da7;
        unaff_R12D = local_6a4;
      }
      else if (iVar1 == 0x462210e9) {
        iVar1 = 0x5819a9a2;
      }
      else {
        if (iVar1 != 0x483ab90a) goto joined_r0x00405009;
        *local_680 = local_6d8;
        iVar1 = 0x4453b093;
      }
      goto LAB_00404f7b;
    }
    if (iVar1 < 0x70c198e2) {
      if (0x6a51cbe2 < iVar1) {
        if (iVar1 == 0x6a51cbe3) {
          local_6c0 = (long)local_6f8;
          local_358[local_6c0] = 1;
          uVar2 = (DAT_005b8bb0 + -1) * DAT_005b8bb0;
          uVar2 = (uVar2 ^ 0xfffffffe) & uVar2;
          bVar5 = DAT_005b8bf4 < 10 == (uVar2 == 0);
          iVar3 = -0x52bca4c5;
          iVar4 = 0x3e9adff6;
          goto LAB_00406239;
        }
        if (iVar1 == 0x6eb0bc0e) {
          __isoc99_scanf("%d",&DAT_00591a70 + (long)local_704 * 4 + (long)local_708 * 800);
          iVar1 = -0x38a852f;
          goto LAB_004058e0;
        }
        if (iVar1 == 0x6fe83c76) {
          uVar2 = (DAT_005b8bb0 + -1) * DAT_005b8bb0;
          uVar2 = (uVar2 ^ 0xfffffffe) & uVar2;
          bVar5 = uVar2 == 0;
          iVar3 = -0x38a852f;
          iVar1 = 0x6eb0bc0e;
          if (uVar2 == 0) {
            iVar1 = -0x38a852f;
          }
          bVar7 = SBORROW4(DAT_005b8bf4,10);
          bVar6 = DAT_005b8bf4 + -10 < 0;
          bVar8 = DAT_005b8bf4 < 10;
          iVar4 = 0x6eb0bc0e;
          goto LAB_00405bdc;
        }
        goto joined_r0x00405009;
      }
      if (iVar1 == 0x5ce44b53) {
        bVar5 = local_6ac == 1;
        iVar1 = 0x589a1d68;
        iVar3 = -0x6646d26f;
        goto LAB_004060e4;
      }
      if (iVar1 == 0x5e254ff5) {
        local_6d4 = local_678[local_6f0];
        bVar5 = local_6d4 == 0x7fffffff;
        iVar1 = 0x576a6728;
        iVar3 = 0x32945ab3;
        goto LAB_004062c3;
      }
      if (iVar1 == 0x5f6bbcfc) {
        iVar1 = 0x19d80999;
        local_6fc = local_6d0;
        goto LAB_00404f7b;
      }
    }
    else if (iVar1 < 0x7c2b7540) {
      if (iVar1 == 0x70c198e2) {
        printf("INF");
        iVar1 = -0x553faf92;
        goto LAB_004058e0;
      }
      if (iVar1 == 0x725b1486) {
        iVar1 = -0x70c1760c;
        goto LAB_004058e0;
      }
      if (iVar1 == 0x78c0bf85) {
        iVar1 = -0x781fdf98;
        goto LAB_004058e0;
      }
    }
    else {
      if (iVar1 == 0x7c2b7540) {
LAB_004057de:
        iVar1 = 0x7e3e854c;
        goto LAB_00404f7b;
      }
      if (iVar1 == 0x7e3e854c) {
        local_6d0 = local_6f0 + 1;
        bVar8 = SBORROW4(local_6d0,local_714);
        bVar5 = local_6d0 - local_714 < 0;
        iVar1 = -0x6c68aecd;
        iVar3 = 0x12170bd0;
        goto LAB_004061d9;
      }
      if (iVar1 == 0x7e74bfd8) {
        uVar2 = (DAT_005b8bb0 + -1) * DAT_005b8bb0;
        uVar2 = (uVar2 ^ 0xfffffffe) & uVar2;
        bVar5 = DAT_005b8bf4 < 10 == (uVar2 == 0);
        iVar3 = -0x1e29bc79;
        iVar4 = 0x560083bd;
        goto LAB_00406239;
      }
    }
  }
joined_r0x00405009:
  if (iVar1 < -0xce2a99) {
LAB_004058e0:
    if (iVar1 < -0x391306db) {
      if (iVar1 < -0x6646d26f) {
        if (iVar1 < -0x703bf491) {
          if (iVar1 < -0x780e659f) {
            if (iVar1 == -0x79c8bda2) {
              bVar5 = local_700 == 0;
              iVar1 = -0x40f3b12d;
              iVar3 = 0x362723e9;
              goto LAB_004062c3;
            }
            if (iVar1 == -0x781fdf98) {
              local_70c = local_704 < local_714;
              bVar5 = (~(~-DAT_005b8bb0 * DAT_005b8bb0) | 0xfffffffeU) == 0xffffffff;
              iVar3 = -0x29ece041;
              iVar1 = 0x78c0bf85;
              if (bVar5) {
                iVar1 = -0x29ece041;
              }
              bVar7 = SBORROW4(DAT_005b8bf4,10);
              bVar6 = DAT_005b8bf4 + -10 < 0;
              bVar8 = DAT_005b8bf4 < 10;
              iVar4 = 0x78c0bf85;
              goto LAB_00404f19;
            }
            goto joined_r0x00405009;
          }
          if (iVar1 == -0x780e659f) {
            uVar2 = ~((DAT_005b8bb0 + -1) * DAT_005b8bb0) | 0xfffffffe;
            bVar5 = DAT_005b8bf4 < 10 == (uVar2 == 0xffffffff);
            iVar3 = 0x1816e83;
            iVar4 = -0x2f9e628a;
            goto LAB_0040606c;
          }
          if (iVar1 == -0x7209c9f5) {
            putchar(0x20);
            iVar1 = 0xf3ddb7f;
            goto LAB_00404f7b;
          }
          if (iVar1 != -0x70c1760c) goto joined_r0x00405009;
          unaff_R13D = local_704 + 1;
          iVar1 = -0x4f2d8efd;
          goto LAB_004058e0;
        }
        if (iVar1 < -0x697c9352) {
          if (iVar1 == -0x703bf491) {
            iVar1 = -0x2cadd908;
            goto LAB_004058e0;
          }
          if (iVar1 != -0x6c68aecd) {
            if (iVar1 != -0x6b9b7c58) goto joined_r0x00405009;
            iVar1 = -0x1a222164;
            goto LAB_004058e0;
          }
          uVar2 = (DAT_005b8bb0 + -1) * DAT_005b8bb0;
          uVar2 = (uVar2 ^ 0xfffffffe) & uVar2;
          bVar5 = DAT_005b8bf4 < 10 == (uVar2 == 0);
          iVar3 = -0x6b9b7c58;
          iVar4 = -0x1a222164;
        }
        else {
          if (iVar1 == -0x697c9352) {
            iVar1 = -0x686b204e;
            goto LAB_004058e0;
          }
          if (iVar1 == -0x686b204e) {
            local_6a8 = local_708 + 1;
            bVar5 = (~((DAT_005b8bb0 + -1) * DAT_005b8bb0) | 0xfffffffeU) == 0xffffffff;
            iVar3 = 0x24701b4d;
            iVar1 = -0x697c9352;
            if (bVar5) {
              iVar1 = 0x24701b4d;
            }
            bVar7 = SBORROW4(DAT_005b8bf4,10);
            bVar6 = DAT_005b8bf4 + -10 < 0;
            bVar8 = DAT_005b8bf4 < 10;
            iVar4 = -0x697c9352;
            goto LAB_00404f19;
          }
          if (iVar1 != -0x68005528) goto joined_r0x00405009;
          uVar2 = (DAT_005b8bb0 + -1) * DAT_005b8bb0;
          uVar2 = (uVar2 ^ 0xfffffffe) & uVar2;
          bVar5 = DAT_005b8bf4 < 10 == (uVar2 == 0);
          iVar3 = -0x52bca4c5;
          iVar4 = 0x6a51cbe3;
        }
LAB_00406239:
        if (!bVar5) {
          iVar3 = iVar4;
        }
        iVar1 = iVar3;
        if (uVar2 == 0) {
          iVar1 = iVar4;
        }
        if (9 < DAT_005b8bf4) {
          iVar1 = iVar3;
        }
        goto joined_r0x004061e1;
      }
      if (-0x553faf93 < iVar1) {
        if (iVar1 < -0x456e944a) {
          if (iVar1 == -0x553faf92) {
            printf("INF");
            uVar2 = (~-DAT_005b8bb0 * DAT_005b8bb0 ^ 0xfffffffeU) & ~-DAT_005b8bb0 * DAT_005b8bb0;
            bVar5 = uVar2 == 0;
            iVar3 = 0x7c2b7540;
            iVar1 = 0x70c198e2;
            if (uVar2 == 0) {
              iVar1 = 0x7c2b7540;
            }
            bVar7 = SBORROW4(DAT_005b8bf4,10);
            bVar6 = DAT_005b8bf4 + -10 < 0;
            bVar8 = DAT_005b8bf4 < 10;
            iVar4 = 0x70c198e2;
            goto LAB_00404f19;
          }
          if (iVar1 == -0x52bca4c5) {
            local_358[local_6f8] = 1;
            iVar1 = 0x6a51cbe3;
            goto LAB_00404f7b;
          }
          if (iVar1 == -0x4f2d8efd) {
            uVar2 = ~((DAT_005b8bb0 + -1) * DAT_005b8bb0) | 0xfffffffe;
            bVar5 = DAT_005b8bf4 < 10 == (uVar2 == 0xffffffff);
            iVar3 = 0x78c0bf85;
            iVar4 = -0x781fdf98;
            local_704 = unaff_R13D;
LAB_0040606c:
            if (!bVar5) {
              iVar3 = iVar4;
            }
            iVar1 = iVar3;
            if (uVar2 == 0xffffffff) {
              iVar1 = iVar4;
            }
            if (9 < DAT_005b8bf4) {
              iVar1 = iVar3;
            }
            goto joined_r0x004061e1;
          }
          goto joined_r0x00405009;
        }
        if (iVar1 == -0x456e944a) {
          uVar2 = (DAT_005b8bb0 + -1) * DAT_005b8bb0;
          uVar2 = (uVar2 ^ 0xfffffffe) & uVar2;
          bVar5 = DAT_005b8bf4 < 10 == (uVar2 == 0);
          iVar3 = -0x697c9352;
          iVar4 = -0x686b204e;
          goto LAB_00406239;
        }
        if (iVar1 == -0x40f3b12d) {
          iVar1 = 0x19d80999;
          local_6fc = 0;
          goto LAB_00404f7b;
        }
        if (iVar1 != -0x3ffca1bb) goto joined_r0x00405009;
        iVar1 = -0x391306db;
        goto LAB_004058e0;
      }
      if (iVar1 < -0x5c8bfb99) {
        if (iVar1 == -0x6646d26f) {
LAB_004061f6:
          iVar1 = -0x369240d8;
          goto LAB_004058e0;
        }
        if (iVar1 != -0x65fc4a5a) {
          if (iVar1 != -0x604014fe) goto joined_r0x00405009;
          iVar1 = -0x79c8bda2;
          local_700 = 0xb;
          goto LAB_004058e0;
        }
        bVar5 = local_709 == '\0';
        iVar1 = -0x2546d177;
        iVar3 = 0x441813c4;
      }
      else if (iVar1 == -0x5c8bfb99) {
        bVar5 = local_358[local_6b8] == 0;
        iVar1 = -0x5a0416c6;
        iVar3 = 0x40946a18;
      }
      else {
        if (iVar1 != -0x5a0416c6) {
          if (iVar1 == -0x5865f04c) {
            bVar8 = SBORROW4(unaff_R14D,local_714);
            bVar5 = unaff_R14D - local_714 < 0;
            iVar1 = 0x4c845361;
            iVar3 = 0x30c76695;
            local_6f4 = unaff_R14D;
            goto LAB_004061d9;
          }
          goto joined_r0x00405009;
        }
        local_6dc = local_678[local_6c0];
        bVar5 = local_6dc == 0x7fffffff;
        iVar1 = 0x40946a18;
        iVar3 = 0x1ae25547;
      }
LAB_004060e4:
      if (!bVar5) {
        iVar1 = iVar3;
      }
    }
    else {
      if (iVar1 < -0x1ee4a71a) {
        if (iVar1 < -0x2ed19b59) {
          if (iVar1 < -0x35eaada3) {
            if (iVar1 == -0x369240d8) {
              return local_6a0;
            }
            if (iVar1 == -0x391306db) {
              local_6e8 = local_6ec;
              local_70a = local_6ec < 0;
              uVar2 = (DAT_005b8bb0 + -1) * DAT_005b8bb0;
              uVar2 = (uVar2 ^ 0xfffffffe) & uVar2;
              bVar5 = DAT_005b8bf4 < 10 == (uVar2 == 0);
              iVar3 = -0x3ffca1bb;
              iVar4 = -0x2ed19b59;
              goto LAB_00406239;
            }
            goto joined_r0x00405009;
          }
          if (iVar1 == -0x35eaada3) {
            local_678[local_718] = 0x7fffffff;
            local_358[local_718] = 0;
            iVar1 = 0x33a28d36;
            goto LAB_00404f7b;
          }
          if (iVar1 != -0x2f9e628a) goto joined_r0x00405009;
          iVar1 = -0x40f3b12d;
          goto LAB_004058e0;
        }
        if (-0x291a4c5c < iVar1) {
          if (iVar1 == -0x291a4c5b) {
            local_6f8 = FUN_00407c90(local_678,local_358,local_6e4);
            bVar5 = local_6f8 == -1;
            iVar1 = -0x68005528;
            iVar3 = -0x604014fe;
LAB_004062c3:
            if (bVar5) {
              iVar1 = iVar3;
            }
            goto joined_r0x004061e1;
          }
          if (iVar1 == -0x2546d177) {
            local_678[local_6ec] = 0;
            iVar1 = -0x80076a5;
            unaff_R15D = 0;
          }
          else {
            if (iVar1 != -0x23a36890) goto joined_r0x00405009;
            iVar1 = -0x4f2d8efd;
            unaff_R13D = 0;
          }
          goto LAB_004058e0;
        }
        if (iVar1 != -0x2ed19b59) {
          if (iVar1 == -0x2cadd908) {
            local_70d = 199 < local_714 - 1U;
            uVar2 = ~(~-DAT_005b8bb0 * DAT_005b8bb0) | 0xfffffffe;
            bVar5 = DAT_005b8bf4 < 10 == (uVar2 == 0xffffffff);
            iVar3 = -0x703bf491;
            iVar4 = 0x32311c54;
            goto LAB_0040606c;
          }
          if (iVar1 == -0x29ece041) {
            bVar5 = local_70c == '\0';
            iVar1 = -0x456e944a;
            iVar3 = 0x6fe83c76;
            goto LAB_004060e4;
          }
          goto joined_r0x00405009;
        }
        bVar5 = local_70a == '\0';
        iVar1 = -0x1ee4a71a;
        iVar3 = 0x142ebf4c;
        goto LAB_004060e4;
      }
      if (-0xfc95876 < iVar1) {
        if (iVar1 < -0x80076a5) {
          if (iVar1 == -0xfc95875) {
            local_690 = local_678;
            local_688 = local_358;
            iVar1 = 0x3b5c6da7;
            unaff_R12D = 0;
            goto LAB_00404f7b;
          }
          if (iVar1 != -0xb7d01dc) {
            if (iVar1 == -0xa6ba01f) {
              *local_6c8 = 0xffffffff;
              uVar2 = (DAT_005b8bb0 + -1) * DAT_005b8bb0;
              uVar2 = (uVar2 ^ 0xfffffffe) & uVar2;
              bVar5 = DAT_005b8bf4 < 10 == (uVar2 == 0);
              iVar3 = 0xab00e64;
              iVar4 = 0x725b1486;
              goto LAB_00406239;
            }
            goto joined_r0x00405009;
          }
          uVar2 = (DAT_005b8bb0 + -1) * DAT_005b8bb0;
          uVar2 = (uVar2 ^ 0xfffffffe) & uVar2;
          bVar5 = uVar2 == 0;
          iVar3 = -0xa6ba01f;
          iVar1 = 0xab00e64;
          if (uVar2 == 0) {
            iVar1 = -0xa6ba01f;
          }
          bVar7 = SBORROW4(DAT_005b8bf4,10);
          bVar6 = DAT_005b8bf4 + -10 < 0;
          bVar8 = DAT_005b8bf4 < 10;
          iVar4 = 0xab00e64;
        }
        else {
          if (iVar1 == -0x80076a5) {
            local_6e4 = local_714;
            bVar8 = SBORROW4(unaff_R15D,local_714);
            bVar5 = unaff_R15D - local_714 < 0;
            iVar1 = 0xb3648b8;
            iVar3 = -0x291a4c5b;
            local_6cc = unaff_R15D;
LAB_004061d9:
            if (bVar8 != bVar5) {
              iVar1 = iVar3;
            }
            goto joined_r0x004061e1;
          }
          if (iVar1 == -0x50b920b) {
            putchar(10);
            goto LAB_004061f6;
          }
          if (iVar1 != -0x38a852f) goto joined_r0x00405009;
          local_6c8 = (undefined4 *)(&DAT_00591a70 + (long)local_704 * 4 + (long)local_708 * 800);
          iVar1 = __isoc99_scanf("%d",local_6c8);
          local_70b = iVar1 != 1;
          uVar2 = (DAT_005b8bb0 + -1) * DAT_005b8bb0;
          uVar2 = (uVar2 ^ 0xfffffffe) & uVar2;
          bVar5 = uVar2 == 0;
          iVar3 = -0xce2a99;
          iVar1 = 0x6eb0bc0e;
          if (uVar2 == 0) {
            iVar1 = -0xce2a99;
          }
          bVar7 = SBORROW4(DAT_005b8bf4,10);
          bVar6 = DAT_005b8bf4 + -10 < 0;
          bVar8 = DAT_005b8bf4 < 10;
          iVar4 = 0x6eb0bc0e;
        }
LAB_00404f19:
        if (bVar7 == bVar6) {
          iVar1 = iVar4;
        }
        if ((bool)(bVar8 ^ bVar5)) {
          iVar1 = iVar3;
        }
        goto joined_r0x004061e1;
      }
      if (iVar1 < -0x1a222164) {
        if (iVar1 != -0x1ee4a71a) {
          if (iVar1 == -0x1e29bc79) {
            putchar(10);
            iVar1 = 0x560083bd;
            goto LAB_00404f7b;
          }
          goto joined_r0x00405009;
        }
        iVar1 = -0xfc95875;
        if (local_714 <= local_6e8) {
          iVar1 = 0x142ebf4c;
        }
      }
      else {
        if (iVar1 == -0x1a222164) {
          uVar2 = ~(~-DAT_005b8bb0 * DAT_005b8bb0) | 0xfffffffe;
          bVar5 = DAT_005b8bf4 < 10 == (uVar2 == 0xffffffff);
          iVar3 = -0x6b9b7c58;
          iVar4 = 0x5f6bbcfc;
          goto LAB_0040606c;
        }
        if (iVar1 == -0x11ed64e9) {
          bVar8 = SBORROW4(unaff_EBP,local_714);
          bVar5 = unaff_EBP - local_714 < 0;
          iVar1 = 0x5e48c2c;
          iVar3 = -0x23a36890;
          local_708 = unaff_EBP;
          goto LAB_004061d9;
        }
        if (iVar1 != -0x1100ddae) goto joined_r0x00405009;
        uVar2 = (DAT_005b8bb0 + -1) * DAT_005b8bb0;
        uVar2 = (uVar2 ^ 0xfffffffe) & uVar2;
        bVar5 = uVar2 == 0;
        iVar3 = -0x391306db;
        iVar1 = -0x3ffca1bb;
        if (uVar2 == 0) {
          iVar1 = -0x391306db;
        }
        bVar7 = SBORROW4(DAT_005b8bf4,10);
        bVar6 = DAT_005b8bf4 + -10 < 0;
        bVar8 = DAT_005b8bf4 < 10;
        iVar4 = -0x3ffca1bb;
LAB_00405bdc:
        if (bVar7 == bVar6) {
          iVar1 = iVar4;
        }
        if ((bool)(bVar8 ^ bVar5)) {
          iVar1 = iVar3;
        }
      }
    }
joined_r0x004061e1:
    if (-0xce2a9a < iVar1) goto LAB_00404f7b;
    goto LAB_004058e0;
  }
  goto LAB_00404f7b;
}



/* ===== Function: FUN_00406320 ===== */

long FUN_00406320(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 1;
  while( true ) {
    iVar1 = 0x120b0536;
    if (0 < (int)param_2) {
      iVar1 = -0x25a88152;
    }
    do {
    } while (iVar1 == -0x61f66570);
    if (iVar1 != -0x25a88152) break;
    lVar2 = lVar2 * param_1;
    param_2 = ~-param_2;
  }
  if (iVar1 == 0x120b0536) {
    return lVar2;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ===== Function: FUN_004063a0 ===== */

/* WARNING: Removing unreachable block (ram,0x004065dd) */

void FUN_004063a0(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char local_39;
  
  iVar1 = *param_1;
  iVar2 = *param_4;
  iVar4 = -0x30266d93;
  do {
    if (iVar4 < -0x6537cf4) {
      if (iVar4 == -0x35113a9a) {
        iVar4 = -0x730b57a3;
        if (local_39 == '\0') goto joined_r0x0040654c;
        iVar4 = -0x5efe9189;
        goto joined_r0x0040654c;
      }
      if (iVar4 != -0x30266d93) goto joined_r0x0040654c;
      bVar9 = SBORROW4(iVar1,iVar2);
      bVar8 = iVar1 - iVar2 < 0;
      bVar7 = iVar1 == iVar2;
      iVar4 = -0x64336192;
      goto LAB_00406543;
    }
    if (iVar4 == -0x6537cf4) {
      local_39 = iVar1 == iVar2;
      uVar6 = (~-DAT_005b8b78 * DAT_005b8b78 ^ 0xfffffffeU) & ~-DAT_005b8b78 * DAT_005b8b78;
      iVar4 = -0x6721d59c;
      if (uVar6 == 0) {
        iVar4 = -0x35113a9a;
      }
      if (9 < DAT_005b8bc8) {
        iVar4 = -0x6721d59c;
      }
      if (DAT_005b8bc8 < 10 == (uVar6 == 0)) goto joined_r0x0040654c;
      iVar4 = -0x35113a9a;
      goto joined_r0x0040654c;
    }
    if (iVar4 != 0x9bea51a) {
      if (iVar4 != 0x47005de0) goto joined_r0x0040654c;
      iVar4 = -0x4def9298;
      if (*param_2 != *param_5) goto joined_r0x00406517;
      iVar4 = -0x4d263938;
      goto joined_r0x00406517;
    }
    iVar4 = *param_1;
    iVar5 = *param_2;
    iVar3 = *param_3;
    *param_1 = *param_4;
    *param_2 = *param_5;
    *param_3 = *param_6;
    *param_4 = iVar4;
    *param_5 = iVar5;
    *param_6 = iVar3;
    iVar4 = -0x4def9298;
LAB_0040640b:
    do {
      if (iVar4 < -0x5efe9189) {
        if (iVar4 == -0x730b57a3) {
          iVar4 = -0x4def9298;
          if (*param_1 == *param_4) {
            iVar4 = 0x47005de0;
          }
joined_r0x00406517:
          if (-0x35113a9b < iVar4) break;
          goto LAB_0040640b;
        }
        if (iVar4 == -0x6721d59c) {
          iVar4 = -0x6537cf4;
        }
        else if (iVar4 == -0x64336192) {
          uVar6 = (DAT_005b8b78 + -1) * DAT_005b8b78;
          uVar6 = (uVar6 ^ 0xfffffffe) & uVar6;
          iVar5 = -0x6721d59c;
          if (DAT_005b8bc8 < 10 != (uVar6 == 0)) {
            iVar5 = -0x6537cf4;
          }
          iVar4 = iVar5;
          if (uVar6 == 0) {
            iVar4 = -0x6537cf4;
          }
          if (9 < DAT_005b8bc8) {
            iVar4 = iVar5;
          }
        }
      }
      else {
        if (iVar4 == -0x5efe9189) {
          iVar5 = *param_2;
          iVar4 = *param_5;
          bVar9 = SBORROW4(iVar5,iVar4);
          bVar8 = iVar5 - iVar4 < 0;
          bVar7 = iVar5 == iVar4;
          iVar4 = -0x730b57a3;
        }
        else {
          if (iVar4 != -0x4d263938) {
            if (iVar4 == -0x4def9298) {
              return;
            }
            goto joined_r0x0040654c;
          }
          iVar5 = *param_3;
          iVar4 = *param_6;
          bVar9 = SBORROW4(iVar5,iVar4);
          bVar8 = iVar5 - iVar4 < 0;
          bVar7 = iVar5 == iVar4;
          iVar4 = -0x4def9298;
        }
LAB_00406543:
        if (!bVar7 && bVar9 == bVar8) {
          iVar4 = 0x9bea51a;
        }
      }
joined_r0x0040654c:
    } while (iVar4 < -0x35113a9a);
  } while( true );
}



/* ===== Function: FUN_00406610 ===== */

int FUN_00406610(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int local_40;
  int local_3c;
  
  iVar1 = -0x461e9b9a;
  while( true ) {
    while( true ) {
      while (iVar2 = iVar1, 0x1eab9bd9 < iVar2) {
        iVar1 = 0x5f5350af;
        if (iVar2 != 0x5e14f7b6) {
          if (iVar2 == 0x5f5350af) {
            bVar4 = (~(~-DAT_005b8b74 * DAT_005b8b74) | 0xfffffffeU) == 0xffffffff;
            iVar1 = 0x5e14f7b6;
            if (bVar4) {
              iVar1 = -0x7d2c4b23;
            }
            if (9 < DAT_005b8bd4) {
              iVar1 = 0x5e14f7b6;
            }
            if (DAT_005b8bd4 < 10 != bVar4) {
              iVar1 = -0x7d2c4b23;
            }
          }
          else {
            if (iVar2 != 0x1eab9bda) goto LAB_00406790;
            iVar1 = FUN_004067b0();
            param_1 = -((-1 - local_40) + (uint)(iVar1 == 0));
            iVar1 = -0x66a86bc;
          }
        }
      }
      if (-0x66a86bd < iVar2) break;
      if (iVar2 == -0x461e9b9a) {
        local_40 = *(int *)(&DAT_00409090 + (long)(param_2 + -1) * 4);
        iVar1 = -0x5ba713a1;
        if (param_2 == 2) {
          iVar1 = 0x1eab9bda;
        }
      }
      else {
        if (iVar2 == -0x7d2c4b23) {
          return local_3c;
        }
        if (iVar2 != -0x5ba713a1) goto LAB_00406790;
        param_1 = local_40;
        iVar1 = -0x66a86bc;
      }
    }
    if (iVar2 != -0x66a86bc) break;
    uVar3 = (DAT_005b8b74 + -1) * DAT_005b8b74;
    uVar3 = (uVar3 ^ 0xfffffffe) & uVar3;
    iVar2 = 0x5e14f7b6;
    if (DAT_005b8bd4 < 10 != (uVar3 == 0)) {
      iVar2 = 0x5f5350af;
    }
    iVar1 = iVar2;
    if (uVar3 == 0) {
      iVar1 = 0x5f5350af;
    }
    local_3c = param_1;
    if (9 < DAT_005b8bd4) {
      iVar1 = iVar2;
    }
  }
LAB_00406790:
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ===== Function: FUN_004067b0 ===== */

ulong FUN_004067b0(uint param_1)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  
  iVar4 = -0x7e8a6af5;
  if ((~param_1 | 0xfffffffc) != 0xffffffff) {
    iVar4 = 0x14076d62;
  }
  uVar1 = (ulong)(long)(int)param_1 >> 0x3f;
  iVar3 = -0x4aa963ea;
  do {
    while( true ) {
      iVar2 = iVar3;
      uVar5 = uVar1;
      if (-0x23d6b37e < iVar2) break;
      if (iVar2 == -0x7e8a6af5) {
        uVar1 = (ulong)(param_1 != ((int)param_1 / 100) * 100);
        iVar3 = 0x14076d62;
      }
      else {
        if (iVar2 != -0x4aa963ea) goto LAB_00406880;
        iVar3 = -0x23d6b37d;
        if ((int)param_1 % 400 == 0) {
          iVar3 = 0x14076d62;
        }
        uVar1 = 1;
      }
    }
    uVar1 = 0;
    iVar3 = iVar4;
  } while (iVar2 == -0x23d6b37d);
  if (iVar2 == 0x14076d62) {
    return uVar5;
  }
LAB_00406880:
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ===== Function: FUN_00406890 ===== */

/* WARNING: Removing unreachable block (ram,0x004068ca) */
/* WARNING: Removing unreachable block (ram,0x00406ae0) */

void FUN_00406890(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  uVar5 = 0xcd11a8d;
  if (param_1 < param_2) {
    uVar5 = 0x8517c488;
  }
  uVar1 = 0x264bf47d;
LAB_004068eb:
  if ((int)uVar1 < 0x2f6de0cb) goto LAB_00406910;
  if (uVar1 == 0x31c6cf57) {
    iVar2 = FUN_00406b00(param_1,param_2);
    FUN_00406890(param_1,~-iVar2);
    FUN_00406890(iVar2 + 1,param_2);
    uVar1 = 0xc2d09d30;
  }
  else {
    if (uVar1 != 0x668378da) {
      if (uVar1 != 0x2f6de0cb) goto LAB_004068e0;
      return;
    }
    uVar1 = 0xcd11a8d;
  }
  goto LAB_004069b0;
LAB_00406910:
  if (uVar1 == 0x1eff53f1) {
    uVar4 = (DAT_005b8b7c + -1) * DAT_005b8b7c;
    uVar4 = (uVar4 ^ 0xfffffffe) & uVar4;
    uVar3 = 0xc7936d78;
    if (DAT_005b8bc4 < 10 != (uVar4 == 0)) {
      uVar3 = 0x2f6de0cb;
    }
    uVar1 = uVar3;
    if (uVar4 != 0) goto LAB_004068cf;
    uVar1 = 0x2f6de0cb;
    goto LAB_004068cf;
  }
  if (uVar1 != 0x264bf47d) goto LAB_004068e0;
  uVar1 = uVar5;
  if ((int)uVar5 < 0x1eff53f1) {
LAB_004069b0:
    do {
      while (-0x386c9289 < (int)uVar1) {
        if (uVar1 == 0xc7936d78) {
          uVar1 = 0x1eff53f1;
          goto LAB_004068eb;
        }
        if (uVar1 == 0xcd11a8d) {
          uVar4 = (DAT_005b8b7c + -1) * DAT_005b8b7c;
          uVar4 = (uVar4 ^ 0xfffffffe) & uVar4;
          uVar3 = 0xc7936d78;
          if (DAT_005b8bc4 < 10 != (uVar4 == 0)) {
            uVar3 = 0x1eff53f1;
          }
          uVar1 = uVar3;
          if (uVar4 == 0) {
            uVar1 = 0x1eff53f1;
          }
          goto LAB_004068cf;
        }
LAB_004068e0:
        if (0x1eff53f0 < (int)uVar1) goto LAB_004068eb;
      }
      if (uVar1 == 0x8517c488) {
        uVar4 = (~-DAT_005b8b7c * DAT_005b8b7c ^ 0xfffffffeU) & ~-DAT_005b8b7c * DAT_005b8b7c;
        uVar3 = 0x31c6cf57;
        if (DAT_005b8bc4 < 10 != (uVar4 == 0)) {
          uVar3 = 0xc2d09d30;
        }
        uVar1 = uVar3;
        if (uVar4 == 0) {
          uVar1 = 0xc2d09d30;
        }
LAB_004068cf:
        if (9 < DAT_005b8bc4) {
          uVar1 = uVar3;
        }
        goto LAB_004068e0;
      }
      if (uVar1 != 0xc2d09d30) goto LAB_004068e0;
      iVar2 = FUN_00406b00(param_1,param_2);
      FUN_00406890(param_1,iVar2 + -1);
      FUN_00406890(iVar2 + 1,param_2);
      bVar6 = (~((DAT_005b8b7c + -1) * DAT_005b8b7c) | 0xfffffffeU) == 0xffffffff;
      uVar1 = 0x31c6cf57;
      if (bVar6) {
        uVar1 = 0x668378da;
      }
      if (9 < DAT_005b8bc4) {
        uVar1 = 0x31c6cf57;
      }
      if (DAT_005b8bc4 < 10 != bVar6) {
        uVar1 = 0x668378da;
      }
    } while (uVar1 < 0x1eff53f1);
  }
  goto LAB_004068eb;
}



/* ===== Function: FUN_00406b00 ===== */

/* WARNING: Removing unreachable block (ram,0x00406ddf) */
/* WARNING: Removing unreachable block (ram,0x00406c24) */

int FUN_00406b00(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int unaff_EBP;
  uint uVar4;
  int iVar5;
  bool bVar6;
  int local_58;
  char local_51;
  int local_50;
  int local_4c;
  int *local_48;
  
  iVar1 = *(int *)(&DAT_0040b070 + (long)param_2 * 4);
  uVar2 = 0x5cbc1091;
  iVar5 = param_1 + -1;
LAB_00406d00:
  do {
    while( true ) {
      while ((int)uVar2 < 0x4ea9406b) {
        if (uVar2 == 0x48ee334) {
          uVar3 = ~(~-DAT_005b8b70 * DAT_005b8b70) | 0xfffffffe;
          uVar4 = 0xb21af7a6;
          if (DAT_005b8c34 < 10 != (uVar3 == 0xffffffff)) {
            uVar4 = 0x9de103fd;
          }
          uVar2 = uVar4;
          if (uVar3 == 0xffffffff) {
            uVar2 = 0x9de103fd;
          }
          if (DAT_005b8c34 < 10) goto joined_r0x00406e31;
          uVar2 = uVar4;
          goto joined_r0x00406e31;
        }
        if (uVar2 != 0x3b82862d) goto joined_r0x00406e31;
        param_1 = local_50 + 1;
        iVar5 = unaff_EBP;
        uVar2 = 0x5cbc1091;
      }
      if (uVar2 != 0x4ea9406b) break;
      uVar2 = 0x3b82862d;
      unaff_EBP = local_4c;
    }
    if (uVar2 != 0x6e677934) {
      if (uVar2 != 0x5cbc1091) goto joined_r0x00406e31;
      bVar6 = (~((DAT_005b8b70 + -1) * DAT_005b8b70) | 0xfffffffeU) == 0xffffffff;
      uVar2 = 0x6e677934;
      if (bVar6) {
        uVar2 = 0xb178e906;
      }
      if (9 < DAT_005b8c34) {
        uVar2 = 0x6e677934;
      }
      local_58 = iVar5;
      local_50 = param_1;
      if (DAT_005b8c34 < 10 == bVar6) goto joined_r0x00406d69;
      uVar2 = 0xb178e906;
      goto joined_r0x00406d69;
    }
    uVar2 = 0xb178e906;
LAB_00406b6b:
    do {
      while ((int)uVar2 < -0x4de5085a) {
        if (uVar2 == 0x9de103fd) {
          local_4c = local_58 + 1;
          FUN_00406e70(&DAT_0040b070 + (long)local_4c * 4,local_48);
          bVar6 = (~((DAT_005b8b70 + -1) * DAT_005b8b70) | 0xfffffffeU) == 0xffffffff;
          uVar3 = 0x4ea9406b;
          uVar2 = 0xb21af7a6;
          if (bVar6) {
            uVar2 = 0x4ea9406b;
          }
          if (9 < DAT_005b8c34) {
            uVar2 = 0xb21af7a6;
          }
        }
        else {
          if (uVar2 != 0xb178e906) {
            if (uVar2 == 0x9abd7ba2) {
              FUN_00406e70(&DAT_0040b070 + (long)(local_58 + 1) * 4,
                           &DAT_0040b070 + (long)param_2 * 4);
              return local_58 + 1;
            }
            goto joined_r0x00406e31;
          }
          local_51 = local_50 < param_2;
          bVar6 = (~((DAT_005b8b70 + -1) * DAT_005b8b70) | 0xfffffffeU) == 0xffffffff;
          uVar3 = 0xbd949838;
          uVar2 = 0x6e677934;
          if (bVar6) {
            uVar2 = 0xbd949838;
          }
          if (9 < DAT_005b8c34) {
            uVar2 = 0x6e677934;
          }
        }
        if (DAT_005b8c34 < 10 != bVar6) {
          uVar2 = uVar3;
        }
joined_r0x00406e31:
        if (0x48ee333 < (int)uVar2) goto LAB_00406d00;
      }
      if (uVar2 == 0xb21af7a6) {
        FUN_00406e70(&DAT_0040b070 + (long)(local_58 + 1) * 4,local_48);
        uVar2 = 0x9de103fd;
        goto LAB_00406b6b;
      }
      if (uVar2 != 0xbd949838) {
        if (uVar2 != 0xeaaf12db) goto joined_r0x00406e31;
        local_48 = (int *)(&DAT_0040b070 + (long)local_50 * 4);
        uVar2 = 0x3b82862d;
        if (*local_48 <= iVar1) {
          uVar2 = 0x48ee334;
        }
        unaff_EBP = local_58;
        if (0x48ee333 < uVar2) break;
        goto LAB_00406b6b;
      }
      uVar2 = 0x9abd7ba2;
      if (local_51 != '\0') {
        uVar2 = 0xeaaf12db;
      }
joined_r0x00406d69:
    } while ((int)uVar2 < 0x48ee334);
  } while( true );
}



/* ===== Function: FUN_00406e70 ===== */

void FUN_00406e70(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  
  uVar4 = (DAT_005b8be4 + -1) * DAT_005b8be4;
  bVar6 = ((uVar4 ^ 0xfffffffe) & uVar4) == 0;
  bVar2 = DAT_005b8c30 < 10;
  iVar5 = 0x7668f634;
  while (iVar5 == 0x7668f634) {
    iVar3 = -0x1ef8fd46;
    if (bVar6 != bVar2) {
      iVar3 = 0x11ef20df;
    }
    iVar5 = iVar3;
    if (bVar2) {
      iVar5 = 0x11ef20df;
    }
    if (!bVar6) {
      iVar5 = iVar3;
    }
    while (iVar5 < 0x7668f634) {
      while (iVar5 == -0x1ef8fd46) {
        uVar1 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar1;
        iVar5 = 0x11ef20df;
      }
      if (iVar5 != 0x11ef20df) goto LAB_00406f80;
      uVar1 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar1;
      bVar7 = (~(~-DAT_005b8be4 * DAT_005b8be4) | 0xfffffffeU) == 0xffffffff;
      iVar5 = -0x1ef8fd46;
      if (bVar7) {
        iVar5 = 0x7fc8d170;
      }
      if (9 < DAT_005b8c30) {
        iVar5 = -0x1ef8fd46;
      }
      if (DAT_005b8c30 < 10 != bVar7) {
        iVar5 = 0x7fc8d170;
      }
    }
  }
  if (iVar5 == 0x7fc8d170) {
    return;
  }
LAB_00406f80:
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ===== Function: FUN_00406f90 ===== */

/* WARNING: Removing unreachable block (ram,0x00407142) */

int * FUN_00406f90(int *param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  int *unaff_R14;
  uint uVar5;
  bool bVar6;
  
  uVar5 = 0x301c43fd;
  if (param_1 != (int *)0x0) {
    uVar5 = 0x57948b3e;
  }
  uVar1 = 0xc17bed5a;
LAB_004070e0:
  do {
    if ((int)uVar1 < -0x3be1b166) {
      if (uVar1 == 0x8a3a9910) {
        uVar2 = FUN_00406f90(*(undefined8 *)(param_1 + 4),param_2);
        *(undefined8 *)(param_1 + 4) = uVar2;
        bVar6 = (~(~-DAT_005b8be0 * DAT_005b8be0) | 0xfffffffeU) == 0xffffffff;
        uVar1 = 0xe4305dbf;
        if (bVar6) {
          uVar1 = 0xc41e4e9a;
        }
        if (9 < DAT_005b8c3c) {
          uVar1 = 0xe4305dbf;
        }
        if (DAT_005b8c3c < 10 != bVar6) {
          uVar1 = 0xc41e4e9a;
        }
      }
      else {
        uVar3 = uVar5;
        if (uVar1 == 0xc17bed5a) goto joined_r0x0040712a;
      }
    }
    else {
      if (uVar1 == 0xc41e4e9a) goto LAB_00407132;
      if (uVar1 == 0xe4305dbf) {
        uVar2 = FUN_00406f90(*(undefined8 *)(param_1 + 4),param_2);
        *(undefined8 *)(param_1 + 4) = uVar2;
        uVar1 = 0x8a3a9910;
      }
      else if (uVar1 == 0xf7fa0eb3) {
        return unaff_R14;
      }
    }
joined_r0x00407198:
    do {
      if ((int)uVar1 < 0x19d8d2e9) goto LAB_004070e0;
      while (0x57948b3d < (int)uVar1) {
        if (uVar1 == 0x57948b3e) {
          uVar3 = 0x603e0889;
          if (param_2 < *param_1) {
            uVar3 = 0x5a0e3389;
          }
joined_r0x0040712a:
          uVar1 = uVar3;
          if (uVar1 < 0x19d8d2e9) goto LAB_004070e0;
        }
        else {
          if (uVar1 != 0x5a0e3389) {
            if (uVar1 == 0x603e0889) {
              uVar3 = (DAT_005b8be0 + -1) * DAT_005b8be0;
              uVar3 = (uVar3 ^ 0xfffffffe) & uVar3;
              uVar4 = 0xe4305dbf;
              if (DAT_005b8c3c < 10 != (uVar3 == 0)) {
                uVar4 = 0x8a3a9910;
              }
              uVar1 = uVar4;
              if (uVar3 == 0) {
                uVar1 = 0x8a3a9910;
              }
              if (9 < DAT_005b8c3c) {
                uVar1 = uVar4;
              }
            }
            goto joined_r0x00407198;
          }
          uVar2 = FUN_00406f90(*(undefined8 *)(param_1 + 2),param_2);
          *(undefined8 *)(param_1 + 2) = uVar2;
LAB_00407132:
          uVar1 = 0x19d8d2e9;
        }
      }
      if (uVar1 == 0x19d8d2e9) {
        uVar1 = 0xf7fa0eb3;
        unaff_R14 = param_1;
        goto LAB_004070e0;
      }
    } while (uVar1 != 0x301c43fd);
    unaff_R14 = (int *)FUN_004078a0(param_2);
    uVar1 = 0xf7fa0eb3;
  } while( true );
}



/* ===== Function: FUN_004071c0 ===== */

void FUN_004071c0(uint *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar3 = 0x1313b5cd;
  if (param_1 != (uint *)0x0) {
    iVar3 = -0xbbcc8af;
  }
  iVar1 = -0x2b3eb0e;
  while( true ) {
    while( true ) {
      while (iVar4 = iVar1, iVar4 < 0x1313b5cd) {
        iVar1 = iVar3;
        if (iVar4 != -0x2b3eb0e) {
          if (iVar4 == -0x2e28e68e) {
            iVar1 = 0x5889f8c7;
          }
          else {
            if (iVar4 != -0xbbcc8af) goto LAB_00407310;
            FUN_004071c0(*(undefined8 *)(param_1 + 2));
            printf("%d ",(ulong)*param_1);
            FUN_004071c0(*(undefined8 *)(param_1 + 4));
            iVar1 = 0x1313b5cd;
          }
        }
      }
      if (iVar4 != 0x1313b5cd) break;
      bVar5 = (~((DAT_005b8bd8 + -1) * DAT_005b8bd8) | 0xfffffffeU) == 0xffffffff;
      iVar1 = -0x2e28e68e;
      if (bVar5) {
        iVar1 = 0x5889f8c7;
      }
      if (9 < DAT_005b8c38) {
        iVar1 = -0x2e28e68e;
      }
      if (DAT_005b8c38 < 10 != bVar5) {
        iVar1 = 0x5889f8c7;
      }
    }
    if (iVar4 != 0x5889f8c7) break;
    uVar2 = ~((DAT_005b8bd8 + -1) * DAT_005b8bd8) | 0xfffffffe;
    iVar4 = -0x2e28e68e;
    if (DAT_005b8c38 < 10 != (uVar2 == 0xffffffff)) {
      iVar4 = 0x1e2e9ae5;
    }
    iVar1 = iVar4;
    if (uVar2 == 0xffffffff) {
      iVar1 = 0x1e2e9ae5;
    }
    if (9 < DAT_005b8c38) {
      iVar1 = iVar4;
    }
  }
  if (iVar4 == 0x1e2e9ae5) {
    return;
  }
LAB_00407310:
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ===== Function: FUN_00407320 ===== */

void FUN_00407320(uint *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0x1872bb2d;
  if (param_1 != (uint *)0x0) {
    iVar4 = -0x4a4cf6f7;
  }
  iVar1 = 0x7f2502bb;
LAB_00407356:
  while( true ) {
    iVar3 = iVar1;
    if (0x1694a6fc < iVar3) goto LAB_004073c0;
    if (iVar3 != -0x4a4cf6f7) break;
    printf("%d ",(ulong)*param_1);
    FUN_00407320(*(undefined8 *)(param_1 + 2));
    FUN_00407320(*(undefined8 *)(param_1 + 4));
    iVar1 = 0x1872bb2d;
  }
  if (iVar3 == -0xe0843fa) {
    uVar2 = ~((DAT_005b8bdc + -1) * DAT_005b8bdc) | 0xfffffffe;
    iVar3 = 0x1694a6fd;
    if (DAT_005b8c2c < 10 != (uVar2 == 0xffffffff)) {
      iVar3 = -0x75187255;
    }
    iVar1 = iVar3;
    if (uVar2 == 0xffffffff) {
      iVar1 = -0x75187255;
    }
    goto LAB_00407350;
  }
  if (iVar3 == -0x75187255) {
    return;
  }
LAB_00407470:
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
LAB_004073c0:
  iVar1 = iVar4;
  if (iVar3 != 0x7f2502bb) {
    if (iVar3 == 0x1694a6fd) {
      iVar1 = -0xe0843fa;
    }
    else {
      if (iVar3 != 0x1872bb2d) goto LAB_00407470;
      uVar2 = ~((DAT_005b8bdc + -1) * DAT_005b8bdc) | 0xfffffffe;
      iVar3 = 0x1694a6fd;
      if (DAT_005b8c2c < 10 != (uVar2 == 0xffffffff)) {
        iVar3 = -0xe0843fa;
      }
      iVar1 = iVar3;
      if (uVar2 == 0xffffffff) {
        iVar1 = -0xe0843fa;
      }
LAB_00407350:
      if (9 < DAT_005b8c2c) {
        iVar1 = iVar3;
      }
    }
  }
  goto LAB_00407356;
}



/* ===== Function: FUN_00407480 ===== */

/* WARNING: Removing unreachable block (ram,0x00407639) */
/* WARNING: Removing unreachable block (ram,0x0040753e) */

void FUN_00407480(uint *param_1)

{
  int iVar1;
  undefined8 in_RAX;
  uint uVar2;
  int iVar3;
  undefined8 uStack_38;
  
  uVar2 = (DAT_005b8c00 + -1) * DAT_005b8c00;
  uStack_38._7_1_ = (char)((ulong)in_RAX >> 0x38);
  uStack_38 = (ulong)CONCAT12(uStack_38._7_1_,
                              CONCAT11(DAT_005b8c20 < 10,((uVar2 ^ 0xfffffffe) & uVar2) == 0)) <<
              0x28;
  iVar1 = -0x126c3a69;
LAB_00407610:
  do {
    if (-0x126c3a6a < iVar1) {
      if (iVar1 != -0x126c3a69) {
        if (iVar1 != -0xe34678c) goto LAB_004074f0;
        iVar1 = 0x7e688bcd;
        if (uStack_38._7_1_ == '\0') goto joined_r0x00407703;
        iVar1 = 0x77acc083;
        goto joined_r0x00407703;
      }
      iVar1 = -0x46ecb9;
      if (uStack_38._6_1_ != '\0') {
        iVar1 = 0x5918cc59;
      }
      if (uStack_38._5_1_ == '\0') {
        iVar1 = -0x46ecb9;
      }
      if (uStack_38._5_1_ == uStack_38._6_1_) goto joined_r0x00407703;
      iVar1 = 0x5918cc59;
      goto joined_r0x00407703;
    }
    if (iVar1 == -0x456e2274) {
      FUN_00407480(*(undefined8 *)(param_1 + 2));
      FUN_00407480(*(undefined8 *)(param_1 + 4));
      printf("%d ",(ulong)*param_1);
      uVar2 = (DAT_005b8c00 + -1) * DAT_005b8c00;
      uVar2 = (uVar2 ^ 0xfffffffe) & uVar2;
      iVar3 = -0x225b2f4;
      if (DAT_005b8c20 < 10 != (uVar2 == 0)) {
        iVar3 = -0x385d6716;
      }
      iVar1 = iVar3;
      if (uVar2 != 0) goto LAB_004074dc;
      iVar1 = -0x385d6716;
      goto LAB_004074dc;
    }
    if (iVar1 != -0x385d6716) goto LAB_004074f0;
    iVar1 = 0x7e688bcd;
    do {
      while (iVar1 < 0x5918cc59) {
        if (iVar1 == -0x225b2f4) {
          FUN_00407480(*(undefined8 *)(param_1 + 2));
          FUN_00407480(*(undefined8 *)(param_1 + 4));
          printf("%d ",(ulong)*param_1);
          iVar1 = -0x456e2274;
          goto LAB_00407610;
        }
        if (iVar1 == -0x46ecb9) {
          iVar1 = 0x5918cc59;
        }
        else {
LAB_004074f0:
          if (iVar1 < -0x225b2f4) goto LAB_00407610;
        }
      }
      if (iVar1 != 0x5918cc59) {
        if (iVar1 == 0x77acc083) {
          uVar2 = (DAT_005b8c00 + -1) * DAT_005b8c00;
          uVar2 = (uVar2 ^ 0xfffffffe) & uVar2;
          iVar3 = -0x225b2f4;
          if (DAT_005b8c20 < 10 != (uVar2 == 0)) {
            iVar3 = -0x456e2274;
          }
          iVar1 = iVar3;
          if (uVar2 == 0) {
            iVar1 = -0x456e2274;
          }
LAB_004074dc:
          if (9 < DAT_005b8c20) {
            iVar1 = iVar3;
          }
        }
        else if (iVar1 == 0x7e688bcd) {
          return;
        }
        goto LAB_004074f0;
      }
      uStack_38 = CONCAT17(param_1 != (uint *)0x0,(undefined7)uStack_38);
      uVar2 = ~((DAT_005b8c00 + -1) * DAT_005b8c00) | 0xfffffffe;
      iVar3 = -0x46ecb9;
      if (DAT_005b8c20 < 10 != (uVar2 == 0xffffffff)) {
        iVar3 = -0xe34678c;
      }
      iVar1 = iVar3;
      if (uVar2 == 0xffffffff) {
        iVar1 = -0xe34678c;
      }
      if (9 < DAT_005b8c20) {
        iVar1 = iVar3;
      }
joined_r0x00407703:
    } while (-0x225b2f5 < iVar1);
  } while( true );
}



/* ===== Function: FUN_00407720 ===== */

/* WARNING: Removing unreachable block (ram,0x004077ce) */

void FUN_00407720(void *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = 0x3f377e35;
  if (param_1 != (void *)0x0) {
    uVar3 = 0x54a93257;
  }
  uVar1 = 0x82af8cfd;
LAB_00407870:
  do {
    bVar4 = uVar1 != 0x82af8cfd;
    uVar1 = uVar3;
    if (bVar4) {
LAB_00407890:
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    while (0x3a63a862 < uVar1) {
      while( true ) {
        while (0x54a93256 < uVar1) {
          if (uVar1 == 0x54a93257) {
            uVar2 = (DAT_005b8b90 + -1) * DAT_005b8b90;
            uVar2 = (uVar2 ^ 0xfffffffe) & uVar2;
            uVar1 = 0x4765515d;
            if (uVar2 == 0) {
              uVar1 = 0x3a63a863;
            }
            if (9 < DAT_005b8c28) {
              uVar1 = 0x4765515d;
            }
            if (DAT_005b8c28 < 10 != (uVar2 == 0)) {
              uVar1 = 0x3a63a863;
            }
            goto joined_r0x0040780d;
          }
          if (uVar1 != 0x624d32b5) goto LAB_00407890;
          uVar1 = 0x3f377e35;
        }
        if (uVar1 != 0x3a63a863) break;
        FUN_00407720(*(undefined8 *)((long)param_1 + 8));
        FUN_00407720(*(undefined8 *)((long)param_1 + 0x10));
        free(param_1);
        uVar2 = (DAT_005b8b90 + -1) * DAT_005b8b90;
        uVar2 = (uVar2 ^ 0xfffffffe) & uVar2;
        uVar1 = 0x4765515d;
        if (uVar2 == 0) {
          uVar1 = 0x624d32b5;
        }
        if (9 < DAT_005b8c28) {
          uVar1 = 0x4765515d;
        }
        if (DAT_005b8c28 < 10 != (uVar2 == 0)) {
          uVar1 = 0x624d32b5;
        }
joined_r0x0040780d:
        if (uVar1 < 0x3a63a863) goto LAB_00407870;
      }
      if (uVar1 != 0x4765515d) {
        if (uVar1 == 0x3f377e35) {
          return;
        }
        goto LAB_00407890;
      }
      FUN_00407720(*(undefined8 *)((long)param_1 + 8));
      FUN_00407720(*(undefined8 *)((long)param_1 + 0x10));
      free(param_1);
      uVar1 = 0x3a63a863;
    }
  } while( true );
}



/* ===== Function: FUN_004078a0 ===== */

undefined4 * FUN_004078a0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  puVar2 = (undefined4 *)malloc(0x18);
  uVar4 = (~-DAT_005b8b98 * DAT_005b8b98 ^ 0xfffffffeU) & ~-DAT_005b8b98 * DAT_005b8b98;
  iVar3 = 0x3f9fef70;
  if (DAT_005b8c24 < 10 != (uVar4 == 0)) {
    iVar3 = -0x71e0d4aa;
  }
  iVar1 = -0x71e0d4aa;
  if (uVar4 != 0) {
    iVar1 = iVar3;
  }
  if (9 < DAT_005b8c24) {
    iVar1 = iVar3;
  }
  iVar3 = 0x1ca7f1d9;
  do {
    while (iVar5 = iVar3, iVar5 < -0x4c00e9d4) {
      iVar3 = iVar1;
      if (iVar5 != -0x6d3c95ac) {
        if (iVar5 == -0x71e0d4aa) {
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
LAB_00407990:
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
    }
    if (iVar5 == -0x4c00e9d4) {
      *puVar2 = param_1;
      *(undefined8 *)(puVar2 + 2) = 0;
      *(undefined8 *)(puVar2 + 4) = 0;
      return puVar2;
    }
    if (iVar5 != 0x1ca7f1d9) {
      if (iVar5 == 0x3f9fef70) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      goto LAB_00407990;
    }
    iVar3 = -0x6d3c95ac;
    if (puVar2 != (undefined4 *)0x0) {
      iVar3 = -0x4c00e9d4;
    }
  } while( true );
}



/* ===== Function: FUN_004079a0 ===== */

int FUN_004079a0(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int in_R9D;
  int iVar10;
  int unaff_R12D;
  int unaff_R13D;
  int iVar11;
  int unaff_R15D;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_3c;
  int local_38;
  int local_34;
  
  uVar3 = (DAT_005b8b94 + -1) * DAT_005b8b94;
  uVar3 = (uVar3 ^ 0xfffffffe) & uVar3;
  iVar10 = 0x6e655150;
  if (uVar3 == 0) {
    iVar10 = 0x6edd2f35;
  }
  iVar5 = 0x6e655150;
  if (uVar3 == 0) {
    iVar5 = -0x64632b6b;
  }
  if (9 < DAT_005b8c18) {
    iVar5 = 0x6e655150;
    iVar10 = 0x6e655150;
  }
  bVar1 = DAT_005b8c18 < 10 != (uVar3 == 0);
  if (bVar1) {
    iVar10 = 0x6edd2f35;
    iVar5 = -0x64632b6b;
  }
  local_44 = 0x6e655150;
  iVar8 = param_1 + -1;
  iVar7 = 0;
  iVar4 = -0x1c7e0371;
  iVar6 = -0x64632b6b;
  iVar9 = 0x6edd2f35;
  iVar2 = CONCAT31((int3)(uVar3 >> 8),bVar1);
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar11 = iVar4, iVar4 = iVar11, iVar11 < -0x1c7e0371) {
            if (iVar11 < -0x5703d0d7) {
              if (iVar11 == -0x6856b99c) {
                unaff_R12D = 1;
                iVar4 = -0x1ed9bd13;
                iVar2 = local_50;
                in_R9D = local_48;
                unaff_R13D = local_4c;
              }
              else if (iVar11 == -0x64632b6b) {
                local_38 = local_50 + 1;
                iVar4 = iVar10;
              }
              else if (iVar11 == -0x61e81665) {
                iVar6 = local_50 + -1;
                iVar4 = 0x43832d95;
                iVar9 = local_4c;
              }
            }
            else if (iVar11 == -0x5703d0d7) {
              iVar4 = (local_48 + -0x6ddeb511) - local_4c;
              local_50 = -(-((iVar4 + 0x6ddeb511) - (iVar4 + 0x6ddeb511 >> 0x1f) >> 1) - local_4c);
              local_3c = *(int *)(&DAT_004ce570 + (long)local_50 * 4);
              iVar4 = 0x58d14174;
              if (local_3c == param_2) {
                iVar4 = -0x6856b99c;
              }
            }
            else {
              iVar4 = iVar5;
              if (((iVar11 != -0x23da8cdb) && (iVar4 = iVar11, iVar11 == -0x1ed9bd13)) &&
                 (iVar8 = in_R9D, iVar7 = unaff_R13D, iVar4 = -0x1ad36f74, local_44 = iVar2,
                 unaff_R15D = iVar2, unaff_R12D == 0)) {
                iVar4 = -0x1c7e0371;
              }
            }
          }
          if (iVar11 < 0x58d14174) break;
          if (iVar11 == 0x58d14174) {
            iVar4 = -0x61e81665;
            if (local_3c < param_2) {
              iVar4 = -0x23da8cdb;
            }
          }
          else if (iVar11 == 0x6e655150) {
            iVar4 = -0x64632b6b;
          }
          else if (iVar11 == 0x6edd2f35) {
            iVar4 = 0x43832d95;
            iVar6 = local_48;
            iVar9 = local_38;
          }
        }
        if (iVar11 < 0x58d27ac) break;
        if (iVar11 == 0x58d27ac) {
          iVar4 = -0x1ad36f74;
          unaff_R15D = -1;
        }
        else if (iVar11 == 0x43832d95) {
          unaff_R12D = 0;
          iVar4 = -0x1ed9bd13;
          iVar2 = local_34;
          in_R9D = iVar6;
          unaff_R13D = iVar9;
        }
      }
      if (iVar11 != -0x1c7e0371) break;
      local_34 = local_44;
      iVar4 = 0x58d27ac;
      local_4c = iVar7;
      local_48 = iVar8;
      if (iVar7 <= iVar8) {
        iVar4 = -0x5703d0d7;
      }
    }
  } while (iVar11 != -0x1ad36f74);
  return unaff_R15D;
}



/* ===== Function: FUN_00407c90 ===== */

int FUN_00407c90(long param_1,long param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  bool bVar25;
  int local_84;
  char local_7f;
  char local_7e;
  char local_7d;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  long local_68;
  int local_4c;
  int local_48;
  int local_44;
  
  uVar16 = ~-DAT_005b8b8c * DAT_005b8b8c;
  uVar9 = (DAT_005b8b8c + -1) * DAT_005b8b8c;
  uVar22 = ~uVar9 | 0xfffffffe;
  iVar21 = -0x73f0dc57;
  if (((uVar16 ^ 0xfffffffe) & uVar16) == 0) {
    iVar21 = 0x33e9f1cb;
  }
  bVar1 = DAT_005b8c1c < 10;
  if (9 < DAT_005b8c1c) {
    iVar21 = -0x73f0dc57;
  }
  bVar2 = (uVar22 == 0xffffffff) != bVar1;
  iVar11 = 0x4baa72cb;
  if (bVar2) {
    iVar11 = 0x28ecc114;
  }
  iVar12 = -0x6525dac1;
  if (bVar2) {
    iVar12 = 0x73c7ee9f;
  }
  iVar20 = -0x61be898b;
  if (bVar2) {
    iVar20 = -0x7e068766;
  }
  iVar19 = -0x65ed5800;
  if (bVar2) {
    iVar19 = -0x6a7ba63f;
  }
  iVar17 = -0x6a7ba63f;
  iVar4 = 0x73c7ee9f;
  iVar5 = 0x28ecc114;
  iVar6 = -0x7e068766;
  if (uVar22 != 0xffffffff) {
    iVar17 = iVar19;
    iVar4 = iVar12;
    iVar5 = iVar11;
    iVar6 = iVar20;
  }
  if (9 < DAT_005b8c1c) {
    iVar17 = iVar19;
  }
  iVar19 = -0x65ed5800;
  if ((~uVar16 | 0xfffffffe) == 0xffffffff) {
    iVar19 = 0x121749e;
  }
  if (9 < DAT_005b8c1c) {
    iVar19 = -0x65ed5800;
    iVar6 = iVar20;
  }
  iVar20 = -0x61be898b;
  if (((uVar9 ^ 0xfffffffe) & uVar9) == 0) {
    iVar20 = 0x4bc2870c;
  }
  if (9 < DAT_005b8c1c) {
    iVar4 = iVar12;
  }
  if (9 < DAT_005b8c1c) {
    iVar20 = -0x61be898b;
  }
  uVar23 = (uVar16 ^ 0xfffffffe) & uVar16;
  iVar12 = 0x4baa72cb;
  if (bVar1 != (uVar23 == 0)) {
    iVar12 = -0x570fe06;
  }
  iVar13 = -0x570fe06;
  if (uVar23 != 0) {
    iVar13 = iVar12;
  }
  if (9 < DAT_005b8c1c) {
    iVar13 = iVar12;
    iVar5 = iVar11;
  }
  if ((uVar23 == 0) != bVar1) {
    iVar21 = 0x33e9f1cb;
  }
  bVar25 = uVar22 != 0xffffffff;
  bVar2 = 9 < DAT_005b8c1c;
  if ((((uVar9 ^ 0xfffffffe) & uVar9) == 0) == bVar2) {
    iVar20 = 0x4bc2870c;
  }
  if (((~uVar16 | 0xfffffffe) == 0xffffffff) != bVar1) {
    iVar19 = 0x121749e;
  }
  iVar11 = -0x52c4064c;
  if ((bVar25 || bVar2) && bVar2 == bVar25) {
    iVar11 = -0x6525dac1;
  }
  iVar12 = -0x6257d01b;
  if ((bVar25 || bVar2) && bVar2 == bVar25) {
    iVar12 = -0x73f0dc57;
  }
  local_78 = 0x7fffffff;
  local_7c = 0;
  iVar15 = iVar19;
  iVar18 = 0x121749e;
  iVar10 = -1;
  iVar7 = local_48;
  iVar8 = local_44;
  iVar24 = -0x7fc01ce7;
LAB_00407ea0:
  do {
    while (iVar14 = iVar24, local_44 = iVar8, local_48 = iVar7, iVar7 = local_48, iVar8 = local_44,
          iVar24 = iVar14, iVar14 < -0x52c4064c) {
      if (iVar14 < -0x6938b71e) {
        if (iVar14 < -0x73f0dc57) {
          if (iVar14 == -0x7fc01ce7) {
            local_84 = local_7c;
            local_74 = local_78;
            local_70 = iVar10;
            iVar24 = iVar5;
          }
          else if (iVar14 == -0x7e068766) {
            iVar24 = -0x715dbeff;
            iVar14 = 0x440e780a;
            cVar3 = local_7d;
LAB_00407e92:
            iVar15 = local_74;
            iVar18 = local_70;
            if (cVar3 != '\0') {
              iVar24 = iVar14;
            }
          }
        }
        else if (iVar14 == -0x73f0dc57) {
          iVar24 = -0x6257d01b;
        }
        else {
          iVar7 = iVar18;
          iVar8 = iVar15;
          iVar24 = iVar12;
          if ((iVar14 != -0x715dbeff) &&
             (iVar7 = local_48, iVar8 = local_44, iVar24 = iVar14, iVar14 == -0x6a7ba63f)) {
            iVar15 = local_6c;
            iVar18 = local_84;
            iVar24 = -0x715dbeff;
          }
        }
      }
      else if (iVar14 < -0x6525dac1) {
        iVar24 = iVar4;
        if ((iVar14 != -0x6938b71e) && (iVar24 = iVar14, iVar14 == -0x65ed5800)) {
          iVar24 = 0x121749e;
        }
      }
      else if (iVar14 == -0x6525dac1) {
        iVar24 = 0x73c7ee9f;
      }
      else if (iVar14 == -0x6257d01b) {
        local_4c = local_84 + 1;
        iVar24 = iVar21;
      }
      else if (iVar14 == -0x61be898b) {
        iVar24 = 0x4bc2870c;
      }
    }
    if (iVar14 < 0x33e9f1cb) {
      if (iVar14 < -0x570fe06) {
        if (iVar14 == -0x52c4064c) {
          iVar24 = -0x4392cfb7;
          iVar14 = -0x715dbeff;
          cVar3 = local_7e;
          goto LAB_00407e92;
        }
        if (iVar14 == -0x4392cfb7) {
          iVar24 = iVar20;
        }
      }
      else if (iVar14 == -0x570fe06) {
        iVar24 = 0x43808f5b;
        if (local_7f != '\0') {
          iVar24 = -0x6938b71e;
        }
      }
      else {
        iVar24 = iVar17;
        if ((iVar14 != 0x121749e) && (iVar24 = iVar14, iVar14 == 0x28ecc114)) {
          local_7f = local_84 < param_3;
          iVar24 = iVar13;
        }
      }
      goto LAB_00407ea0;
    }
    if (iVar14 < 0x4baa72cb) {
      if (iVar14 == 0x33e9f1cb) {
        local_7c = local_4c;
        local_78 = local_44;
        iVar10 = local_48;
        iVar24 = -0x7fc01ce7;
      }
      else {
        iVar24 = iVar19;
        if ((iVar14 != 0x440e780a) && (iVar24 = iVar14, iVar14 == 0x43808f5b)) {
          return local_70;
        }
      }
    }
    else if (iVar14 == 0x4baa72cb) {
      iVar24 = 0x28ecc114;
    }
    else if (iVar14 == 0x4bc2870c) {
      local_6c = *(int *)(param_1 + local_68 * 4);
      local_7d = local_6c < local_74;
      iVar24 = iVar6;
    }
    else if (iVar14 == 0x73c7ee9f) {
      local_68 = (long)local_84;
      local_7e = *(int *)(param_2 + local_68 * 4) != 0;
      iVar24 = iVar11;
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



/* ===== Function: puts ===== */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

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


