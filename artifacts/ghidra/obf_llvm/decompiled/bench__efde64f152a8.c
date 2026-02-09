/* Ghidra decompiler output (pseudo-C) */


/* ===== Function: _DT_INIT ===== */

void _DT_INIT(void)

{
  if (PTR___gmon_start___00409ff8 != (undefined *)0x0) {
    (*(code *)PTR___gmon_start___00409ff8)();
  }
  return;
}



/* ===== Function: FUN_00401020 ===== */

void FUN_00401020(void)

{
  (*(code *)PTR_0040a010)();
  return;
}



/* ===== Function: free ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0040a018)();
  return;
}



/* ===== Function: puts ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0040a020)();
  return iVar1;
}



/* ===== Function: printf ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0040a028)();
  return iVar1;
}



/* ===== Function: putc ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putc_0040a030)();
  return iVar1;
}



/* ===== Function: malloc ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0040a038)();
  return pvVar1;
}



/* ===== Function: __isoc99_scanf ===== */

void __isoc99_scanf(void)

{
  (*(code *)PTR___isoc99_scanf_0040a040)();
  return;
}



/* ===== Function: exit ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*_DAT_0040a048)();
  return;
}



/* ===== Function: entry ===== */

void processEntry entry(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_00409ff0)
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
  if (DAT_0040a068 == '\0') {
    FUN_004010e0();
    DAT_0040a068 = 1;
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

/* WARNING: Removing unreachable block (ram,0x004017e6) */
/* WARNING: Removing unreachable block (ram,0x00401868) */
/* WARNING: Removing unreachable block (ram,0x00401cb0) */
/* WARNING: Removing unreachable block (ram,0x00401eec) */
/* WARNING: Removing unreachable block (ram,0x00403e6a) */
/* WARNING: Removing unreachable block (ram,0x0040363e) */
/* WARNING: Removing unreachable block (ram,0x004047bc) */
/* WARNING: Removing unreachable block (ram,0x00404553) */
/* WARNING: Removing unreachable block (ram,0x00404413) */
/* WARNING: Removing unreachable block (ram,0x00401c98) */
/* WARNING: Removing unreachable block (ram,0x00401f1d) */
/* WARNING: Removing unreachable block (ram,0x0040467e) */
/* WARNING: Removing unreachable block (ram,0x00403765) */
/* WARNING: Removing unreachable block (ram,0x004015ea) */
/* WARNING: Removing unreachable block (ram,0x0040482d) */
/* WARNING: Removing unreachable block (ram,0x00403f5c) */
/* WARNING: Removing unreachable block (ram,0x00403b27) */
/* WARNING: Removing unreachable block (ram,0x00403d0f) */
/* WARNING: Removing unreachable block (ram,0x0040436c) */
/* WARNING: Removing unreachable block (ram,0x00403452) */
/* WARNING: Removing unreachable block (ram,0x00404818) */
/* WARNING: Removing unreachable block (ram,0x00401684) */
/* WARNING: Removing unreachable block (ram,0x00401f73) */
/* WARNING: Removing unreachable block (ram,0x00402887) */
/* WARNING: Removing unreachable block (ram,0x0040291f) */
/* WARNING: Removing unreachable block (ram,0x0040222a) */
/* WARNING: Removing unreachable block (ram,0x004025c3) */
/* WARNING: Removing unreachable block (ram,0x0040339e) */
/* WARNING: Removing unreachable block (ram,0x0040258a) */
/* WARNING: Removing unreachable block (ram,0x004019cb) */
/* WARNING: Removing unreachable block (ram,0x00401620) */
/* WARNING: Removing unreachable block (ram,0x0040174d) */
/* WARNING: Removing unreachable block (ram,0x00403681) */
/* WARNING: Removing unreachable block (ram,0x0040282c) */
/* WARNING: Removing unreachable block (ram,0x00403036) */
/* WARNING: Removing unreachable block (ram,0x00404880) */
/* WARNING: Removing unreachable block (ram,0x00402632) */
/* WARNING: Removing unreachable block (ram,0x00402277) */
/* WARNING: Removing unreachable block (ram,0x00402765) */
/* WARNING: Removing unreachable block (ram,0x004030f1) */
/* WARNING: Removing unreachable block (ram,0x0040301d) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00401190(void)

{
  uint ****ppppuVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *****pppppuVar7;
  uint uVar8;
  int iVar9;
  uint unaff_EBP;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  char *__s;
  uint ****in_R8;
  uint ****unaff_R12;
  uint ****ppppuVar15;
  uint ****unaff_R13;
  ulong uVar16;
  uint ****unaff_R14;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  uint local_73c;
  int local_738;
  char local_733;
  char local_732;
  char local_731;
  undefined4 *****local_730;
  int local_728;
  uint local_724;
  int local_720;
  uint local_71c;
  int local_718;
  uint local_714;
  uint local_710;
  uint local_70c;
  uint ****local_708;
  uint local_700;
  uint local_6fc;
  uint ****local_6f8;
  undefined4 *****local_6f0;
  int local_6e8;
  char local_6e2;
  char local_6e1;
  undefined4 ****local_6e0;
  uint ***local_6d8;
  uint ***local_6d0;
  uint local_6c4;
  undefined4 *****local_6c0;
  uint local_6b8;
  uint local_6b4;
  uint local_6b0;
  uint local_6ac;
  uint ****local_6a8;
  uint local_6a0;
  int local_69c;
  uint local_698;
  uint local_694;
  undefined8 local_690;
  int local_684;
  int *local_680;
  uint ****local_678 [100];
  uint ****local_358 [101];
  
  local_680 = &local_684;
  uVar8 = 0xb54d678a;
joined_r0x004011f9:
  do {
    if ((int)uVar8 < -0x1d8bc156) goto LAB_0040125c;
    while (uVar6 = 0x66666667, (int)uVar8 < 0x4032b48a) {
      if (0x1201cc56 < (int)uVar8) {
        if (0x26d5416e < (int)uVar8) {
          if (uVar8 == 0x38e47d16) {
            return 0;
          }
          if (uVar8 == 0x26d5416f) {
            uVar5 = ~((DAT_005b7b88 + -1) * DAT_005b7b88) | 0xfffffffe;
            bVar17 = DAT_005b7be8 < 10 == (uVar5 == 0xffffffff);
            uVar6 = 0xc760f52c;
            uVar11 = 0xcc1d122a;
LAB_00401200:
            if (!bVar17) {
              uVar6 = uVar11;
            }
            uVar8 = uVar6;
            if (uVar5 == 0xffffffff) {
              uVar8 = uVar11;
            }
            if (9 < DAT_005b7be8) {
              uVar8 = uVar6;
            }
          }
          goto joined_r0x004011f9;
        }
        if (uVar8 == 0x1201cc57) {
          bVar17 = local_728 == 10;
          uVar6 = 0x7abc456a;
          goto LAB_00403ae4;
        }
        if (uVar8 != 0x23a88f76) goto joined_r0x004011f9;
        local_730 = (undefined4 *****)&local_714;
        local_6f8 = (uint ****)&local_724;
        pppppuVar7 = (undefined4 *****)&local_718;
        in_R8 = (uint ****)&local_71c;
        local_358[0] = (uint ****)&local_70c;
        local_678[0] = (uint ****)&local_738;
        local_708 = in_R8;
        local_6f0 = pppppuVar7;
        local_69c = __isoc99_scanf("%d %d %d %d %d %d");
        iVar2 = 0x30e9173e;
        local_6a8 = (uint ****)CONCAT44(local_6a8._4_4_,(int)pppppuVar7);
        goto LAB_0040447b;
      }
      if ((int)uVar8 < -0x9a69495) {
        if (uVar8 != 0xe2743eaa) {
          if (uVar8 == 0xf3efd7d7) {
            FUN_00405320();
            bVar17 = (~((DAT_005b7b88 + -1) * DAT_005b7b88) | 0xfffffffeU) == 0xffffffff;
            uVar6 = 0x5d2da583;
            uVar8 = 0x1688ea2;
            if (bVar17) {
              uVar8 = 0x5d2da583;
            }
            uVar5 = 0x1688ea2;
LAB_00401cc9:
            if (9 < DAT_005b7be8) {
              uVar8 = uVar5;
            }
            if ((bool)(DAT_005b7be8 < 10 ^ bVar17)) {
              uVar8 = uVar6;
            }
          }
          goto joined_r0x004011f9;
        }
        local_6f0 = &local_6f8;
        uVar3 = __isoc99_scanf(&DAT_00408004);
        local_6e0 = (undefined4 ****)CONCAT44(local_6e0._4_4_,uVar3);
        uVar8 = 0x6ac4a68c;
        goto LAB_00403460;
      }
      if (uVar8 == 0xf6596b6b) {
        bVar19 = SBORROW4(local_728,2);
        bVar17 = local_728 + -2 < 0;
        uVar8 = 0xe2743eaa;
        uVar6 = 0x4032b48a;
        goto LAB_00401cdf;
      }
      if (uVar8 == 0xfd2f96c3) {
        FUN_00404ee0();
        uVar8 = 0xc65e53b7;
        goto LAB_0040125c;
      }
      if (uVar8 != 0x1688ea2) goto joined_r0x004011f9;
      FUN_00405320();
      uVar8 = 0xf3efd7d7;
    }
    if (0x5d2da582 < (int)uVar8) {
      if ((int)uVar8 < 0x71d061ea) {
        if (uVar8 != 0x5d2da583) {
          if (uVar8 == 0x600ec799) {
            bVar19 = SBORROW4(local_728,5);
            bVar17 = local_728 + -5 < 0;
            uVar8 = 0x23a88f76;
            uVar6 = 0xbc8bfc61;
            goto LAB_00401cdf;
          }
          goto joined_r0x004011f9;
        }
      }
      else if (uVar8 == 0x71d061ea) {
        FUN_00404ce0();
      }
      else {
        if (uVar8 == 0x7abc456a) {
          local_6d0 = (uint ***)&local_738;
          local_70c = __isoc99_scanf("%d");
          local_6b8 = uVar8;
          iVar2 = 0x1799c72a;
          local_6a8 = (uint ****)CONCAT44(local_6a8._4_4_,local_6b8);
          local_690 = (uint ****)CONCAT44(local_690._4_4_,local_6b8);
          local_694 = local_6b8;
LAB_00401feb:
          if (iVar2 < 0x4cd70a01) {
            if (iVar2 < 0x21358d27) {
              if (iVar2 < 0x1799c72a) {
                if (iVar2 < 0x7eb0dfa) {
                  if (iVar2 == 0x2f9a55b) goto LAB_004024e5;
                  if (iVar2 == 0x565a01c) {
                    uVar8 = (DAT_005b7bb0 + -1) * DAT_005b7bb0;
                    uVar8 = (uVar8 ^ 0xfffffffe) & uVar8;
                    bVar17 = uVar8 == 0;
                    iVar12 = 0x2999d1fc;
                    iVar2 = 0x6328bde9;
                    if (uVar8 == 0) {
                      iVar2 = 0x2999d1fc;
                    }
                    bVar20 = SBORROW4(DAT_005b7bf4,10);
                    bVar18 = DAT_005b7bf4 + -10 < 0;
                    bVar19 = DAT_005b7bf4 < 10;
                    iVar13 = 0x6328bde9;
                    goto LAB_0040323b;
                  }
                }
                else {
                  if (iVar2 == 0x7eb0dfa) {
                    bVar17 = local_733 == '\0';
                    iVar2 = -0x35ece685;
                    iVar12 = 0x1d9efc3c;
                    goto LAB_00402955;
                  }
                  if (iVar2 == 0x132d93bd) {
                    FUN_004079b0(local_678,local_358,local_718);
                    iVar2 = -0x63be5927;
                    goto LAB_00402980;
                  }
                  if (iVar2 == 0x14266496) {
                    printf("INF");
                    iVar2 = 0x7dbad937;
                    goto LAB_00401feb;
                  }
                }
              }
              else if (iVar2 < 0x1d9efc3c) {
                if (iVar2 == 0x1799c72a) {
                  bVar17 = local_70c == 1;
                  iVar2 = -0x216b763;
                  iVar12 = -0x4e862112;
                  goto LAB_00402955;
                }
                if (iVar2 == 0x1a6ed0f4) {
                  *(uint *)local_708 = local_6c4;
                  iVar2 = 0x271302a7;
                  goto LAB_00401feb;
                }
                if (iVar2 == 0x1c89b3c3) {
                  *(undefined4 *)((long)local_678 + (long)(int)local_6a0 * 4) = 0;
                  iVar2 = -0x1ee6aa7;
                  local_694 = 0;
                  goto LAB_00402980;
                }
              }
              else {
                if (iVar2 == 0x1d9efc3c) {
                  *(undefined4 *)local_6d8 = 0xffffffff;
                  iVar2 = -0x35ece685;
                  goto LAB_00402980;
                }
                if (iVar2 == 0x1e84f126) {
                  putc(0x20,stdout);
                  iVar2 = -0x77392431;
                  goto LAB_00402980;
                }
                if (iVar2 == 0x20bb69aa) {
LAB_004024e5:
                  putc(10,stdout);
                  goto LAB_00402965;
                }
              }
            }
            else if (iVar2 < 0x30e89984) {
              if (iVar2 < 0x271302a7) {
                if (iVar2 == 0x21358d27) {
                  uVar8 = (DAT_005b7bb0 + -1) * DAT_005b7bb0;
                  uVar8 = (uVar8 ^ 0xfffffffe) & uVar8;
                  bVar17 = uVar8 == 0;
                  iVar12 = 0x57a66269;
                  iVar2 = 0x6fd6fd00;
                  if (uVar8 == 0) {
                    iVar2 = 0x57a66269;
                  }
                  bVar20 = SBORROW4(DAT_005b7bf4,10);
                  bVar18 = DAT_005b7bf4 + -10 < 0;
                  bVar19 = DAT_005b7bf4 < 10;
                  iVar13 = 0x6fd6fd00;
                  goto LAB_0040323b;
                }
                if (iVar2 == 0x2375e122) {
                  unaff_R14 = (uint ****)(ulong)(local_73c + 1);
                  iVar2 = -0x3d8736cb;
                  goto LAB_00402980;
                }
                if (iVar2 == 0x257996d8) {
                  iVar2 = -0x1ee6aa7;
                  local_694 = local_698;
                  goto LAB_00402980;
                }
              }
              else {
                if (iVar2 == 0x271302a7) {
                  iVar2 = 0x7554e725;
                  goto LAB_00401feb;
                }
                if (iVar2 == 0x2999d1fc) {
                  putc(10,stdout);
                  bVar17 = (~(~-DAT_005b7bb0 * DAT_005b7bb0) | 0xfffffffeU) == 0xffffffff;
                  iVar12 = -0x3f5214ee;
                  iVar2 = 0x6328bde9;
                  if (bVar17) {
                    iVar2 = -0x3f5214ee;
                  }
                  bVar20 = SBORROW4(DAT_005b7bf4,10);
                  bVar18 = DAT_005b7bf4 + -10 < 0;
                  bVar19 = DAT_005b7bf4 < 10;
                  iVar13 = 0x6328bde9;
                  goto LAB_0040316c;
                }
                if (iVar2 == 0x2b0eed83) {
                  *(undefined4 *)((long)local_358 + (long)(int)local_724 * 4) = 1;
                  iVar2 = -0x33f407e1;
                  goto LAB_00402980;
                }
              }
            }
            else if (iVar2 < 0x3a1f4f60) {
              if (iVar2 == 0x30e89984) {
                bVar17 = local_731 == '\0';
                iVar2 = -0x165f069a;
                iVar12 = -0x64204e77;
                goto LAB_00402955;
              }
              if (iVar2 == 0x31362060) {
                iVar2 = -0x36e25130;
                goto LAB_00402980;
              }
              if (iVar2 == 0x31cd68a3) {
                __isoc99_scanf("%d",&DAT_00590a70 + (long)local_6e8 * 4 + (long)(int)local_73c * 800
                              );
                iVar2 = -0x5ce87b46;
                goto LAB_00402980;
              }
            }
            else {
              if (iVar2 == 0x3a1f4f60) {
                iVar2 = -0x3ca1ee47;
                goto LAB_00402980;
              }
              if (iVar2 == 0x4b1d0306) {
                iVar2 = -0x6e93cb44;
                goto LAB_00402980;
              }
              if (iVar2 == 0x4b44761e) {
                bVar17 = (~((DAT_005b7bb0 + -1) * DAT_005b7bb0) | 0xfffffffeU) == 0xffffffff;
                iVar12 = -0x77392431;
                iVar2 = 0x1e84f126;
                if (bVar17) {
                  iVar2 = -0x77392431;
                }
                bVar20 = SBORROW4(DAT_005b7bf4,10);
                bVar18 = DAT_005b7bf4 + -10 < 0;
                bVar19 = DAT_005b7bf4 < 10;
                iVar13 = 0x1e84f126;
                goto LAB_0040316c;
              }
            }
          }
          else {
            if (iVar2 < 0x6d771fe5) {
              if (iVar2 < 0x5aac0cfc) {
                if (iVar2 < 0x57a66269) {
                  if (iVar2 == 0x4cd70a01) {
                    uVar8 = ~((DAT_005b7bb0 + -1) * DAT_005b7bb0) | 0xfffffffe;
                    bVar17 = DAT_005b7bf4 < 10 == (uVar8 == 0xffffffff);
                    iVar12 = 0x7e053f78;
                    iVar13 = 0x7674317d;
                    goto LAB_00401f78;
                  }
                  if (iVar2 == 0x4d8d12bb) {
                    local_700 = (uint)unaff_R12;
                    bVar19 = SBORROW4(local_700,local_738);
                    bVar17 = (int)(local_700 - local_738) < 0;
                    iVar2 = -0x39038e21;
                    iVar12 = -0x3e8f454a;
                    goto LAB_00403293;
                  }
                }
                else {
                  if (iVar2 == 0x57a66269) {
                    local_698 = local_710 + 1;
                    uVar8 = (DAT_005b7bb0 + -1) * DAT_005b7bb0;
                    uVar8 = (uVar8 ^ 0xfffffffe) & uVar8;
                    bVar17 = uVar8 == 0;
                    iVar12 = 0x257996d8;
                    iVar2 = 0x6fd6fd00;
                    if (uVar8 == 0) {
                      iVar2 = 0x257996d8;
                    }
                    bVar20 = SBORROW4(DAT_005b7bf4,10);
                    bVar18 = DAT_005b7bf4 + -10 < 0;
                    bVar19 = DAT_005b7bf4 < 10;
                    iVar13 = 0x6fd6fd00;
                    goto LAB_0040316c;
                  }
                  if (iVar2 == 0x59aedaa3) {
                    bVar17 = *(int *)((long)local_358 + (long)local_6f0 * 4) == 0;
                    iVar2 = 0x65896269;
                    iVar12 = 0x7554e725;
                    goto LAB_00402955;
                  }
                  if (iVar2 == 0x59d37e90) {
                    bVar17 = local_732 == '\0';
                    iVar2 = -0x1aec46b8;
                    iVar12 = 0x20bb69aa;
                    goto LAB_00402955;
                  }
                }
                goto LAB_00401fe0;
              }
              if (iVar2 < 0x684839a7) {
                if (iVar2 == 0x5aac0cfc) {
                  *(undefined4 *)((long)local_678 + (long)(int)local_6ac * 4) = 0x7fffffff;
                  *(undefined4 *)((long)local_358 + (long)(int)local_6ac * 4) = 0;
                  unaff_EBP = local_6ac + 1;
                  iVar2 = -0x3a0b0b48;
                  goto LAB_00402980;
                }
                if (iVar2 != 0x6328bde9) {
                  if (iVar2 == 0x65896269) {
                    local_69c = *(int *)((long)local_678 + (long)local_6f8 * 4);
                    bVar17 = local_69c == 0x7fffffff;
                    iVar2 = 0x7554e725;
                    iVar12 = -0x64821c0b;
                    goto LAB_00402955;
                  }
                  goto LAB_00401fe0;
                }
                putc(10,stdout);
                iVar2 = 0x2999d1fc;
              }
              else {
                if (iVar2 != 0x684839a7) {
                  if (iVar2 == 0x6916b04d) {
                    iVar2 = -0x673f3349;
                    goto LAB_00402980;
                  }
                  if (iVar2 == 0x6a87153a) {
                    bVar17 = (~((DAT_005b7bb0 + -1) * DAT_005b7bb0) | 0xfffffffeU) == 0xffffffff;
                    iVar12 = 0x4cd70a01;
                    iVar2 = 0x7e053f78;
                    if (bVar17) {
                      iVar2 = 0x4cd70a01;
                    }
                    bVar20 = SBORROW4(DAT_005b7bf4,10);
                    bVar18 = DAT_005b7bf4 + -10 < 0;
                    bVar19 = DAT_005b7bf4 < 10;
                    iVar13 = 0x7e053f78;
                    goto LAB_0040316c;
                  }
                  goto LAB_00401fe0;
                }
                iVar2 = 0x7f7a4110;
              }
              goto LAB_00401feb;
            }
            if (iVar2 < 0x77da7a15) {
              if (0x7301ff55 < iVar2) {
                if (iVar2 == 0x7301ff56) {
                  local_71c = local_6a0;
                  local_732 = (int)local_6a0 < 0;
                  uVar8 = (~-DAT_005b7bb0 * DAT_005b7bb0 ^ 0xfffffffeU) &
                          ~-DAT_005b7bb0 * DAT_005b7bb0;
                  bVar17 = uVar8 == 0;
                  iVar12 = 0x59d37e90;
                  iVar2 = 0x7da4efe5;
                  if (uVar8 == 0) {
                    iVar2 = 0x59d37e90;
                  }
                  bVar20 = SBORROW4(DAT_005b7bf4,10);
                  bVar18 = DAT_005b7bf4 + -10 < 0;
                  bVar19 = DAT_005b7bf4 < 10;
                  iVar13 = 0x7da4efe5;
                  goto LAB_0040316c;
                }
                if (iVar2 != 0x7554e725) {
                  if (iVar2 == 0x7674317d) {
                    iVar2 = -0x3d8736cb;
                    unaff_R14 = (uint ****)0x0;
                    goto LAB_00402980;
                  }
                  goto LAB_00401fe0;
                }
                unaff_R12 = (uint ****)(ulong)(local_700 + 1);
                iVar2 = 0x4d8d12bb;
                goto LAB_00401feb;
              }
              if (iVar2 == 0x6d771fe5) {
                bVar17 = local_6e2 == '\0';
                iVar2 = 0x6a87153a;
                iVar12 = -0x23eeb5cf;
                goto LAB_00402955;
              }
              if (iVar2 == 0x6fd6fd00) {
                iVar2 = 0x57a66269;
                goto LAB_00401feb;
              }
              if (iVar2 == 0x702a66d8) {
                local_6b0 = local_6fc + 1;
                bVar19 = SBORROW4(local_6b0,local_738);
                bVar17 = (int)(local_6b0 - local_738) < 0;
                iVar2 = -0x6e93cb44;
                iVar12 = 0x4b44761e;
                goto LAB_00403293;
              }
            }
            else if (iVar2 < 0x7dbad937) {
              if (iVar2 == 0x77da7a15) {
                local_6e1 = local_6e8 < local_738;
                uVar8 = ~((DAT_005b7bb0 + -1) * DAT_005b7bb0) | 0xfffffffe;
                bVar17 = DAT_005b7bf4 < 10 == (uVar8 == 0xffffffff);
                iVar12 = -0x34523eaf;
                iVar13 = -0x489331db;
                goto LAB_00401f78;
              }
              if (iVar2 == 0x792d2425) {
                local_6e2 = 199 < local_738 - 1U;
                bVar17 = (~((DAT_005b7bb0 + -1) * DAT_005b7bb0) | 0xfffffffeU) == 0xffffffff;
                iVar12 = 0x6d771fe5;
                iVar2 = -0x67098fd4;
                if (bVar17) {
                  iVar2 = 0x6d771fe5;
                }
                bVar20 = SBORROW4(DAT_005b7bf4,10);
                bVar18 = DAT_005b7bf4 + -10 < 0;
                bVar19 = DAT_005b7bf4 < 10;
                iVar13 = -0x67098fd4;
                goto LAB_0040316c;
              }
              if (iVar2 == 0x7da4efe5) {
                iVar2 = 0x7301ff56;
                goto LAB_00401feb;
              }
            }
            else {
              if (iVar2 == 0x7dbad937) {
                printf("INF");
                bVar17 = (~((DAT_005b7bb0 + -1) * DAT_005b7bb0) | 0xfffffffeU) == 0xffffffff;
                iVar12 = -0x666fb28a;
                iVar2 = 0x14266496;
                if (bVar17) {
                  iVar2 = -0x666fb28a;
                }
                bVar20 = SBORROW4(DAT_005b7bf4,10);
                bVar18 = DAT_005b7bf4 + -10 < 0;
                bVar19 = DAT_005b7bf4 < 10;
                iVar13 = 0x14266496;
                goto LAB_0040316c;
              }
              if (iVar2 == 0x7e053f78) {
                iVar2 = 0x4cd70a01;
                goto LAB_00401feb;
              }
              if (iVar2 == 0x7f7a4110) {
                uVar8 = (DAT_005b7bb0 + -1) * DAT_005b7bb0;
                uVar8 = (uVar8 ^ 0xfffffffe) & uVar8;
                bVar17 = DAT_005b7bf4 < 10 == (uVar8 == 0);
                iVar12 = 0x684839a7;
                iVar13 = -0x207c0a56;
                goto LAB_004033d1;
              }
            }
          }
LAB_00401fe0:
          if (iVar2 < 0x2f9a55b) {
LAB_00402980:
            if (iVar2 < -0x3ca1ee47) {
              if (iVar2 < -0x5ed88a9c) {
                if (iVar2 < -0x67138858) {
                  if (-0x7033d0fd < iVar2) {
                    if (iVar2 == -0x7033d0fc) {
                      printf("%d",(ulong)local_6b4);
                      goto LAB_004030e1;
                    }
                    if (iVar2 != -0x6e93cb44) {
                      if (iVar2 == -0x673f3349) {
                        uVar8 = (DAT_005b7bb0 + -1) * DAT_005b7bb0;
                        uVar8 = (uVar8 ^ 0xfffffffe) & uVar8;
                        bVar17 = uVar8 == 0;
                        iVar12 = -0x3fce7f8c;
                        iVar2 = 0x6916b04d;
                        if (uVar8 == 0) {
                          iVar2 = -0x3fce7f8c;
                        }
                        bVar20 = SBORROW4(DAT_005b7bf4,10);
                        bVar18 = DAT_005b7bf4 + -10 < 0;
                        bVar19 = DAT_005b7bf4 < 10;
                        iVar13 = 0x6916b04d;
                        goto LAB_0040323b;
                      }
                      goto LAB_00401fe0;
                    }
                    iVar2 = -0x39ba64f;
                    local_6b8 = local_6b0;
                    goto LAB_00402980;
                  }
                  if (iVar2 == -0x7d19f99f) {
                    iVar2 = 0x4d8d12bb;
                    unaff_R12 = (uint ****)0x0;
                    goto LAB_00401feb;
                  }
                  if (iVar2 != -0x77392431) goto LAB_00401fe0;
                  putc(0x20,stdout);
                  uVar8 = ~(~-DAT_005b7bb0 * DAT_005b7bb0) | 0xfffffffe;
                  bVar17 = DAT_005b7bf4 < 10 == (uVar8 == 0xffffffff);
                  iVar12 = 0x1e84f126;
                  iVar13 = 0x4b1d0306;
                }
                else {
                  if (iVar2 < -0x64821c0b) {
                    if (iVar2 == -0x67138858) {
                      iVar2 = -0x5566713a;
                      unaff_R13 = (uint ****)0x0;
                      goto LAB_00402980;
                    }
                    if (iVar2 == -0x67098fd4) {
                      iVar2 = 0x792d2425;
                      goto LAB_00401feb;
                    }
                    if (iVar2 == -0x666fb28a) {
LAB_004030e1:
                      iVar2 = 0x702a66d8;
                      goto LAB_00401feb;
                    }
                    goto LAB_00401fe0;
                  }
                  if (iVar2 == -0x64821c0b) {
                    local_6c4 = local_69c + local_714;
                    local_708 = (uint ****)((long)local_678 + (long)local_6f0 * 4);
                    bVar19 = SBORROW4(local_6c4,*(int *)local_708);
                    bVar17 = (int)(local_6c4 - *(int *)local_708) < 0;
                    iVar2 = 0x271302a7;
                    iVar12 = 0x1a6ed0f4;
                    goto LAB_00403293;
                  }
                  if (iVar2 == -0x64204e77) {
                    iVar2 = -0x2c6a5f99;
                    local_690 = (uint ****)CONCAT44(local_690._4_4_,0xb);
                    goto LAB_00402980;
                  }
                  if (iVar2 != -0x63be5927) goto LAB_00401fe0;
                  local_724 = FUN_004079b0(local_678,local_358,local_718);
                  local_731 = local_724 == 0xffffffff;
                  uVar8 = ~((DAT_005b7bb0 + -1) * DAT_005b7bb0) | 0xfffffffe;
                  bVar17 = DAT_005b7bf4 < 10 == (uVar8 == 0xffffffff);
                  iVar12 = 0x132d93bd;
                  iVar13 = 0x30e89984;
                }
              }
              else {
                if (-0x489331dc < iVar2) {
                  if (-0x3f5214ef < iVar2) {
                    if (iVar2 != -0x3f5214ee) {
                      if (iVar2 == -0x3e8f454a) {
                        local_6f0 = (undefined4 *****)(long)(int)local_700;
                        local_714 = *(uint *)(&DAT_00590a70 +
                                             (long)local_6f0 * 4 + (long)local_6f8 * 800);
                        iVar2 = ((int)local_714 >> 0x1f & 0x1ba60c82U) + 0x59aedaa3;
                        goto joined_r0x004033e6;
                      }
                      if (iVar2 == -0x3d8736cb) {
                        local_73c = (uint)unaff_R14;
                        bVar19 = SBORROW4(local_73c,local_738);
                        bVar17 = (int)(local_73c - local_738) < 0;
                        iVar2 = -0x46e49319;
                        iVar12 = -0x67138858;
                        goto LAB_00403293;
                      }
                      goto LAB_00401fe0;
                    }
LAB_00402965:
                    iVar2 = -0x12715db1;
                    goto LAB_00402980;
                  }
                  if (iVar2 == -0x489331db) {
                    bVar17 = local_6e1 == '\0';
                    iVar2 = 0x2375e122;
                    iVar12 = -0x3197a347;
                  }
                  else {
                    if (iVar2 != -0x46e49319) {
                      if (iVar2 != -0x3fce7f8c) goto LAB_00401fe0;
                      iVar2 = -0x39ba64f;
                      local_6b8 = 0;
                      goto LAB_00402980;
                    }
                    local_6e0 = (undefined4 ****)&local_6a0;
                    iVar2 = __isoc99_scanf("%d");
                    bVar17 = iVar2 == 1;
                    iVar2 = -0x26b66121;
                    iVar12 = 0x2f9a55b;
                  }
LAB_00402955:
                  if (!bVar17) {
                    iVar2 = iVar12;
                  }
                  goto joined_r0x004033e6;
                }
                if (-0x4f523ca6 < iVar2) {
                  if (iVar2 == -0x4f523ca5) {
                    local_6c0 = local_678;
                    local_730 = local_358;
                    iVar2 = -0x3a0b0b48;
                    unaff_EBP = 0;
                  }
                  else {
                    if (iVar2 != -0x4e862112) {
                      if (iVar2 == -0x4d15a62a) {
                        uVar8 = (DAT_005b7bb0 + -1) * DAT_005b7bb0;
                        uVar8 = (uVar8 ^ 0xfffffffe) & uVar8;
                        bVar17 = DAT_005b7bf4 < 10 == (uVar8 == 0);
                        iVar12 = 0x14266496;
                        iVar13 = 0x7dbad937;
                        goto LAB_004033d1;
                      }
                      goto LAB_00401fe0;
                    }
                    iVar2 = -0x1628ad49;
                    local_6a8 = (uint ****)((ulong)local_6a8 & 0xffffffff00000000);
                  }
                  goto LAB_00402980;
                }
                if (iVar2 == -0x5ed88a9c) goto LAB_00402bb4;
                if (iVar2 != -0x5ce87b46) {
                  if (iVar2 == -0x5566713a) {
                    local_6e8 = (int)unaff_R13;
                    uVar8 = (DAT_005b7bb0 + -1) * DAT_005b7bb0;
                    uVar8 = (uVar8 ^ 0xfffffffe) & uVar8;
                    bVar17 = uVar8 == 0;
                    iVar12 = 0x77da7a15;
                    iVar2 = -0x34523eaf;
                    if (uVar8 == 0) {
                      iVar2 = 0x77da7a15;
                    }
                    bVar20 = SBORROW4(DAT_005b7bf4,10);
                    bVar18 = DAT_005b7bf4 + -10 < 0;
                    bVar19 = DAT_005b7bf4 < 10;
                    iVar13 = -0x34523eaf;
                    goto LAB_0040323b;
                  }
                  goto LAB_00401fe0;
                }
                local_6d8 = (uint ***)
                            (&DAT_00590a70 + (long)local_6e8 * 4 + (long)(int)local_73c * 800);
                iVar2 = __isoc99_scanf("%d",local_6d8);
                local_733 = iVar2 != 1;
                uVar8 = ~((DAT_005b7bb0 + -1) * DAT_005b7bb0) | 0xfffffffe;
                bVar17 = DAT_005b7bf4 < 10 == (uVar8 == 0xffffffff);
                iVar12 = 0x31cd68a3;
                iVar13 = 0x7eb0dfa;
              }
            }
            else if (iVar2 < -0x23eeb5cf) {
              if (iVar2 < -0x34523eaf) {
                if (iVar2 < -0x39038e21) {
                  if (iVar2 == -0x3ca1ee47) {
                    uVar8 = (DAT_005b7bb0 + -1) * DAT_005b7bb0;
                    uVar8 = (uVar8 ^ 0xfffffffe) & uVar8;
                    bVar17 = DAT_005b7bf4 < 10 == (uVar8 == 0);
                    iVar12 = 0x3a1f4f60;
                    iVar13 = -0x5ed88a9c;
LAB_004033d1:
                    if (!bVar17) {
                      iVar12 = iVar13;
                    }
                    iVar2 = iVar12;
                    if (uVar8 == 0) {
                      iVar2 = iVar13;
                    }
                    if (9 < DAT_005b7bf4) {
                      iVar2 = iVar12;
                    }
                    goto joined_r0x004033e6;
                  }
                  if (iVar2 == -0x3a0b0b48) {
                    bVar19 = SBORROW4(unaff_EBP,local_738);
                    bVar17 = (int)(unaff_EBP - local_738) < 0;
                    iVar2 = 0x1c89b3c3;
                    iVar12 = 0x5aac0cfc;
                    local_6ac = unaff_EBP;
                    goto LAB_00403293;
                  }
                  goto LAB_00401fe0;
                }
                if (iVar2 == -0x39038e21) {
                  iVar2 = -0x2c6a5f99;
                  local_690 = (uint ****)((ulong)local_690._4_4_ << 0x20);
                }
                else {
                  if (iVar2 == -0x36e25130) {
                    bVar17 = (~((DAT_005b7bb0 + -1) * DAT_005b7bb0) | 0xfffffffeU) == 0xffffffff;
                    iVar12 = -0x673f3349;
                    iVar2 = 0x6916b04d;
                    if (bVar17) {
                      iVar2 = -0x673f3349;
                    }
                    bVar20 = SBORROW4(DAT_005b7bf4,10);
                    bVar18 = DAT_005b7bf4 + -10 < 0;
                    bVar19 = DAT_005b7bf4 < 10;
                    iVar13 = 0x6916b04d;
LAB_0040316c:
                    if (bVar20 == bVar18) {
                      iVar2 = iVar13;
                    }
                    if ((bool)(bVar19 ^ bVar17)) {
                      iVar2 = iVar12;
                    }
                    goto joined_r0x004033e6;
                  }
                  if (iVar2 != -0x35ece685) goto LAB_00401fe0;
                  unaff_R13 = (uint ****)(ulong)(local_6e8 + 1);
                  iVar2 = -0x5566713a;
                }
                goto LAB_00402980;
              }
              if (-0x2f27c1ce < iVar2) {
                if (iVar2 == -0x2f27c1cd) {
                  uVar8 = ~((DAT_005b7bb0 + -1) * DAT_005b7bb0) | 0xfffffffe;
                  bVar17 = DAT_005b7bf4 < 10 == (uVar8 == 0xffffffff);
                  iVar12 = 0x132d93bd;
                  iVar13 = -0x63be5927;
                  goto LAB_00401f78;
                }
                if (iVar2 == -0x2c6a5f99) {
                  bVar17 = (int)local_690 == 0;
                  iVar2 = -0x36e25130;
                  iVar12 = 0x21358d27;
                  goto LAB_0040330c;
                }
                if (iVar2 == -0x26b66121) {
                  uVar8 = (~-DAT_005b7bb0 * DAT_005b7bb0 ^ 0xfffffffeU) &
                          ~-DAT_005b7bb0 * DAT_005b7bb0;
                  bVar17 = DAT_005b7bf4 < 10 == (uVar8 == 0);
                  iVar12 = 0x7da4efe5;
                  iVar13 = 0x7301ff56;
                  goto LAB_004033d1;
                }
                goto LAB_00401fe0;
              }
              if (iVar2 == -0x34523eaf) {
                iVar2 = 0x77da7a15;
                goto LAB_00401feb;
              }
              if (iVar2 != -0x33f407e1) {
                if (iVar2 == -0x3197a347) {
                  bVar17 = (~((DAT_005b7bb0 + -1) * DAT_005b7bb0) | 0xfffffffeU) == 0xffffffff;
                  iVar12 = -0x5ce87b46;
                  iVar2 = 0x31cd68a3;
                  if (bVar17) {
                    iVar2 = -0x5ce87b46;
                  }
                  bVar20 = SBORROW4(DAT_005b7bf4,10);
                  bVar18 = DAT_005b7bf4 + -10 < 0;
                  bVar19 = DAT_005b7bf4 < 10;
                  iVar13 = 0x31cd68a3;
                  goto LAB_0040316c;
                }
                goto LAB_00401fe0;
              }
              local_6f8 = (uint ****)(long)(int)local_724;
              *(undefined4 *)((long)local_358 + (long)local_6f8 * 4) = 1;
              uVar8 = ~((DAT_005b7bb0 + -1) * DAT_005b7bb0) | 0xfffffffe;
              bVar17 = DAT_005b7bf4 < 10 == (uVar8 == 0xffffffff);
              iVar12 = 0x2b0eed83;
              iVar13 = -0x7d19f99f;
            }
            else {
              if (iVar2 < -0x165f069a) {
                if (iVar2 < -0x1aec46b8) {
                  if (iVar2 == -0x207c0a56) goto LAB_0040435b;
                  if (iVar2 != -0x23eeb5cf) goto LAB_00401fe0;
                  putc(10,stdout);
LAB_00402bb4:
                  iVar2 = -0x1628ad49;
                  local_6a8 = (uint ****)CONCAT44(local_6a8._4_4_,1);
                  goto LAB_00402980;
                }
                if (iVar2 == -0x1aec46b8) {
                  iVar2 = -0x4f523ca5;
                  if (local_738 <= (int)local_71c) {
                    iVar2 = 0x20bb69aa;
                  }
                }
                else {
                  if (iVar2 != -0x1a6c9974) goto LAB_00401fe0;
                  local_6b4 = *(uint *)((long)local_678 + (long)(int)local_6fc * 4);
                  bVar17 = local_6b4 == 0x7fffffff;
                  iVar2 = -0x7033d0fc;
                  iVar12 = -0x4d15a62a;
LAB_0040330c:
                  if (bVar17) {
                    iVar2 = iVar12;
                  }
                }
                goto joined_r0x004033e6;
              }
              if (-0x39ba650 < iVar2) {
                if (iVar2 == -0x39ba64f) {
                  local_6fc = local_6b8;
                  bVar19 = SBORROW4(local_6b8,local_738);
                  bVar17 = (int)(local_6b8 - local_738) < 0;
                  iVar2 = 0x565a01c;
                  iVar12 = -0x1a6c9974;
                }
                else {
                  if (iVar2 == -0x216b763) {
                    uVar8 = (DAT_005b7bb0 + -1) * DAT_005b7bb0;
                    uVar8 = (uVar8 ^ 0xfffffffe) & uVar8;
                    bVar17 = uVar8 == 0;
                    iVar12 = 0x792d2425;
                    iVar2 = -0x67098fd4;
                    if (uVar8 == 0) {
                      iVar2 = 0x792d2425;
                    }
                    bVar20 = SBORROW4(DAT_005b7bf4,10);
                    bVar18 = DAT_005b7bf4 + -10 < 0;
                    bVar19 = DAT_005b7bf4 < 10;
                    iVar13 = -0x67098fd4;
                    goto LAB_0040323b;
                  }
                  if (iVar2 != -0x1ee6aa7) goto LAB_00401fe0;
                  local_710 = local_694;
                  local_718 = local_738;
                  bVar19 = SBORROW4(local_694,local_738);
                  bVar17 = (int)(local_694 - local_738) < 0;
                  iVar2 = 0x31362060;
                  iVar12 = -0x2f27c1cd;
                }
LAB_00403293:
                if (bVar19 != bVar17) {
                  iVar2 = iVar12;
                }
                goto joined_r0x004033e6;
              }
              if (iVar2 == -0x165f069a) {
                uVar8 = ~((DAT_005b7bb0 + -1) * DAT_005b7bb0) | 0xfffffffe;
                bVar17 = DAT_005b7bf4 < 10 == (uVar8 == 0xffffffff);
                iVar12 = 0x2b0eed83;
                iVar13 = -0x33f407e1;
                goto LAB_00401f78;
              }
              if (iVar2 == -0x1628ad49) {
                local_720 = (int)local_6a8;
                bVar17 = (~((DAT_005b7bb0 + -1) * DAT_005b7bb0) | 0xfffffffeU) == 0xffffffff;
                iVar12 = 0x7f7a4110;
                iVar2 = 0x684839a7;
                if (bVar17) {
                  iVar2 = 0x7f7a4110;
                }
                bVar20 = SBORROW4(DAT_005b7bf4,10);
                bVar18 = DAT_005b7bf4 + -10 < 0;
                bVar19 = DAT_005b7bf4 < 10;
                iVar13 = 0x684839a7;
LAB_0040323b:
                if (bVar20 == bVar18) {
                  iVar2 = iVar13;
                }
                if ((bool)(bVar19 ^ bVar17)) {
                  iVar2 = iVar12;
                }
                goto joined_r0x004033e6;
              }
              if (iVar2 != -0x12715db1) goto LAB_00401fe0;
              uVar8 = ~((DAT_005b7bb0 + -1) * DAT_005b7bb0) | 0xfffffffe;
              bVar17 = DAT_005b7bf4 < 10 == (uVar8 == 0xffffffff);
              iVar12 = 0x3a1f4f60;
              iVar13 = -0x3ca1ee47;
            }
LAB_00401f78:
            if (!bVar17) {
              iVar12 = iVar13;
            }
            iVar2 = iVar12;
            if (uVar8 == 0xffffffff) {
              iVar2 = iVar13;
            }
            if (9 < DAT_005b7bf4) {
              iVar2 = iVar12;
            }
joined_r0x004033e6:
            if (0x2f9a55a < iVar2) goto LAB_00401feb;
            goto LAB_00402980;
          }
          goto LAB_00401feb;
        }
        if (uVar8 != 0x7ea3eac2) goto joined_r0x004011f9;
      }
LAB_0040435b:
      uVar8 = 0xcc0955fa;
LAB_0040125c:
      while( true ) {
        while (-0x4ab29877 < (int)uVar8) {
          if ((int)uVar8 < -0x389f0ad4) {
            if (-0x4608db75 < (int)uVar8) {
              if (uVar8 == 0xb9f7248c) goto LAB_0040435b;
              if (uVar8 == 0xbc8bfc61) {
                uVar5 = ~((DAT_005b7b88 + -1) * DAT_005b7b88) | 0xfffffffe;
                bVar17 = DAT_005b7be8 < 10 == (uVar5 == 0xffffffff);
                uVar6 = 0x1688ea2;
                uVar11 = 0xf3efd7d7;
              }
              else {
                if (uVar8 != 0xc65e53b7) goto joined_r0x004011f9;
                FUN_00404ee0();
                uVar5 = ~(~-DAT_005b7b88 * DAT_005b7b88) | 0xfffffffe;
                bVar17 = DAT_005b7be8 < 10 == (uVar5 == 0xffffffff);
                uVar6 = 0xfd2f96c3;
                uVar11 = 0x7ea3eac2;
              }
              goto LAB_00401200;
            }
            if (uVar8 == 0xb54d678a) goto LAB_0040435b;
            if (uVar8 != 0xb709e886) goto joined_r0x004011f9;
            bVar19 = SBORROW4(local_728,3);
            bVar17 = local_728 + -3 < 0;
            uVar8 = 0x8b3badca;
            uVar6 = 0xf6596b6b;
            goto LAB_00401cdf;
          }
          if (-0x33e2edd7 < (int)uVar8) {
            if (uVar8 == 0xcc1d122a) {
              FUN_00405e00();
              bVar17 = (~(~-DAT_005b7b88 * DAT_005b7b88) | 0xfffffffeU) == 0xffffffff;
              uVar8 = 0xc760f52c;
              if (bVar17) {
                uVar8 = 0xb9f7248c;
              }
              if (9 < DAT_005b7be8) {
                uVar8 = 0xc760f52c;
              }
              if (DAT_005b7be8 < 10 != bVar17) {
                uVar8 = 0xb9f7248c;
              }
              goto joined_r0x004011f9;
            }
            if (uVar8 == 0xd66b0faf) {
              bVar19 = SBORROW4(local_728,6);
              bVar17 = local_728 + -6 < 0;
              uVar8 = 0xa3e2772a;
              uVar6 = 0xb709e886;
              goto LAB_00401cdf;
            }
            if (uVar8 != 0xe1dc4586) goto joined_r0x004011f9;
            bVar17 = (~((DAT_005b7b88 + -1) * DAT_005b7b88) | 0xfffffffeU) == 0xffffffff;
            uVar6 = 0xc65e53b7;
            uVar8 = 0xfd2f96c3;
            if (bVar17) {
              uVar8 = 0xc65e53b7;
            }
            uVar5 = 0xfd2f96c3;
            goto LAB_00401cc9;
          }
          if (uVar8 != 0xc760f52c) {
            if (uVar8 == 0xcc0955fa) {
              iVar2 = __isoc99_scanf("%d",&local_684);
              uVar6 = 0x960083c6;
              if ((local_684 == 0) != (iVar2 != 1)) {
                uVar6 = 0x38e47d16;
              }
              uVar8 = uVar6;
              if (local_684 == 0) {
                uVar8 = 0x38e47d16;
              }
              local_728 = local_684;
              if (iVar2 == 1) {
                uVar8 = uVar6;
              }
            }
            goto joined_r0x004011f9;
          }
          FUN_00405e00();
          uVar8 = 0xcc1d122a;
        }
        if ((int)uVar8 < -0x5e93121e) {
          if ((int)uVar8 < -0x6f4004f9) {
            if (uVar8 == 0x84b83380) {
              uVar5 = ~((DAT_005b7b88 + -1) * DAT_005b7b88) | 0xfffffffe;
              bVar17 = DAT_005b7be8 < 10 == (uVar5 == 0xffffffff);
              uVar6 = 0x557fa591;
              uVar11 = 0xa16cede2;
              goto LAB_00401200;
            }
            if (uVar8 != 0x8b3badca) goto joined_r0x004011f9;
            bVar19 = SBORROW4(local_728,4);
            bVar17 = local_728 + -4 < 0;
            uVar8 = 0x600ec799;
            uVar6 = 0xe1dc4586;
            goto LAB_00401cdf;
          }
          if (uVar8 == 0x90bffb07) {
            FUN_00405850();
            goto LAB_0040435b;
          }
          if (uVar8 != 0x960083c6) goto joined_r0x004011f9;
          uVar5 = ~((DAT_005b7b88 + -1) * DAT_005b7b88) | 0xfffffffe;
          bVar17 = DAT_005b7be8 < 10 == (uVar5 == 0xffffffff);
          uVar6 = 0x557fa591;
          uVar11 = 0x84b83380;
          goto LAB_00401200;
        }
        if (-0x58637588 < (int)uVar8) break;
        if (uVar8 != 0xa16cede2) {
          if (uVar8 != 0xa3e2772a) goto joined_r0x004011f9;
          bVar19 = SBORROW4(local_728,8);
          bVar17 = local_728 + -8 < 0;
          uVar8 = 0xa79c8a79;
          uVar6 = 0xb4058d1e;
          goto LAB_00401cdf;
        }
        uVar8 = 0xd66b0faf;
      }
      if (uVar8 == 0xa79c8a79) {
        bVar19 = SBORROW4(local_728,9);
        bVar17 = local_728 + -9 < 0;
        uVar8 = 0x4f486c30;
        uVar6 = 0x52431a96;
      }
      else {
        if (uVar8 == 0xae975e85) {
          local_358[0] = &local_6d8;
          uVar3 = __isoc99_scanf("%d");
          local_6c0 = (undefined4 *****)CONCAT44(local_6c0._4_4_,uVar3);
          uVar8 = 0xa42510e4;
LAB_00401820:
          if ((int)uVar8 < -0x3ca6ca7d) {
            if ((int)uVar8 < -0x5e71be05) {
              if (uVar8 == 0x848e23ef) {
                uVar8 = 0x5b67fdbf;
                if (200000 < (int)local_730) {
                  uVar8 = 0x2cc8db32;
                }
                goto joined_r0x00401a8d;
              }
              if (uVar8 == 0x8bc21dde) {
                local_730 = (undefined4 *****)CONCAT44(local_730._4_4_,(int)local_6d8);
                local_720 = CONCAT31(local_720._1_3_,(int)local_6d8 < 1);
                uVar5 = ~(~-DAT_005b7c04 * DAT_005b7c04) | 0xfffffffe;
                bVar17 = DAT_005b7bfc < 10 == (uVar5 == 0xffffffff);
                uVar6 = 0xa18e41fb;
                uVar11 = 0x239a8b4c;
                goto LAB_00401adc;
              }
              if (uVar8 != 0x9e425cc7) goto joined_r0x0040179e;
              puts("0");
              uVar8 = 0xe1a511bf;
            }
            else if ((int)uVar8 < -0x4fa418e9) {
              if (uVar8 != 0xa18e41fb) {
                if (uVar8 == 0xa42510e4) {
                  bVar17 = (int)local_6c0 == 1;
                  uVar8 = 0xe29bb21a;
                  uVar6 = 0xe9e7af8e;
                  goto LAB_00401a19;
                }
                goto joined_r0x0040179e;
              }
              uVar8 = 0x8bc21dde;
            }
            else {
              if (uVar8 != 0xb05be717) {
                if (uVar8 == 0xbb87bd36) {
                  local_6e0 = (undefined4 ****)((ulong)local_6e0 & 0xffffffff00000000);
                  uVar8 = 0x2fde0bd3;
                  goto LAB_004015ab;
                }
                goto joined_r0x0040179e;
              }
              local_6f8 = (uint ****)CONCAT44(local_6f8._4_4_,(int)local_6e0);
              local_6d0 = (uint ***)CONCAT71(local_6d0._1_7_,(int)local_708 < (int)local_6e0);
              uVar6 = (DAT_005b7c04 + -1) * DAT_005b7c04;
              uVar6 = (uVar6 ^ 0xfffffffe) & uVar6;
              uVar8 = 0x60274980;
              if (uVar6 == 0) {
                uVar8 = 0x181e22b9;
              }
              if (9 < DAT_005b7bfc) {
                uVar8 = 0x60274980;
              }
              if (DAT_005b7bfc < 10 != (uVar6 == 0)) {
                uVar8 = 0x181e22b9;
              }
joined_r0x00401a8d:
              if (0x181e22b8 < uVar8) goto LAB_004015ab;
            }
            goto LAB_00401820;
          }
          if ((int)uVar8 < -0x1952c298) {
            if ((int)uVar8 < -0x1e5aee41) {
              if (uVar8 == 0xc3593583) {
                local_678[0] = (uint ****)&local_6e0;
                iVar2 = __isoc99_scanf("%d");
                bVar17 = iVar2 == 1;
                uVar8 = 0x7337c25e;
                uVar6 = 0xe86e4a5f;
                goto LAB_00401a19;
              }
              if (uVar8 == 0xc536b220) {
                uVar8 = 0x4a6d9659;
                unaff_R12 = (uint ****)((ulong)local_6f8 & 0xffffffff);
                goto LAB_004015ab;
              }
              goto joined_r0x0040179e;
            }
            if (uVar8 != 0xe1a511bf) {
              if (uVar8 == 0xe29bb21a) {
                bVar17 = (~((DAT_005b7c04 + -1) * DAT_005b7c04) | 0xfffffffeU) == 0xffffffff;
                uVar6 = 0x8bc21dde;
                uVar8 = 0xa18e41fb;
                if (bVar17) {
                  uVar8 = 0x8bc21dde;
                }
                bVar20 = SBORROW4(DAT_005b7bfc,10);
                bVar18 = DAT_005b7bfc + -10 < 0;
                bVar19 = DAT_005b7bfc < 10;
                uVar5 = 0xa18e41fb;
                goto LAB_00401540;
              }
              goto joined_r0x0040179e;
            }
            puts("0");
            uVar5 = (DAT_005b7c04 + -1) * DAT_005b7c04;
            uVar5 = (uVar5 ^ 0xfffffffe) & uVar5;
            bVar17 = DAT_005b7bfc < 10 == (uVar5 == 0);
            uVar6 = 0x9e425cc7;
            uVar11 = 0x6e9e803a;
          }
          else {
            if (-0x16185073 < (int)uVar8) {
              if (uVar8 == 0xe9e7af8e) {
                uVar5 = ~((DAT_005b7c04 + -1) * DAT_005b7c04) | 0xfffffffe;
                bVar17 = DAT_005b7bfc < 10 == (uVar5 == 0xffffffff);
                uVar6 = 0x3c845a06;
                uVar11 = 0x511b7858;
                goto LAB_00401adc;
              }
              if (uVar8 == 0xae967d8) {
                uVar5 = (DAT_005b7c04 + -1) * DAT_005b7c04;
                uVar5 = (uVar5 ^ 0xfffffffe) & uVar5;
                bVar17 = uVar5 == 0;
                uVar6 = 0xe1a511bf;
                uVar8 = 0x9e425cc7;
                if (uVar5 == 0) {
                  uVar8 = 0xe1a511bf;
                }
                bVar20 = SBORROW4(DAT_005b7bfc,10);
                bVar18 = DAT_005b7bfc + -10 < 0;
                bVar19 = DAT_005b7bfc < 10;
                uVar5 = 0x9e425cc7;
                goto LAB_00401540;
              }
              goto joined_r0x0040179e;
            }
            if (uVar8 != 0xe86e4a5f) {
              if (uVar8 != 0xe6ad3d68) goto joined_r0x0040179e;
              goto LAB_0040435b;
            }
            uVar5 = (DAT_005b7c04 + -1) * DAT_005b7c04;
            uVar5 = (uVar5 ^ 0xfffffffe) & uVar5;
            bVar17 = DAT_005b7bfc < 10 == (uVar5 == 0);
            uVar6 = 0xbb87bd36;
            uVar11 = 0x2fde0bd3;
          }
          if (!bVar17) {
            uVar6 = uVar11;
          }
          uVar8 = uVar6;
          if (uVar5 == 0) {
            uVar8 = uVar11;
          }
          if (9 < DAT_005b7bfc) {
            uVar8 = uVar6;
          }
joined_r0x0040179e:
          if ((int)uVar8 < 0x181e22b9) goto LAB_00401820;
LAB_004015ab:
          if ((int)uVar8 < 0x5406b86c) {
            if (0x2fde0bd2 < (int)uVar8) {
              if ((int)uVar8 < 0x4a6d9659) {
                if (uVar8 == 0x2fde0bd3) {
                  local_6e0 = (undefined4 ****)((ulong)local_6e0 & 0xffffffff00000000);
                  uVar5 = (DAT_005b7c04 + -1) * DAT_005b7c04;
                  uVar5 = (uVar5 ^ 0xfffffffe) & uVar5;
                  bVar17 = uVar5 == 0;
                  uVar6 = 0x5406b86c;
                  uVar8 = 0xbb87bd36;
                  if (uVar5 == 0) {
                    uVar8 = 0x5406b86c;
                  }
                  bVar20 = SBORROW4(DAT_005b7bfc,10);
                  bVar18 = DAT_005b7bfc + -10 < 0;
                  bVar19 = DAT_005b7bfc < 10;
                  uVar5 = 0xbb87bd36;
                  goto LAB_00401540;
                }
                if (uVar8 != 0x3c845a06) goto joined_r0x0040179e;
                uVar8 = 0x511b7858;
              }
              else {
                if (uVar8 != 0x4a6d9659) {
                  if (uVar8 == 0x511b7858) {
                    uVar5 = ~((DAT_005b7c04 + -1) * DAT_005b7c04) | 0xfffffffe;
                    bVar17 = DAT_005b7bfc < 10 == (uVar5 == 0xffffffff);
                    uVar6 = 0x3c845a06;
                    uVar11 = 0x5fb01e34;
LAB_00401adc:
                    if (!bVar17) {
                      uVar6 = uVar11;
                    }
                    uVar8 = uVar6;
                    if (uVar5 == 0xffffffff) {
                      uVar8 = uVar11;
                    }
                    if (9 < DAT_005b7bfc) {
                      uVar8 = uVar6;
                    }
                  }
                  goto joined_r0x0040179e;
                }
                unaff_EBP = (int)local_6f0 + 1;
                uVar8 = 0x67036b5e;
                unaff_R14 = (uint ****)((ulong)unaff_R12 & 0xffffffff);
              }
              goto LAB_004015ab;
            }
            if (uVar8 == 0x181e22b9) {
              uVar8 = 0x4a6d9659;
              if ((char)local_6d0 != '\0') {
                uVar8 = 0xc536b220;
              }
              unaff_R12 = (uint ****)((ulong)local_708 & 0xffffffff);
              goto joined_r0x0040179e;
            }
            if (uVar8 != 0x239a8b4c) {
              if (uVar8 != 0x2cc8db32) goto joined_r0x0040179e;
              local_6d8 = (uint ***)CONCAT44(local_6d8._4_4_,200000);
              uVar8 = 0x5b67fdbf;
              goto LAB_004015ab;
            }
            bVar17 = (char)local_720 == '\0';
            uVar8 = 0x848e23ef;
            uVar6 = 0xae967d8;
LAB_00401a19:
            if (!bVar17) {
              uVar8 = uVar6;
            }
            goto joined_r0x0040179e;
          }
          if ((int)uVar8 < 0x67036b5e) {
            if (0x5fb01e33 < (int)uVar8) {
              if (uVar8 == 0x5fb01e34) goto LAB_00401728;
              if (uVar8 == 0x60274980) {
                uVar8 = 0xb05be717;
                goto LAB_00401820;
              }
              goto joined_r0x0040179e;
            }
            if (uVar8 == 0x5406b86c) {
              uVar8 = 0x7337c25e;
            }
            else {
              if (uVar8 != 0x5b67fdbf) goto joined_r0x0040179e;
              uVar8 = 0x67036b5e;
              unaff_R14 = (uint ****)0x80000000;
              unaff_EBP = 0;
            }
            goto LAB_004015ab;
          }
          if ((int)uVar8 < 0x7337c25e) {
            if (uVar8 == 0x67036b5e) {
              local_6f0 = (undefined4 *****)CONCAT44(local_6f0._4_4_,unaff_EBP);
              local_708 = (uint ****)CONCAT44(local_708._4_4_,(int)unaff_R14);
              uVar8 = 0x7b9f22d3;
              if ((int)unaff_EBP < (int)local_6d8) {
                uVar8 = 0xc3593583;
              }
              goto joined_r0x0040179e;
            }
            if (uVar8 != 0x6e9e803a) goto joined_r0x0040179e;
          }
          else {
            if (uVar8 == 0x7337c25e) {
              bVar17 = (~((DAT_005b7c04 + -1) * DAT_005b7c04) | 0xfffffffeU) == 0xffffffff;
              uVar6 = 0xb05be717;
              uVar8 = 0x60274980;
              if (bVar17) {
                uVar8 = 0xb05be717;
              }
              bVar20 = SBORROW4(DAT_005b7bfc,10);
              bVar18 = DAT_005b7bfc + -10 < 0;
              bVar19 = DAT_005b7bfc < 10;
              uVar5 = 0x60274980;
LAB_00401540:
              if (bVar20 == bVar18) {
                uVar8 = uVar5;
              }
              if ((bool)(bVar19 ^ bVar17)) {
                uVar8 = uVar6;
              }
              goto joined_r0x0040179e;
            }
            if (uVar8 != 0x7b9f22d3) goto joined_r0x0040179e;
            printf("%d\n",(ulong)local_708 & 0xffffffff);
          }
LAB_00401728:
          uVar8 = 0xe6ad3d68;
          goto LAB_00401820;
        }
        if (uVar8 != 0xb4058d1e) goto joined_r0x004011f9;
        bVar19 = SBORROW4(local_728,7);
        bVar17 = local_728 + -7 < 0;
        uVar8 = 0x90bffb07;
        uVar6 = 0xae975e85;
      }
LAB_00401cdf:
      if (bVar19 != bVar17) {
        uVar8 = uVar6;
      }
      goto joined_r0x004011f9;
    }
    if ((int)uVar8 < 0x52431a96) {
      if (uVar8 == 0x4032b48a) {
        bVar17 = local_728 == 1;
        uVar6 = 0x71d061ea;
LAB_00403ae4:
        uVar8 = 0xb54d678a;
        if (bVar17) {
          uVar8 = uVar6;
        }
      }
      else if (uVar8 == 0x4f486c30) {
        bVar19 = SBORROW4(local_728,10);
        bVar17 = local_728 + -10 < 0;
        uVar8 = 0x1201cc57;
        uVar6 = 0x26d5416f;
        goto LAB_00401cdf;
      }
    }
    else {
      if (uVar8 == 0x52431a96) {
        local_6f0 = &local_6e0;
        uVar3 = __isoc99_scanf("%d");
        local_6d8 = (uint ***)CONCAT44(local_6d8._4_4_,uVar3);
        iVar2 = -0x6d56ad7;
LAB_00403bfb:
        do {
          if (-0x2c86f207 < iVar2) {
            if (iVar2 < -0x1f768f67) {
              if (iVar2 == -0x2c86f206) {
                local_708 = &local_6d0;
                iVar2 = __isoc99_scanf("%d");
                bVar17 = iVar2 == 1;
                iVar2 = -0x2403d784;
                iVar12 = -0x5eef4a03;
                goto LAB_00403e97;
              }
              if (iVar2 == -0x28bf71e2) {
                bVar17 = (~(~-DAT_005b7bc0 * DAT_005b7bc0) | 0xfffffffeU) == 0xffffffff;
                iVar12 = -0x73e6eb42;
                iVar2 = -0x17c0ed20;
                if (bVar17) {
                  iVar2 = -0x73e6eb42;
                }
                bVar20 = SBORROW4(DAT_005b7bec,10);
                bVar18 = DAT_005b7bec + -10 < 0;
                bVar19 = DAT_005b7bec < 10;
                iVar13 = -0x17c0ed20;
                goto LAB_00404234;
              }
              if (iVar2 == -0x2403d784) {
                uVar8 = ~((DAT_005b7bc0 + -1) * DAT_005b7bc0) | 0xfffffffe;
                bVar17 = DAT_005b7bec < 10 == (uVar8 == 0xffffffff);
                iVar12 = 0xd46a56d;
                iVar13 = 0x65d54971;
                goto LAB_00403f5e;
              }
            }
            else if (iVar2 < -0x17c0ed20) {
              if (iVar2 == -0x1f768f67) {
                bVar17 = (char)local_720 == '\0';
                iVar2 = -0x28bf71e2;
                iVar12 = -0x2c86f206;
LAB_00403e97:
                if (!bVar17) {
                  iVar2 = iVar12;
                }
              }
              else if (iVar2 == -0x1eb06dcb) {
                putc(10,stdout);
                putc(10,stdout);
                putc(10,stdout);
                iVar2 = -0x79a169cd;
                goto LAB_00403bfb;
              }
            }
            else {
              if (iVar2 == -0x17c0ed20) {
                FUN_00407580(local_678[0]);
                putc(10,stdout);
                FUN_00407600(local_678[0]);
                putc(10,stdout);
                FUN_00407680(local_678[0]);
                putc(10,stdout);
                FUN_00407800(local_678[0]);
                iVar2 = -0x73e6eb42;
                goto LAB_00403bfb;
              }
              if (iVar2 == -0x6d56ad7) {
                bVar17 = (int)local_6d8 == 1;
                iVar2 = -0x724cf5b9;
                iVar12 = 0x4b453d94;
                goto LAB_00403e97;
              }
            }
joined_r0x00403e9f:
            if (0xd46a56c < iVar2) {
LAB_00403f80:
              if (iVar2 < 0x4b453d94) {
                if (iVar2 < 0x3606ea36) {
                  if (iVar2 == 0xd46a56d) {
                    FUN_004071b0(local_678[0],(ulong)local_6d0 & 0xffffffff);
                    iVar2 = 0x65d54971;
                  }
                  else {
                    if (iVar2 != 0x1c178020) {
                      if (iVar2 == 0x1d87b738) {
                        local_720 = CONCAT31(local_720._1_3_,(int)local_730 < (int)local_6e0);
                        bVar17 = (~((DAT_005b7bc0 + -1) * DAT_005b7bc0) | 0xfffffffeU) == 0xffffffff
                        ;
                        iVar12 = -0x1f768f67;
                        iVar2 = -0x79dfd9e5;
                        if (bVar17) {
                          iVar2 = -0x1f768f67;
                        }
                        iVar13 = -0x79dfd9e5;
                        goto LAB_00404093;
                      }
                      goto joined_r0x00403e9f;
                    }
                    iVar2 = 0x71698a65;
                    unaff_R12 = (uint ****)0x0;
                    unaff_R14 = (uint ****)0x0;
                  }
                  goto LAB_00403f80;
                }
                if (iVar2 < 0x3909f141) {
                  if (iVar2 == 0x3606ea36) {
                    bVar17 = (~((DAT_005b7bc0 + -1) * DAT_005b7bc0) | 0xfffffffeU) == 0xffffffff;
                    iVar12 = -0x79a169cd;
                    iVar2 = -0x1eb06dcb;
                    if (bVar17) {
                      iVar2 = -0x79a169cd;
                    }
                    bVar20 = SBORROW4(DAT_005b7bec,10);
                    bVar18 = DAT_005b7bec + -10 < 0;
                    bVar19 = DAT_005b7bec < 10;
                    iVar13 = -0x1eb06dcb;
LAB_00404234:
                    if (bVar20 == bVar18) {
                      iVar2 = iVar13;
                    }
                    if ((bool)(bVar19 ^ bVar17)) {
                      iVar2 = iVar12;
                    }
                    goto joined_r0x004040a0;
                  }
                  if (iVar2 != 0x373410fb) goto joined_r0x00403e9f;
                  iVar2 = 0x49ea8459;
                  goto LAB_00403f80;
                }
                if (iVar2 == 0x3909f141) {
LAB_00404186:
                  iVar2 = 0x7f4611aa;
                  unaff_EBP = 1;
                  goto LAB_00403f80;
                }
                if (iVar2 != 0x49ea8459) goto joined_r0x00403e9f;
                uVar8 = ~(~-DAT_005b7bc0 * DAT_005b7bc0) | 0xfffffffe;
                bVar17 = DAT_005b7bec < 10 == (uVar8 == 0xffffffff);
                iVar12 = 0x373410fb;
                iVar13 = 0x58d768db;
LAB_00403f5e:
                if (!bVar17) {
                  iVar12 = iVar13;
                }
                iVar2 = iVar12;
                if (uVar8 == 0xffffffff) {
                  iVar2 = iVar13;
                }
                if (9 < DAT_005b7bec) {
                  iVar2 = iVar12;
                }
              }
              else {
                if (iVar2 < 0x65d54971) {
                  if (iVar2 != 0x4b453d94) {
                    if (iVar2 == 0x561ead60) {
                      iVar2 = 0x71698a65;
                      unaff_R12 = (uint ****)((ulong)local_6c0 & 0xffffffff);
                      unaff_R14 = local_358[0];
                    }
                    else {
                      if (iVar2 != 0x58d768db) goto joined_r0x00403e9f;
                      iVar2 = 0x7f4611aa;
                      unaff_EBP = 0;
                    }
                    goto LAB_00403f80;
                  }
                  uVar8 = (DAT_005b7bc0 + -1) * DAT_005b7bc0;
                  uVar8 = (uVar8 ^ 0xfffffffe) & uVar8;
                  bVar17 = DAT_005b7bec < 10 == (uVar8 == 0);
                  iVar12 = 0x373410fb;
                  iVar13 = 0x49ea8459;
                }
                else {
                  if (iVar2 < 0x71698a65) {
                    if (iVar2 == 0x65d54971) {
                      local_358[0] = (uint ****)
                                     FUN_004071b0(local_678[0],(ulong)local_6d0 & 0xffffffff);
                      local_6c0 = (undefined4 *****)CONCAT44(local_6c0._4_4_,(int)local_730 + 1);
                      uVar8 = (DAT_005b7bc0 + -1) * DAT_005b7bc0;
                      uVar8 = (uVar8 ^ 0xfffffffe) & uVar8;
                      bVar17 = uVar8 == 0;
                      iVar12 = 0x561ead60;
                      iVar2 = 0xd46a56d;
                      if (uVar8 == 0) {
                        iVar2 = 0x561ead60;
                      }
                      bVar20 = SBORROW4(DAT_005b7bec,10);
                      bVar18 = DAT_005b7bec + -10 < 0;
                      bVar19 = DAT_005b7bec < 10;
                      iVar13 = 0xd46a56d;
                      goto LAB_00404234;
                    }
                    if (iVar2 == 0x67fa455a) {
                      uVar8 = (DAT_005b7bc0 + -1) * DAT_005b7bc0;
                      uVar8 = (uVar8 ^ 0xfffffffe) & uVar8;
                      bVar17 = uVar8 == 0;
                      iVar12 = -0x3d1f1a0a;
                      iVar2 = -0x4db66f48;
                      if (uVar8 == 0) {
                        iVar2 = -0x3d1f1a0a;
                      }
                      iVar13 = -0x4db66f48;
LAB_00404093:
                      if (9 < DAT_005b7bec) {
                        iVar2 = iVar13;
                      }
                      if ((bool)(DAT_005b7bec < 10 ^ bVar17)) {
                        iVar2 = iVar12;
                      }
                      goto joined_r0x004040a0;
                    }
                    goto joined_r0x00403e9f;
                  }
                  if (iVar2 != 0x71698a65) {
                    if (iVar2 == 0x7f4611aa) {
                      local_6f8 = (uint ****)CONCAT44(local_6f8._4_4_,unaff_EBP);
                      uVar8 = ~(~-DAT_005b7bc0 * DAT_005b7bc0) | 0xfffffffe;
                      bVar17 = DAT_005b7bec < 10 == (uVar8 == 0xffffffff);
                      iVar12 = -0x4db66f48;
                      iVar13 = 0x67fa455a;
                      goto LAB_00403f5e;
                    }
                    goto joined_r0x00403e9f;
                  }
                  local_730 = (undefined4 *****)CONCAT44(local_730._4_4_,(int)unaff_R12);
                  uVar8 = (DAT_005b7bc0 + -1) * DAT_005b7bc0;
                  uVar8 = (uVar8 ^ 0xfffffffe) & uVar8;
                  bVar17 = DAT_005b7bec < 10 == (uVar8 == 0);
                  iVar12 = -0x79dfd9e5;
                  iVar13 = 0x1d87b738;
                  local_678[0] = unaff_R14;
                }
LAB_00403b2c:
                if (!bVar17) {
                  iVar12 = iVar13;
                }
                iVar2 = iVar12;
                if (uVar8 == 0) {
                  iVar2 = iVar13;
                }
                if (9 < DAT_005b7bec) {
                  iVar2 = iVar12;
                }
              }
joined_r0x004040a0:
              if (iVar2 < 0xd46a56d) goto LAB_00403bfb;
              goto LAB_00403f80;
            }
            goto LAB_00403bfb;
          }
          if (iVar2 < -0x5eef4a03) {
            if (iVar2 < -0x73e6eb42) {
              if (iVar2 == -0x79dfd9e5) {
                iVar2 = 0x1d87b738;
                goto LAB_00403f80;
              }
              if (iVar2 == -0x79a169cd) {
                putc(10,stdout);
                putc(10,stdout);
                putc(10,stdout);
                uVar8 = (DAT_005b7bc0 + -1) * DAT_005b7bc0;
                uVar8 = (uVar8 ^ 0xfffffffe) & uVar8;
                bVar17 = DAT_005b7bec < 10 == (uVar8 == 0);
                iVar12 = -0x1eb06dcb;
                iVar13 = -0x333ddb0b;
                goto LAB_00403b2c;
              }
            }
            else {
              if (iVar2 == -0x73e6eb42) {
                FUN_00407580(local_678[0]);
                putc(10,stdout);
                FUN_00407600(local_678[0]);
                putc(10,stdout);
                FUN_00407680(local_678[0]);
                putc(10,stdout);
                FUN_00407800(local_678[0]);
                uVar8 = (DAT_005b7bc0 + -1) * DAT_005b7bc0;
                uVar8 = (uVar8 ^ 0xfffffffe) & uVar8;
                bVar17 = DAT_005b7bec < 10 == (uVar8 == 0);
                iVar12 = -0x17c0ed20;
                iVar13 = 0x3909f141;
                goto LAB_00403b2c;
              }
              if (iVar2 == -0x724cf5b9) {
                iVar2 = (((int)local_6e0 >> 0x1f ^ 0xe61095e9U) & (int)local_6e0 >> 0x1f) +
                        0x1c178020;
              }
            }
            goto joined_r0x00403e9f;
          }
          if (-0x3d1f1a0b < iVar2) {
            if (iVar2 == -0x333ddb0b) goto LAB_00404186;
            if (iVar2 != -0x3d1f1a0a) goto joined_r0x00403e9f;
            goto LAB_0040435b;
          }
          if (iVar2 != -0x5eef4a03) {
            if (iVar2 == -0x4db66f48) {
              iVar2 = 0x67fa455a;
              goto LAB_00403f80;
            }
            goto joined_r0x00403e9f;
          }
          local_6d0 = (uint ***)((ulong)local_6d0 & 0xffffffff00000000);
          iVar2 = -0x2403d784;
        } while( true );
      }
      if (uVar8 == 0x557fa591) {
        uVar8 = 0x84b83380;
        goto LAB_0040125c;
      }
    }
  } while( true );
LAB_0040447b:
  if (0x67829c1c < iVar2) {
    if (0x744040b1 < iVar2) {
      if (iVar2 == 0x744040b2) {
        local_710 = (uint)unaff_R12;
        bVar17 = (~((DAT_005b7c10 + -1) * DAT_005b7c10) | 0xfffffffeU) == 0xffffffff;
        iVar12 = 0x58d41b12;
        iVar2 = -0x5a3f8ce9;
        if (bVar17) {
          iVar2 = 0x58d41b12;
        }
        iVar13 = -0x5a3f8ce9;
        local_700 = uVar6;
      }
      else {
        if (iVar2 == 0x786fb0df) {
          local_6d0 = (uint ***)CONCAT44(local_6d0._4_4_,(int)unaff_R13);
          local_6e0 = (undefined4 ****)CONCAT44(local_6e0._4_4_,(int)unaff_R14);
          uVar8 = (DAT_005b7c10 + -1) * DAT_005b7c10;
          uVar8 = (uVar8 ^ 0xfffffffe) & uVar8;
          bVar17 = DAT_005b7ba4 < 10 == (uVar8 == 0);
          iVar12 = 0x67829c1d;
          iVar13 = 0x7f29c641;
          goto LAB_00404418;
        }
        if (iVar2 != 0x7f29c641) goto joined_r0x004045eb;
        printf("%d years %d months %d days\n",(ulong)local_6e0 & 0xffffffff,
               (ulong)local_6d0 & 0xffffffff,(ulong)local_6fc);
        bVar17 = (~((DAT_005b7c10 + -1) * DAT_005b7c10) | 0xfffffffeU) == 0xffffffff;
        iVar12 = 0x6590b649;
        iVar2 = 0x67829c1d;
        if (bVar17) {
          iVar2 = 0x6590b649;
        }
        iVar13 = 0x67829c1d;
      }
      if (9 < DAT_005b7ba4) {
        iVar2 = iVar13;
      }
      if ((bool)(DAT_005b7ba4 < 10 ^ bVar17)) {
        iVar2 = iVar12;
      }
      goto joined_r0x004045eb;
    }
    if (iVar2 == 0x67829c1d) {
      printf("%d years %d months %d days\n",(ulong)local_6e0 & 0xffffffff,
             (ulong)local_6d0 & 0xffffffff,(ulong)local_6fc);
      iVar2 = 0x7f29c641;
    }
    else {
      if (iVar2 != 0x6a14d11d) goto joined_r0x004045eb;
      iVar2 = 0x33403d15;
    }
    goto LAB_0040447b;
  }
  if (iVar2 < 0x58d41b12) {
    if (iVar2 == 0x30e9173e) {
      iVar2 = -0x6568510a;
      if (local_69c != 6) {
        iVar2 = -0x7f789718;
      }
    }
    else if (iVar2 == 0x33403d15) {
      uVar8 = (DAT_005b7c10 + -1) * DAT_005b7c10;
      uVar8 = (uVar8 ^ 0xfffffffe) & uVar8;
      bVar17 = DAT_005b7ba4 < 10 == (uVar8 == 0);
      iVar12 = 0x6a14d11d;
      iVar13 = -0x55c9400e;
      goto LAB_00404418;
    }
  }
  else if (iVar2 == 0x58d41b12) {
    iVar2 = FUN_004068d0(local_700,local_710);
    local_6ac = iVar2 + local_73c;
    bVar17 = (~((DAT_005b7c10 + -1) * DAT_005b7c10) | 0xfffffffeU) == 0xffffffff;
    iVar2 = -0x5a3f8ce9;
    if (bVar17) {
      iVar2 = -0x360faccf;
    }
    if (9 < DAT_005b7ba4) {
      iVar2 = -0x5a3f8ce9;
    }
    if (DAT_005b7ba4 < 10 != bVar17) {
      iVar2 = -0x360faccf;
    }
  }
  else {
    if (iVar2 == 0x6590b649) {
LAB_0040481d:
      iVar2 = 0x5e631577;
      goto LAB_0040447b;
    }
    if (iVar2 == 0x5e631577) goto LAB_004011c0;
  }
joined_r0x004045eb:
  do {
    if (0x30e9173d < iVar2) goto LAB_0040447b;
    while (-0x55c9400f < iVar2) {
      if (iVar2 < -0x360faccf) {
        if (iVar2 == -0x55c9400e) goto LAB_0040481d;
        if (iVar2 != -0x408c6a57) goto joined_r0x004045eb;
        uVar6 = ~-local_6c4;
        iVar2 = 0x744040b2;
        unaff_R12 = (uint ****)0xc;
        goto LAB_0040447b;
      }
      if (iVar2 != -0x360faccf) {
        if (iVar2 != -0x2537430a) {
          if (iVar2 == 0x19142ec4) {
            local_6e8 = local_6b0 - 1;
            unaff_R12 = (uint ****)(ulong)(local_6b4 - 1);
            uVar6 = local_6c4;
            iVar2 = 0x744040b2;
            if (local_6b4 - 1 == 0) {
              iVar2 = -0x408c6a57;
            }
          }
          goto joined_r0x004045eb;
        }
        unaff_R14 = (uint ****)(ulong)~-local_698;
        unaff_R13 = (uint ****)(ulong)(local_720 + 0xc);
        iVar2 = 0x786fb0df;
        goto LAB_0040447b;
      }
      local_6a8 = (uint ****)CONCAT44(local_6a8._4_4_,local_6e8);
      unaff_EBP = local_6ac;
      iVar2 = -0x743bfc14;
    }
    if (iVar2 < -0x6568510a) {
      if (iVar2 == -0x7f789718) {
        uVar8 = (DAT_005b7c10 + -1) * DAT_005b7c10;
        uVar8 = (uVar8 ^ 0xfffffffe) & uVar8;
        bVar17 = DAT_005b7ba4 < 10 == (uVar8 == 0);
        iVar12 = 0x6a14d11d;
        iVar13 = 0x33403d15;
LAB_00404418:
        if (!bVar17) {
          iVar12 = iVar13;
        }
        iVar2 = iVar12;
        if (uVar8 == 0) {
          iVar2 = iVar13;
        }
        if (9 < DAT_005b7ba4) {
          iVar2 = iVar12;
        }
      }
      else if (iVar2 == -0x743bfc14) {
        unaff_R14 = (uint ****)(ulong)local_698;
        unaff_R13 = (uint ****)((ulong)local_6a8 & 0xffffffff);
        local_720 = (int)local_6a8;
        local_6fc = unaff_EBP;
        iVar2 = (((int)local_6a8 >> 0x1f ^ 0x9da6f3e8U) & (int)local_6a8 >> 0x1f) + 0x786fb0df;
      }
    }
    else if (iVar2 == -0x6568510a) {
      uVar8 = (DAT_005b7b78 + -1) * DAT_005b7b78;
      uVar8 = (uVar8 ^ 0xfffffffe) & uVar8;
      bVar18 = uVar8 == 0;
      local_733 = uVar8 == 0;
      local_732 = DAT_005b7bc8 < 10;
      bVar17 = DAT_005b7bc8 < 10 != (bool)local_733;
      bVar19 = DAT_005b7bc8 < 10;
      in_R8 = (uint ****)0xbd3c01ff;
      if (bVar19 && bVar18 || bVar17) {
        in_R8 = (uint ****)0xae81dcde;
      }
      iVar2 = 0x4827e210;
      if (bVar19 && bVar18 || bVar17) {
        iVar2 = 0x61d277a1;
      }
      iVar12 = 0x4827e210;
      if (bVar19 && bVar18 || bVar17) {
        iVar12 = -0x212f1014;
      }
      iVar13 = -0x7a12dab2;
      if (bVar19 && bVar18 || bVar17) {
        iVar13 = -0x5dc11c8e;
      }
      iVar10 = -0x7a12dab2;
      if (bVar19 && bVar18 || bVar17) {
        iVar10 = -0x76c1e7d8;
      }
      iVar9 = 0x1261431c;
LAB_00404950:
      do {
        while( true ) {
          while (iVar4 = iVar9, uVar5 = local_714, iVar14 = local_718, uVar8 = local_724,
                iVar9 = iVar4, iVar4 < -0x2841343b) {
            if (iVar4 < -0x517e2322) {
              if (iVar4 < -0x66fb51cc) {
                if (iVar4 == -0x7a12dab2) {
                  uVar8 = local_714;
                  uVar5 = local_724;
                  local_714 = local_71c;
                  local_724 = local_70c;
                  local_718 = local_738;
                  iVar9 = -0x5dc11c8e;
                  local_738 = iVar14;
                  local_71c = uVar8;
                  local_70c = uVar5;
                }
                else if (iVar4 == -0x76c1e7d8) {
                  iVar9 = 0x4330e8f7;
                }
              }
              else {
                iVar9 = iVar2;
                if ((iVar4 != -0x66fb51cc) && (iVar9 = iVar4, iVar4 == -0x5dc11c8e)) {
                  local_714 = local_71c;
                  local_724 = local_70c;
                  local_718 = local_738;
                  local_71c = uVar5;
                  local_70c = uVar8;
                  local_738 = iVar14;
                  iVar9 = iVar10;
                }
              }
            }
            else if (iVar4 < -0x42c3fe01) {
              if (iVar4 == -0x517e2322) {
                iVar9 = -0x4079debd;
                if (local_731 != '\0') {
                  iVar9 = -0x2841343b;
                }
              }
              else if ((iVar4 == -0x43dc6804) && (iVar9 = 0x4330e8f7, local_714 == local_71c)) {
                iVar9 = -0x66fb51cc;
              }
            }
            else if (iVar4 == -0x42c3fe01) {
              iVar9 = 0x5588b483;
            }
            else if (iVar4 == -0x4079debd) {
              iVar9 = -0x43dc6804;
              if ((int)local_6d8 == (int)local_6c0) {
                iVar9 = 0x25d621dc;
              }
            }
          }
          if (0x4330e8f6 < iVar4) break;
          if (iVar4 < 0x1261431c) {
            iVar9 = iVar13;
            if ((iVar4 != -0x2841343b) && (iVar9 = iVar4, iVar4 == -0x212f1014)) {
              iVar9 = 0x4330e8f7;
              if ((char)local_6a0 != '\0') {
                iVar9 = 0x74253005;
              }
            }
          }
          else if (iVar4 == 0x1261431c) {
            iVar9 = -0x42c3fe01;
            if ((bool)local_732) {
              iVar9 = 0x5588b483;
            }
            if (!(bool)local_733) {
              iVar9 = -0x42c3fe01;
            }
            if (local_733 != local_732) {
              iVar9 = 0x5588b483;
            }
          }
          else if (iVar4 == 0x25d621dc) {
            bVar17 = SBORROW4(local_724,local_70c);
            iVar14 = local_724 - local_70c;
            iVar9 = -0x43dc6804;
LAB_00404946:
            if (iVar14 != 0 && bVar17 == iVar14 < 0) {
              iVar9 = -0x2841343b;
            }
          }
        }
        if (0x61d277a0 < iVar4) {
          if (iVar4 == 0x61d277a1) {
            local_6a0 = CONCAT31(local_6a0._1_3_,local_724 == local_70c);
            iVar9 = iVar12;
          }
          else if (iVar4 == 0x74253005) {
            bVar17 = SBORROW4(local_718,local_738);
            iVar14 = local_718 - local_738;
            iVar9 = 0x4330e8f7;
            goto LAB_00404946;
          }
          goto LAB_00404950;
        }
        if (iVar4 == 0x4827e210) {
          iVar9 = 0x61d277a1;
          goto LAB_00404950;
        }
        if (iVar4 == 0x5588b483) {
          local_6d8 = (uint ***)CONCAT44(local_6d8._4_4_,local_714);
          local_6c0 = (undefined4 *****)CONCAT44(local_6c0._4_4_,local_71c);
          local_731 = (int)local_71c < (int)local_714;
          iVar9 = (int)in_R8;
          goto LAB_00404950;
        }
      } while (iVar4 != 0x4330e8f7);
      local_698 = local_71c - local_714;
      local_6b0 = local_70c - local_724;
      local_73c = local_738 - local_718;
      local_6a8 = (uint ****)CONCAT44(local_6a8._4_4_,local_6b0);
      unaff_EBP = local_73c;
      local_6c4 = local_71c;
      local_6b4 = local_70c;
      iVar2 = (((int)local_73c >> 0x1f ^ 0x72afd527U) & (int)local_73c >> 0x1f) + 0x8bc403ec;
    }
    else if (iVar2 == -0x5a3f8ce9) {
      FUN_004068d0(local_700,local_710);
      iVar2 = 0x58d41b12;
      goto LAB_0040447b;
    }
  } while( true );
LAB_004011c0:
  uVar8 = 0xcc0955fa;
  goto joined_r0x004011f9;
LAB_00403460:
  if ((int)uVar8 < 0x4a4a2c74) {
    ppppuVar15 = unaff_R12;
    ppppuVar1 = unaff_R14;
    if ((int)uVar8 < 0x3eefc2f9) {
      if (uVar8 == 0x2ca1ad4b) goto LAB_00403755;
      if (uVar8 == 0x31aa5199) {
        bVar17 = (~((DAT_005b7c0c + -1) * DAT_005b7c0c) | 0xfffffffeU) == 0xffffffff;
        uVar8 = 0x5dc1c699;
        if (bVar17) {
          uVar8 = 0x3eefc2f9;
        }
        if (9 < DAT_005b7ba0) {
          uVar8 = 0x5dc1c699;
        }
        if (DAT_005b7ba0 < 10 == bVar17) goto joined_r0x004035ee;
        uVar8 = 0x3eefc2f9;
        goto joined_r0x004035ee;
      }
    }
    else {
      if (uVar8 == 0x3eefc2f9) {
        local_700 = CONCAT31(local_700._1_3_,(long)local_6f8 < 0);
        uVar6 = ~(~-DAT_005b7c0c * DAT_005b7c0c) | 0xfffffffe;
        uVar5 = 0x5dc1c699;
        if (DAT_005b7ba0 < 10 != (uVar6 == 0xffffffff)) {
          uVar5 = 0x4a4a2c74;
        }
        uVar8 = uVar5;
        if (uVar6 == 0xffffffff) {
          uVar8 = 0x4a4a2c74;
        }
        local_708 = local_6f8;
        if (DAT_005b7ba0 < 10) goto joined_r0x004035ee;
        uVar8 = uVar5;
        goto joined_r0x004035ee;
      }
      if (uVar8 == 0x450559b9) goto LAB_0040435b;
    }
  }
  else if ((int)uVar8 < 0x6ac4a68c) {
    if (uVar8 == 0x4a4a2c74) {
      bVar17 = (char)local_700 == '\0';
      uVar8 = 0xa677329a;
      uVar6 = 0x25678a66;
LAB_00403559:
      if (!bVar17) {
        uVar8 = uVar6;
      }
    }
    else if (uVar8 == 0x5dc1c699) {
      uVar8 = 0x3eefc2f9;
      goto LAB_00403460;
    }
  }
  else {
    if (uVar8 == 0x7cbd8b9d) {
      __s = "no";
      if (local_358[0] == local_6f8) {
        __s = "yes";
      }
      puts(__s);
LAB_00403755:
      uVar8 = 0x450559b9;
      goto LAB_00403460;
    }
    if (uVar8 == 0x6ac4a68c) {
      bVar17 = (int)local_6e0 == 1;
      uVar8 = 0x31aa5199;
      uVar6 = 0x2ca1ad4b;
      goto LAB_00403559;
    }
  }
joined_r0x00403561:
  if ((int)uVar8 < 0x2ca1ad4b) {
    while( true ) {
      while (-0x26f9d85a < (int)uVar8) {
        if ((int)uVar8 < 0x127bec16) {
          if (uVar8 == 0xd90627a7) goto LAB_00403755;
          if (uVar8 != 0xe164f419) goto joined_r0x00403561;
          uVar8 = 0x127bec16;
          unaff_R12 = (uint ****)0x0;
          unaff_R14 = local_6f8;
        }
        else {
          if (uVar8 != 0x127bec16) {
            if (uVar8 == 0x25678a66) {
              bVar17 = (~((DAT_005b7c0c + -1) * DAT_005b7c0c) | 0xfffffffeU) == 0xffffffff;
              uVar8 = 0x835105c8;
              if (bVar17) {
                uVar8 = 0xb92465d5;
              }
              if (9 < DAT_005b7ba0) {
                uVar8 = 0x835105c8;
              }
              if (DAT_005b7ba0 < 10 != bVar17) {
                uVar8 = 0xb92465d5;
              }
            }
            goto joined_r0x00403561;
          }
          bVar20 = (~(~-DAT_005b7bb4 * DAT_005b7bb4) | 0xfffffffeU) == 0xffffffff;
          local_6fc = CONCAT31(local_6fc._1_3_,bVar20);
          bVar17 = DAT_005b7bcc < 10;
          local_720 = CONCAT31(local_720._1_3_,bVar17);
          bVar19 = DAT_005b7bcc < 10 != bVar20;
          bVar18 = DAT_005b7bcc < 10;
          iVar2 = 0x3b55b21a;
          if (bVar18 && bVar20 || bVar19) {
            iVar2 = 0x2b24cdc8;
          }
          iVar12 = 0x74cd3f8e;
          if (bVar18 && bVar20 || bVar19) {
            iVar12 = -0x51c7fb6c;
          }
          iVar13 = 0x74cd3f8e;
          if (bVar18 && bVar20 || bVar19) {
            iVar13 = -0x33526192;
          }
          iVar10 = -0x7b2e737e;
          if (bVar18 && bVar20 || bVar19) {
            iVar10 = -0x6f648265;
          }
          iVar9 = -0x7b2e737e;
          if (bVar18 && bVar20 || bVar19) {
            iVar9 = 0x217648a4;
          }
          ppppuVar15 = unaff_R12;
          iVar14 = 0x437ec3fb;
          do {
            while( true ) {
              while( true ) {
                while( true ) {
                  while (iVar4 = iVar14, iVar14 = iVar4, iVar4 < 0x217648a4) {
                    if (iVar4 < -0x4deba6eb) {
                      if (iVar4 == -0x7b2e737e) {
                        iVar14 = -0x6f648265;
                      }
                      else {
                        iVar14 = iVar9;
                        if ((iVar4 != -0x6f648265) && (iVar14 = iVar4, iVar4 == -0x51c7fb6c)) {
                          local_6c0 = (undefined4 *****)
                                      CONCAT44(local_6c0._4_4_,(int)local_730 + -1);
                          local_6d0 = (uint ***)CONCAT71(local_6d0._1_7_,0 < (int)local_730);
                          iVar14 = iVar13;
                        }
                      }
                    }
                    else {
                      iVar14 = iVar10;
                      if (iVar4 != -0x4deba6eb) {
                        if (iVar4 == -0x33526192) {
                          iVar14 = -0x4deba6eb;
                          if ((char)local_6d0 != '\0') {
                            iVar14 = -0x1925b59b;
                          }
                        }
                        else {
                          iVar14 = iVar4;
                          if (iVar4 == -0x1925b59b) {
                            ppppuVar15 = (uint ****)((long)local_678[0] * ((long)unaff_R14 % 10));
                            in_R8 = (uint ****)((ulong)local_6c0 & 0xffffffff);
                            iVar14 = 0x574b57a8;
                          }
                        }
                      }
                    }
                  }
                  if (iVar4 < 0x437ec3fb) break;
                  if (iVar4 == 0x74cd3f8e) {
                    iVar14 = -0x51c7fb6c;
                  }
                  else if (iVar4 == 0x574b57a8) {
                    local_730 = (undefined4 *****)CONCAT44(local_730._4_4_,(int)in_R8);
                    iVar14 = iVar12;
                    local_678[0] = ppppuVar15;
                  }
                  else if (iVar4 == 0x437ec3fb) {
                    iVar4 = 0x3b55b21a;
                    if (bVar20 != bVar17) {
                      iVar4 = 0x3acd11e2;
                    }
                    iVar14 = iVar4;
                    if (bVar17) {
                      iVar14 = 0x3acd11e2;
                    }
                    if (!bVar20) {
                      iVar14 = iVar4;
                    }
                  }
                }
                if (iVar4 < 0x3acd11e2) break;
                iVar14 = iVar2;
                if ((iVar4 != 0x3acd11e2) && (iVar14 = iVar4, iVar4 == 0x3b55b21a)) {
                  iVar14 = 0x3acd11e2;
                }
              }
              if (iVar4 != 0x2b24cdc8) break;
              ppppuVar15 = (uint ****)0x1;
              in_R8 = (uint ****)((ulong)local_6d8 & 0xffffffff);
              iVar14 = 0x574b57a8;
            }
          } while (iVar4 != 0x217648a4);
          local_358[0] = (uint ****)((long)local_678[0] + (long)unaff_R12);
          uVar8 = 0x7cbd8b9d;
          ppppuVar15 = local_358[0];
          ppppuVar1 = (uint ****)((long)unaff_R14 / 10);
          local_6b8 = unaff_EBP;
          local_6a8 = unaff_R14;
          local_690 = unaff_R12;
          if (0x12 < (long)unaff_R14 + 9U) {
            uVar8 = 0x127bec16;
          }
joined_r0x004035ee:
          unaff_R14 = ppppuVar1;
          unaff_R12 = ppppuVar15;
          if (0x2ca1ad4a < uVar8) goto LAB_00403460;
        }
      }
      if (-0x55328435 < (int)uVar8) break;
      if (uVar8 == 0x835105c8) {
        puts("no");
        uVar8 = 0xb92465d5;
      }
      else {
        if (uVar8 != 0xa677329a) goto joined_r0x00403561;
        uVar8 = 0xaacd7bcc;
        unaff_EBP = 0;
        unaff_R13 = local_708;
      }
    }
    if (uVar8 == 0xaacd7bcc) {
      unaff_EBP = unaff_EBP + 1;
      local_6d8 = (uint ***)CONCAT44(local_6d8._4_4_,unaff_EBP);
      ppppuVar15 = (uint ****)((long)unaff_R13 / 10);
      uVar16 = (long)unaff_R13 + 9;
      unaff_R13 = ppppuVar15;
      uVar8 = 0xe164f419;
      if (0x12 < uVar16) {
        uVar8 = 0xaacd7bcc;
      }
    }
    else if (uVar8 == 0xb92465d5) {
      puts("no");
      uVar6 = (DAT_005b7c0c + -1) * DAT_005b7c0c;
      uVar6 = (uVar6 ^ 0xfffffffe) & uVar6;
      uVar5 = 0x835105c8;
      if (DAT_005b7ba0 < 10 != (uVar6 == 0)) {
        uVar5 = 0xd90627a7;
      }
      uVar8 = uVar5;
      if (uVar6 == 0) {
        uVar8 = 0xd90627a7;
      }
      if (9 < DAT_005b7ba0) {
        uVar8 = uVar5;
      }
    }
    goto joined_r0x00403561;
  }
  goto LAB_00403460;
}



/* ===== Function: FUN_00404ce0 ===== */

ulong * FUN_00404ce0(void)

{
  int iVar1;
  ulong *puVar2;
  uint uVar3;
  int iVar4;
  ulong **ppuVar5;
  char *__s;
  bool bVar6;
  ulong auStack_60 [3];
  ulong *local_48;
  ulong *local_40;
  char local_33;
  char local_32;
  char local_31;
  
  uVar3 = (DAT_005b7b84 + -1) * DAT_005b7b84;
  local_31 = ((uVar3 ^ 0xfffffffe) & uVar3) == 0;
  local_32 = DAT_005b7bac < 10;
  ppuVar5 = &local_48;
  iVar1 = -0x610ae80f;
  do {
    while( true ) {
      while( true ) {
        while (0x3506f2c9 < iVar1) {
          if (iVar1 < 0x46e0ddac) {
            if (iVar1 != 0x3506f2ca) goto LAB_00404ec0;
            ppuVar5[-3] = (ulong *)0x404d76;
            __isoc99_scanf(&DAT_00408004);
            ppuVar5 = ppuVar5 + -2;
            iVar1 = 0x46e0ddac;
          }
          else if (iVar1 == 0x46e0ddac) {
            puVar2 = (ulong *)(ppuVar5 + -2);
            ppuVar5[-3] = (ulong *)0x404dcc;
            local_48 = puVar2;
            local_40 = puVar2;
            iVar1 = __isoc99_scanf(&DAT_00408004,puVar2);
            local_33 = iVar1 != 1;
            uVar3 = (DAT_005b7b84 + -1) * DAT_005b7b84;
            uVar3 = (uVar3 ^ 0xfffffffe) & uVar3;
            iVar4 = 0x3506f2ca;
            if (DAT_005b7bac < 10 != (uVar3 == 0)) {
              iVar4 = -0x378e9b95;
            }
            iVar1 = iVar4;
            if (uVar3 == 0) {
              iVar1 = -0x378e9b95;
            }
            ppuVar5 = (ulong **)puVar2;
            if (9 < DAT_005b7bac) {
              iVar1 = iVar4;
            }
          }
          else {
            if (iVar1 == 0x4ab14855) {
              return local_48;
            }
            if (iVar1 != 0x7234ba20) goto LAB_00404ec0;
            __s = "odd";
            if (((*local_40 ^ 0xfffffffffffffffe) & *local_40) == 0) {
              __s = "even";
            }
            ppuVar5[-1] = (ulong *)0x404d54;
            puts(__s);
            iVar1 = 0x4ab14855;
          }
        }
        if (iVar1 != -0x610ae80f) break;
        iVar1 = 0x3506f2ca;
        if (local_32 != '\0') {
          iVar1 = 0x46e0ddac;
        }
        if (local_31 == '\0') {
          iVar1 = 0x3506f2ca;
        }
        if (local_31 != local_32) {
          iVar1 = 0x46e0ddac;
        }
      }
      if (iVar1 != -0x378e9b95) break;
      iVar1 = 0x7234ba20;
      if (local_33 != '\0') {
        iVar1 = 0x27cd1965;
      }
    }
    bVar6 = iVar1 == 0x27cd1965;
    iVar1 = 0x4ab14855;
  } while (bVar6);
LAB_00404ec0:
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ===== Function: FUN_00404ee0 ===== */

/* WARNING: Removing unreachable block (ram,0x00405255) */

int * FUN_00404ee0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int unaff_R15D;
  bool bVar4;
  double extraout_XMM0_Qa;
  char local_6d;
  int local_6c;
  int local_68;
  int local_64;
  double local_60;
  int local_54;
  double local_50;
  int *local_48;
  double *local_40;
  double local_38;
  
  local_48 = &local_6c;
  local_54 = __isoc99_scanf("%d");
  iVar2 = -0x6878d1c5;
  local_60 = extraout_XMM0_Qa;
LAB_004050c0:
  do {
    while (-0x6878d1c6 < iVar2) {
      if (iVar2 < -0x5b275030) {
        if (iVar2 == -0x6878d1c5) {
          bVar4 = local_54 == 1;
          iVar2 = 0x138d9859;
          iVar3 = -0x779c9670;
          goto LAB_0040526b;
        }
        if (iVar2 != -0x62970069) goto joined_r0x0040523a;
        local_60 = local_38 + local_50;
        unaff_R15D = local_64 + 1;
        iVar2 = -0x6e5fd9a2;
      }
      else {
        if (iVar2 != -0x5b275030) {
          if (iVar2 != -0x4970b67c) goto joined_r0x0040523a;
          uVar1 = (DAT_005b7c08 + -1) * DAT_005b7c08;
          uVar1 = (uVar1 ^ 0xfffffffe) & uVar1;
          iVar2 = 0x1a8a322b;
          if (uVar1 == 0) {
            iVar2 = -0x7234b7ff;
          }
          if (9 < DAT_005b7b9c) {
            iVar2 = 0x1a8a322b;
          }
          if (DAT_005b7b9c < 10 == (uVar1 == 0)) goto joined_r0x0040523a;
          iVar2 = -0x7234b7ff;
          goto joined_r0x0040523a;
        }
        iVar2 = -0x6e5fd9a2;
        local_60 = 0.0;
        unaff_R15D = 0;
      }
    }
    if (iVar2 < -0x7234b7ff) {
      if (iVar2 == -0x779c9670) goto LAB_00405245;
      if (iVar2 != -0x754ed7bd) goto joined_r0x0040523a;
      puts("0.000000");
      uVar1 = (~-DAT_005b7c08 * DAT_005b7c08 ^ 0xfffffffeU) & ~-DAT_005b7c08 * DAT_005b7c08;
      iVar2 = 0x7185e449;
      if (uVar1 == 0) {
        iVar2 = -0x72e4ed1;
      }
      if (9 < DAT_005b7b9c) {
        iVar2 = 0x7185e449;
      }
      if (DAT_005b7b9c < 10 != (uVar1 == 0)) {
        iVar2 = -0x72e4ed1;
      }
    }
    else if (iVar2 == -0x7234b7ff) {
      local_40 = &local_50;
      iVar2 = __isoc99_scanf(&DAT_00408016,&local_50);
      local_6d = iVar2 != 1;
      uVar1 = (DAT_005b7c08 + -1) * DAT_005b7c08;
      uVar1 = (uVar1 ^ 0xfffffffe) & uVar1;
      iVar2 = 0x1a8a322b;
      if (uVar1 == 0) {
        iVar2 = 0x6faf64fc;
      }
      if (9 < DAT_005b7b9c) {
        iVar2 = 0x1a8a322b;
      }
      if (DAT_005b7b9c < 10 != (uVar1 == 0)) {
        iVar2 = 0x6faf64fc;
      }
    }
    else {
      if (iVar2 != -0x6e5fd9a2) goto joined_r0x0040523a;
      local_38 = local_60;
      local_68 = local_6c;
      iVar2 = 0x2c1e2a67;
      local_64 = unaff_R15D;
      if (unaff_R15D < local_6c) {
        iVar2 = -0x4970b67c;
      }
    }
    while (-0x72e4ed2 < iVar2) {
LAB_00404f6b:
      while (iVar2 < 0x27e1ef30) {
        if (iVar2 < 0x138d9859) {
          if (iVar2 == -0x72e4ed1) goto LAB_00405245;
          if (iVar2 == -0x300adde) {
            local_50 = 0.0;
            iVar2 = -0x62970069;
            goto LAB_004050c0;
          }
        }
        else if (iVar2 == 0x138d9859) {
          iVar2 = -0x5b275030;
          if (local_6c < 1) {
            iVar2 = 0x52dea16d;
          }
        }
        else if (iVar2 == 0x1a8a322b) {
          __isoc99_scanf(&DAT_00408016,&local_50);
          iVar2 = -0x7234b7ff;
        }
joined_r0x0040523a:
        if (iVar2 < -0x72e4ed1) goto LAB_004050c0;
      }
      if (iVar2 < 0x6faf64fc) {
        if (iVar2 == 0x2c1e2a67) {
          printf("%.6f\n",local_38 / (double)local_68);
LAB_00405245:
          iVar2 = 0x27e1ef30;
          goto LAB_00404f6b;
        }
        if (iVar2 != 0x52dea16d) {
          if (iVar2 == 0x27e1ef30) {
            return local_48;
          }
          goto joined_r0x0040523a;
        }
        bVar4 = (~((DAT_005b7c08 + -1) * DAT_005b7c08) | 0xfffffffeU) == 0xffffffff;
        iVar2 = 0x7185e449;
        if (bVar4) {
          iVar2 = -0x754ed7bd;
        }
        if (9 < DAT_005b7b9c) {
          iVar2 = 0x7185e449;
        }
        if (DAT_005b7b9c < 10 != bVar4) {
          iVar2 = -0x754ed7bd;
        }
      }
      else {
        if (iVar2 != 0x6faf64fc) {
          if (iVar2 != 0x7185e449) goto joined_r0x0040523a;
          puts("0.000000");
          iVar2 = -0x754ed7bd;
          break;
        }
        bVar4 = local_6d == '\0';
        iVar2 = -0x62970069;
        iVar3 = -0x300adde;
LAB_0040526b:
        if (!bVar4) {
          iVar2 = iVar3;
        }
      }
    }
  } while( true );
}



/* ===== Function: FUN_00405320 ===== */

/* WARNING: Removing unreachable block (ram,0x00405836) */
/* WARNING: Removing unreachable block (ram,0x004057c4) */
/* WARNING: Removing unreachable block (ram,0x004057a0) */
/* WARNING: Removing unreachable block (ram,0x00405704) */
/* WARNING: Removing unreachable block (ram,0x004055d1) */

uint * FUN_00405320(void)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint **ppuVar5;
  int iVar6;
  int iVar7;
  int unaff_R13D;
  int unaff_R15D;
  bool bVar8;
  uint *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_4c;
  uint *local_48;
  int local_3c;
  int local_38;
  char local_33;
  char local_32;
  char local_31;
  
  ppuVar5 = &local_68;
  local_31 = (~((DAT_005b7c14 + -1) * DAT_005b7c14) | 0xfffffffeU) == 0xffffffff;
  local_32 = DAT_005b7ba8 < 10;
  iVar2 = -0x14de1687;
LAB_00405650:
  if (iVar2 < 0x17e541a9) {
    if (iVar2 < 0x5adab2e) {
      if (iVar2 == -0x14de1687) {
        iVar6 = -0x644e75a7;
        if (local_31 != local_32) {
          iVar6 = -0x5024c9ad;
        }
        iVar2 = iVar6;
        if (local_32 != '\0') {
          iVar2 = -0x5024c9ad;
        }
        if (local_31 != '\0') goto joined_r0x004056c0;
        iVar2 = iVar6;
        goto joined_r0x004056c0;
      }
      iVar6 = local_38;
      if (iVar2 != -0xc48057a) goto joined_r0x004056c0;
LAB_00405723:
      unaff_R13D = iVar6 + -1;
      iVar2 = 0x7bbe340e;
      goto LAB_00405650;
    }
    if (iVar2 != 0x5adab2e) {
      if (iVar2 != 0x79d6a21) {
        if (iVar2 != 0xfa739c7) goto joined_r0x004056c0;
        bVar8 = (~((DAT_005b7c14 + -1) * DAT_005b7c14) | 0xfffffffeU) == 0xffffffff;
        iVar2 = -0x6cd89f1f;
        if (bVar8) {
          iVar2 = 0x79d6a21;
        }
        if (9 < DAT_005b7ba8) {
          iVar2 = -0x6cd89f1f;
        }
        if (DAT_005b7ba8 < 10 == bVar8) goto joined_r0x004056c0;
        iVar2 = 0x79d6a21;
        goto joined_r0x004056c0;
      }
      *(undefined8 *)((long)ppuVar5 + -8) = 0x405396;
      putc(10,stdout);
      uVar4 = ~((DAT_005b7c14 + -1) * DAT_005b7c14) | 0xfffffffe;
      iVar6 = -0x6cd89f1f;
      if (DAT_005b7ba8 < 10 != (uVar4 == 0xffffffff)) {
        iVar6 = 0x48844b95;
      }
      iVar2 = iVar6;
      if (uVar4 != 0xffffffff) goto LAB_00405373;
      iVar2 = 0x48844b95;
      goto LAB_00405373;
    }
    local_60 = local_58;
    iVar2 = -0x5ba6c425;
    unaff_R15D = 0;
  }
  else {
    if (0x48844b94 < iVar2) {
      if (iVar2 == 0x48844b95) goto LAB_004056f4;
      if (iVar2 == 0x7bbe340e) {
        iVar2 = ((unaff_R13D >> 0x1f ^ 0x97b4bb01U) & unaff_R13D >> 0x1f) + 0xa75bf4c9;
        local_3c = unaff_R13D;
        goto joined_r0x004056c0;
      }
      if (iVar2 != 0x7c236cf3) goto joined_r0x004056c0;
      goto LAB_004056f4;
    }
    if (iVar2 == 0x17e541a9) {
      iVar2 = -0x6631793d;
    }
    else {
      if (iVar2 != 0x2fca5f19) goto joined_r0x004056c0;
      bVar3 = ((byte)local_4c ^ 0xfe) & (byte)local_4c;
      unaff_R15D = local_38 + 1;
      local_58[local_38] = bVar3 & 0x30 | (bVar3 & 0x93 | ~bVar3 & 0x6c) ^ 0x5c;
      *local_48 = *local_48 >> 1;
      iVar2 = -0x5ba6c425;
    }
  }
LAB_004053eb:
  do {
    if (iVar2 < -0x58a40b37) {
      if (iVar2 < -0x644e75a7) {
        if (iVar2 == -0x6cd89f1f) {
          *(undefined8 *)((long)ppuVar5 + -8) = 0x405630;
          putc(10,stdout);
          iVar2 = 0x79d6a21;
          break;
        }
        if (iVar2 == -0x6631793d) {
          uVar4 = ~((DAT_005b7c14 + -1) * DAT_005b7c14) | 0xfffffffe;
          bVar8 = DAT_005b7ba8 < 10 == (uVar4 == 0xffffffff);
          iVar6 = 0x17e541a9;
          iVar7 = 0x7c236cf3;
          goto LAB_0040559b;
        }
      }
      else {
        if (iVar2 == -0x644e75a7) {
          *(undefined8 *)((long)ppuVar5 + -0x18) = 0x4055c1;
          __isoc99_scanf(&DAT_00408020);
          iVar2 = -0x5024c9ad;
          ppuVar5 = (uint **)((long)ppuVar5 + -0x10);
          goto LAB_004053eb;
        }
        if (iVar2 == -0x5ba6c425) {
          local_4c = *local_48;
          bVar8 = local_4c == 0;
          iVar2 = -0xc48057a;
          iVar6 = 0x2fca5f19;
          local_38 = unaff_R15D;
          goto LAB_0040560f;
        }
        if ((iVar2 == -0x5a4db220) && (iVar2 = 0x5adab2e, *local_48 == 0)) {
          iVar2 = -0x349e9ebf;
        }
      }
joined_r0x004056c0:
      if (-0x14de1688 < iVar2) break;
      goto LAB_004053eb;
    }
    if (iVar2 < -0x409e5d41) {
      if (iVar2 != -0x58a40b37) {
        if (iVar2 == -0x5024c9ad) {
          local_68 = (uint *)((long)ppuVar5 + -0x10);
          *(undefined8 *)((long)ppuVar5 + -0x58) = 0x405565;
          local_58 = (undefined1 *)((long)ppuVar5 + -0x50);
          local_48 = local_68;
          iVar2 = __isoc99_scanf(&DAT_00408020,local_68);
          local_33 = iVar2 != 1;
          uVar4 = ~((DAT_005b7c14 + -1) * DAT_005b7c14) | 0xfffffffe;
          bVar8 = DAT_005b7ba8 < 10 == (uVar4 == 0xffffffff);
          iVar6 = -0x644e75a7;
          iVar7 = -0x1a41a074;
          ppuVar5 = (uint **)((long)ppuVar5 + -0x50);
        }
        else {
          if (iVar2 != -0x4546c621) goto joined_r0x004056c0;
          uVar4 = ~((DAT_005b7c14 + -1) * DAT_005b7c14) | 0xfffffffe;
          bVar8 = DAT_005b7ba8 < 10 == (uVar4 == 0xffffffff);
          iVar6 = 0x17e541a9;
          iVar7 = -0x6631793d;
        }
LAB_0040559b:
        if (!bVar8) {
          iVar6 = iVar7;
        }
        iVar2 = iVar6;
        if (uVar4 == 0xffffffff) {
          iVar2 = iVar7;
        }
LAB_00405373:
        if (9 < DAT_005b7ba8) {
          iVar2 = iVar6;
        }
        goto joined_r0x004056c0;
      }
      cVar1 = local_58[local_3c];
      *(undefined8 *)((long)ppuVar5 + -8) = 0x405524;
      putc((int)cVar1,stdout);
      iVar6 = local_3c;
      goto LAB_00405723;
    }
    if (iVar2 == -0x349e9ebf) {
      *(undefined8 *)((long)ppuVar5 + -8) = 0x4055fa;
      puts("0");
LAB_004056f4:
      iVar2 = -0x409e5d41;
      goto LAB_004053eb;
    }
    if (iVar2 != -0x1a41a074) {
      if (iVar2 == -0x409e5d41) {
        return local_68;
      }
      goto joined_r0x004056c0;
    }
    bVar8 = local_33 == '\0';
    iVar2 = -0x5a4db220;
    iVar6 = -0x4546c621;
LAB_0040560f:
    if (!bVar8) {
      iVar2 = iVar6;
    }
  } while (iVar2 < -0x14de1687);
  goto LAB_00405650;
}



/* ===== Function: FUN_00405850 ===== */

/* WARNING: Removing unreachable block (ram,0x00405d02) */
/* WARNING: Removing unreachable block (ram,0x00405d3c) */
/* WARNING: Removing unreachable block (ram,0x00405cc7) */
/* WARNING: Removing unreachable block (ram,0x00405af4) */
/* WARNING: Removing unreachable block (ram,0x00405a9a) */

int * FUN_00405850(void)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int unaff_R12D;
  int unaff_R15D;
  bool bVar8;
  bool bVar9;
  undefined8 auStack_90 [5];
  undefined1 auStack_68 [8];
  undefined4 *local_60;
  int *local_58;
  int local_4c;
  int *local_48;
  int local_40;
  int local_3c;
  int local_38;
  char local_33;
  char local_32;
  char local_31;
  
  piVar6 = (int *)auStack_68;
  local_31 = ((~-DAT_005b7bb8 * DAT_005b7bb8 ^ 0xfffffffeU) & ~-DAT_005b7bb8 * DAT_005b7bb8) == 0;
  local_32 = DAT_005b7bf0 < 10;
  iVar1 = 0x26c65c97;
LAB_00405b70:
  do {
    if (iVar1 < 0x47b01ef5) {
      if (iVar1 < 0x316bbadc) {
        if (iVar1 < 0x2d73aa85) {
          if (iVar1 == 0x26c65c97) {
            iVar1 = 0x8ccec1d;
            if (local_32 != '\0') {
              iVar1 = -0x230dc8a5;
            }
            if (local_31 == '\0') {
              iVar1 = 0x8ccec1d;
            }
            if (local_31 != local_32) {
              iVar1 = -0x230dc8a5;
            }
          }
          else if (iVar1 == 0x1a68caba) {
            return local_58;
          }
        }
        else {
          if (iVar1 == 0x2d73aa85) {
            iVar1 = -0x57a5bd5;
            unaff_R15D = 0;
            goto LAB_004058cb;
          }
          if (iVar1 == 0x2fcd451a) {
            iVar1 = 0x4317aa8d;
            unaff_R12D = 0;
            goto LAB_00405b70;
          }
        }
      }
      else {
        if (iVar1 == 0x316bbadc) {
          uVar4 = *(uint *)(&DAT_0040a070 + (long)local_38 * 4);
          *(undefined8 *)((long)piVar6 + -8) = 0x405d1e;
          printf("%d",(ulong)uVar4);
          unaff_R15D = local_38 + 1;
          iVar1 = -0x57a5bd5;
          goto LAB_004058cb;
        }
        if (iVar1 == 0x346a97bc) {
          uVar4 = (~-DAT_005b7bb8 * DAT_005b7bb8 ^ 0xfffffffeU) & ~-DAT_005b7bb8 * DAT_005b7bb8;
          iVar7 = 0x48cb44b8;
          if (DAT_005b7bf0 < 10 != (uVar4 == 0)) {
            iVar7 = -0x933d717;
          }
          iVar1 = iVar7;
          if (uVar4 == 0) {
            iVar1 = -0x933d717;
          }
          if (9 < DAT_005b7bf0) {
            iVar1 = iVar7;
          }
        }
        else if (iVar1 == 0x4317aa8d) {
          local_3c = *local_48;
          bVar8 = SBORROW4(unaff_R12D,local_3c);
          iVar7 = unaff_R12D - local_3c;
          iVar1 = -0x22ac2319;
          iVar5 = 0x54b712e5;
          local_40 = unaff_R12D;
          goto LAB_00405b62;
        }
      }
joined_r0x00405dde:
      if (iVar1 < 0x1a68caba) {
LAB_004058cb:
        if (iVar1 < -0x22ac2319) {
          if (-0x3a4e2500 < iVar1) {
            if (iVar1 == -0x3a4e24ff) break;
            if (iVar1 != -0x28804f8f) {
              if (iVar1 == -0x230dc8a5) {
                piVar2 = (int *)((long)piVar6 + -0x10);
                *(undefined8 *)((long)piVar6 + -0x18) = 0x405a10;
                local_58 = piVar2;
                local_48 = piVar2;
                iVar1 = __isoc99_scanf("%d",piVar2);
                local_33 = iVar1 != 1;
                uVar4 = (DAT_005b7bb8 + -1) * DAT_005b7bb8;
                uVar4 = (uVar4 ^ 0xfffffffe) & uVar4;
                bVar8 = uVar4 == 0;
                iVar7 = -0x28804f8f;
                iVar1 = 0x8ccec1d;
                if (uVar4 == 0) {
                  iVar1 = -0x28804f8f;
                }
                bVar9 = DAT_005b7bf0 < 10;
                piVar6 = piVar2;
                if (9 < DAT_005b7bf0) {
                  iVar1 = 0x8ccec1d;
                }
                goto LAB_00405a49;
              }
              goto joined_r0x00405dde;
            }
            bVar8 = local_33 == '\0';
            iVar1 = -0x1ac06c6c;
            iVar7 = 0x346a97bc;
            goto LAB_00405b52;
          }
          if (iVar1 == -0x793ddc38) {
            *local_48 = 200000;
            iVar1 = 0x2fcd451a;
            goto LAB_00405b70;
          }
          if (iVar1 != -0x3f26d4a0) goto code_r0x0040595d;
          *local_60 = 0;
          iVar1 = -0x121238f7;
          goto LAB_004058cb;
        }
        if (iVar1 < -0x121238f7) {
          if (iVar1 == -0x22ac2319) {
            bVar9 = false;
            bVar8 = local_3c == 0;
            iVar1 = 0x2d73aa85;
            iVar5 = 0x667abc8c;
            iVar7 = local_3c;
          }
          else {
            if (iVar1 != -0x1d2776c2) {
              if (iVar1 == -0x1ac06c6c) {
                local_4c = *local_48;
                iVar1 = (local_4c >> 0x1f & 0xe2d951c3U) + 0xe2d8893e;
              }
              goto joined_r0x00405dde;
            }
            bVar9 = SBORROW4(local_4c,200000);
            bVar8 = local_4c == 200000;
            iVar1 = 0x2fcd451a;
            iVar5 = -0x793ddc38;
            iVar7 = local_4c + -200000;
          }
          if (!bVar8 && bVar9 == iVar7 < 0) {
            iVar1 = iVar5;
          }
          goto joined_r0x00405dde;
        }
        if (iVar1 < -0x57a5bd5) {
          if (iVar1 != -0x121238f7) {
            if (iVar1 == -0x933d717) {
              uVar4 = (DAT_005b7bb8 + -1) * DAT_005b7bb8;
              uVar4 = (uVar4 ^ 0xfffffffe) & uVar4;
              bVar8 = uVar4 == 0;
              iVar7 = 0x7a1932c9;
              iVar1 = 0x48cb44b8;
              if (uVar4 == 0) {
                iVar1 = 0x7a1932c9;
              }
              bVar9 = DAT_005b7bf0 < 10;
              if (9 < DAT_005b7bf0) {
                iVar1 = 0x48cb44b8;
              }
LAB_00405a49:
              if ((bool)(bVar9 ^ bVar8)) {
                iVar1 = iVar7;
              }
            }
            goto joined_r0x00405dde;
          }
          unaff_R12D = local_40 + 1;
          iVar1 = 0x4317aa8d;
          goto LAB_00405b70;
        }
        if (iVar1 != -0x57a5bd5) {
          if (iVar1 != 0x8ccec1d) goto joined_r0x00405dde;
          *(undefined8 *)((long)piVar6 + -0x18) = 0x405a8a;
          __isoc99_scanf();
          iVar1 = -0x230dc8a5;
          piVar6 = (int *)((long)piVar6 + -0x10);
          goto LAB_004058cb;
        }
        bVar8 = SBORROW4(unaff_R15D,*local_48);
        iVar7 = unaff_R15D - *local_48;
        iVar1 = 0x62f1b0c3;
        iVar5 = -0x3af7a42a;
        local_38 = unaff_R15D;
LAB_00405b62:
        if (bVar8 != iVar7 < 0) {
          iVar1 = iVar5;
        }
        goto joined_r0x00405dde;
      }
      goto LAB_00405b70;
    }
    if (iVar1 < 0x62f1b0c3) {
      if (iVar1 != 0x47b01ef5) {
        if (iVar1 == 0x48cb44b8) {
          iVar1 = -0x933d717;
          goto LAB_004058cb;
        }
        if (iVar1 == 0x54b712e5) {
          lVar3 = (long)local_40;
          local_60 = (undefined4 *)(&DAT_0040a070 + lVar3 * 4);
          *(undefined8 *)((long)piVar6 + -8) = 0x405c0c;
          iVar1 = __isoc99_scanf("%d",&DAT_0040a070 + lVar3 * 4);
          bVar8 = iVar1 == 1;
          iVar1 = -0x121238f7;
          iVar7 = -0x3f26d4a0;
          goto LAB_00405b52;
        }
        goto joined_r0x00405dde;
      }
      *(undefined8 *)((long)piVar6 + -8) = 0x405cdd;
      putc(0x20,stdout);
      iVar1 = 0x316bbadc;
    }
    else {
      if (iVar1 == 0x62f1b0c3) break;
      if (iVar1 == 0x667abc8c) {
        uVar4 = -local_3c;
        *(undefined8 *)((long)piVar6 + -8) = 0x405da2;
        FUN_00406b90(0,~uVar4);
        iVar1 = 0x2d73aa85;
      }
      else {
        if (iVar1 != 0x7a1932c9) goto joined_r0x00405dde;
        iVar1 = 0x1a68caba;
      }
    }
  } while( true );
  *(undefined8 *)((long)piVar6 + -8) = 0x4058bb;
  putc(10,stdout);
  iVar1 = 0x1a68caba;
  goto joined_r0x00405dde;
code_r0x0040595d:
  if (iVar1 == -0x3af7a42a) {
    bVar8 = local_38 == 0;
    iVar1 = 0x316bbadc;
    iVar7 = 0x47b01ef5;
LAB_00405b52:
    if (!bVar8) {
      iVar1 = iVar7;
    }
  }
  goto joined_r0x00405dde;
}



/* ===== Function: FUN_00405e00 ===== */

/* WARNING: Removing unreachable block (ram,0x00405fa1) */
/* WARNING: Removing unreachable block (ram,0x004061f8) */
/* WARNING: Removing unreachable block (ram,0x0040631e) */
/* WARNING: Removing unreachable block (ram,0x004068aa) */
/* WARNING: Removing unreachable block (ram,0x0040622e) */

int * FUN_00405e00(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int unaff_EBP;
  int iVar6;
  int iVar7;
  int iVar8;
  ulong in_R8;
  ulong in_R9;
  int iVar9;
  ulong unaff_R12;
  uint unaff_R13D;
  int *piVar10;
  int unaff_R15D;
  bool bVar11;
  bool bVar12;
  uint local_a8;
  uint local_a4;
  char local_a0;
  char local_9f;
  char local_9e;
  char local_9d;
  int local_9c;
  uint local_98;
  int local_94;
  uint local_90;
  int local_8c;
  uint local_88;
  uint local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  int *local_48;
  int *local_40;
  undefined4 *local_38;
  
  local_48 = &local_9c;
  local_5c = __isoc99_scanf("%d");
  iVar2 = -0x1e1e2c59;
LAB_00406170:
  piVar10 = &local_8c;
  if (iVar2 < -0x2e0dde08) {
    if (-0x53d03701 < iVar2) {
      if (iVar2 != -0x53d03700) {
        if (iVar2 == -0x50121e59) {
          local_40 = piVar10;
          iVar2 = __isoc99_scanf("%d",piVar10);
          local_a0 = iVar2 != 1;
          uVar4 = ~((DAT_005b7bbc + -1) * DAT_005b7bbc) | 0xfffffffe;
          bVar11 = DAT_005b7bf8 < 10 == (uVar4 == 0xffffffff);
          iVar7 = 0x44d253f5;
          iVar8 = 0x5fc8ff52;
          goto LAB_00405e43;
        }
        if (iVar2 != -0x4094cfcc) goto joined_r0x004067b3;
        iVar2 = 0x24313385;
        if (local_7c < 0x30d41) goto joined_r0x004062fb;
        iVar2 = -0x14bc4765;
        goto joined_r0x004062fb;
      }
      unaff_EBP = local_94 + 1;
      iVar2 = -0x29a1468d;
      goto LAB_00406170;
    }
    if (iVar2 != -0x761da2e2) {
      if (iVar2 != -0x60785142) {
        if (iVar2 != -0x5d0c2b15) goto joined_r0x004067b3;
        iVar2 = 0x47d2263f;
        goto LAB_00405eab;
      }
      local_8c = 0;
      iVar2 = -0x2e0dde08;
      goto LAB_00406170;
    }
    local_9c = 200000;
    iVar2 = 0x5dd504db;
  }
  else {
    if (-0x264f8b9a < iVar2) {
      if (iVar2 < -0x14bc4765) {
        if (iVar2 == -0x264f8b99) {
          uVar4 = ~(~-DAT_005b7bbc * DAT_005b7bbc) | 0xfffffffe;
          bVar11 = DAT_005b7bf8 < 10 == (uVar4 == 0xffffffff);
          iVar7 = 0x44d253f5;
          iVar8 = -0x50121e59;
          goto LAB_00405e43;
        }
        if (iVar2 != -0x1e1e2c59) goto joined_r0x004067b3;
        bVar11 = local_5c == 1;
        iVar2 = 0x64946349;
        iVar7 = -0x2711fb7d;
        goto LAB_004061b0;
      }
      if (iVar2 != -0x14bc4765) {
        if (iVar2 != -0x1408cbb2) goto joined_r0x004067b3;
        local_38 = (undefined4 *)(&DAT_004cd570 + (long)local_94 * 4);
        iVar2 = __isoc99_scanf("%d",local_38);
        local_9f = iVar2 != 1;
        bVar11 = (~((DAT_005b7bbc + -1) * DAT_005b7bbc) | 0xfffffffeU) == 0xffffffff;
        iVar2 = 0x35130160;
        if (bVar11) {
          iVar2 = 0x1975839b;
        }
        if (9 < DAT_005b7bf8) {
          iVar2 = 0x35130160;
        }
        if (DAT_005b7bf8 < 10 == bVar11) goto joined_r0x004062fb;
        iVar2 = 0x1975839b;
        goto joined_r0x004062fb;
      }
      uVar4 = (DAT_005b7bbc + -1) * DAT_005b7bbc;
      uVar4 = (uVar4 ^ 0xfffffffe) & uVar4;
      bVar11 = DAT_005b7bf8 < 10 == (uVar4 == 0);
      iVar7 = -0x761da2e2;
      iVar8 = 0x5dd504db;
      goto LAB_0040685c;
    }
    if (iVar2 != -0x2e0dde08) {
      if (iVar2 == -0x29a1468d) {
        iVar2 = -0x264f8b99;
        local_94 = unaff_EBP;
        if (local_9c <= unaff_EBP) goto joined_r0x004067b3;
        iVar2 = 0x2d01a2ca;
        goto joined_r0x004067b3;
      }
      if (iVar2 != -0x2711fb7d) goto joined_r0x004067b3;
      goto LAB_0040621e;
    }
    local_80 = local_8c;
    uVar4 = (DAT_005b7b94 + -1) * DAT_005b7b94;
    bVar12 = ((uVar4 ^ 0xfffffffe) & uVar4) == 0;
    bVar11 = DAT_005b7c18 < 10;
    bVar1 = bVar11 != bVar12;
    iVar2 = -0x255e6bae;
    if (bVar1 || bVar11 && bVar12) {
      iVar2 = -0x79766416;
    }
    local_60 = -0x255e6bae;
    if (bVar1 || bVar11 && bVar12) {
      local_60 = -0x4ed6467d;
    }
    local_64 = 0x5ed077ca;
    if (bVar1 || bVar11 && bVar12) {
      local_64 = -0x5492f661;
    }
    local_68 = 0x5ed077ca;
    if (bVar1 || bVar11 && bVar12) {
      local_68 = 0x3ae31e88;
    }
    iVar7 = -0x111c17be;
    if (bVar1 || bVar11 && bVar12) {
      iVar7 = -0x7dd444ba;
    }
    iVar8 = -0x111c17be;
    if (bVar1 || bVar11 && bVar12) {
      iVar8 = 0x62327e3;
    }
    iVar6 = 0x63605b90;
    if (bVar1 || bVar11 && bVar12) {
      iVar6 = 0x5c0ab901;
    }
    iVar5 = 0x63605b90;
    if (bVar1 || bVar11 && bVar12) {
      iVar5 = -0x5c181d5d;
    }
    local_84 = 0;
    local_90 = 0xa3e7e2a3;
    local_88 = 0xa3e7e2a3;
    iVar3 = -0x59ffaa0b;
    uVar4 = local_9c - 1;
    do {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while (iVar9 = iVar3, iVar3 = iVar9, -0x46979a90 < iVar9) {
                if (iVar9 < 0x2264f7d0) {
                  if (iVar9 < -0x1ecd84df) {
                    if (iVar9 == -0x46979a8f) {
                      iVar3 = -0x5129cbf1;
                      if (local_78 < local_8c) {
                        iVar3 = 0x566d8722;
                      }
                    }
                    else if (iVar9 == -0x255e6bae) {
                      iVar3 = -0x79766416;
                    }
                  }
                  else {
                    iVar3 = iVar2;
                    if (iVar9 != -0x1ecd84df) {
                      if (iVar9 == -0x111c17be) {
                        iVar3 = -0x7dd444ba;
                      }
                      else {
                        iVar3 = iVar9;
                        if (iVar9 == 0x62327e3) {
                          iVar3 = -0x6019f4e8;
                          if (local_9d != '\0') {
                            iVar3 = -0x59ffaa0b;
                          }
                          local_84 = local_4c;
                          local_88 = local_70;
                          local_90 = local_70;
                          uVar4 = local_50;
                        }
                      }
                    }
                  }
                }
                else if (iVar9 < 0x5c0ab901) {
                  iVar3 = iVar6;
                  if (iVar9 != 0x2264f7d0) {
                    if (iVar9 == 0x3ae31e88) {
                      unaff_R12 = (ulong)local_58;
                      piVar10 = (int *)(ulong)local_a4;
                      iVar3 = -0x6ecb24e8;
                    }
                    else {
                      iVar3 = iVar9;
                      if (iVar9 == 0x566d8722) {
                        iVar3 = local_64;
                      }
                    }
                  }
                }
                else {
                  iVar3 = iVar5;
                  if (iVar9 != 0x5c0ab901) {
                    if (iVar9 == 0x5ed077ca) {
                      iVar3 = -0x5492f661;
                    }
                    else {
                      iVar3 = iVar9;
                      if (iVar9 == 0x63605b90) {
                        iVar3 = 0x5c0ab901;
                      }
                    }
                  }
                }
              }
              if (iVar9 < -0x59ffaa0b) break;
              if (iVar9 < -0x546075fe) {
                if (iVar9 == -0x59ffaa0b) {
                  local_54 = local_88;
                  local_a8 = local_84;
                  iVar3 = 0x2264f7d0;
                  local_a4 = uVar4;
                  if ((int)local_84 <= (int)uVar4) {
                    iVar3 = -0x1ecd84df;
                  }
                }
                else if (iVar9 == -0x5492f661) {
                  local_58 = local_98 + 1;
                  iVar3 = local_68;
                }
              }
              else if (iVar9 == -0x546075fe) {
                local_50 = (uint)in_R9;
                local_4c = (uint)in_R8;
                iVar3 = iVar7;
                local_74 = unaff_R15D;
                local_70 = unaff_R13D;
              }
              else if (iVar9 == -0x5129cbf1) {
                piVar10 = (int *)(ulong)(local_98 - 1);
                unaff_R12 = (ulong)local_a8;
                iVar3 = -0x6ecb24e8;
              }
              else if ((iVar9 == -0x4ed6467d) && (iVar3 = -0x46979a8f, local_9e != '\0')) {
                iVar3 = -0x7c221872;
              }
            }
            if (-0x6ecb24e9 < iVar9) break;
            if (iVar9 == -0x7dd444ba) {
              local_9d = local_74 == 0;
              iVar3 = iVar8;
            }
            else if (iVar9 == -0x7c221872) {
              in_R8 = (ulong)local_a8;
              unaff_R15D = 1;
              in_R9 = (ulong)local_a4;
              iVar3 = -0x546075fe;
              unaff_R13D = local_98;
            }
            else if (iVar9 == -0x79766416) {
              iVar3 = (local_a4 + 0x37d516b6) - local_a8;
              local_98 = ((iVar3 + -0x37d516b6) - (iVar3 + -0x37d516b6 >> 0x1f) >> 1) + local_a8;
              local_78 = *(int *)(&DAT_004cd570 + (long)(int)local_98 * 4);
              local_9e = local_78 == local_8c;
              iVar3 = local_60;
            }
          }
          if (iVar9 != -0x6ecb24e8) break;
          unaff_R15D = 0;
          in_R9 = (ulong)piVar10 & 0xffffffff;
          in_R8 = unaff_R12 & 0xffffffff;
          iVar3 = -0x546075fe;
          unaff_R13D = local_54;
        }
        if (iVar9 != -0x5c181d5d) break;
        local_90 = 0xffffffff;
        iVar3 = -0x6019f4e8;
      }
    } while (iVar9 != -0x6019f4e8);
    local_6c = unaff_EBP;
    printf("%d\n",(ulong)local_90);
    iVar2 = -0x6d3007b;
    unaff_EBP = local_6c;
  }
LAB_00405eab:
  do {
    while (iVar2 < 0x47d2263f) {
      if (iVar2 < 0x35130160) {
        if (iVar2 < 0x24313385) {
          if (iVar2 == 0x1975839b) {
            bVar11 = local_9f == '\0';
            iVar2 = -0x53d03700;
            iVar7 = 0x47a66fe1;
            goto LAB_004061b0;
          }
          if (iVar2 == -0x6d3007b) {
            return local_48;
          }
        }
        else if (iVar2 == 0x24313385) {
          uVar4 = (DAT_005b7bbc + -1) * DAT_005b7bbc;
          uVar4 = (uVar4 ^ 0xfffffffe) & uVar4;
          bVar11 = DAT_005b7bf8 < 10 == (uVar4 == 0);
          iVar7 = -0x5d0c2b15;
          iVar8 = 0x47d2263f;
LAB_0040685c:
          if (!bVar11) {
            iVar7 = iVar8;
          }
          iVar2 = iVar7;
          if (uVar4 == 0) {
            iVar2 = iVar8;
          }
          if (9 < DAT_005b7bf8) {
            iVar2 = iVar7;
          }
        }
        else if (iVar2 == 0x2d01a2ca) {
          uVar4 = ~((DAT_005b7bbc + -1) * DAT_005b7bbc) | 0xfffffffe;
          bVar11 = DAT_005b7bf8 < 10 == (uVar4 == 0xffffffff);
          iVar7 = 0x35130160;
          iVar8 = -0x1408cbb2;
LAB_00405e43:
          if (!bVar11) {
            iVar7 = iVar8;
          }
          iVar2 = iVar7;
          if (uVar4 == 0xffffffff) {
            iVar2 = iVar8;
          }
          if (9 < DAT_005b7bf8) {
            iVar2 = iVar7;
          }
        }
      }
      else {
        if (iVar2 == 0x35130160) {
          __isoc99_scanf("%d",&DAT_004cd570 + (long)local_94 * 4);
          iVar2 = -0x1408cbb2;
          goto LAB_00406170;
        }
        if (iVar2 == 0x44d253f5) {
          __isoc99_scanf("%d",&local_8c);
          iVar2 = -0x50121e59;
          goto LAB_00406170;
        }
        if (iVar2 == 0x47a66fe1) {
          *local_38 = 0;
          iVar2 = -0x53d03700;
          goto LAB_00406170;
        }
      }
joined_r0x004067b3:
      if (iVar2 < -0x6d3007b) goto LAB_00406170;
    }
    if (iVar2 < 0x5fc8ff52) {
      if (iVar2 == 0x47d2263f) {
        uVar4 = (DAT_005b7bbc + -1) * DAT_005b7bbc;
        uVar4 = (uVar4 ^ 0xfffffffe) & uVar4;
        iVar7 = 0x696e648e;
        iVar2 = -0x5d0c2b15;
        if (uVar4 == 0) {
          iVar2 = 0x696e648e;
        }
        iVar8 = -0x5d0c2b15;
      }
      else {
        if (iVar2 != 0x5dd504db) {
          if (iVar2 != 0x5de67170) goto joined_r0x004067b3;
          iVar2 = 0x24313385;
          goto LAB_00405eab;
        }
        local_9c = 200000;
        uVar4 = (DAT_005b7bbc + -1) * DAT_005b7bbc;
        uVar4 = (uVar4 ^ 0xfffffffe) & uVar4;
        iVar7 = 0x5de67170;
        iVar2 = -0x761da2e2;
        if (uVar4 == 0) {
          iVar2 = 0x5de67170;
        }
        iVar8 = -0x761da2e2;
      }
      if (9 < DAT_005b7bf8) {
        iVar2 = iVar8;
      }
      if (DAT_005b7bf8 < 10 != (uVar4 == 0)) {
        iVar2 = iVar7;
      }
      goto joined_r0x004067b3;
    }
    if (0x696e648d < iVar2) {
      if (iVar2 == 0x696e648e) {
        iVar2 = -0x29a1468d;
        unaff_EBP = 0;
        break;
      }
      if (iVar2 != 0x7317bae4) goto joined_r0x004067b3;
      puts("-1");
LAB_0040621e:
      iVar2 = -0x6d3007b;
      goto LAB_00405eab;
    }
    if (iVar2 != 0x5fc8ff52) {
      if (iVar2 == 0x64946349) {
        local_7c = local_9c;
        iVar2 = -0x4094cfcd - (~(local_9c >> 0x1f) | 0x4c53754fU);
      }
      goto joined_r0x004067b3;
    }
    bVar11 = local_a0 == '\0';
    iVar2 = -0x2e0dde08;
    iVar7 = -0x60785142;
LAB_004061b0:
    if (!bVar11) {
      iVar2 = iVar7;
    }
joined_r0x004062fb:
  } while (-0x6d3007c < iVar2);
  goto LAB_00406170;
}



/* ===== Function: FUN_004068d0 ===== */

/* WARNING: Removing unreachable block (ram,0x00406ada) */

uint FUN_004068d0(uint param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  char local_3e;
  char local_3d;
  uint local_3c;
  
  uVar5 = ~((DAT_005b7b74 + -1) * DAT_005b7b74) | 0xfffffffe;
  iVar2 = -0x27c772dc;
  if (DAT_005b7bd4 < 10 != (uVar5 == 0xffffffff)) {
    iVar2 = -0x203c92e7;
  }
  bVar9 = uVar5 == 0xffffffff;
  iVar8 = -0x203c92e7;
  if (!bVar9) {
    iVar8 = iVar2;
  }
  if (9 < DAT_005b7bd4) {
    iVar8 = iVar2;
  }
  bVar1 = 9 < DAT_005b7bd0;
  bVar10 = (~((DAT_005b7b80 + -1) * DAT_005b7b80) | 0xfffffffeU) != 0xffffffff;
  iVar2 = 0x6440d920;
  if ((bVar1 || bVar10) && bVar1 == bVar10) {
    iVar2 = 0x1c751f12;
  }
  iVar7 = 0x272e4541;
  if ((bVar1 || bVar10) && bVar1 == bVar10) {
    iVar7 = 0x1c751f12;
  }
  uVar3 = ((int)param_1 / 100) * 100;
  iVar6 = -0x124b68b4;
  uVar5 = uVar3;
LAB_004069e0:
  do {
    iVar4 = iVar6;
    if (iVar4 < -0x203c92e7) {
      iVar6 = -0x7b18eb73;
      if (iVar4 != -0x27c772dc) {
        if (iVar4 != -0x7b18eb73) {
          if (iVar4 == -0x79af4e78) {
            do {
              do {
                iVar6 = -0x5c694da1;
                if ((int)param_1 % 400 == 0) {
                  iVar6 = -0x6c77a577;
                }
                bVar1 = true;
              } while (iVar6 == -0x97f5323);
              do {
                while( true ) {
                  while( true ) {
                    while (iVar4 = iVar6, iVar4 < 0x1c751f12) {
                      iVar6 = iVar2;
                      if (iVar4 != -0x5c694da1) {
                        if (iVar4 == -0x6c77a577) {
                          iVar6 = 0x120ae034;
                          uVar5 = bVar1 + local_3c;
                          goto LAB_004069e0;
                        }
                        if (iVar4 != -0x4e1c7188) goto LAB_00406b80;
                        iVar6 = -0x6c77a577;
                        bVar1 = param_1 != uVar3;
                      }
                    }
                    if (iVar4 != 0x1c751f12) break;
                    iVar6 = 0x6440d920;
                  }
                  if (iVar4 != 0x6440d920) break;
                  local_3d = ((param_1 ^ 0xfffffffc) & param_1) == 0;
                  iVar6 = iVar7;
                }
                if (iVar4 != 0x272e4541) {
LAB_00406b80:
                  do {
                    /* WARNING: Do nothing block with infinite loop */
                  } while( true );
                }
                iVar6 = -0x6c77a577;
                if (local_3d != '\0') {
                  iVar6 = -0x4e1c7188;
                }
                bVar1 = false;
              } while (iVar6 != -0x97f5323);
            } while( true );
          }
LAB_00406b70:
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        local_3e = param_2 == 2;
        local_3c = *(uint *)(&DAT_00408070 + (long)(param_2 + -1) * 4);
        iVar6 = iVar8;
      }
      goto LAB_004069e0;
    }
    if (iVar4 < -0x124b68b4) {
      if (iVar4 != -0x203c92e7) goto LAB_00406b70;
      iVar6 = 0x43aef469;
      if (local_3e != '\0') {
        iVar6 = -0x79af4e78;
      }
    }
    else if (iVar4 == -0x124b68b4) {
      iVar4 = -0x27c772dc;
      if (bVar9 != DAT_005b7bd4 < 10) {
        iVar4 = -0x7b18eb73;
      }
      iVar6 = iVar4;
      if (DAT_005b7bd4 < 10) {
        iVar6 = -0x7b18eb73;
      }
      if (!bVar9) {
        iVar6 = iVar4;
      }
    }
    else {
      if (iVar4 == 0x120ae034) {
        return uVar5;
      }
      if (iVar4 != 0x43aef469) goto LAB_00406b70;
      iVar6 = 0x120ae034;
      uVar5 = local_3c;
    }
  } while( true );
}



/* ===== Function: FUN_00406b90 ===== */

/* WARNING: Removing unreachable block (ram,0x00406e09) */
/* WARNING: Removing unreachable block (ram,0x00406cfa) */

void FUN_00406b90(int param_1,int param_2)

{
  int iVar1;
  undefined8 in_RAX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uStack_38;
  
  uVar2 = (DAT_005b7b7c + -1) * DAT_005b7b7c;
  uStack_38._7_1_ = (char)((ulong)in_RAX >> 0x38);
  uStack_38 = (ulong)CONCAT12(uStack_38._7_1_,
                              CONCAT11(DAT_005b7bc4 < 10,((uVar2 ^ 0xfffffffe) & uVar2) == 0)) <<
              0x28;
  uVar2 = 0x4223a1d8;
LAB_00406d20:
  do {
    while (0x4223a1d7 < (int)uVar2) {
      if (uVar2 == 0x5cfd0036) {
        uVar2 = 0x1b97148e;
        goto LAB_00406c1b;
      }
      if (uVar2 != 0x4223a1d8) goto joined_r0x00406c15;
      uVar2 = 0x26dc26e3;
      if (uStack_38._6_1_ != '\0') {
        uVar2 = 0xf95d696a;
      }
      if (uStack_38._5_1_ == '\0') {
        uVar2 = 0x26dc26e3;
      }
      if (uStack_38._5_1_ != uStack_38._6_1_) {
        uVar2 = 0xf95d696a;
      }
      if ((int)uVar2 < 0x38ef0323) goto LAB_00406c1b;
    }
    if (uVar2 != 0x38ef0323) {
      if (uVar2 != 0x3b86a3e9) goto joined_r0x00406c15;
      iVar1 = FUN_00406e20(param_1,param_2);
      FUN_00406b90(param_1,iVar1 + -1);
      FUN_00406b90(iVar1 + 1,param_2);
      uVar2 = 0x38ef0323;
      goto joined_r0x00406c15;
    }
    iVar1 = FUN_00406e20(param_1,param_2);
    FUN_00406b90(param_1,~-iVar1);
    FUN_00406b90(iVar1 + 1,param_2);
    uVar3 = (DAT_005b7b7c + -1) * DAT_005b7b7c;
    uVar3 = (uVar3 ^ 0xfffffffe) & uVar3;
    uVar2 = 0x3b86a3e9;
    if (uVar3 == 0) {
      uVar2 = 0x5cfd0036;
    }
    if (9 < DAT_005b7bc4) {
      uVar2 = 0x3b86a3e9;
    }
    if (DAT_005b7bc4 < 10 != (uVar3 == 0)) {
      uVar2 = 0x5cfd0036;
    }
    while (uVar2 < 0x38ef0323) {
LAB_00406c1b:
      while( true ) {
        while (0x3899982 < (int)uVar2) {
          if (uVar2 == 0x3899983) {
            uVar3 = (DAT_005b7b7c + -1) * DAT_005b7b7c;
            uVar3 = (uVar3 ^ 0xfffffffe) & uVar3;
            uVar4 = 0x3b86a3e9;
            if (DAT_005b7bc4 < 10 != (uVar3 == 0)) {
              uVar4 = 0x38ef0323;
            }
            uVar2 = uVar4;
            if (uVar3 == 0) {
              uVar2 = 0x38ef0323;
            }
            if (9 < DAT_005b7bc4) {
              uVar2 = uVar4;
            }
            if (0x38ef0322 < uVar2) goto LAB_00406d20;
          }
          else {
            if (uVar2 != 0x26dc26e3) {
              if (uVar2 == 0x1b97148e) {
                return;
              }
              goto joined_r0x00406c15;
            }
            uVar2 = 0xf95d696a;
          }
        }
        if (uVar2 == 0xbafe79e6) break;
        if (uVar2 == 0xf95d696a) {
          uStack_38 = CONCAT17(param_1 < param_2,(undefined7)uStack_38);
          bVar5 = (~((DAT_005b7b7c + -1) * DAT_005b7b7c) | 0xfffffffeU) == 0xffffffff;
          uVar2 = 0x26dc26e3;
          if (bVar5) {
            uVar2 = 0xbafe79e6;
          }
          if (9 < DAT_005b7bc4) {
            uVar2 = 0x26dc26e3;
          }
          if (DAT_005b7bc4 < 10 != bVar5) {
            uVar2 = 0xbafe79e6;
          }
        }
joined_r0x00406c15:
        if (0x38ef0322 < (int)uVar2) goto LAB_00406d20;
      }
      uVar2 = 0x1b97148e;
      if (uStack_38._7_1_ != '\0') {
        uVar2 = 0x3899983;
      }
    }
  } while( true );
}



/* ===== Function: FUN_00406e20 ===== */

/* WARNING: Removing unreachable block (ram,0x00406f6e) */
/* WARNING: Removing unreachable block (ram,0x00406e6c) */
/* WARNING: Removing unreachable block (ram,0x00407056) */
/* WARNING: Removing unreachable block (ram,0x004070c4) */

void FUN_00406e20(int param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_EBP;
  long lVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  int local_50;
  int local_4c;
  int *local_38;
  
  piVar1 = (int *)(&DAT_0040a070 + (long)param_2 * 4);
  iVar5 = *piVar1;
  iVar4 = 0x4afc9adf;
  iVar3 = param_1 + -1;
LAB_00406e9f:
  do {
    if (iVar4 == 0x4afc9adf) {
      iVar4 = -0x7b2a170b;
      local_4c = iVar3;
      local_50 = param_1;
      if (param_1 < param_2) {
        iVar4 = 0x5d024552;
      }
    }
    else {
      if (iVar4 == 0x59fec0c5) {
        param_1 = local_50 + 1;
        iVar4 = 0x4afc9adf;
        iVar3 = unaff_EBP;
        goto LAB_00406e9f;
      }
      if (iVar4 != 0x5d024552) goto LAB_00407060;
      local_38 = (int *)(&DAT_0040a070 + (long)local_50 * 4);
      iVar4 = 0x59fec0c5;
      unaff_EBP = local_4c;
      if (*local_38 <= iVar5) {
        iVar4 = -0xd467120;
      }
    }
    if (iVar4 < 0x4afc9adf) {
      if (iVar4 == -0x7b2a170b) {
        lVar6 = (long)(local_4c + 1);
        uVar7 = (DAT_005b7be4 + -1) * DAT_005b7be4;
        bVar8 = ((uVar7 ^ 0xfffffffe) & uVar7) == 0;
        bVar2 = DAT_005b7c30 < 10;
        iVar5 = 0x495204cc;
        do {
          if (iVar5 != -0x2928eb98) {
            if (iVar5 == 0x495204cc) {
              iVar5 = -0x2928eb98;
              if (bVar2) {
                iVar5 = 0x5046d8ea;
              }
              if (!bVar8) {
                iVar5 = -0x2928eb98;
              }
              if (bVar8 == bVar2) goto joined_r0x0040712e;
              iVar5 = 0x5046d8ea;
              goto joined_r0x0040712e;
            }
LAB_004071a0:
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          iVar5 = *(int *)(&DAT_0040a070 + lVar6 * 4);
          *(int *)(&DAT_0040a070 + lVar6 * 4) = *piVar1;
          *piVar1 = iVar5;
          iVar5 = 0x5046d8ea;
          do {
            if (iVar5 != 0x5046d8ea) {
              if (iVar5 == 0x4eef78fb) {
                return;
              }
              goto LAB_004071a0;
            }
            iVar5 = *(int *)(&DAT_0040a070 + lVar6 * 4);
            *(int *)(&DAT_0040a070 + lVar6 * 4) = *piVar1;
            *piVar1 = iVar5;
            bVar9 = (~((DAT_005b7be4 + -1) * DAT_005b7be4) | 0xfffffffeU) == 0xffffffff;
            iVar5 = -0x2928eb98;
            if (bVar9) {
              iVar5 = 0x4eef78fb;
            }
            if (9 < DAT_005b7c30) {
              iVar5 = -0x2928eb98;
            }
            if (DAT_005b7c30 < 10 != bVar9) {
              iVar5 = 0x4eef78fb;
            }
joined_r0x0040712e:
          } while (0x4eef78fa < iVar5);
        } while( true );
      }
      if (iVar4 == -0xd467120) {
        unaff_EBP = local_4c + 1;
        lVar6 = (long)unaff_EBP;
        uVar7 = (DAT_005b7be4 + -1) * DAT_005b7be4;
        bVar8 = ((uVar7 ^ 0xfffffffe) & uVar7) == 0;
        bVar2 = DAT_005b7c30 < 10;
        iVar4 = 0x495204cc;
        do {
          if (iVar4 != -0x2928eb98) {
            if (iVar4 == 0x495204cc) {
              iVar4 = -0x2928eb98;
              if (bVar2) {
                iVar4 = 0x5046d8ea;
              }
              if (!bVar8) {
                iVar4 = -0x2928eb98;
              }
              if (bVar8 == bVar2) goto joined_r0x00406fd2;
              iVar4 = 0x5046d8ea;
              goto joined_r0x00406fd2;
            }
LAB_00407070:
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          iVar4 = *(int *)(&DAT_0040a070 + lVar6 * 4);
          *(int *)(&DAT_0040a070 + lVar6 * 4) = *local_38;
          *local_38 = iVar4;
          iVar4 = 0x5046d8ea;
          do {
            if (iVar4 != 0x5046d8ea) {
              if (iVar4 != 0x4eef78fb) goto LAB_00407070;
              iVar4 = 0x59fec0c5;
              goto LAB_00406e9f;
            }
            iVar4 = *(int *)(&DAT_0040a070 + lVar6 * 4);
            *(int *)(&DAT_0040a070 + lVar6 * 4) = *local_38;
            *local_38 = iVar4;
            bVar9 = (~((DAT_005b7be4 + -1) * DAT_005b7be4) | 0xfffffffeU) == 0xffffffff;
            iVar4 = -0x2928eb98;
            if (bVar9) {
              iVar4 = 0x4eef78fb;
            }
            if (9 < DAT_005b7c30) {
              iVar4 = -0x2928eb98;
            }
            if (DAT_005b7c30 < 10 != bVar9) {
              iVar4 = 0x4eef78fb;
            }
joined_r0x00406fd2:
          } while (0x4eef78fa < iVar4);
        } while( true );
      }
LAB_00407060:
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
  } while( true );
}



/* ===== Function: FUN_004071b0 ===== */

/* WARNING: Removing unreachable block (ram,0x0040727a) */
/* WARNING: Removing unreachable block (ram,0x004072c4) */

int * FUN_004071b0(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *unaff_R15;
  bool bVar7;
  int *local_40;
  int *local_38;
  
  iVar5 = -0x5bbd8e3;
  if (param_1 != (int *)0x0) {
    iVar5 = 0x657d7db3;
  }
  iVar1 = 0x150f9163;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar6 = iVar1, iVar1 = iVar6, -0x5bbd8e4 < iVar6) {
            if (iVar6 < 0x657d7db3) {
              if (iVar6 == -0x5bbd8e3) {
                uVar4 = (DAT_005b7be0 + -1) * DAT_005b7be0;
                uVar4 = (uVar4 ^ 0xfffffffe) & uVar4;
                iVar1 = -0x3fb39a4c;
                if (uVar4 == 0) {
                  iVar1 = 0x3f4c09e4;
                }
                if (9 < DAT_005b7c3c) {
                  iVar1 = -0x3fb39a4c;
                }
                if (DAT_005b7c3c < 10 != (uVar4 == 0)) {
                  iVar1 = 0x3f4c09e4;
                }
              }
              else {
                iVar1 = iVar5;
                if ((iVar6 != 0x150f9163) && (iVar1 = iVar6, iVar6 == 0x3f4c09e4)) {
                  local_40 = (int *)malloc(0x18);
                  iVar1 = 0x40dfb0fb;
                  do {
                    if (iVar1 != 0x40dfb0fb) {
                      if (iVar1 != 0x3d2f14e) {
                        do {
                    /* WARNING: Do nothing block with infinite loop */
                        } while( true );
                      }
                    /* WARNING: Subroutine does not return */
                      exit(1);
                    }
                    iVar1 = 0x3d2f14e;
                    if (local_40 != (int *)0x0) {
                      iVar1 = -0x4c431d1;
                    }
                  } while (iVar1 != -0x4c431d1);
                  *local_40 = param_2;
                  local_40[2] = 0;
                  local_40[3] = 0;
                  local_40[4] = 0;
                  local_40[5] = 0;
                  uVar4 = (DAT_005b7be0 + -1) * DAT_005b7be0;
                  uVar4 = (uVar4 ^ 0xfffffffe) & uVar4;
                  iVar1 = -0x3fb39a4c;
                  if (uVar4 == 0) {
                    iVar1 = -0x245a53f3;
                  }
                  if (9 < DAT_005b7c3c) {
                    iVar1 = -0x3fb39a4c;
                  }
                  if (DAT_005b7c3c < 10 != (uVar4 == 0)) {
                    iVar1 = -0x245a53f3;
                  }
                }
              }
            }
            else if (iVar6 == 0x657d7db3) {
              iVar1 = -0x6dd94591;
              if (param_2 < *param_1) {
                iVar1 = -0x9919273;
              }
            }
            else if (iVar6 == 0x66806087) {
              iVar1 = -0x63f261b8;
            }
            else if (iVar6 == 0x6c134546) {
              unaff_R15 = param_1;
              iVar1 = -0x3704f6b9;
            }
          }
          if (-0x3704f6ba < iVar6) break;
          if (iVar6 == -0x6dd94591) {
            uVar3 = FUN_004071b0(*(undefined8 *)(param_1 + 4),param_2);
            *(undefined8 *)(param_1 + 4) = uVar3;
            iVar1 = 0x6c134546;
          }
          else if (iVar6 == -0x63f261b8) {
            bVar7 = (~(~-DAT_005b7be0 * DAT_005b7be0) | 0xfffffffeU) == 0xffffffff;
            iVar1 = 0x66806087;
            if (bVar7) {
              iVar1 = -0x14972864;
            }
            if (9 < DAT_005b7c3c) {
              iVar1 = 0x66806087;
            }
            if (DAT_005b7c3c < 10 != bVar7) {
              iVar1 = -0x14972864;
            }
          }
          else if (iVar6 == -0x3fb39a4c) {
            piVar2 = (int *)malloc(0x18);
            iVar1 = 0x40dfb0fb;
            do {
              if (iVar1 != 0x40dfb0fb) {
                if (iVar1 != 0x3d2f14e) {
                  do {
                    /* WARNING: Do nothing block with infinite loop */
                  } while( true );
                }
                    /* WARNING: Subroutine does not return */
                exit(1);
              }
              iVar1 = 0x3d2f14e;
              if (piVar2 != (int *)0x0) {
                iVar1 = -0x4c431d1;
              }
            } while (iVar1 != -0x4c431d1);
            *piVar2 = param_2;
            piVar2[2] = 0;
            piVar2[3] = 0;
            piVar2[4] = 0;
            piVar2[5] = 0;
            iVar1 = 0x3f4c09e4;
          }
        }
        if (-0x14972865 < iVar6) break;
        if (iVar6 == -0x3704f6b9) {
          uVar4 = ~((DAT_005b7be0 + -1) * DAT_005b7be0) | 0xfffffffe;
          iVar6 = 0x66806087;
          if (DAT_005b7c3c < 10 != (uVar4 == 0xffffffff)) {
            iVar6 = -0x63f261b8;
          }
          iVar1 = iVar6;
          if (uVar4 == 0xffffffff) {
            iVar1 = -0x63f261b8;
          }
          local_38 = unaff_R15;
          if (9 < DAT_005b7c3c) {
            iVar1 = iVar6;
          }
        }
        else if (iVar6 == -0x245a53f3) {
          unaff_R15 = local_40;
          iVar1 = -0x3704f6b9;
        }
      }
      if (iVar6 != -0x9919273) break;
      uVar3 = FUN_004071b0(*(undefined8 *)(param_1 + 2),param_2);
      *(undefined8 *)(param_1 + 2) = uVar3;
      iVar1 = 0x6c134546;
    }
  } while (iVar6 != -0x14972864);
  return local_38;
}



/* ===== Function: FUN_00407580 ===== */

void FUN_00407580(uint *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0x340a3d26;
  if (param_1 != (uint *)0x0) {
    iVar3 = 0x29f9b020;
  }
  iVar1 = -0x5140b67f;
  while( true ) {
    do {
      iVar2 = iVar1;
      iVar1 = iVar3;
    } while (iVar2 == -0x5140b67f);
    if (iVar2 != 0x29f9b020) break;
    FUN_00407580(*(undefined8 *)(param_1 + 2));
    printf("%d ",(ulong)*param_1);
    FUN_00407580(*(undefined8 *)(param_1 + 4));
    iVar1 = 0x340a3d26;
  }
  if (iVar2 == 0x340a3d26) {
    return;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ===== Function: FUN_00407600 ===== */

void FUN_00407600(uint *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0x53ac4aee;
  if (param_1 != (uint *)0x0) {
    iVar3 = -0x633e734c;
  }
  iVar1 = 0x3cbd6675;
  do {
    while (iVar2 = iVar1, iVar2 == -0x633e734c) {
      printf("%d ",(ulong)*param_1);
      FUN_00407600(*(undefined8 *)(param_1 + 2));
      FUN_00407600(*(undefined8 *)(param_1 + 4));
      iVar1 = 0x53ac4aee;
    }
    iVar1 = iVar3;
  } while (iVar2 == 0x3cbd6675);
  if (iVar2 == 0x53ac4aee) {
    return;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ===== Function: FUN_00407680 ===== */

void FUN_00407680(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0xbb9f69a1;
  if (param_1 != (uint *)0x0) {
    uVar4 = 0x9e085808;
  }
  uVar1 = 0xff590ca5;
  while( true ) {
    while( true ) {
      while (uVar2 = uVar1 & 0x7fffffff, 0x62f47187 < uVar2) {
        uVar1 = uVar4;
        if (uVar2 != 0x7f590ca5) {
          if (uVar2 == 0x62f47188) {
            uVar1 = 0xbb9f69a1;
          }
          else {
            if (uVar2 != 0x6f3811d6) goto LAB_004077f0;
            FUN_00407680(*(undefined8 *)(param_1 + 2));
            FUN_00407680(*(undefined8 *)(param_1 + 4));
            printf("%d ",(ulong)*param_1);
            uVar1 = 0xd238890f;
          }
        }
      }
      if (uVar2 != 0x1e085808) break;
      uVar2 = ~((DAT_005b7c00 + -1) * DAT_005b7c00) | 0xfffffffe;
      uVar3 = 0xef3811d6;
      if (DAT_005b7c20 < 10 != (uVar2 == 0xffffffff)) {
        uVar3 = 0xd238890f;
      }
      uVar1 = uVar3;
      if (uVar2 == 0xffffffff) {
        uVar1 = 0xd238890f;
      }
      if (9 < DAT_005b7c20) {
        uVar1 = uVar3;
      }
    }
    if (uVar2 != 0x5238890f) break;
    FUN_00407680(*(undefined8 *)(param_1 + 2));
    FUN_00407680(*(undefined8 *)(param_1 + 4));
    printf("%d ",(ulong)*param_1);
    uVar2 = (DAT_005b7c00 + -1) * DAT_005b7c00;
    uVar2 = (uVar2 ^ 0xfffffffe) & uVar2;
    uVar3 = 0xef3811d6;
    if (DAT_005b7c20 < 10 != (uVar2 == 0)) {
      uVar3 = 0xe2f47188;
    }
    uVar1 = uVar3;
    if (uVar2 == 0) {
      uVar1 = 0xe2f47188;
    }
    if (9 < DAT_005b7c20) {
      uVar1 = uVar3;
    }
  }
  if (uVar2 == 0x3b9f69a1) {
    return;
  }
LAB_004077f0:
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ===== Function: FUN_00407800 ===== */

/* WARNING: Removing unreachable block (ram,0x00407926) */

void FUN_00407800(void *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = 0x39db1cd;
  if (param_1 != (void *)0x0) {
    iVar4 = 0x3747f235;
  }
  iVar1 = -0x67c2ded7;
LAB_00407970:
  do {
    bVar5 = iVar1 != -0x67c2ded7;
    iVar1 = iVar4;
    if (bVar5) {
LAB_004079a0:
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    while (-0x293c80a2 < iVar1) {
      while( true ) {
        while (0x39db1cc < iVar1) {
          if (iVar1 == 0x3747f235) {
            uVar2 = (DAT_005b7b90 + -1) * DAT_005b7b90;
            uVar2 = (uVar2 ^ 0xfffffffe) & uVar2;
            iVar1 = -0x293c80a1;
            if (uVar2 == 0) {
              iVar1 = 0x65e8df95;
            }
            if (9 < DAT_005b7c28) {
              iVar1 = -0x293c80a1;
            }
            if (DAT_005b7c28 < 10 != (uVar2 == 0)) {
              iVar1 = 0x65e8df95;
            }
          }
          else {
            if (iVar1 != 0x65e8df95) {
              if (iVar1 == 0x39db1cd) {
                return;
              }
              goto LAB_004079a0;
            }
            FUN_00407800(*(undefined8 *)((long)param_1 + 8));
            FUN_00407800(*(undefined8 *)((long)param_1 + 0x10));
            free(param_1);
            uVar2 = ~(~-DAT_005b7b90 * DAT_005b7b90) | 0xfffffffe;
            iVar3 = -0x293c80a1;
            if (DAT_005b7c28 < 10 != (uVar2 == 0xffffffff)) {
              iVar3 = -0x1efc5c8c;
            }
            iVar1 = iVar3;
            if (uVar2 == 0xffffffff) {
              iVar1 = -0x1efc5c8c;
            }
            if (9 < DAT_005b7c28) {
              iVar1 = iVar3;
            }
          }
          if (iVar1 < -0x293c80a1) goto LAB_00407970;
        }
        if (iVar1 == -0x293c80a1) break;
        if (iVar1 != -0x1efc5c8c) goto LAB_004079a0;
        iVar1 = 0x39db1cd;
      }
      FUN_00407800(*(undefined8 *)((long)param_1 + 8));
      FUN_00407800(*(undefined8 *)((long)param_1 + 0x10));
      free(param_1);
      iVar1 = 0x65e8df95;
    }
  } while( true );
}



/* ===== Function: FUN_004079b0 ===== */

undefined1  [16] FUN_004079b0(ulong param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 unaff_RBX;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  char local_5e;
  char local_5d;
  uint local_5c;
  uint local_58;
  int local_54;
  int local_50;
  ulong local_48;
  
  uVar2 = (~-DAT_005b7b8c * DAT_005b7b8c ^ 0xfffffffeU) & ~-DAT_005b7b8c * DAT_005b7b8c;
  bVar17 = uVar2 != 0;
  uVar7 = CONCAT71((int7)((ulong)unaff_RBX >> 8),bVar17);
  bVar5 = DAT_005b7c1c < 10 != (uVar2 == 0);
  uVar6 = CONCAT71((int7)((ulong)param_3 >> 8),bVar5);
  bVar1 = 9 < DAT_005b7c1c;
  iVar9 = 0xb7a24e2;
  if ((bVar1 || bVar17) && !bVar5) {
    iVar9 = 0x7c1388d3;
  }
  iVar12 = 0x4a123d5b;
  if ((bVar1 || bVar17) && !bVar5) {
    iVar12 = 0x7c1388d3;
  }
  iVar13 = 0x45811de;
  if ((bVar1 || bVar17) && !bVar5) {
    iVar13 = -0x7b2aedb7;
  }
  iVar14 = 0xd89d966;
  if ((bVar1 || bVar17) && !bVar5) {
    iVar14 = -0x7b2aedb7;
  }
  iVar3 = 0x800a548;
  if ((bVar1 || bVar17) && !bVar5) {
    iVar3 = -0xf82d3c8;
  }
  iVar15 = -0x4358ca11;
  if ((bVar1 || bVar17) && !bVar5) {
    iVar15 = -0xf82d3c8;
  }
  uVar2 = 0xffffffff;
  uVar8 = 0;
  iVar4 = -0xf82d3c8;
  iVar11 = 0x154e90a2;
  iVar16 = 0x7fffffff;
LAB_00407a70:
  do {
    while (iVar10 = iVar11, iVar11 = iVar10, iVar10 < 0xb7a24e2) {
      if (iVar10 < -0xf82d3c8) {
        if (iVar10 == -0x7b2aedb7) {
          uVar6 = (ulong)local_5c;
          iVar11 = 0x45811de;
        }
        else if (iVar10 == -0x6b54eb58) {
          local_50 = *(int *)(param_1 + local_48 * 4);
          iVar11 = 0x13b83c28;
          uVar6 = param_1;
          if (local_50 < local_54) {
            iVar11 = 0x760b13d3;
          }
LAB_00407a63:
          uVar7 = (ulong)local_58;
          iVar4 = local_54;
        }
        else if (iVar10 == -0x4358ca11) {
          uVar7 = (ulong)local_5c;
          iVar4 = local_50;
          iVar11 = 0x13b83c28;
        }
      }
      else if (iVar10 < 0x45811de) {
        if (iVar10 == -0xf82d3c8) {
          iVar11 = 0x800a548;
        }
        else if (iVar10 == -0x913978c) {
          iVar11 = iVar13;
        }
      }
      else if (iVar10 == 0x45811de) {
        uVar6 = (ulong)(int)local_5c;
        local_5d = *(int *)(param_2 + uVar6 * 4) != 0;
        iVar11 = iVar14;
        local_48 = uVar6;
      }
      else if (iVar10 == 0x800a548) {
        iVar11 = iVar15;
      }
    }
    if (0x27de828e < iVar10) {
      if (iVar10 < 0x760b13d3) {
        if (iVar10 == 0x4a123d5b) {
          uVar6 = 0xf6ec6874;
          iVar11 = 0x27de828f;
          if (local_5e != '\0') {
            iVar11 = -0x913978c;
          }
        }
        else if (iVar10 == 0x27de828f) {
          auVar18._4_4_ = 0;
          auVar18._0_4_ = local_58;
          auVar18._8_8_ = uVar6;
          return auVar18;
        }
      }
      else {
        iVar11 = iVar3;
        if ((iVar10 != 0x760b13d3) && (iVar11 = iVar10, iVar10 == 0x7c1388d3)) {
          uVar6 = (ulong)local_5c;
          iVar11 = 0xb7a24e2;
        }
      }
      goto LAB_00407a70;
    }
    if (iVar10 < 0x13b83c28) {
      if (iVar10 == 0xb7a24e2) {
        uVar6 = (ulong)local_5c;
        local_5e = (int)local_5c < (int)param_3;
        iVar11 = iVar12;
      }
      else if (iVar10 == 0xd89d966) {
        iVar11 = -0x6b54eb58;
        if (local_5d != '\0') {
          iVar11 = 0x13b83c28;
        }
        goto LAB_00407a63;
      }
    }
    else if (iVar10 == 0x13b83c28) {
      uVar8 = local_5c + 1;
      uVar2 = (uint)uVar7;
      iVar11 = 0x154e90a2;
      iVar16 = iVar4;
    }
    else if (iVar10 == 0x154e90a2) {
      iVar11 = iVar9;
      local_5c = uVar8;
      local_58 = uVar2;
      local_54 = iVar16;
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


