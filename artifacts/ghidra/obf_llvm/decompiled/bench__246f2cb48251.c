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



/* ===== Function: puts ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int puts(char *__s)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_puts_0040b020)();
  return iVar1;
}



/* ===== Function: printf ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0040b028)();
  return iVar1;
}



/* ===== Function: putc ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putc(int __c,FILE *__stream)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putc_0040b030)();
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
  if (DAT_0040b068 == '\0') {
    FUN_004010e0();
    DAT_0040b068 = 1;
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

/* WARNING: Removing unreachable block (ram,0x00402308) */
/* WARNING: Removing unreachable block (ram,0x00401c99) */
/* WARNING: Removing unreachable block (ram,0x00402628) */
/* WARNING: Removing unreachable block (ram,0x00404a7c) */
/* WARNING: Removing unreachable block (ram,0x004020eb) */
/* WARNING: Removing unreachable block (ram,0x00403dd6) */
/* WARNING: Removing unreachable block (ram,0x00404adb) */
/* WARNING: Removing unreachable block (ram,0x004031d0) */
/* WARNING: Removing unreachable block (ram,0x0040355f) */
/* WARNING: Removing unreachable block (ram,0x00402b97) */
/* WARNING: Removing unreachable block (ram,0x00402913) */
/* WARNING: Removing unreachable block (ram,0x004011c6) */
/* WARNING: Removing unreachable block (ram,0x00402719) */
/* WARNING: Removing unreachable block (ram,0x0040436a) */
/* WARNING: Removing unreachable block (ram,0x00403a2f) */
/* WARNING: Removing unreachable block (ram,0x0040463e) */
/* WARNING: Removing unreachable block (ram,0x00402400) */
/* WARNING: Removing unreachable block (ram,0x004020a4) */
/* WARNING: Removing unreachable block (ram,0x00403afa) */
/* WARNING: Removing unreachable block (ram,0x00401d99) */
/* WARNING: Removing unreachable block (ram,0x00401aed) */
/* WARNING: Removing unreachable block (ram,0x00401a72) */
/* WARNING: Removing unreachable block (ram,0x0040309e) */
/* WARNING: Removing unreachable block (ram,0x004043f2) */
/* WARNING: Removing unreachable block (ram,0x00403001) */
/* WARNING: Removing unreachable block (ram,0x004048c9) */
/* WARNING: Removing unreachable block (ram,0x00404988) */
/* WARNING: Removing unreachable block (ram,0x00404205) */
/* WARNING: Removing unreachable block (ram,0x004043b4) */
/* WARNING: Removing unreachable block (ram,0x00404835) */
/* WARNING: Removing unreachable block (ram,0x00403cfc) */
/* WARNING: Removing unreachable block (ram,0x0040385f) */
/* WARNING: Removing unreachable block (ram,0x00403c76) */
/* WARNING: Removing unreachable block (ram,0x00403e45) */
/* WARNING: Removing unreachable block (ram,0x0040394a) */
/* WARNING: Removing unreachable block (ram,0x004038cc) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00401190(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  int unaff_EBP;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  char *pcVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint unaff_R12D;
  uint unaff_R13D;
  uint unaff_R14D;
  uint unaff_R15D;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  uint *extraout_XMM0_Qa;
  uint local_798;
  uint local_794;
  undefined4 *local_790;
  int local_788;
  uint local_784;
  uint *local_780;
  int local_774;
  uint local_770;
  uint local_76c;
  int *local_768;
  int local_760;
  uint local_75c;
  int local_758;
  uint local_754;
  uint **local_750;
  int **local_748;
  uint local_740;
  uint local_73c;
  char local_738;
  char local_737;
  char local_736;
  char local_735;
  char local_734;
  char local_733;
  char local_732;
  char local_731;
  int *local_730;
  uint local_724;
  uint *local_720;
  int *local_718;
  int local_710;
  int local_70c;
  uint local_708;
  uint local_704;
  uint local_700;
  uint local_6fc;
  uint local_6f8;
  int local_6f4;
  int local_6f0;
  int local_6ec;
  uint local_6e8;
  undefined4 local_6e4;
  uint local_6e0;
  int local_6dc;
  uint *local_6d8;
  int local_6d0;
  uint local_6cc;
  int local_6c8;
  uint local_6c4;
  int *local_6c0;
  uint *local_6b8 [8];
  uint local_678 [200];
  int local_358 [202];
  
  local_6c0 = &local_6dc;
  uVar9 = 0x65bb3e8;
LAB_004011ec:
  if ((int)uVar9 < -0x4deb073f) {
    if (-0x6626b3f3 < (int)uVar9) {
      if (-0x5d0c5f98 < (int)uVar9) {
        if (uVar9 == 0xa2f3a069) {
          bVar21 = SBORROW4(local_788,9);
          bVar20 = local_788 + -9 < 0;
          uVar9 = 0x15c49793;
          uVar7 = 0x99d94c0e;
          goto LAB_00402690;
        }
        if (uVar9 != 0xa3ac612e) goto joined_r0x00402699;
        bVar21 = SBORROW4(local_788,4);
        bVar20 = local_788 + -4 < 0;
        uVar9 = 0x35ea88f1;
        uVar7 = 0x370b42f4;
        goto LAB_00402690;
      }
      if (uVar9 == 0x99d94c0e) {
        FUN_00406950();
        goto LAB_004026b2;
      }
      if (uVar9 != 0xa05d49fa) goto joined_r0x00402699;
      bVar21 = SBORROW4(local_788,2);
      bVar20 = local_788 + -2 < 0;
      uVar9 = 0x3850dbc6;
      uVar7 = 0xb986ec34;
      goto LAB_00402690;
    }
    if ((int)uVar9 < -0x7088f8a6) {
      if (uVar9 != 0x86b9a6b2) {
        if (uVar9 != 0x87295c91) goto joined_r0x00402699;
        local_748 = (int **)&local_75c;
        pcVar15 = "%d";
        local_70c = __isoc99_scanf();
        pcVar4 = (char *)0xf6a9da2e;
LAB_00401b30:
        do {
          while (iVar13 = (int)pcVar4, iVar13 < -0x405dfb52) {
            if (iVar13 < -0x581743ba) {
              if (iVar13 == -0x6d3556ea) {
                uVar9 = ~((DAT_005b8bbc + -1) * DAT_005b8bbc) | 0xfffffffe;
                bVar20 = DAT_005b8bf8 < 10 == (uVar9 == 0xffffffff);
                pcVar8 = (char *)0x366c5496;
                pcVar15 = (char *)0xad98ef95;
                goto LAB_0040130a;
              }
              if (iVar13 != -0x5838ed29) {
                if (iVar13 == -0x7bbfb386) goto LAB_004026b2;
                goto LAB_00401360;
              }
              pcVar4 = (char *)0xd61ea20f;
              unaff_R14D = 0;
            }
            else {
              if (iVar13 != -0x581743ba) {
                if (iVar13 != -0x52ca2e82) {
                  if (iVar13 != -0x5267106b) goto LAB_00401360;
                  local_710 = CONCAT31(local_710._1_3_,200000 < (int)local_73c);
                  uVar9 = ~((DAT_005b8bbc + -1) * DAT_005b8bbc) | 0xfffffffe;
                  bVar20 = DAT_005b8bf8 < 10 == (uVar9 == 0xffffffff);
                  pcVar8 = (char *)0x366c5496;
                  pcVar15 = (char *)0xe9090d82;
                  goto LAB_0040130a;
                }
                local_750 = (uint **)&local_724;
                pcVar15 = "%d";
                iVar13 = __isoc99_scanf();
                bVar20 = iVar13 == 1;
                pcVar4 = (char *)0x304527d3;
                pcVar8 = (char *)0x2356f0ae;
                goto LAB_00401d70;
              }
              local_724 = 0;
              bVar20 = (~(~-DAT_005b8bbc * DAT_005b8bbc) | 0xfffffffeU) == 0xffffffff;
              pcVar4 = (char *)0x58620a92;
              if (bVar20) {
                pcVar4 = (char *)0x73b0f1ac;
              }
              pcVar15 = (char *)0x58620a92;
              if (9 < DAT_005b8bf8) {
                pcVar4 = (char *)0x58620a92;
              }
              if (DAT_005b8bf8 < 10 != bVar20) {
                pcVar4 = (char *)0x73b0f1ac;
              }
              if (0x304527d2 < (uint)pcVar4) goto LAB_0040136b;
            }
          }
          if (iVar13 < -0x95625d2) {
            if (iVar13 == -0x405dfb52) {
              pcVar4 = (char *)0x703af825;
              unaff_EBP = 0;
              goto LAB_0040136b;
            }
            if (iVar13 != -0x29e15df1) {
              if (iVar13 != -0x16f6f27e) goto LAB_00401360;
              bVar20 = (char)local_710 == '\0';
              pcVar4 = (char *)0xbfa204ae;
              pcVar8 = (char *)0x6d8fc76c;
              goto LAB_00401d70;
            }
            uVar9 = ~((DAT_005b8bbc + -1) * DAT_005b8bbc) | 0xfffffffe;
            bVar20 = DAT_005b8bf8 < 10 == (uVar9 == 0xffffffff);
            pcVar8 = (char *)0x47307ca0;
            pcVar15 = (char *)0x5e5cdf52;
            local_794 = unaff_R14D;
            goto LAB_0040130a;
          }
          if (iVar13 == -0x95625d2) {
            bVar20 = local_70c == 1;
            pcVar4 = (char *)0x711551d2;
            pcVar8 = (char *)0xa7c712d7;
            goto LAB_00401d70;
          }
          if (iVar13 == 0xa18f583) {
            unaff_EBP = local_758 + 1;
            pcVar4 = (char *)0x703af825;
            goto LAB_0040136b;
          }
          if (iVar13 != 0x2356f0ae) goto LAB_00401360;
          uVar9 = (~-DAT_005b8bbc * DAT_005b8bbc ^ 0xfffffffeU) & ~-DAT_005b8bbc * DAT_005b8bbc;
          pcVar15 = (char *)0xa7e8bc46;
          pcVar4 = (char *)0x58620a92;
          if (uVar9 == 0) {
            pcVar4 = (char *)0xa7e8bc46;
          }
          if (9 < DAT_005b8bf8) {
            pcVar4 = (char *)0x58620a92;
          }
          if (DAT_005b8bf8 < 10 != (uVar9 == 0)) {
            pcVar4 = (char *)0xa7e8bc46;
          }
          uVar9 = (uint)pcVar4;
joined_r0x00401c56:
          if (0x304527d2 < (int)uVar9) {
LAB_0040136b:
            iVar13 = (int)pcVar4;
            if (0x5e5cdf51 < iVar13) {
              if (iVar13 < 0x711551d2) {
                if (iVar13 == 0x5e5cdf52) {
                  uVar9 = ~((DAT_005b8bbc + -1) * DAT_005b8bbc) | 0xfffffffe;
                  bVar20 = DAT_005b8bf8 < 10 == (uVar9 == 0xffffffff);
                  pcVar8 = (char *)0x47307ca0;
                  pcVar15 = (char *)0x84404c7a;
LAB_0040130a:
                  if (!bVar20) {
                    pcVar8 = pcVar15;
                  }
                  pcVar4 = pcVar8;
                  if (uVar9 == 0xffffffff) {
                    pcVar4 = pcVar15;
                  }
                  if (9 < DAT_005b8bf8) {
                    pcVar4 = pcVar8;
                  }
                  uVar9 = (uint)pcVar4;
                }
                else {
                  if (iVar13 == 0x6d8fc76c) {
                    local_75c = 200000;
                    pcVar4 = (char *)0xbfa204ae;
                    goto LAB_00401b30;
                  }
                  if (iVar13 != 0x703af825) goto LAB_00401360;
                  pcVar4 = (char *)0xad35d17e;
                  if (unaff_EBP < (int)local_75c) {
                    pcVar4 = (char *)0x530bb3a9;
                  }
                  uVar9 = (uint)pcVar4;
                  local_758 = unaff_EBP;
                }
                goto joined_r0x00401c56;
              }
              if (iVar13 == 0x711551d2) {
                uVar9 = 0x92caa915 - (~((int)local_75c >> 0x1f) | 0x15fbddc5U);
                pcVar4 = (char *)(ulong)uVar9;
                local_73c = local_75c;
                goto joined_r0x00401c56;
              }
              if (iVar13 != 0x73b0f1ac) goto code_r0x00401469;
              pcVar4 = (char *)0x304527d3;
              goto LAB_0040136b;
            }
            if (iVar13 < 0x47307ca0) {
              if (iVar13 == 0x304527d3) {
                local_6e0 = local_724;
                local_6e4 = 0;
                uVar9 = (DAT_005b8b94 + -1) * DAT_005b8b94;
                bVar19 = ((uVar9 ^ 0xfffffffe) & uVar9) == 0;
                bVar20 = DAT_005b8c18 < 10;
                bVar21 = bVar20 != bVar19;
                local_6cc = 0x5a10de0a;
                if (bVar21 || bVar20 && bVar19) {
                  local_6cc = 0x455d158a;
                }
                uVar9 = 0x5a10de0a;
                if (bVar21 || bVar20 && bVar19) {
                  uVar9 = 0x331727c4;
                }
                unaff_R15D = 0x9c0b024d;
                if (bVar21 || bVar20 && bVar19) {
                  unaff_R15D = 0xca747952;
                }
                unaff_R13D = 0x9c0b024d;
                if (bVar21 || bVar20 && bVar19) {
                  unaff_R13D = 0x2b3e0d9e;
                }
                uVar7 = 0x762a8c65;
                if (bVar21 || bVar20 && bVar19) {
                  uVar7 = 0x444f01d0;
                }
                uVar10 = 0x762a8c65;
                if (bVar21 || bVar20 && bVar19) {
                  uVar10 = 0xc6fa8cda;
                }
                uVar11 = 0xa634638d;
                if (bVar21 || bVar20 && bVar19) {
                  uVar11 = 0x220af931;
                }
                uVar18 = 0xa634638d;
                if (bVar21 || bVar20 && bVar19) {
                  uVar18 = 0xa47fddec;
                }
                uVar1 = 0x785f6953;
                if (bVar21 || bVar20 && bVar19) {
                  uVar1 = 0x16f32db3;
                }
                unaff_R12D = 0x785f6953;
                if (bVar21 || bVar20 && bVar19) {
                  unaff_R12D = 0x7bcaca08;
                }
                local_708 = 0x7bcaca08;
                local_740 = 0x7bcaca08;
                local_704 = (uint)pcVar15;
                local_720 = (uint *)CONCAT44(local_720._4_4_,local_704);
                uVar12 = 0x7bcaca08;
                local_700 = local_704;
                local_6fc = local_704;
                local_6e8 = local_704;
                uVar6 = ~-local_75c;
                uVar17 = 0x7700603d;
                do {
                  while( true ) {
                    while( true ) {
                      while( true ) {
                        while( true ) {
                          while( true ) {
                            uVar16 = uVar17;
                            uVar17 = uVar16;
                            if ((int)uVar16 < 0x292ec755) break;
                            if ((int)uVar16 < 0x6d3f10ff) {
                              if ((int)uVar16 < 0x444f01d0) {
                                if (uVar16 == 0x292ec755) {
                                  local_720 = (uint *)CONCAT44(local_720._4_4_,(uint)local_790);
                                  local_740 = 1;
                                  local_700 = (uint)local_768;
                                  uVar12 = local_798;
                                  uVar17 = 0xdb2bfd2b;
                                }
                                else if (uVar16 == 0x2b3e0d9e) {
                                  uVar17 = 0xee14b374;
                                  if ((char)local_770 != '\0') {
                                    uVar17 = 0x292ec755;
                                  }
                                }
                                else if (uVar16 == 0x331727c4) {
                                  uVar17 = 0xc998709d;
                                  if ((char)local_774 != '\0') {
                                    uVar17 = 0x9c724cf4;
                                  }
                                }
                              }
                              else if (uVar16 == 0x444f01d0) {
                                local_76c = local_798 + 1;
                                uVar17 = uVar10;
                              }
                              else if (uVar16 == 0x455d158a) {
                                local_774 = CONCAT31(local_774._1_3_,
                                                     (int)(uint)local_790 <= (int)(uint)local_768);
                                uVar17 = uVar9;
                              }
                              else if (uVar16 == 0x5a10de0a) {
                                uVar17 = 0x455d158a;
                              }
                            }
                            else if ((int)uVar16 < 0x7700603d) {
                              uVar17 = uVar11;
                              if (((uVar16 != 0x6d3f10ff) && (uVar17 = uVar7, uVar16 != 0x75094db0))
                                 && (uVar17 = uVar16, uVar16 == 0x762a8c65)) {
                                uVar17 = 0x444f01d0;
                              }
                            }
                            else if (uVar16 == 0x7bcaca08) {
                              local_720 = (uint *)CONCAT44(local_720._4_4_,(uint)local_730);
                              local_700 = (uint)local_780;
                              local_740 = 0;
                              uVar12 = (uint)local_718;
                              uVar17 = 0xdb2bfd2b;
                            }
                            else if (uVar16 == 0x785f6953) {
                              uVar17 = 0x16f32db3;
                            }
                            else if (uVar16 == 0x7700603d) {
                              local_718 = (int *)CONCAT44(local_718._4_4_,local_6e8);
                              local_768 = (int *)CONCAT44(local_768._4_4_,uVar6);
                              local_790 = (undefined4 *)CONCAT44(local_790._4_4_,local_6e4);
                              uVar17 = local_6cc;
                            }
                          }
                          if ((int)uVar16 < -0x36678f63) break;
                          if ((int)uVar16 < -0x11eb4c8c) {
                            if (uVar16 == 0xc998709d) {
                              local_708 = 0xffffffff;
                              uVar17 = 0xc3a18bbd;
                            }
                            else if (uVar16 == 0xca747952) {
                              iVar13 = ((uint)local_768 + 0x9ab2183a) - (uint)local_790;
                              local_798 = ((iVar13 + 0x654de7c6) - (iVar13 + 0x654de7c6 >> 0x1f) >>
                                          1) + (uint)local_790;
                              local_754 = *(uint *)(&DAT_004ce570 + (long)(int)local_798 * 4);
                              local_770 = CONCAT31(local_770._1_3_,local_754 == local_724);
                              uVar17 = unaff_R13D;
                            }
                            else if (uVar16 == 0xdb2bfd2b) {
                              uVar17 = 0xc3a18bbd;
                              if (local_740 == 0) {
                                uVar17 = 0x7700603d;
                              }
                              local_6e4 = (uint)local_720;
                              local_708 = uVar12;
                              local_6e8 = uVar12;
                              uVar6 = local_700;
                            }
                          }
                          else if (uVar16 == 0xee14b374) {
                            uVar17 = 0x6d3f10ff;
                            if ((int)local_754 < (int)local_724) {
                              uVar17 = 0x75094db0;
                            }
                          }
                          else {
                            uVar17 = unaff_R12D;
                            if ((uVar16 != 0x16f32db3) && (uVar17 = uVar16, uVar16 == 0x220af931)) {
                              local_784 = local_798 - 1;
                              uVar17 = uVar18;
                            }
                          }
                        }
                        if (-0x5b802215 < (int)uVar16) break;
                        if (uVar16 == 0x95e008cb) {
                          local_780 = (uint *)CONCAT44(local_780._4_4_,local_6fc);
                          local_730 = (int *)CONCAT44(local_730._4_4_,local_704);
                          uVar17 = uVar1;
                        }
                        else if (uVar16 == 0x9c0b024d) {
                          uVar17 = 0xca747952;
                        }
                        else if (uVar16 == 0x9c724cf4) {
                          uVar17 = unaff_R15D;
                        }
                      }
                      if (-0x3c5e7444 < (int)uVar16) break;
                      if (uVar16 == 0xa47fddec) {
                        local_6fc = local_784;
                        local_704 = (uint)local_790;
                        uVar17 = 0x95e008cb;
                      }
                      else if (uVar16 == 0xa634638d) {
                        uVar17 = 0x220af931;
                      }
                    }
                    if (uVar16 != 0xc6fa8cda) break;
                    local_704 = local_76c;
                    local_6fc = (uint)local_768;
                    uVar17 = 0x95e008cb;
                  }
                } while (uVar16 != 0xc3a18bbd);
                pcVar15 = "%d\n";
                local_6d0 = unaff_EBP;
                printf("%d\n",(ulong)local_708);
                pcVar4 = (char *)0xd61ea20f;
                unaff_R14D = 1;
                unaff_EBP = local_6d0;
              }
              else if (iVar13 == 0x366c5496) {
                pcVar4 = (char *)0xad98ef95;
              }
              else {
                if (iVar13 != 0x3f545df2) goto LAB_00401360;
                *local_6b8[0] = 0;
                pcVar4 = (char *)0xa18f583;
              }
              goto LAB_00401b30;
            }
            if (iVar13 == 0x47307ca0) {
              pcVar4 = (char *)0x5e5cdf52;
              goto LAB_0040136b;
            }
            if (iVar13 != 0x530bb3a9) {
              if (iVar13 != 0x58620a92) goto LAB_00401360;
              local_724 = 0;
              pcVar4 = (char *)0xa7e8bc46;
              goto LAB_00401b30;
            }
            local_6b8[0] = (uint *)(&DAT_004ce570 + (long)local_758 * 4);
            pcVar15 = "%d";
            iVar13 = __isoc99_scanf("%d",local_6b8[0]);
            bVar20 = iVar13 == 1;
            pcVar4 = (char *)0xa18f583;
            pcVar8 = (char *)0x3f545df2;
LAB_00401d70:
            if (!bVar20) {
              pcVar4 = pcVar8;
            }
            uVar9 = (uint)pcVar4;
            goto joined_r0x00401c56;
          }
        } while( true );
      }
      uVar7 = (DAT_005b8b88 + -1) * DAT_005b8b88;
      uVar7 = (uVar7 ^ 0xfffffffe) & uVar7;
      uVar10 = 0x378e691d;
      if (DAT_005b8be8 < 10 != (uVar7 == 0)) {
        uVar10 = 0x35e126b8;
      }
      uVar9 = uVar10;
      if (uVar7 == 0) {
        uVar9 = 0x35e126b8;
      }
      if (9 < DAT_005b8be8) {
        uVar9 = uVar10;
      }
      goto joined_r0x00401e1c;
    }
    if (uVar9 == 0x8f77075a) goto LAB_00401f56;
    if (uVar9 != 0x95a61148) goto joined_r0x00402699;
    bVar20 = local_788 == 10;
    uVar7 = 0x9c4b103;
  }
  else {
    if (-0xeacb6db < (int)uVar9) {
      if (0x65bb3e7 < (int)uVar9) {
        if (uVar9 == 0x65bb3e8) goto LAB_004026b2;
        if (uVar9 != 0x9b7ba17) goto joined_r0x00402699;
        uVar7 = (DAT_005b8b88 + -1) * DAT_005b8b88;
        uVar7 = (uVar7 ^ 0xfffffffe) & uVar7;
        uVar10 = 0x86b9a6b2;
        uVar9 = 0x378e691d;
        if (uVar7 == 0) {
          uVar9 = 0x86b9a6b2;
        }
        if (9 < DAT_005b8be8) {
          uVar9 = 0x378e691d;
        }
        bVar20 = DAT_005b8be8 < 10 == (uVar7 == 0);
        goto LAB_004026a1;
      }
      if (uVar9 != 0xf1534926) {
        if (uVar9 != 0xf317c082) goto joined_r0x00402699;
        FUN_004055c0();
        goto LAB_004026b2;
      }
      bVar21 = SBORROW4(local_788,8);
      bVar20 = local_788 + -8 < 0;
      uVar9 = 0xa2f3a069;
      uVar7 = 0x2f6aac32;
      goto LAB_00402690;
    }
    if (-0x360f5011 < (int)uVar9) {
      if (uVar9 == 0xde762cce) goto LAB_004026b2;
      if (uVar9 != 0xc9f0aff0) goto joined_r0x00402699;
      return 0;
    }
    if (uVar9 == 0xb214f8c1) {
      bVar21 = SBORROW4(local_788,6);
      bVar20 = local_788 + -6 < 0;
      uVar9 = 0xf1534926;
      uVar7 = 0x56943b1c;
      goto LAB_00402690;
    }
    if (uVar9 != 0xb986ec34) goto joined_r0x00402699;
    bVar20 = local_788 == 1;
    uVar7 = 0x37cf670e;
  }
  uVar9 = 0x65bb3e8;
  if (bVar20) {
    uVar9 = uVar7;
  }
joined_r0x00401e1c:
  if (0x9c4b102 < uVar9) {
LAB_004026d0:
    if ((int)uVar9 < 0x370b42f4) {
      if ((int)uVar9 < 0x1fdc54fe) {
        if (uVar9 == 0x9c4b103) {
          local_718 = &local_760;
          local_6c8 = __isoc99_scanf("%d");
          local_740 = uVar9;
          uVar9 = 0x8a2c0401;
          local_720 = (uint *)CONCAT44(local_720._4_4_,local_740);
LAB_0040406b:
          if ((int)uVar9 < -0x416c95d5) {
            if ((int)uVar9 < -0x59d9cde3) {
              if ((int)uVar9 < -0x7753de48) {
                if ((int)uVar9 < -0x791fc6f6) {
                  if (uVar9 == 0x83030fe0) {
                    uVar9 = 0x3e36bca4;
                    goto LAB_00403580;
                  }
                  if (uVar9 == 0x85562f22) {
                    bVar20 = local_734 == '\0';
                    uVar9 = 0xf4904379;
                    uVar7 = 0x24564336;
                    goto LAB_00404806;
                  }
                  if (uVar9 == 0x869396a2) {
                    local_678[(int)local_794] = 0x7fffffff;
                    local_358[(int)local_794] = 0;
                    local_6c4 = local_794 + 1;
                    bVar20 = (~(~-DAT_005b8bb0 * DAT_005b8bb0) | 0xfffffffeU) == 0xffffffff;
                    uVar10 = 0x88248568;
                    uVar9 = 0x5764b15a;
                    if (bVar20) {
                      uVar9 = 0x88248568;
                    }
                    bVar22 = SBORROW4(DAT_005b8bf4,10);
                    bVar19 = DAT_005b8bf4 + -10 < 0;
                    bVar21 = DAT_005b8bf4 < 10;
                    uVar7 = 0x5764b15a;
                    goto LAB_00403561;
                  }
                }
                else {
                  if (uVar9 == 0x86e0390a) {
                    bVar20 = (~((DAT_005b8bb0 + -1) * DAT_005b8bb0) | 0xfffffffeU) == 0xffffffff;
                    uVar10 = 0x3088e03d;
                    uVar9 = 0x4a5f42fe;
                    if (bVar20) {
                      uVar9 = 0x3088e03d;
                    }
                    bVar22 = SBORROW4(DAT_005b8bf4,10);
                    bVar19 = DAT_005b8bf4 + -10 < 0;
                    bVar21 = DAT_005b8bf4 < 10;
                    uVar7 = 0x4a5f42fe;
                    goto LAB_00403561;
                  }
                  if (uVar9 == 0x87ef7bb6) {
                    uVar7 = (DAT_005b8bb0 + -1) * DAT_005b8bb0;
                    uVar7 = (uVar7 ^ 0xfffffffe) & uVar7;
                    bVar20 = uVar7 == 0;
                    uVar10 = 0xd42ec6a3;
                    uVar9 = 0xd0a0be4f;
                    if (uVar7 == 0) {
                      uVar9 = 0xd42ec6a3;
                    }
                    bVar22 = SBORROW4(DAT_005b8bf4,10);
                    bVar19 = DAT_005b8bf4 + -10 < 0;
                    bVar21 = DAT_005b8bf4 < 10;
                    uVar7 = 0xd0a0be4f;
                    goto LAB_00403561;
                  }
                  if (uVar9 == 0x88248568) {
                    uVar9 = 0x412cc63;
                    unaff_R14D = local_6c4;
                    goto LAB_0040406b;
                  }
                }
              }
              else if ((int)uVar9 < -0x66f85399) {
                if (uVar9 == 0x88ac21b8) {
LAB_00404825:
                  uVar9 = 0xa626321d;
                  goto LAB_0040406b;
                }
                if (uVar9 == 0x8a2c0401) {
                  bVar20 = local_6c8 == 1;
                  uVar9 = 0xaa5b71aa;
                  uVar7 = 0xf7a4dd3f;
                  goto LAB_00404806;
                }
                if (uVar9 == 0x9769b142) {
                  local_678[local_6f4] = 0;
                  uVar9 = 0x2ac18979;
                  unaff_R13D = 0;
                  goto LAB_00403580;
                }
              }
              else if (uVar9 == 0x9907ac67) {
                local_750 = (uint **)(long)(int)local_754;
                local_774 = *(int *)(&DAT_00591a70 + (long)local_750 * 4 + (long)local_748 * 800);
                uVar9 = 0xc8dcca78 - (~(local_774 >> 0x1f) | 0x8aa60dd4U);
              }
              else {
                if (uVar9 == 0x9ddbc90b) {
                  uVar9 = 0x20da986b;
                  goto LAB_00403580;
                }
                if (uVar9 == 0xa1614c90) {
                  uVar7 = (DAT_005b8bb0 + -1) * DAT_005b8bb0;
                  uVar7 = (uVar7 ^ 0xfffffffe) & uVar7;
                  bVar20 = uVar7 == 0;
                  uVar10 = 0x628d3e56;
                  uVar9 = 0x74be3934;
                  if (uVar7 == 0) {
                    uVar9 = 0x628d3e56;
                  }
                  bVar22 = SBORROW4(DAT_005b8bf4,10);
                  bVar19 = DAT_005b8bf4 + -10 < 0;
                  bVar21 = DAT_005b8bf4 < 10;
                  uVar7 = 0x74be3934;
                  goto LAB_00403561;
                }
              }
            }
            else if ((int)uVar9 < -0x4afd7ed9) {
              if ((int)uVar9 < -0x5211facb) {
                if (uVar9 == 0xa626321d) {
                  local_70c = local_784 + 1;
                  bVar21 = SBORROW4(local_70c,local_760);
                  bVar20 = local_70c - local_760 < 0;
                  uVar9 = 0x69ced2b3;
                  uVar7 = 0x24567385;
                  goto LAB_00404aa3;
                }
                if (uVar9 == 0xaa5b71aa) {
                  uVar9 = 0x6293c552;
                  if (199 < local_760 - 1U) {
                    uVar9 = 0x525a865c;
                  }
                  if (0x152dcf24 < uVar9) goto LAB_00403580;
                  goto LAB_0040406b;
                }
              }
              else {
                if (uVar9 == 0xadee0535) {
                  putc(10,stdout);
                  uVar10 = ~((DAT_005b8bb0 + -1) * DAT_005b8bb0) | 0xfffffffe;
                  bVar20 = DAT_005b8bf4 < 10 == (uVar10 == 0xffffffff);
                  uVar7 = 0x1c91ad4a;
                  uVar11 = 0x72ebaf0a;
                  goto LAB_00404796;
                }
                if (uVar9 == 0xaeb1cf2a) {
                  bVar20 = (~((DAT_005b8bb0 + -1) * DAT_005b8bb0) | 0xfffffffeU) == 0xffffffff;
                  uVar10 = 0x32f0007b;
                  uVar9 = 0x4e4a645d;
                  if (bVar20) {
                    uVar9 = 0x32f0007b;
                  }
                  bVar22 = SBORROW4(DAT_005b8bf4,10);
                  bVar19 = DAT_005b8bf4 + -10 < 0;
                  bVar21 = DAT_005b8bf4 < 10;
                  uVar7 = 0x4e4a645d;
                  goto LAB_00403561;
                }
                if (uVar9 == 0xb1ee0efb) {
                  uVar9 = 0xc13bcc74;
                  goto LAB_0040406b;
                }
              }
            }
            else if ((int)uVar9 < -0x497763ad) {
              if (uVar9 == 0xb5028127) goto LAB_004026b2;
              if (uVar9 == 0xb50df7ba) {
                uVar9 = 0xdd264eaf;
                goto LAB_0040406b;
              }
            }
            else {
              if (uVar9 == 0xb6889c53) {
                uVar9 = 0x7bd2443c;
                goto LAB_00403580;
              }
              if (uVar9 == 0xbbe74445) {
                uVar9 = 0x7796fb5c;
                goto LAB_00403580;
              }
              if (uVar9 == 0xbc27c9d0) {
                bVar20 = local_736 == '\0';
                uVar9 = 0x109f55de;
                uVar7 = 0x63862341;
                goto LAB_00404806;
              }
            }
          }
          else if ((int)uVar9 < -0x2259a672) {
            if ((int)uVar9 < -0x2bd1395d) {
              if ((int)uVar9 < -0x37233587) {
                if (uVar9 == 0xbe936a2b) {
                  bVar20 = local_737 == '\0';
                  uVar9 = 0x690c640b;
                  uVar7 = 0x25d857e7;
                  goto LAB_00404806;
                }
                if (uVar9 == 0xc13bcc74) {
                  local_6ec = local_760;
                  local_735 = (int)local_798 < local_760;
                  uVar7 = (DAT_005b8bb0 + -1) * DAT_005b8bb0;
                  uVar7 = (uVar7 ^ 0xfffffffe) & uVar7;
                  bVar20 = uVar7 == 0;
                  uVar10 = 0x65c47c20;
                  uVar9 = 0xb1ee0efb;
                  if (uVar7 == 0) {
                    uVar9 = 0x65c47c20;
                  }
                  bVar22 = SBORROW4(DAT_005b8bf4,10);
                  bVar19 = DAT_005b8bf4 + -10 < 0;
                  bVar21 = DAT_005b8bf4 < 10;
                  uVar7 = 0xb1ee0efb;
                  goto LAB_00403561;
                }
                if (uVar9 == 0xc1c7298f) {
                  bVar21 = SBORROW4(unaff_R15D,local_760);
                  bVar20 = (int)(unaff_R15D - local_760) < 0;
                  uVar9 = 0x87ef7bb6;
                  uVar7 = 0x69d89deb;
                  local_73c = unaff_R15D;
                  goto LAB_00404aa3;
                }
              }
              else {
                if (uVar9 == 0xc8dcca79) {
                  bVar20 = local_358[(long)local_750] == 0;
                  uVar9 = 0x86e0390a;
                  uVar7 = 0x3e36bca4;
                  goto LAB_00404806;
                }
                if (uVar9 == 0xce28dec9) {
                  printf("INF");
                  goto LAB_00404825;
                }
                if (uVar9 == 0xd0a0be4f) {
                  __isoc99_scanf("%d",&local_6f4);
                  uVar9 = 0xd42ec6a3;
                  goto LAB_0040406b;
                }
              }
            }
            else {
              if ((int)uVar9 < -0x23911f2b) {
                if (uVar9 == 0xd42ec6a3) {
                  local_768 = &local_6f4;
                  iVar13 = __isoc99_scanf("%d");
                  local_738 = iVar13 != 1;
                  uVar10 = (DAT_005b8bb0 + -1) * DAT_005b8bb0;
                  uVar10 = (uVar10 ^ 0xfffffffe) & uVar10;
                  bVar20 = DAT_005b8bf4 < 10 == (uVar10 == 0);
                  uVar7 = 0xd0a0be4f;
                  uVar11 = 0x600ddb39;
                  goto LAB_004049c9;
                }
                if (uVar9 == 0xd67363cf) {
                  uVar7 = (DAT_005b8bb0 + -1) * DAT_005b8bb0;
                  uVar7 = (uVar7 ^ 0xfffffffe) & uVar7;
                  bVar20 = uVar7 == 0;
                  uVar10 = 0xdcea84df;
                  uVar9 = 0xdc6ee0d5;
                  if (uVar7 == 0) {
                    uVar9 = 0xdcea84df;
                  }
                  bVar22 = SBORROW4(DAT_005b8bf4,10);
                  bVar19 = DAT_005b8bf4 + -10 < 0;
                  bVar21 = DAT_005b8bf4 < 10;
                  uVar7 = 0xdc6ee0d5;
                  goto LAB_00403561;
                }
                if (uVar9 == 0xd885308b) {
                  bVar20 = (~((DAT_005b8bb0 + -1) * DAT_005b8bb0) | 0xfffffffeU) == 0xffffffff;
                  uVar7 = 0x869396a2;
                  uVar9 = 0x5764b15a;
                  if (bVar20) {
                    uVar9 = 0x869396a2;
                  }
                  bVar22 = SBORROW4(DAT_005b8bf4,10);
                  bVar19 = DAT_005b8bf4 + -10 < 0;
                  bVar21 = DAT_005b8bf4 < 10;
                  uVar10 = 0x5764b15a;
                  goto LAB_0040457e;
                }
                goto joined_r0x00404a2a;
              }
              if (uVar9 == 0xdc6ee0d5) {
                *local_790 = 0xffffffff;
                uVar9 = 0xdcea84df;
                goto LAB_0040406b;
              }
              if (uVar9 == 0xdcea84df) {
                *local_790 = 0xffffffff;
                uVar10 = (~-DAT_005b8bb0 * DAT_005b8bb0 ^ 0xfffffffeU) &
                         ~-DAT_005b8bb0 * DAT_005b8bb0;
                bVar20 = DAT_005b8bf4 < 10 == (uVar10 == 0);
                uVar7 = 0xdc6ee0d5;
                uVar11 = 0x62cc70d4;
                goto LAB_004049c9;
              }
              if (uVar9 == 0xdd264eaf) {
                local_780 = local_678;
                local_730 = local_358;
                bVar20 = (~((DAT_005b8bb0 + -1) * DAT_005b8bb0) | 0xfffffffeU) == 0xffffffff;
                uVar10 = 0x3052ad69;
                uVar9 = 0xb50df7ba;
                if (bVar20) {
                  uVar9 = 0x3052ad69;
                }
                bVar22 = SBORROW4(DAT_005b8bf4,10);
                bVar19 = DAT_005b8bf4 + -10 < 0;
                bVar21 = DAT_005b8bf4 < 10;
                uVar7 = 0xb50df7ba;
                goto LAB_00403561;
              }
            }
          }
          else {
            if ((int)uVar9 < -0x8e50e5) {
              if ((int)uVar9 < -0x15139820) {
                if (uVar9 != 0xdda6598e) {
                  if (uVar9 == 0xdf62bc9f) {
                    uVar9 = ((local_6f4 >> 0x1f ^ 0xeca2fc9cU) & local_6f4 >> 0x1f) + 0x50291fde;
                    local_6f0 = local_6f4;
                  }
                  else if (uVar9 == 0xdff34450) {
                    uVar9 = 0x6c6b8b63;
                    local_720 = (uint *)((ulong)local_720 & 0xffffffff00000000);
                    goto LAB_00403580;
                  }
                  goto joined_r0x00404a2a;
                }
                putc(10,stdout);
LAB_0040462e:
                uVar9 = 0xe1d8a1f;
              }
              else {
                if (uVar9 != 0xeaec67e0) {
                  if (uVar9 == 0xf4904379) {
                    local_748 = (int **)(long)local_710;
                    local_358[(long)local_748] = 1;
                    uVar9 = 0x19476be4;
                    unaff_R12D = 0;
                    goto LAB_00403580;
                  }
                  if (uVar9 == 0xf7a4dd3f) goto LAB_00404a6c;
                  goto joined_r0x00404a2a;
                }
                *local_6b8[0] = local_724;
                uVar9 = 0x83030fe0;
              }
              goto LAB_0040406b;
            }
            if (0x412cc62 < (int)uVar9) {
              if (uVar9 == 0x412cc63) {
                bVar21 = SBORROW4(unaff_R14D,local_760);
                bVar20 = (int)(unaff_R14D - local_760) < 0;
                uVar9 = 0x9769b142;
                uVar7 = 0xd885308b;
                local_794 = unaff_R14D;
                goto LAB_00404aa3;
              }
              if (uVar9 != 0xe1d8a1f) {
                if (uVar9 == 0x109f55de) {
                  bVar20 = (~((DAT_005b8bb0 + -1) * DAT_005b8bb0) | 0xfffffffeU) == 0xffffffff;
                  uVar7 = 0xdd264eaf;
                  uVar9 = 0xb50df7ba;
                  if (bVar20) {
                    uVar9 = 0xdd264eaf;
                  }
                  bVar22 = SBORROW4(DAT_005b8bf4,10);
                  bVar19 = DAT_005b8bf4 + -10 < 0;
                  bVar21 = DAT_005b8bf4 < 10;
                  uVar10 = 0xb50df7ba;
                  goto LAB_0040457e;
                }
                goto joined_r0x00404a2a;
              }
LAB_00404a6c:
              uVar9 = 0xb5028127;
              goto LAB_0040406b;
            }
            if (uVar9 == 0xff71af1b) {
              uVar9 = 0x61e99a8c;
              local_740 = 0;
              goto LAB_00403580;
            }
            if (uVar9 == 0x7d697a) {
              bVar20 = local_731 == '\0';
              uVar9 = 0xdff34450;
              uVar7 = 0x46687c39;
              goto LAB_00404806;
            }
            if (uVar9 == 0x3c8f26f) {
              uVar10 = (~-DAT_005b8bb0 * DAT_005b8bb0 ^ 0xfffffffeU) & ~-DAT_005b8bb0 * DAT_005b8bb0
              ;
              bVar20 = DAT_005b8bf4 < 10 == (uVar10 == 0);
              uVar7 = 0x9ddbc90b;
              uVar11 = 0x20da986b;
              local_758 = unaff_EBP;
              goto LAB_004049c9;
            }
          }
joined_r0x00404a2a:
          if (0x152dcf24 < (int)uVar9) {
LAB_00403580:
            if ((int)uVar9 < 0x4a5f42fe) {
              if (0x2ac18978 < (int)uVar9) {
                if ((int)uVar9 < 0x32f0007b) {
                  if ((int)uVar9 < 0x3052ad69) {
                    if (uVar9 == 0x2ac18979) {
                      bVar20 = (~((DAT_005b8bb0 + -1) * DAT_005b8bb0) | 0xfffffffeU) == 0xffffffff;
                      uVar7 = 0xc13bcc74;
                      uVar9 = 0xb1ee0efb;
                      if (bVar20) {
                        uVar9 = 0xc13bcc74;
                      }
                      bVar22 = SBORROW4(DAT_005b8bf4,10);
                      bVar19 = DAT_005b8bf4 + -10 < 0;
                      bVar21 = DAT_005b8bf4 < 10;
                      uVar10 = 0xb1ee0efb;
                      local_798 = unaff_R13D;
                      goto LAB_0040457e;
                    }
                    if (uVar9 == 0x2bfffb53) {
                      local_75c = local_678[(int)local_784];
                      uVar9 = 0x603dc986;
                      if (local_75c == 0x7fffffff) {
                        uVar9 = 0xce28dec9;
                      }
                      goto joined_r0x00403b66;
                    }
                    if (uVar9 != 0x2c05cc35) goto joined_r0x00404a2a;
                    FUN_004084e0(local_678,local_358,local_6ec);
                    uVar9 = 0x506dd8cd;
                  }
                  else {
                    if (uVar9 == 0x3052ad69) {
                      uVar9 = 0x412cc63;
                      unaff_R14D = 0;
                      goto LAB_0040406b;
                    }
                    if (uVar9 == 0x3088e03d) {
                      local_770 = local_678[(long)local_748];
                      local_733 = local_770 != 0x7fffffff;
                      uVar10 = ~((DAT_005b8bb0 + -1) * DAT_005b8bb0) | 0xfffffffe;
                      bVar20 = DAT_005b8bf4 < 10 == (uVar10 == 0xffffffff);
                      uVar7 = 0x4a5f42fe;
                      uVar11 = 0x152dcf25;
                      goto LAB_00404796;
                    }
                    if (uVar9 != 0x3298b8b3) goto joined_r0x00404a2a;
                    printf("%d",(ulong)local_75c);
                    uVar9 = 0x57e16482;
                  }
                }
                else if ((int)uVar9 < 0x42fb6f2f) {
                  if (uVar9 == 0x32f0007b) {
                    uVar9 = 0xc1c7298f;
                    unaff_R15D = 0;
                    goto LAB_0040406b;
                  }
                  if (uVar9 == 0x39e7889c) {
                    local_731 = local_76c == 0;
                    uVar10 = ~(~-DAT_005b8bb0 * DAT_005b8bb0) | 0xfffffffe;
                    bVar20 = DAT_005b8bf4 < 10 == (uVar10 == 0xffffffff);
                    uVar7 = 0x29067d79;
                    uVar11 = 0x7d697a;
                    goto LAB_00404796;
                  }
                  if (uVar9 != 0x3e36bca4) goto joined_r0x00404a2a;
                  unaff_R12D = local_754 + 1;
                  uVar9 = 0x19476be4;
                }
                else {
                  if (uVar9 == 0x42fb6f2f) {
                    putc(10,stdout);
                    goto LAB_0040462e;
                  }
                  if (uVar9 != 0x46687c39) {
                    if (uVar9 == 0x499afd56) {
                      uVar9 = 0xdff34450;
                      goto LAB_0040406b;
                    }
                    goto joined_r0x00404a2a;
                  }
                  unaff_R13D = local_798 + 1;
                  uVar9 = 0x2ac18979;
                }
                goto LAB_00403580;
              }
              if ((int)uVar9 < 0x21b75de8) {
                if ((int)uVar9 < 0x1c91ad4a) {
                  if (uVar9 != 0x152dcf25) {
                    if (uVar9 == 0x19476be4) {
                      bVar21 = SBORROW4(unaff_R12D,local_760);
                      bVar20 = (int)(unaff_R12D - local_760) < 0;
                      uVar9 = 0xa1614c90;
                      uVar7 = 0x9907ac67;
                      local_754 = unaff_R12D;
                      goto LAB_00404aa3;
                    }
                    goto joined_r0x00404a2a;
                  }
                  bVar20 = local_733 == '\0';
                  uVar9 = 0x3e36bca4;
                  uVar7 = 0x2a7eca31;
LAB_00404806:
                  if (!bVar20) {
                    uVar9 = uVar7;
                  }
                  goto joined_r0x00403b66;
                }
                if (uVar9 == 0x1c91ad4a) {
                  putc(10,stdout);
                  uVar9 = 0xadee0535;
                  goto LAB_0040406b;
                }
                if (uVar9 != 0x20da986b) {
                  if (uVar9 == 0x2128b297) {
                    unaff_EBP = local_758 + 1;
                    uVar9 = 0x3c8f26f;
                    goto LAB_0040406b;
                  }
                  goto joined_r0x00404a2a;
                }
                local_737 = local_758 < local_760;
                uVar10 = ~((DAT_005b8bb0 + -1) * DAT_005b8bb0) | 0xfffffffe;
                bVar20 = DAT_005b8bf4 < 10 == (uVar10 == 0xffffffff);
                uVar7 = 0x9ddbc90b;
                uVar11 = 0xbe936a2b;
              }
              else {
                if ((int)uVar9 < 0x25d857e7) {
                  if (uVar9 == 0x21b75de8) {
                    uVar10 = (DAT_005b8bb0 + -1) * DAT_005b8bb0;
                    uVar10 = (uVar10 ^ 0xfffffffe) & uVar10;
                    bVar20 = DAT_005b8bf4 < 10 == (uVar10 == 0);
                    uVar7 = 0x2c05cc35;
                    uVar11 = 0x506dd8cd;
LAB_004049c9:
                    if (!bVar20) {
                      uVar7 = uVar11;
                    }
                    uVar9 = uVar7;
                    if (uVar10 == 0) {
                      uVar9 = uVar11;
                    }
                    if (9 < DAT_005b8bf4) {
                      uVar9 = uVar7;
                    }
                    goto joined_r0x00403b66;
                  }
                  if (uVar9 == 0x24564336) {
                    uVar9 = 0x61e99a8c;
                    local_740 = 0xb;
                  }
                  else {
                    if (uVar9 != 0x24567385) goto joined_r0x00404a2a;
                    putc(0x20,stdout);
                    uVar9 = 0x69ced2b3;
                  }
                  goto LAB_00403580;
                }
                if (uVar9 == 0x25d857e7) {
                  local_790 = (undefined4 *)
                              (&DAT_00591a70 + (long)local_758 * 4 + (long)(int)local_73c * 800);
                  iVar13 = __isoc99_scanf("%d",local_790);
                  bVar20 = iVar13 == 1;
                  uVar9 = 0x2128b297;
                  uVar7 = 0xd67363cf;
                  goto LAB_00404806;
                }
                if (uVar9 == 0x29067d79) {
                  uVar9 = 0x39e7889c;
                  goto LAB_00403580;
                }
                if (uVar9 != 0x2a7eca31) goto joined_r0x00404a2a;
                uVar10 = ~((DAT_005b8bb0 + -1) * DAT_005b8bb0) | 0xfffffffe;
                bVar20 = DAT_005b8bf4 < 10 == (uVar10 == 0xffffffff);
                uVar7 = 0xbbe74445;
                uVar11 = 0x7796fb5c;
              }
LAB_00404796:
              if (!bVar20) {
                uVar7 = uVar11;
              }
              uVar9 = uVar7;
              if (uVar10 == 0xffffffff) {
                uVar9 = uVar11;
              }
              if (9 < DAT_005b8bf4) {
                uVar9 = uVar7;
              }
              goto joined_r0x00403b66;
            }
            if ((int)uVar9 < 0x62cc70d4) {
              if ((int)uVar9 < 0x57e16482) {
                if (0x506dd8cc < (int)uVar9) {
                  if (uVar9 == 0x506dd8cd) {
                    local_710 = FUN_004084e0(local_678,local_358,local_6ec);
                    local_734 = local_710 == -1;
                    uVar10 = (DAT_005b8bb0 + -1) * DAT_005b8bb0;
                    uVar10 = (uVar10 ^ 0xfffffffe) & uVar10;
                    bVar20 = uVar10 == 0;
                    uVar7 = 0x85562f22;
                    uVar9 = 0x2c05cc35;
                    if (uVar10 == 0) {
                      uVar9 = 0x85562f22;
                    }
                    bVar22 = SBORROW4(DAT_005b8bf4,10);
                    bVar19 = DAT_005b8bf4 + -10 < 0;
                    bVar21 = DAT_005b8bf4 < 10;
                    uVar10 = 0x2c05cc35;
                    goto LAB_0040457e;
                  }
                  if (uVar9 == 0x525a865c) {
                    putc(10,stdout);
                    goto LAB_00404a6c;
                  }
                  if (uVar9 == 0x5764b15a) {
                    local_678[(int)local_794] = 0x7fffffff;
                    local_358[(int)local_794] = 0;
                    uVar9 = 0x869396a2;
                    goto LAB_0040406b;
                  }
                  goto joined_r0x00404a2a;
                }
                if (uVar9 == 0x4a5f42fe) {
                  uVar9 = 0x3088e03d;
                  goto LAB_00403580;
                }
                if (uVar9 == 0x4e4a645d) {
                  uVar9 = 0xaeb1cf2a;
                  goto LAB_0040406b;
                }
                if (uVar9 != 0x50291fde) goto joined_r0x00404a2a;
                uVar7 = (DAT_005b8bb0 + -1) * DAT_005b8bb0;
                uVar7 = (uVar7 ^ 0xfffffffe) & uVar7;
                bVar20 = uVar7 == 0;
                uVar10 = 0x7bd2443c;
                uVar9 = 0xb6889c53;
                if (uVar7 == 0) {
                  uVar9 = 0x7bd2443c;
                }
                bVar22 = SBORROW4(DAT_005b8bf4,10);
                bVar19 = DAT_005b8bf4 + -10 < 0;
                bVar21 = DAT_005b8bf4 < 10;
                uVar7 = 0xb6889c53;
LAB_00403561:
                if (bVar22 == bVar19) {
                  uVar9 = uVar7;
                }
                if ((bool)(bVar21 ^ bVar20)) {
                  uVar9 = uVar10;
                }
                goto joined_r0x00403b66;
              }
              if ((int)uVar9 < 0x61e99a8c) {
                if (uVar9 != 0x57e16482) {
                  if (uVar9 == 0x600ddb39) {
                    bVar20 = local_738 == '\0';
                    uVar9 = 0xdf62bc9f;
                    uVar7 = 0x42fb6f2f;
                    goto LAB_00404806;
                  }
                  if (uVar9 == 0x603dc986) {
                    uVar10 = ~((DAT_005b8bb0 + -1) * DAT_005b8bb0) | 0xfffffffe;
                    bVar20 = DAT_005b8bf4 < 10 == (uVar10 == 0xffffffff);
                    uVar7 = 0x3298b8b3;
                    uVar11 = 0x57e16482;
                    goto LAB_00404796;
                  }
                  goto joined_r0x00404a2a;
                }
                printf("%d",(ulong)local_75c);
                uVar10 = ~((DAT_005b8bb0 + -1) * DAT_005b8bb0) | 0xfffffffe;
                bVar20 = DAT_005b8bf4 < 10 == (uVar10 == 0xffffffff);
                uVar7 = 0x3298b8b3;
                uVar11 = 0x88ac21b8;
                goto LAB_00404796;
              }
              if (uVar9 == 0x61e99a8c) {
                local_76c = local_740;
                bVar20 = (~((DAT_005b8bb0 + -1) * DAT_005b8bb0) | 0xfffffffeU) == 0xffffffff;
                uVar7 = 0x39e7889c;
                uVar9 = 0x29067d79;
                if (bVar20) {
                  uVar9 = 0x39e7889c;
                }
                bVar22 = SBORROW4(DAT_005b8bf4,10);
                bVar19 = DAT_005b8bf4 + -10 < 0;
                bVar21 = DAT_005b8bf4 < 10;
                uVar10 = 0x29067d79;
              }
              else {
                if (uVar9 == 0x628d3e56) {
                  uVar10 = (~-DAT_005b8bb0 * DAT_005b8bb0 ^ 0xfffffffeU) &
                           ~-DAT_005b8bb0 * DAT_005b8bb0;
                  bVar20 = DAT_005b8bf4 < 10 == (uVar10 == 0);
                  uVar7 = 0x74be3934;
                  uVar11 = 0xff71af1b;
                  goto LAB_004049c9;
                }
                if (uVar9 != 0x6293c552) goto joined_r0x00404a2a;
                uVar10 = (DAT_005b8bb0 + -1) * DAT_005b8bb0;
                uVar10 = (uVar10 ^ 0xfffffffe) & uVar10;
                bVar20 = uVar10 == 0;
                uVar7 = 0xaeb1cf2a;
                uVar9 = 0x4e4a645d;
                if (uVar10 == 0) {
                  uVar9 = 0xaeb1cf2a;
                }
                bVar22 = SBORROW4(DAT_005b8bf4,10);
                bVar19 = DAT_005b8bf4 + -10 < 0;
                bVar21 = DAT_005b8bf4 < 10;
                uVar10 = 0x4e4a645d;
              }
            }
            else {
              if ((int)uVar9 < 0x6c6b8b63) {
                if (0x690c640a < (int)uVar9) {
                  if (uVar9 == 0x690c640b) {
                    unaff_R15D = local_73c + 1;
                    uVar9 = 0xc1c7298f;
                    goto LAB_0040406b;
                  }
                  if (uVar9 != 0x69ced2b3) {
                    if (uVar9 == 0x69d89deb) {
                      uVar9 = 0x3c8f26f;
                      unaff_EBP = 0;
                      goto LAB_0040406b;
                    }
                    goto joined_r0x00404a2a;
                  }
                  uVar9 = 0x6c6b8b63;
                  local_720 = (uint *)CONCAT44(local_720._4_4_,local_70c);
                  goto LAB_00403580;
                }
                if (uVar9 == 0x62cc70d4) {
                  uVar9 = 0x2128b297;
                  goto LAB_00403580;
                }
                if (uVar9 == 0x63862341) {
                  uVar10 = ~((DAT_005b8bb0 + -1) * DAT_005b8bb0) | 0xfffffffe;
                  bVar20 = DAT_005b8bf4 < 10 == (uVar10 == 0xffffffff);
                  uVar7 = 0x1c91ad4a;
                  uVar11 = 0xadee0535;
                  goto LAB_00404796;
                }
                if (uVar9 != 0x65c47c20) goto joined_r0x00404a2a;
                bVar20 = local_735 == '\0';
                uVar9 = 0x499afd56;
                uVar7 = 0x21b75de8;
                goto LAB_00404806;
              }
              if ((int)uVar9 < 0x76c7a642) {
                if (uVar9 == 0x6c6b8b63) {
                  local_784 = (uint)local_720;
                  bVar21 = SBORROW4((uint)local_720,local_760);
                  bVar20 = (int)((uint)local_720 - local_760) < 0;
                  uVar9 = 0xdda6598e;
                  uVar7 = 0x2bfffb53;
LAB_00404aa3:
                  if (bVar21 != bVar20) {
                    uVar9 = uVar7;
                  }
                  goto joined_r0x00403b66;
                }
                if (uVar9 == 0x72ebaf0a) goto LAB_0040462e;
                if (uVar9 != 0x74be3934) goto joined_r0x00404a2a;
                uVar9 = 0x628d3e56;
                goto LAB_00403580;
              }
              if (uVar9 == 0x76c7a642) {
                bVar20 = local_732 == '\0';
                uVar9 = 0x83030fe0;
                uVar7 = 0xeaec67e0;
                goto LAB_00404806;
              }
              if (uVar9 == 0x7796fb5c) {
                local_724 = local_774 + local_770;
                local_6b8[0] = local_678 + (long)local_750;
                local_732 = (int)local_724 < (int)local_678[(long)local_750];
                uVar10 = (DAT_005b8bb0 + -1) * DAT_005b8bb0;
                uVar10 = (uVar10 ^ 0xfffffffe) & uVar10;
                bVar20 = uVar10 == 0;
                uVar7 = 0x76c7a642;
                uVar9 = 0xbbe74445;
                if (uVar10 == 0) {
                  uVar9 = 0x76c7a642;
                }
                bVar22 = SBORROW4(DAT_005b8bf4,10);
                bVar19 = DAT_005b8bf4 + -10 < 0;
                bVar21 = DAT_005b8bf4 < 10;
                uVar10 = 0xbbe74445;
                goto LAB_0040457e;
              }
              if (uVar9 != 0x7bd2443c) goto joined_r0x00404a2a;
              local_736 = local_760 <= local_6f0;
              uVar10 = (DAT_005b8bb0 + -1) * DAT_005b8bb0;
              uVar10 = (uVar10 ^ 0xfffffffe) & uVar10;
              bVar20 = uVar10 == 0;
              uVar7 = 0xbc27c9d0;
              uVar9 = 0xb6889c53;
              if (uVar10 == 0) {
                uVar9 = 0xbc27c9d0;
              }
              bVar22 = SBORROW4(DAT_005b8bf4,10);
              bVar19 = DAT_005b8bf4 + -10 < 0;
              bVar21 = DAT_005b8bf4 < 10;
              uVar10 = 0xb6889c53;
            }
LAB_0040457e:
            if (bVar22 == bVar19) {
              uVar9 = uVar10;
            }
            if ((bool)(bVar21 ^ bVar20)) {
              uVar9 = uVar7;
            }
joined_r0x00403b66:
            if ((int)uVar9 < 0x152dcf25) goto LAB_0040406b;
            goto LAB_00403580;
          }
          goto LAB_0040406b;
        }
        if (uVar9 != 0x14355a6c) {
          if (uVar9 == 0x15c49793) {
            bVar21 = SBORROW4(local_788,10);
            bVar20 = local_788 + -10 < 0;
            uVar9 = 0x95a61148;
            uVar7 = 0x87295c91;
            goto LAB_00402690;
          }
          goto joined_r0x00402699;
        }
        FUN_004062a0();
LAB_004026b2:
        uVar9 = 0x63e852a8;
        goto LAB_004026d0;
      }
      if ((int)uVar9 < 0x35e126b8) {
        if (uVar9 == 0x1fdc54fe) {
          local_748 = (int **)&local_76c;
          local_784 = __isoc99_scanf(&DAT_00409020);
          iVar13 = -0x40b0edf3;
LAB_00403200:
          if (iVar13 < -0x445d755d) {
            if (-0x5b534ed9 < iVar13) {
              if (iVar13 == -0x5b534ed8) {
                local_798 = CONCAT31(local_798._1_3_,local_76c == 0);
                uVar9 = (DAT_005b8c14 + -1) * DAT_005b8c14;
                uVar9 = (uVar9 ^ 0xfffffffe) & uVar9;
                bVar20 = DAT_005b8ba8 < 10 == (uVar9 == 0);
                iVar3 = 0x41e0b8f4;
                iVar14 = -0x445d755d;
                goto LAB_00402ec8;
              }
              if (iVar13 == -0x56d18c9a) {
                uVar9 = (DAT_005b8c14 + -1) * DAT_005b8c14;
                uVar9 = (uVar9 ^ 0xfffffffe) & uVar9;
                bVar20 = DAT_005b8ba8 < 10 == (uVar9 == 0);
                iVar3 = 0x7e0bb286;
                iVar14 = 0x3b4cfcf4;
                goto LAB_00402ec8;
              }
              if (iVar13 != -0x47481bc7) goto joined_r0x0040344c;
              local_750 = local_6b8;
              iVar13 = -0x628d4e38;
              unaff_EBP = 0;
              goto LAB_00403200;
            }
            if (iVar13 != -0x7940a65d) {
              if (iVar13 != -0x65f7c267) {
                if (iVar13 != -0x628d4e38) goto joined_r0x0040344c;
                local_790 = (undefined4 *)CONCAT44(local_790._4_4_,unaff_EBP);
                local_718 = (int *)CONCAT44(local_718._4_4_,local_76c);
                bVar20 = local_76c == 0;
                iVar13 = 0x158691b7;
                iVar3 = -0xee5012f;
                goto LAB_00403444;
              }
LAB_004033bb:
              iVar13 = -0x1a3bd941;
              unaff_R14D = 1;
              goto LAB_00403200;
            }
            bVar20 = (char)local_754 == '\0';
            iVar13 = 0x7c79b04e;
            iVar3 = -0x56d18c9a;
          }
          else {
            if (-0x2be2c4ab < iVar13) {
              if (iVar13 < -0x1a3bd941) {
                if (iVar13 == -0x2be2c4aa) {
                  local_780 = (uint *)CONCAT44(local_780._4_4_,unaff_R15D);
                  uVar9 = (DAT_005b8c14 + -1) * DAT_005b8c14;
                  uVar9 = (uVar9 ^ 0xfffffffe) & uVar9;
                  bVar20 = DAT_005b8ba8 < 10 == (uVar9 == 0);
                  iVar3 = 0x77d77723;
                  iVar14 = 0x80b270d;
                  goto LAB_00402ec8;
                }
                if (iVar13 == -0x27e27319) {
                  uVar9 = (DAT_005b8c14 + -1) * DAT_005b8c14;
                  uVar9 = (uVar9 ^ 0xfffffffe) & uVar9;
                  iVar13 = 0x3a34d2fa;
                  if (uVar9 == 0) {
                    iVar13 = 0x790b1f02;
                  }
                  if (9 < DAT_005b8ba8) {
                    iVar13 = 0x3a34d2fa;
                  }
                  if (DAT_005b8ba8 < 10 != (uVar9 == 0)) {
                    iVar13 = 0x790b1f02;
                  }
                }
              }
              else {
                if (iVar13 == -0x1a3bd941) {
                  local_730 = (int *)CONCAT44(local_730._4_4_,unaff_R14D);
                  uVar9 = (~-DAT_005b8c14 * DAT_005b8c14 ^ 0xfffffffeU) &
                          ~-DAT_005b8c14 * DAT_005b8c14;
                  bVar20 = uVar9 == 0;
                  iVar3 = -0x27e27319;
                  iVar13 = 0x3a34d2fa;
                  if (uVar9 == 0) {
                    iVar13 = -0x27e27319;
                  }
                  iVar14 = 0x3a34d2fa;
                  goto LAB_00403507;
                }
                if (iVar13 == -0x1752f28f) {
                  uVar9 = ~((DAT_005b8c14 + -1) * DAT_005b8c14) | 0xfffffffe;
                  bVar20 = DAT_005b8ba8 < 10 == (uVar9 == 0xffffffff);
                  iVar3 = 0x41e0b8f4;
                  iVar14 = -0x5b534ed8;
                  goto LAB_0040339a;
                }
              }
              goto joined_r0x0040344c;
            }
            if (iVar13 == -0x445d755d) {
              bVar20 = (char)local_798 == '\0';
              iVar13 = -0x47481bc7;
              iVar3 = 0x287c654a;
            }
            else {
              if (iVar13 != -0x40b0edf3) {
                if (iVar13 != -0x2dcaff2b) goto joined_r0x0040344c;
                iVar13 = -0x1a3bd941;
                unaff_R14D = 0;
                goto LAB_00403200;
              }
              bVar20 = local_784 == 1;
              iVar13 = -0x1752f28f;
              iVar3 = -0x2dcaff2b;
            }
          }
LAB_00403444:
          if (!bVar20) {
            iVar13 = iVar3;
          }
joined_r0x0040344c:
          if (-0x10b612ce < iVar13) {
            while (0x41e0b8f3 < iVar13) {
              if (iVar13 < 0x790b1f02) {
                if (iVar13 == 0x41e0b8f4) {
                  iVar13 = -0x5b534ed8;
                  goto LAB_00403200;
                }
                if (iVar13 == 0x6f26e7a1) {
                  puts("0");
                  iVar13 = -0x10b612cd;
                }
                else {
                  if (iVar13 != 0x77d77723) goto joined_r0x0040344c;
                  iVar13 = 0x80b270d;
                }
              }
              else {
                if (iVar13 < 0x7c79b04e) {
                  if (iVar13 == 0x79efe03a) {
                    iVar13 = -0x2be2c4aa;
                    unaff_R15D = (uint)local_768;
                    goto LAB_00403200;
                  }
                  if (iVar13 == 0x790b1f02) goto LAB_004026b2;
                  goto joined_r0x0040344c;
                }
                if (iVar13 == 0x7c79b04e) {
                  putc(10,stdout);
                  goto LAB_004033bb;
                }
                if (iVar13 != 0x7e0bb286) goto joined_r0x0040344c;
                putc((int)*(char *)((long)local_6b8 + (long)(int)(uint)local_780),stdout);
                iVar13 = 0x3b4cfcf4;
              }
            }
            if (iVar13 < 0x158691b7) {
              if (iVar13 != -0x10b612cd) {
                if (iVar13 == -0xee5012f) {
                  bVar5 = ((byte)local_718 ^ 0xfe) & (byte)local_718;
                  unaff_EBP = (uint)local_790 + 1;
                  *(byte *)((long)local_6b8 + (long)(int)(uint)local_790) =
                       bVar5 ^ 0x30 | bVar5 & 0x30;
                  local_76c = local_76c >> 1;
                  iVar13 = -0x628d4e38;
                  goto LAB_00403200;
                }
                if (iVar13 == 0x80b270d) {
                  local_754 = CONCAT31(local_754._1_3_,-1 < (int)(uint)local_780);
                  bVar20 = (~((DAT_005b8c14 + -1) * DAT_005b8c14) | 0xfffffffeU) == 0xffffffff;
                  iVar3 = -0x7940a65d;
                  iVar13 = 0x77d77723;
                  if (bVar20) {
                    iVar13 = -0x7940a65d;
                  }
                  iVar14 = 0x77d77723;
LAB_00403507:
                  if (9 < DAT_005b8ba8) {
                    iVar13 = iVar14;
                  }
                  if ((bool)(DAT_005b8ba8 < 10 ^ bVar20)) {
                    iVar13 = iVar3;
                  }
                }
                goto joined_r0x0040344c;
              }
              puts("0");
              uVar9 = (DAT_005b8c14 + -1) * DAT_005b8c14;
              uVar9 = (uVar9 ^ 0xfffffffe) & uVar9;
              bVar20 = DAT_005b8ba8 < 10 == (uVar9 == 0);
              iVar3 = 0x6f26e7a1;
              iVar14 = -0x65f7c267;
            }
            else {
              if (0x3a34d2f9 < iVar13) {
                if (iVar13 == 0x3a34d2fa) {
                  iVar13 = -0x27e27319;
                  goto LAB_00403200;
                }
                if (iVar13 == 0x3b4cfcf4) {
                  putc((int)*(char *)((long)local_6b8 + (long)(int)(uint)local_780),stdout);
                  local_768 = (int *)CONCAT44(local_768._4_4_,~-(uint)local_780);
                  uVar9 = ~((DAT_005b8c14 + -1) * DAT_005b8c14) | 0xfffffffe;
                  bVar20 = DAT_005b8ba8 < 10 == (uVar9 == 0xffffffff);
                  iVar3 = 0x7e0bb286;
                  iVar14 = 0x79efe03a;
LAB_0040339a:
                  if (!bVar20) {
                    iVar3 = iVar14;
                  }
                  iVar13 = iVar3;
                  if (uVar9 == 0xffffffff) {
                    iVar13 = iVar14;
                  }
                  if (9 < DAT_005b8ba8) {
                    iVar13 = iVar3;
                  }
                }
                goto joined_r0x0040344c;
              }
              if (iVar13 == 0x158691b7) {
                iVar13 = -0x2be2c4aa;
                unaff_R15D = (uint)local_790 - 1;
                goto LAB_00403200;
              }
              if (iVar13 != 0x287c654a) goto joined_r0x0040344c;
              uVar9 = (DAT_005b8c14 + -1) * DAT_005b8c14;
              uVar9 = (uVar9 ^ 0xfffffffe) & uVar9;
              bVar20 = DAT_005b8ba8 < 10 == (uVar9 == 0);
              iVar3 = 0x6f26e7a1;
              iVar14 = -0x10b612cd;
            }
LAB_00402ec8:
            if (!bVar20) {
              iVar3 = iVar14;
            }
            iVar13 = iVar3;
            if (uVar9 == 0) {
              iVar13 = iVar14;
            }
            if (9 < DAT_005b8ba8) {
              iVar13 = iVar3;
            }
            goto joined_r0x0040344c;
          }
          goto LAB_00403200;
        }
        if (uVar9 == 0x2f6aac32) {
          bVar21 = SBORROW4(local_788,7);
          bVar20 = local_788 + -7 < 0;
          uVar9 = 0x14355a6c;
          uVar7 = 0x8f77075a;
          goto LAB_00402690;
        }
        goto joined_r0x00402699;
      }
      if (uVar9 == 0x35e126b8) {
        uVar9 = 0xb214f8c1;
        goto LAB_004011ec;
      }
      if (uVar9 == 0x35ea88f1) {
        bVar21 = SBORROW4(local_788,5);
        bVar20 = local_788 + -5 < 0;
        uVar9 = 0xf317c082;
        uVar7 = 0x1fdc54fe;
LAB_00402690:
        if (bVar21 != bVar20) {
          uVar9 = uVar7;
        }
      }
    }
    else if ((int)uVar9 < 0x483c40b3) {
      if ((int)uVar9 < 0x37cf670e) {
        if (uVar9 == 0x370b42f4) {
          local_748 = &local_768;
          iVar13 = __isoc99_scanf("%d");
          local_790 = (undefined4 *)CONCAT44(local_790._4_4_,iVar13);
          uVar9 = 0x917e4327;
          local_720 = extraout_XMM0_Qa;
LAB_0040297b:
          if ((int)uVar9 < -0x39a4d6ab) {
            if ((int)uVar9 < -0x4faf91a8) {
              if (uVar9 == 0x8ac38881) {
                __isoc99_scanf(&DAT_00409016,&local_6d8);
                uVar9 = 0x466135a;
                goto LAB_00402ba0;
              }
              if (uVar9 == 0x917e4327) {
                bVar20 = iVar13 == 1;
                uVar9 = 0x3730ee9c;
                uVar7 = 0xfe50448f;
                goto LAB_00402b56;
              }
              if (uVar9 == 0xa0975903) {
                puts("0.000000");
                uVar9 = 0x48f69047;
                goto LAB_00402ba0;
              }
            }
            else {
              if (uVar9 == 0xb0506e58) goto LAB_00402b87;
              if (uVar9 == 0xbf4213cb) {
                uVar9 = 0x473283eb;
                goto LAB_00402ba0;
              }
              if (uVar9 == 0xc4e453f9) {
                uVar9 = 0x72403e1d;
                local_720 = (uint *)0x0;
                unaff_EBP = 0;
                goto LAB_00402ba0;
              }
            }
          }
          else if ((int)uVar9 < -0x16c4954e) {
            if (uVar9 == 0xc65b2955) {
              local_6d8 = (uint *)0x0;
              uVar9 = 0x4c5c7506;
              goto LAB_00402ba0;
            }
            if (uVar9 == 0xcef5963b) {
              uVar7 = (DAT_005b8c08 + -1) * DAT_005b8c08;
              uVar7 = (uVar7 ^ 0xfffffffe) & uVar7;
              uVar10 = 0x4c5c7506;
              uVar9 = 0xc65b2955;
              if (uVar7 == 0) {
                uVar9 = 0x4c5c7506;
              }
              uVar11 = 0xc65b2955;
              goto LAB_00402e01;
            }
            if (uVar9 == 0xe8f8a962) {
              uVar9 = 0x418bffed;
              goto LAB_00402ba0;
            }
          }
          else {
            if (uVar9 == 0xfbc82d7a) {
              uVar10 = (DAT_005b8c08 + -1) * DAT_005b8c08;
              uVar10 = (uVar10 ^ 0xfffffffe) & uVar10;
              bVar20 = DAT_005b8b9c < 10 == (uVar10 == 0);
              uVar7 = 0x8ac38881;
              uVar11 = 0x466135a;
              goto LAB_00402c9a;
            }
            if (uVar9 == 0xfe50448f) {
LAB_00402b87:
              uVar9 = 0xe93b6ab2;
              goto LAB_0040297b;
            }
            if (uVar9 == 0xe93b6ab2) goto LAB_004026b2;
          }
LAB_00402970:
          if (0x3ada17c < (int)uVar9) {
LAB_00402ba0:
            while (0x418bffec < (int)uVar9) {
              if (0x4c5c7505 < (int)uVar9) {
                if (uVar9 == 0x4c5c7506) {
                  local_6d8 = (uint *)0x0;
                  uVar7 = (DAT_005b8c08 + -1) * DAT_005b8c08;
                  uVar7 = (uVar7 ^ 0xfffffffe) & uVar7;
                  bVar20 = uVar7 == 0;
                  uVar10 = 0xbf4213cb;
                  uVar9 = 0xc65b2955;
                  if (uVar7 == 0) {
                    uVar9 = 0xbf4213cb;
                  }
                  bVar22 = SBORROW4(DAT_005b8b9c,10);
                  bVar19 = DAT_005b8b9c + -10 < 0;
                  bVar21 = DAT_005b8b9c < 10;
                  uVar7 = 0xc65b2955;
                  goto LAB_00402918;
                }
                if (uVar9 == 0x6477ab14) {
                  printf("%.6f\n",(double)local_6b8[0] / (double)(int)(uint)local_780);
                  goto LAB_00402b87;
                }
                if (uVar9 == 0x72403e1d) {
                  local_730 = (int *)CONCAT44(local_730._4_4_,unaff_EBP);
                  local_780 = (uint *)CONCAT44(local_780._4_4_,(uint)local_768);
                  local_6b8[0] = local_720;
                  uVar9 = 0x6477ab14;
                  if (unaff_EBP < (int)(uint)local_768) {
                    uVar9 = 0xfbc82d7a;
                  }
                  goto joined_r0x00402e0e;
                }
                goto LAB_00402970;
              }
              if (uVar9 == 0x418bffed) {
                bVar20 = (~((DAT_005b8c08 + -1) * DAT_005b8c08) | 0xfffffffeU) == 0xffffffff;
                uVar10 = 0xc4e453f9;
                uVar9 = 0xe8f8a962;
                if (bVar20) {
                  uVar9 = 0xc4e453f9;
                }
                bVar22 = SBORROW4(DAT_005b8b9c,10);
                bVar19 = DAT_005b8b9c + -10 < 0;
                bVar21 = DAT_005b8b9c < 10;
                uVar7 = 0xe8f8a962;
LAB_00402918:
                if (bVar22 == bVar19) {
                  uVar9 = uVar7;
                }
                if ((bool)(bVar21 ^ bVar20)) {
                  uVar9 = uVar10;
                }
                goto joined_r0x00402e0e;
              }
              if (uVar9 != 0x473283eb) {
                if (uVar9 == 0x48f69047) {
                  puts("0.000000");
                  uVar7 = ~((DAT_005b8c08 + -1) * DAT_005b8c08) | 0xfffffffe;
                  uVar10 = 0xa0975903;
                  if (DAT_005b8b9c < 10 != (uVar7 == 0xffffffff)) {
                    uVar10 = 0xb0506e58;
                  }
                  uVar9 = uVar10;
                  if (uVar7 == 0xffffffff) {
                    uVar9 = 0xb0506e58;
                  }
                  if (9 < DAT_005b8b9c) {
                    uVar9 = uVar10;
                  }
                  goto joined_r0x00402e0e;
                }
                goto LAB_00402970;
              }
              local_720 = (uint *)((double)local_6b8[0] + (double)local_6d8);
              unaff_EBP = (uint)local_730 + 1;
              uVar9 = 0x72403e1d;
            }
            if ((int)uVar9 < 0x334b5328) {
              if (uVar9 != 0x3ada17d) {
                if (uVar9 == 0x466135a) {
                  local_750 = &local_6d8;
                  iVar3 = __isoc99_scanf(&DAT_00409016);
                  local_718 = (int *)CONCAT71(local_718._1_7_,iVar3 != 1);
                  uVar7 = (DAT_005b8c08 + -1) * DAT_005b8c08;
                  uVar7 = (uVar7 ^ 0xfffffffe) & uVar7;
                  bVar20 = uVar7 == 0;
                  uVar10 = 0x3ada17d;
                  uVar9 = 0x8ac38881;
                  if (uVar7 == 0) {
                    uVar9 = 0x3ada17d;
                  }
                  bVar22 = SBORROW4(DAT_005b8b9c,10);
                  bVar19 = DAT_005b8b9c + -10 < 0;
                  bVar21 = DAT_005b8b9c < 10;
                  uVar7 = 0x8ac38881;
                  goto LAB_00402918;
                }
                goto LAB_00402970;
              }
              bVar20 = (char)local_718 == '\0';
              uVar9 = 0x473283eb;
              uVar7 = 0xcef5963b;
LAB_00402b56:
              if (!bVar20) {
                uVar9 = uVar7;
              }
            }
            else if (uVar9 == 0x334b5328) {
              uVar7 = (DAT_005b8c08 + -1) * DAT_005b8c08;
              uVar7 = (uVar7 ^ 0xfffffffe) & uVar7;
              uVar10 = 0x48f69047;
              uVar9 = 0xa0975903;
              if (uVar7 == 0) {
                uVar9 = 0x48f69047;
              }
              uVar11 = 0xa0975903;
LAB_00402e01:
              if (9 < DAT_005b8b9c) {
                uVar9 = uVar11;
              }
              if (DAT_005b8b9c < 10 != (uVar7 == 0)) {
                uVar9 = uVar10;
              }
            }
            else {
              if (uVar9 == 0x3730ee9c) {
                uVar9 = 0x3f378d12;
                if ((int)(uint)local_768 < 1) {
                  uVar9 = 0x334b5328;
                }
                if (uVar9 < 0x3ada17d) goto LAB_0040297b;
                goto LAB_00402ba0;
              }
              if (uVar9 != 0x3f378d12) goto LAB_00402970;
              uVar10 = (DAT_005b8c08 + -1) * DAT_005b8c08;
              uVar10 = (uVar10 ^ 0xfffffffe) & uVar10;
              bVar20 = DAT_005b8b9c < 10 == (uVar10 == 0);
              uVar7 = 0xe8f8a962;
              uVar11 = 0x418bffed;
LAB_00402c9a:
              if (!bVar20) {
                uVar7 = uVar11;
              }
              uVar9 = uVar7;
              if (uVar10 == 0) {
                uVar9 = uVar11;
              }
              if (9 < DAT_005b8b9c) {
                uVar9 = uVar7;
              }
            }
joined_r0x00402e0e:
            if ((int)uVar9 < 0x3ada17d) goto LAB_0040297b;
            goto LAB_00402ba0;
          }
          goto LAB_0040297b;
        }
        if (uVar9 == 0x378e691d) {
          uVar9 = 0x86b9a6b2;
          goto LAB_004011ec;
        }
      }
      else {
        if (uVar9 == 0x37cf670e) {
          FUN_00404b60();
          goto LAB_004026b2;
        }
        if (uVar9 == 0x3850dbc6) goto code_r0x004027ee;
      }
    }
    else if ((int)uVar9 < 0x5b224796) {
      if (uVar9 == 0x483c40b3) {
        FUN_00404f40();
        uVar9 = 0x5b224796;
      }
      else if (uVar9 == 0x56943b1c) {
        bVar21 = SBORROW4(local_788,3);
        bVar20 = local_788 + -3 < 0;
        uVar9 = 0xa3ac612e;
        uVar7 = 0xa05d49fa;
        goto LAB_00402690;
      }
    }
    else if (uVar9 == 0x5b224796) {
      FUN_00404f40();
      bVar20 = (~((DAT_005b8b88 + -1) * DAT_005b8b88) | 0xfffffffeU) == 0xffffffff;
      uVar10 = 0xde762cce;
      uVar9 = 0x483c40b3;
      if (bVar20) {
        uVar9 = 0xde762cce;
      }
      if (9 < DAT_005b8be8) {
        uVar9 = 0x483c40b3;
      }
      bVar20 = DAT_005b8be8 < 10 == bVar20;
LAB_004026a1:
      if (!bVar20) {
        uVar9 = uVar10;
      }
    }
    else if (uVar9 == 0x63e852a8) {
      iVar13 = __isoc99_scanf("%d",&local_6dc);
      uVar7 = 0x9b7ba17;
      if ((local_6dc == 0) != (iVar13 != 1)) {
        uVar7 = 0xc9f0aff0;
      }
      uVar9 = uVar7;
      if (local_6dc == 0) {
        uVar9 = 0xc9f0aff0;
      }
      local_788 = local_6dc;
      if (iVar13 == 1) {
        uVar9 = uVar7;
      }
    }
joined_r0x00402699:
    if ((int)uVar9 < 0x9c4b103) goto LAB_004011ec;
    goto LAB_004026d0;
  }
  goto LAB_004011ec;
code_r0x00401469:
  if (iVar13 == 0x7ccecb50) {
    pcVar15 = "-1";
    puts("-1");
    pcVar4 = (char *)0xd61ea20f;
    unaff_R14D = 1;
    goto LAB_00401b30;
  }
LAB_00401360:
  uVar9 = (uint)pcVar4;
  goto joined_r0x00401c56;
LAB_00401f56:
  local_750 = (uint **)&local_784;
  uVar2 = __isoc99_scanf("%d");
  local_718 = (int *)CONCAT44(local_718._4_4_,uVar2);
  iVar13 = -0x767fd0c2;
LAB_00402330:
  do {
    if (-0x512648c9 < iVar13) {
      if (iVar13 < -0x4017c388) {
        if (iVar13 < -0x4aef3e6f) {
          if (iVar13 != -0x512648c8) {
            if (iVar13 != -0x4d5b4068) goto joined_r0x00402605;
            puts("0");
          }
          iVar13 = -0x4017c388;
          unaff_R12D = 1;
          goto LAB_00402330;
        }
        if (iVar13 == -0x450f89d1) {
          iVar13 = -0x53bd3a08;
          goto LAB_00402330;
        }
        if (iVar13 == -0x4aef3e6f) goto LAB_004026b2;
      }
      else if (iVar13 < -0x32268ac6) {
        if (iVar13 == -0x4017c388) {
          local_748 = (int **)CONCAT44(local_748._4_4_,unaff_R12D);
          uVar9 = ~((DAT_005b8c04 + -1) * DAT_005b8c04) | 0xfffffffe;
          bVar20 = DAT_005b8bfc < 10 == (uVar9 == 0xffffffff);
          iVar3 = -0x450f89d1;
          iVar14 = -0x53bd3a08;
          goto LAB_00401f89;
        }
        if (iVar13 == -0x32f1343f) {
          printf("%d\n",(ulong)local_730 & 0xffffffff);
          uVar9 = (DAT_005b8c04 + -1) * DAT_005b8c04;
          uVar9 = (uVar9 ^ 0xfffffffe) & uVar9;
          bVar20 = DAT_005b8bfc < 10 == (uVar9 == 0);
          iVar3 = -0x2637f9f9;
          iVar14 = -0x512648c8;
          goto LAB_004024e3;
        }
      }
      else {
        if (iVar13 == -0x32268ac6) {
          iVar13 = 0x14a318a0;
          unaff_R15D = 0x80000000;
          unaff_EBP = 0;
          goto LAB_00401feb;
        }
        if (iVar13 == -0x26513831) {
          uVar9 = (DAT_005b8c04 + -1) * DAT_005b8c04;
          uVar9 = (uVar9 ^ 0xfffffffe) & uVar9;
          bVar20 = DAT_005b8bfc < 10 == (uVar9 == 0);
          iVar3 = 0x3a26e839;
          iVar14 = -0x6a92ddd1;
          goto LAB_004024e3;
        }
      }
joined_r0x00402605:
      if (-0x2637f9fa < iVar13) {
LAB_00401feb:
        while (iVar13 < 0x1d1c82c3) {
          if (iVar13 < 0x2f0bc55) {
            if (iVar13 == -0x2637f9f9) {
              printf("%d\n",(ulong)local_730 & 0xffffffff);
              iVar13 = -0x32f1343f;
              goto LAB_00402330;
            }
            if (iVar13 == -0x25ba867e) {
              local_768 = (int *)CONCAT44(local_768._4_4_,local_784);
              iVar13 = 0x2cf09bc1;
              if ((int)local_784 < 1) {
                iVar13 = -0x4d5b4068;
              }
              goto joined_r0x004021d4;
            }
            if (iVar13 == -0xd0f6638) {
              iVar13 = -0x26513831;
              goto LAB_00402330;
            }
            goto joined_r0x00402605;
          }
          if (iVar13 < 0xa5e3d33) {
            if (iVar13 == 0x2f0bc55) {
              bVar20 = (~(~-DAT_005b8c04 * DAT_005b8c04) | 0xfffffffeU) == 0xffffffff;
              iVar3 = 0x2e16d955;
              iVar13 = -0x5e20d9da;
              if (bVar20) {
                iVar13 = 0x2e16d955;
              }
              iVar14 = -0x5e20d9da;
LAB_0040254d:
              if (9 < DAT_005b8bfc) {
                iVar13 = iVar14;
              }
              if ((bool)(DAT_005b8bfc < 10 ^ bVar20)) {
                iVar13 = iVar3;
              }
              goto joined_r0x004021d4;
            }
            if (iVar13 != 0x45239d3) goto joined_r0x00402605;
            local_784 = 200000;
            iVar13 = 0x7cbe3697;
          }
          else {
            if (iVar13 != 0xa5e3d33) {
              if (iVar13 == 0x14a318a0) {
                local_780 = (uint *)CONCAT44(local_780._4_4_,unaff_EBP);
                local_730 = (int *)CONCAT44(local_730._4_4_,unaff_R15D);
                iVar13 = 0x2c7bc8a0;
                if (unaff_EBP < (int)local_784) {
                  iVar13 = 0x2f0bc55;
                }
                goto joined_r0x004021d4;
              }
              goto joined_r0x00402605;
            }
            iVar13 = 0x4ee3c1f5;
            unaff_R14D = (uint)local_790;
          }
        }
        if (iVar13 < 0x3a26e839) {
          if (iVar13 < 0x2cf09bc1) {
            if (iVar13 == 0x1d1c82c3) {
              uVar9 = ~((DAT_005b8c04 + -1) * DAT_005b8c04) | 0xfffffffe;
              bVar20 = DAT_005b8bfc < 10 == (uVar9 == 0xffffffff);
              iVar3 = 0x45239d3;
              iVar14 = 0x7cbe3697;
              goto LAB_00401f89;
            }
            if (iVar13 != 0x2c7bc8a0) goto joined_r0x00402605;
            bVar20 = (~((DAT_005b8c04 + -1) * DAT_005b8c04) | 0xfffffffeU) == 0xffffffff;
            iVar13 = -0x2637f9f9;
            if (bVar20) {
              iVar13 = -0x32f1343f;
            }
            if (9 < DAT_005b8bfc) {
              iVar13 = -0x2637f9f9;
            }
            if (DAT_005b8bfc < 10 != bVar20) {
              iVar13 = -0x32f1343f;
            }
          }
          else {
            if (iVar13 != 0x2cf09bc1) {
              if (iVar13 == 0x2e16d955) {
                local_6b8[0] = &local_6f8;
                iVar13 = __isoc99_scanf("%d");
                local_76c = CONCAT31(local_76c._1_3_,iVar13 != 1);
                uVar9 = (DAT_005b8c04 + -1) * DAT_005b8c04;
                uVar9 = (uVar9 ^ 0xfffffffe) & uVar9;
                bVar20 = DAT_005b8bfc < 10 == (uVar9 == 0);
                iVar3 = -0x5e20d9da;
                iVar14 = -0x6bb09d32;
LAB_004024e3:
                if (!bVar20) {
                  iVar3 = iVar14;
                }
                iVar13 = iVar3;
                if (uVar9 == 0) {
                  iVar13 = iVar14;
                }
                if (9 < DAT_005b8bfc) {
                  iVar13 = iVar3;
                }
              }
              goto joined_r0x00402605;
            }
            iVar13 = -0x26513831;
            if (200000 < (int)(uint)local_768) {
              iVar13 = 0x1d1c82c3;
            }
          }
        }
        else {
          if (iVar13 < 0x50db9bc0) {
            if (iVar13 == 0x3a26e839) {
              iVar13 = -0x6a92ddd1;
              goto LAB_00402330;
            }
            if (iVar13 != 0x4ee3c1f5) goto joined_r0x00402605;
            unaff_EBP = (uint)local_780 + 1;
            iVar13 = 0x14a318a0;
            unaff_R15D = unaff_R14D;
            goto LAB_00401feb;
          }
          if (iVar13 == 0x50db9bc0) {
            local_6f8 = 0;
            iVar13 = -0x566747ed;
            goto LAB_00402330;
          }
          if (iVar13 != 0x7cbe3697) goto joined_r0x00402605;
          local_784 = 200000;
          uVar9 = ~(~-DAT_005b8c04 * DAT_005b8c04) | 0xfffffffe;
          bVar20 = DAT_005b8bfc < 10 == (uVar9 == 0xffffffff);
          iVar3 = 0x45239d3;
          iVar14 = -0xd0f6638;
LAB_00401f89:
          if (!bVar20) {
            iVar3 = iVar14;
          }
          iVar13 = iVar3;
          if (uVar9 == 0xffffffff) {
            iVar13 = iVar14;
          }
          if (9 < DAT_005b8bfc) {
            iVar13 = iVar3;
          }
        }
joined_r0x004021d4:
        if (iVar13 < -0x2637f9f9) goto LAB_00402330;
        goto LAB_00401feb;
      }
      goto LAB_00402330;
    }
    if (iVar13 < -0x690dbfa3) {
      if (iVar13 == -0x767fd0c2) {
        bVar20 = (uint)local_718 == 1;
        iVar13 = -0x25ba867e;
        iVar3 = -0x690dbfa3;
      }
      else {
        if (iVar13 != -0x6bb09d32) {
          if (iVar13 == -0x6a92ddd1) {
            uVar9 = ~(~-DAT_005b8c04 * DAT_005b8c04) | 0xfffffffe;
            bVar20 = DAT_005b8bfc < 10 == (uVar9 == 0xffffffff);
            iVar3 = 0x3a26e839;
            iVar14 = -0x32268ac6;
            goto LAB_00401f89;
          }
          goto joined_r0x00402605;
        }
        bVar20 = (char)local_76c == '\0';
        iVar13 = -0x566747ed;
        iVar3 = 0x50db9bc0;
      }
      if (!bVar20) {
        iVar13 = iVar3;
      }
      goto joined_r0x00402605;
    }
    if (-0x566747ee < iVar13) {
      if (iVar13 == -0x566747ed) {
        local_790 = (undefined4 *)CONCAT44(local_790._4_4_,local_6f8);
        unaff_R14D = (uint)local_730;
        iVar13 = 0x4ee3c1f5;
        if ((int)(uint)local_730 < (int)local_6f8) {
          iVar13 = 0xa5e3d33;
        }
      }
      else if (iVar13 == -0x53bd3a08) {
        uVar9 = (DAT_005b8c04 + -1) * DAT_005b8c04;
        uVar9 = (uVar9 ^ 0xfffffffe) & uVar9;
        bVar20 = uVar9 == 0;
        iVar3 = -0x4aef3e6f;
        iVar13 = -0x450f89d1;
        if (uVar9 == 0) {
          iVar13 = -0x4aef3e6f;
        }
        iVar14 = -0x450f89d1;
        goto LAB_0040254d;
      }
      goto joined_r0x00402605;
    }
    if (iVar13 != -0x690dbfa3) {
      if (iVar13 == -0x5e20d9da) {
        __isoc99_scanf("%d",&local_6f8);
        iVar13 = 0x2e16d955;
        goto LAB_00401feb;
      }
      goto joined_r0x00402605;
    }
    iVar13 = -0x4017c388;
    unaff_R12D = 0;
  } while( true );
code_r0x004027ee:
  uVar10 = ~((DAT_005b8b88 + -1) * DAT_005b8b88) | 0xfffffffe;
  uVar7 = 0x483c40b3;
  if (DAT_005b8be8 < 10 != (uVar10 == 0xffffffff)) {
    uVar7 = 0x5b224796;
  }
  uVar9 = uVar7;
  if (uVar10 == 0xffffffff) {
    uVar9 = 0x5b224796;
  }
  if (9 < DAT_005b8be8) {
    uVar9 = uVar7;
  }
  goto joined_r0x00401e1c;
}



/* ===== Function: FUN_00404b60 ===== */

/* WARNING: Removing unreachable block (ram,0x00404e22) */
/* WARNING: Removing unreachable block (ram,0x00404f27) */
/* WARNING: Removing unreachable block (ram,0x00404e84) */
/* WARNING: Removing unreachable block (ram,0x00404d1e) */

undefined4 FUN_00404b60(void)

{
  int iVar1;
  uint uVar2;
  ulong *puVar3;
  uint uVar4;
  ulong *puVar5;
  uint uVar6;
  char *__s;
  undefined4 unaff_R13D;
  bool bVar7;
  ulong auStack_70 [3];
  undefined1 auStack_58 [8];
  ulong *local_50;
  undefined4 local_44;
  ulong *local_40;
  char local_33;
  char local_32;
  char local_31;
  
  puVar5 = (ulong *)auStack_58;
  local_31 = (~((DAT_005b8b84 + -1) * DAT_005b8b84) | 0xfffffffeU) == 0xffffffff;
  local_32 = DAT_005b8bac < 10;
  uVar2 = 0xa5198199;
LAB_00404dc0:
  while (0xe6c9328 < (int)uVar2) {
    if (uVar2 == 0xe6c9329) {
      uVar4 = (~-DAT_005b8b84 * DAT_005b8b84 ^ 0xfffffffeU) & ~-DAT_005b8b84 * DAT_005b8b84;
      uVar6 = 0x8511feb5;
      if (DAT_005b8bac < 10 != (uVar4 == 0)) {
        uVar6 = 0x5ee170d0;
      }
      uVar2 = uVar6;
      if (uVar4 == 0) {
        uVar2 = 0x5ee170d0;
      }
      if (9 < DAT_005b8bac) {
        uVar2 = uVar6;
      }
    }
    else {
      if (uVar2 == 0x377848a6) {
        uVar2 = 0x76eb1472;
        unaff_R13D = 0;
        goto LAB_00404bcb;
      }
      if (uVar2 != 0x3b6058d0) goto joined_r0x00404c2f;
      uVar2 = 0xc119993b;
      if (local_33 != '\0') {
        uVar2 = 0xe6c9329;
      }
    }
    if (0x40b557aa < (int)uVar2) goto LAB_00404bcb;
  }
  if (uVar2 == 0x8511feb5) {
    uVar2 = 0x5ee170d0;
    goto LAB_00404bcb;
  }
  if (uVar2 != 0xa5198199) {
    if (uVar2 != 0xc119993b) goto joined_r0x00404c2f;
    __s = "odd";
    if (((*local_40 ^ 0xfffffffffffffffe) & *local_40) == 0) {
      __s = "even";
    }
    puVar5[-1] = 0x404e0c;
    puts(__s);
    uVar2 = 0x76eb1472;
    unaff_R13D = 1;
    goto LAB_00404bcb;
  }
  uVar2 = 0x40b557ab;
  if (local_32 != '\0') {
    uVar2 = 0x79279854;
  }
  if (local_31 == '\0') {
    uVar2 = 0x40b557ab;
  }
  if (local_31 != local_32) {
    uVar2 = 0x79279854;
  }
joined_r0x00404eb8:
  if (0x40b557aa < uVar2) {
LAB_00404bcb:
    while ((int)uVar2 < 0x695b1020) {
      if (0x5f38b0b5 < (int)uVar2) {
        if (uVar2 == 0x64e71324) {
          bVar7 = (~((DAT_005b8b84 + -1) * DAT_005b8b84) | 0xfffffffeU) == 0xffffffff;
          uVar2 = 0x695b1020;
          if (bVar7) {
            uVar2 = 0x5f38b0b6;
          }
          if (9 < DAT_005b8bac) {
            uVar2 = 0x695b1020;
          }
          if (DAT_005b8bac < 10 != bVar7) {
            uVar2 = 0x5f38b0b6;
          }
          goto joined_r0x00404db2;
        }
        if (uVar2 == 0x5f38b0b6) {
          return local_44;
        }
        goto joined_r0x00404c2f;
      }
      if (uVar2 != 0x40b557ab) {
        if (uVar2 == 0x5ee170d0) {
          bVar7 = (~((DAT_005b8b84 + -1) * DAT_005b8b84) | 0xfffffffeU) == 0xffffffff;
          uVar2 = 0x8511feb5;
          if (bVar7) {
            uVar2 = 0x377848a6;
          }
          if (9 < DAT_005b8bac) {
            uVar2 = 0x8511feb5;
          }
          if (DAT_005b8bac < 10 != bVar7) {
            uVar2 = 0x377848a6;
          }
        }
        goto joined_r0x00404c2f;
      }
      puVar5[-3] = 0x404d0e;
      __isoc99_scanf(&DAT_00409004);
      puVar5 = puVar5 + -2;
      uVar2 = 0x79279854;
    }
    if (uVar2 == 0x695b1020) {
      uVar2 = 0x64e71324;
    }
    else {
      if (uVar2 == 0x76eb1472) {
        uVar4 = ~((DAT_005b8b84 + -1) * DAT_005b8b84) | 0xfffffffe;
        uVar6 = 0x695b1020;
        if (DAT_005b8bac < 10 != (uVar4 == 0xffffffff)) {
          uVar6 = 0x64e71324;
        }
        uVar2 = uVar6;
        if (uVar4 == 0xffffffff) {
          uVar2 = 0x64e71324;
        }
        local_44 = unaff_R13D;
        if (9 < DAT_005b8bac) {
          uVar2 = uVar6;
        }
joined_r0x00404db2:
        if (uVar2 < 0x40b557ab) goto LAB_00404dc0;
        goto LAB_00404bcb;
      }
      if (uVar2 == 0x79279854) goto code_r0x00404c61;
    }
joined_r0x00404c2f:
    if ((int)uVar2 < 0x40b557ab) goto LAB_00404dc0;
    goto LAB_00404bcb;
  }
  goto LAB_00404dc0;
code_r0x00404c61:
  puVar3 = puVar5 + -2;
  puVar5[-3] = 0x404c8b;
  local_50 = puVar3;
  local_40 = puVar3;
  iVar1 = __isoc99_scanf(&DAT_00409004,puVar3);
  local_33 = iVar1 != 1;
  bVar7 = (~(~-DAT_005b8b84 * DAT_005b8b84) | 0xfffffffeU) == 0xffffffff;
  uVar2 = 0x40b557ab;
  if (bVar7) {
    uVar2 = 0x3b6058d0;
  }
  if (9 < DAT_005b8bac) {
    uVar2 = 0x40b557ab;
  }
  puVar5 = puVar3;
  if (DAT_005b8bac < 10 != bVar7) {
    uVar2 = 0x3b6058d0;
  }
  goto joined_r0x00404eb8;
}



/* ===== Function: FUN_00404f40 ===== */

/* WARNING: Removing unreachable block (ram,0x004050d8) */
/* WARNING: Removing unreachable block (ram,0x004051e8) */
/* WARNING: Removing unreachable block (ram,0x00404f81) */
/* WARNING: Removing unreachable block (ram,0x00405029) */

long * FUN_00404f40(void)

{
  ulong uVar1;
  int iVar2;
  long *plVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  char *__s;
  long unaff_R12;
  long unaff_R13;
  long unaff_R14;
  int unaff_R15D;
  bool bVar10;
  undefined1 auStack_88 [8];
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long *local_60;
  long local_58;
  long *local_50;
  int local_44;
  long local_40;
  char local_34;
  char local_33;
  byte local_32;
  byte local_31;
  
  plVar7 = (long *)auStack_88;
  uVar5 = (DAT_005b8c0c + -1) * DAT_005b8c0c;
  local_31 = ((uVar5 ^ 0xfffffffe) & uVar5) == 0;
  local_32 = DAT_005b8ba0 < 10;
  iVar2 = -0x64738a58;
LAB_00404feb:
  do {
    iVar6 = local_44;
    if (iVar2 < -0x3eeeb665) {
      if (iVar2 < -0x64738a58) {
        if (iVar2 == -0x7958f57e) {
          lVar9 = local_40 % 10;
          plVar7[-1] = 0x405247;
          lVar9 = FUN_004070b0(lVar9,iVar6);
          local_70 = local_58 + lVar9;
          local_78 = local_40 / 10;
          local_34 = local_78 != 0;
          uVar5 = ~((DAT_005b8c0c + -1) * DAT_005b8c0c) | 0xfffffffe;
          bVar10 = DAT_005b8ba0 < 10 == (uVar5 == 0xffffffff);
          iVar6 = -0x4cac9827;
          iVar8 = -0xd826fe4;
          goto LAB_00405556;
        }
        if (iVar2 == -0x6ad96349) {
          local_68 = *local_50;
          iVar2 = 0xe68c1bd;
          if (local_68 < 0) {
            iVar2 = -0x1ec5299d;
          }
        }
      }
      else {
        if (iVar2 == -0x64738a58) {
          bVar4 = local_31 ^ local_32;
          iVar6 = 0x45e0e7df;
          iVar2 = -0x387defac;
          if (local_32 != 0) {
            iVar2 = 0x45e0e7df;
          }
          if (local_31 != 0) goto LAB_004052ab;
          iVar2 = -0x387defac;
          goto LAB_004052ab;
        }
        if (iVar2 == -0x64378240) {
          iVar2 = -0x1a8daff1;
          goto LAB_00404feb;
        }
        if (iVar2 == -0x4cac9827) {
          lVar9 = local_40 % 10;
          plVar7[-1] = 0x40509c;
          FUN_004070b0(lVar9,iVar6);
          iVar2 = -0x7958f57e;
          goto LAB_00404feb;
        }
      }
joined_r0x00405174:
      if (-0xd826fe5 < iVar2) {
LAB_004052c0:
        if (iVar2 < 0x2b87c966) {
          if (-0xbb00ab2 < iVar2) {
            if (iVar2 == -0xbb00ab1) {
              uVar5 = (DAT_005b8c0c + -1) * DAT_005b8c0c;
              uVar5 = (uVar5 ^ 0xfffffffe) & uVar5;
              iVar6 = -0x1b065b9a;
              iVar2 = -0x81e5ec1;
              if (uVar5 == 0) {
                iVar2 = -0x1b065b9a;
              }
              if (9 < DAT_005b8ba0) {
                iVar2 = -0x81e5ec1;
              }
              bVar4 = DAT_005b8ba0 < 10 != (uVar5 == 0);
LAB_004052ab:
              if (bVar4 != 0) {
                iVar2 = iVar6;
              }
              goto joined_r0x00405412;
            }
            if (iVar2 != -0x81e5ec1) {
              if (iVar2 == 0xe68c1bd) {
                uVar5 = (DAT_005b8c0c + -1) * DAT_005b8c0c;
                uVar5 = (uVar5 ^ 0xfffffffe) & uVar5;
                bVar10 = DAT_005b8ba0 < 10 == (uVar5 == 0);
                iVar6 = -0x81e5ec1;
                iVar8 = -0xbb00ab1;
LAB_00404f86:
                if (!bVar10) {
                  iVar6 = iVar8;
                }
                iVar2 = iVar6;
                if (uVar5 == 0) {
                  iVar2 = iVar8;
                }
                if (9 < DAT_005b8ba0) {
                  iVar2 = iVar6;
                }
                goto joined_r0x00405412;
              }
              goto joined_r0x00405174;
            }
            iVar2 = -0xbb00ab1;
            goto LAB_004052c0;
          }
          if (iVar2 != -0xd826fe4) {
            if (iVar2 == -0xd5cdca4) {
              local_44 = unaff_R15D + 1;
              lVar9 = unaff_R14 / 10;
              uVar1 = unaff_R14 + 9;
              unaff_R15D = local_44;
              unaff_R14 = lVar9;
              iVar2 = 0x418d7cb1;
              if (0x12 < uVar1) {
                iVar2 = -0xd5cdca4;
              }
              goto joined_r0x00405412;
            }
            goto joined_r0x00405174;
          }
          unaff_R12 = local_78;
          unaff_R13 = local_70;
          iVar2 = 0x75c7f6a7;
          if (local_34 != '\0') {
            iVar2 = -0x3eeeb665;
          }
        }
        else if (iVar2 < 0x45e0e7df) {
          if (iVar2 == 0x2e9923a2) {
LAB_0040541d:
            iVar2 = 0x2b87c966;
            goto LAB_004052c0;
          }
          if (iVar2 != 0x418d7cb1) {
            if (iVar2 == 0x2b87c966) {
              return local_60;
            }
            goto joined_r0x00405174;
          }
          uVar5 = ~(~-DAT_005b8c0c * DAT_005b8c0c) | 0xfffffffe;
          bVar10 = DAT_005b8ba0 < 10 == (uVar5 == 0xffffffff);
          iVar6 = -0x64378240;
          iVar8 = -0x1a8daff1;
LAB_00405556:
          if (!bVar10) {
            iVar6 = iVar8;
          }
          iVar2 = iVar6;
          if (uVar5 == 0xffffffff) {
            iVar2 = iVar8;
          }
          if (9 < DAT_005b8ba0) {
            iVar2 = iVar6;
          }
        }
        else if (iVar2 == 0x45e0e7df) {
          plVar3 = plVar7 + -2;
          plVar7[-3] = 0x40545c;
          local_60 = plVar3;
          local_50 = plVar3;
          iVar2 = __isoc99_scanf(&DAT_00409004,plVar3);
          local_33 = iVar2 != 1;
          bVar10 = (~((DAT_005b8c0c + -1) * DAT_005b8c0c) | 0xfffffffeU) == 0xffffffff;
          iVar2 = -0x387defac;
          if (bVar10) {
            iVar2 = 0x68897a88;
          }
          if (9 < DAT_005b8ba0) {
            iVar2 = -0x387defac;
          }
          plVar7 = plVar3;
          if (DAT_005b8ba0 < 10 != bVar10) {
            iVar2 = 0x68897a88;
          }
        }
        else {
          if (iVar2 != 0x68897a88) {
            if (iVar2 == 0x75c7f6a7) {
              __s = "no";
              if (local_70 == *local_50) {
                __s = "yes";
              }
LAB_0040530c:
              *(undefined8 *)((long)plVar7 + -8) = 0x405311;
              puts(__s);
              goto LAB_0040541d;
            }
            goto joined_r0x00405174;
          }
          iVar2 = -0x6ad96349;
          if (local_33 != '\0') {
            iVar2 = 0x2e9923a2;
          }
        }
joined_r0x00405412:
        if (iVar2 < -0xd826fe4) goto LAB_00404feb;
        goto LAB_004052c0;
      }
      goto LAB_00404feb;
    }
    if (-0x1ec5299e < iVar2) {
      if (iVar2 == -0x1ec5299d) {
        __s = "no";
        goto LAB_0040530c;
      }
      if (iVar2 == -0x1b065b9a) {
        iVar2 = -0xd5cdca4;
        unaff_R15D = 0;
        unaff_R14 = local_68;
        goto LAB_004052c0;
      }
      if (iVar2 == -0x1a8daff1) {
        local_80 = *local_50;
        uVar5 = (DAT_005b8c0c + -1) * DAT_005b8c0c;
        uVar5 = (uVar5 ^ 0xfffffffe) & uVar5;
        bVar10 = DAT_005b8ba0 < 10 == (uVar5 == 0);
        iVar6 = -0x64378240;
        iVar8 = -0x201a98bd;
        goto LAB_00404f86;
      }
      goto joined_r0x00405174;
    }
    if (iVar2 == -0x3eeeb665) {
      uVar5 = (DAT_005b8c0c + -1) * DAT_005b8c0c;
      uVar5 = (uVar5 ^ 0xfffffffe) & uVar5;
      bVar10 = DAT_005b8ba0 < 10 == (uVar5 == 0);
      iVar6 = -0x4cac9827;
      iVar8 = -0x7958f57e;
      local_58 = unaff_R13;
      local_40 = unaff_R12;
      goto LAB_00404f86;
    }
    if (iVar2 == -0x387defac) {
      plVar7[-3] = 0x405195;
      __isoc99_scanf(&DAT_00409004);
      iVar2 = 0x45e0e7df;
      plVar7 = plVar7 + -2;
      goto LAB_004052c0;
    }
    if (iVar2 != -0x201a98bd) goto joined_r0x00405174;
    iVar2 = -0x3eeeb665;
    unaff_R13 = 0;
    unaff_R12 = local_80;
  } while( true );
}



/* ===== Function: FUN_004055c0 ===== */

/* WARNING: Removing unreachable block (ram,0x00405cd5) */
/* WARNING: Removing unreachable block (ram,0x00405e92) */
/* WARNING: Removing unreachable block (ram,0x00405ecf) */
/* WARNING: Removing unreachable block (ram,0x00405f61) */
/* WARNING: Removing unreachable block (ram,0x00406062) */
/* WARNING: Removing unreachable block (ram,0x00405e51) */
/* WARNING: Removing unreachable block (ram,0x00405eb3) */
/* WARNING: Removing unreachable block (ram,0x004059d6) */
/* WARNING: Removing unreachable block (ram,0x00405a72) */
/* WARNING: Removing unreachable block (ram,0x0040575f) */
/* WARNING: Removing unreachable block (ram,0x00405b75) */
/* WARNING: Type propagation algorithm not settling */

uint FUN_004055c0(void)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  int **ppiVar12;
  ulong uVar13;
  int iVar14;
  uint unaff_R14D;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  int *local_e8;
  int *local_e0;
  uint *local_d8;
  int *local_d0;
  int *local_c8;
  uint *local_c0;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint *local_a8;
  int *local_a0;
  int *local_98;
  uint *local_90;
  int *local_88;
  int *local_80;
  uint *local_78;
  uint local_70;
  int local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  char local_3c;
  char local_3b;
  char local_3a;
  char local_39;
  uint local_38;
  char local_31;
  
  ppiVar12 = &local_e8;
  local_54 = ~((DAT_005b8c10 + -1) * DAT_005b8c10) | 0xfffffffe;
  local_39 = local_54 == 0xffffffff;
  local_3a = DAT_005b8ba4 < 10;
  iVar7 = -0x29294e35;
  local_60 = local_54;
  local_5c = local_54;
  local_58 = local_54;
  local_50 = local_54;
  local_4c = local_54;
joined_r0x00405649:
  if (iVar7 < -0x1233d145) goto LAB_004056bb;
  do {
    while (puVar6 = local_78, piVar5 = local_80, piVar4 = local_88, puVar3 = local_90,
          piVar2 = local_98, piVar1 = local_a0, 0x4a300648 < iVar7) {
      if (iVar7 < 0x5fe1279b) {
        if (iVar7 == 0x4a300649) {
          local_44 = *local_78;
          local_a8 = (uint *)CONCAT44(local_a8._4_4_,*local_90);
          iVar7 = 0x36112f78;
          goto LAB_00405f9c;
        }
        if (iVar7 != 0x5c82b96d) goto joined_r0x00405649;
        uVar9 = (ulong)local_b4;
        uVar13 = (ulong)local_60;
        uVar10 = (ulong)local_5c;
        *(undefined8 *)((long)ppiVar12 + -8) = 0x405e3a;
        printf("%d years %d months %d days\n",uVar13,uVar10,uVar9);
        iVar7 = -0x275d7339;
        local_58 = 1;
      }
      else if (iVar7 == 0x5fe1279b) {
        iVar7 = -0x1e8c373e;
      }
      else {
        if (iVar7 != 0x602dc72c) {
          if ((iVar7 == 0x684ee4c5) &&
             (iVar7 = 0x5c82b96d, local_60 = local_68, local_5c = local_48, local_3c != '\0')) {
            iVar7 = 0x20277c95;
          }
          goto joined_r0x00405649;
        }
        iVar7 = -0x39110a57;
      }
LAB_004056bb:
      if (-0x2ec0ba10 < iVar7) {
        if (iVar7 < -0x275d7339) {
          if (iVar7 != -0x2ec0ba0f) {
            if (iVar7 == -0x29b2c254) {
              unaff_R14D = 0xc;
              local_54 = local_b0;
              iVar7 = -0x355b2edc;
            }
            else if (iVar7 == -0x29294e35) {
              iVar7 = -0x718e1ddd;
              if (local_3a != '\0') {
                iVar7 = -0x5d14ed11;
              }
              if (local_39 == '\0') {
                iVar7 = -0x718e1ddd;
              }
              if (local_39 != local_3a) {
                iVar7 = -0x5d14ed11;
              }
            }
            goto joined_r0x00405649;
          }
          local_3c = (int)local_48 < 0;
          uVar8 = (DAT_005b8c10 + -1) * DAT_005b8c10;
          uVar8 = (uVar8 ^ 0xfffffffe) & uVar8;
          bVar15 = uVar8 == 0;
          iVar11 = 0x684ee4c5;
          iVar7 = -0x31b7b2c1;
          if (uVar8 == 0) {
            iVar7 = 0x684ee4c5;
          }
          bVar18 = SBORROW4(DAT_005b8ba4,10);
          bVar16 = DAT_005b8ba4 + -10 < 0;
          bVar17 = DAT_005b8ba4 < 10;
          iVar14 = -0x31b7b2c1;
        }
        else {
          if (iVar7 != -0x275d7339) {
            if (iVar7 == -0x1fc1d411) {
              iVar7 = 0x4a300649;
              if (local_3b != '\0') {
                iVar7 = 0x7f5053b;
              }
              goto joined_r0x00405649;
            }
            if (iVar7 != -0x1e8c373e) goto joined_r0x00405649;
            uVar8 = (DAT_005b8c10 + -1) * DAT_005b8c10;
            uVar8 = (uVar8 ^ 0xfffffffe) & uVar8;
            iVar11 = -0x1233d145;
            iVar7 = 0x5fe1279b;
            if (uVar8 == 0) {
              iVar7 = -0x1233d145;
            }
            iVar14 = 0x5fe1279b;
            goto LAB_00405cf8;
          }
          local_b8 = local_58;
          bVar15 = (~(~-DAT_005b8c10 * DAT_005b8c10) | 0xfffffffeU) == 0xffffffff;
          iVar11 = -0x1e8c373e;
          iVar7 = 0x5fe1279b;
          if (bVar15) {
            iVar7 = -0x1e8c373e;
          }
          bVar18 = SBORROW4(DAT_005b8ba4,10);
          bVar16 = DAT_005b8ba4 + -10 < 0;
          bVar17 = DAT_005b8ba4 < 10;
          iVar14 = 0x5fe1279b;
        }
LAB_00405650:
        if (bVar18 == bVar16) {
          iVar7 = iVar14;
        }
        if ((bool)(bVar17 ^ bVar15)) {
          iVar7 = iVar11;
        }
        goto joined_r0x00405649;
      }
      if (iVar7 < -0x39110a57) {
        if (iVar7 != -0x718e1ddd) {
          if (iVar7 == -0x5d14ed11) {
            local_c0 = (uint *)((long)ppiVar12 + -0x10);
            local_c8 = (int *)((long)ppiVar12 + -0x20);
            local_d0 = (int *)((long)ppiVar12 + -0x30);
            local_d8 = (uint *)((long)ppiVar12 + -0x40);
            local_e0 = (int *)((long)ppiVar12 + -0x50);
            local_e8 = (int *)((long)ppiVar12 + -0x60);
            *(int **)((long)ppiVar12 + -0x70) = local_e8;
            *(undefined8 *)((long)ppiVar12 + -0x78) = 0x4058d6;
            local_a0 = local_e8;
            local_98 = local_e0;
            local_90 = local_d8;
            local_88 = local_d0;
            local_80 = local_c8;
            local_78 = local_c0;
            iVar7 = __isoc99_scanf("%d %d %d %d %d %d",local_c0,local_c8,local_d0,local_d8,local_e0)
            ;
            ppiVar12 = (int **)((long)ppiVar12 + -0x60);
            local_3b = iVar7 != 6;
            uVar8 = (~-DAT_005b8c10 * DAT_005b8c10 ^ 0xfffffffeU) & ~-DAT_005b8c10 * DAT_005b8c10;
            bVar15 = uVar8 == 0;
            iVar11 = -0x1fc1d411;
            iVar7 = -0x718e1ddd;
            if (uVar8 == 0) {
              iVar7 = -0x1fc1d411;
            }
            bVar18 = SBORROW4(DAT_005b8ba4,10);
            bVar16 = DAT_005b8ba4 + -10 < 0;
            bVar17 = DAT_005b8ba4 < 10;
            iVar14 = -0x718e1ddd;
            goto LAB_00405650;
          }
          goto joined_r0x00405649;
        }
        *(undefined1 **)((long)ppiVar12 + -0x70) = (undefined1 *)((long)ppiVar12 + -0x60);
        *(undefined8 *)((long)ppiVar12 + -0x78) = 0x405cc1;
        __isoc99_scanf("%d %d %d %d %d %d");
        ppiVar12 = (int **)((long)ppiVar12 + -0x60);
        iVar7 = -0x5d14ed11;
        goto LAB_004056bb;
      }
      if (iVar7 == -0x39110a57) {
        local_b0 = local_38 - 1;
        uVar8 = ~((DAT_005b8c10 + -1) * DAT_005b8c10) | 0xfffffffe;
        bVar15 = DAT_005b8ba4 < 10 == (uVar8 == 0xffffffff);
        iVar11 = -0x29b2c254;
        goto LAB_00405f03;
      }
      if (iVar7 != -0x355b2edc) {
        if (iVar7 != -0x31b7b2c1) goto joined_r0x00405649;
        iVar7 = -0x2ec0ba0f;
        goto LAB_004056bb;
      }
      local_3d = unaff_R14D == 2;
      local_a8 = (uint *)(&DAT_00409070 + (long)(int)(unaff_R14D - 1) * 4);
      local_50 = 0x38420bec;
      iVar7 = 0x163b6c3c;
      if (((local_54 ^ 0xfffffffc) & local_54) == 0) {
        iVar7 = 0x38420bec;
      }
      uVar8 = 0xa7631a79;
      do {
        if (uVar8 != 0xa7631a79) goto LAB_00406270;
        local_44 = *local_a8;
        uVar8 = 0x7915fa1e;
        if ((bool)local_3d) {
          uVar8 = 0x3781f217;
        }
      } while (uVar8 < 0x17d9883a);
LAB_004059e0:
      while (uVar8 != 0x17d9883a) {
        if (uVar8 == 0x3781f217) {
          uVar8 = (~-DAT_005b8b80 * DAT_005b8b80 ^ 0xfffffffeU) & ~-DAT_005b8b80 * DAT_005b8b80;
          local_3e = uVar8 == 0;
          iVar11 = -0x7cc9613a;
          if (uVar8 == 0) {
            iVar11 = -0x1c7cefb9;
          }
          local_3f = (int)DAT_005b8bd0 < 10;
          if (9 < (int)DAT_005b8bd0) {
            iVar11 = -0x7cc9613a;
          }
          if ((int)DAT_005b8bd0 < 10 != (bool)local_3e) {
            iVar11 = -0x1c7cefb9;
          }
          iVar14 = -0x4d7e0ac6;
          uVar8 = DAT_005b8bd0;
LAB_00405ab8:
          while (0x1c6d7bd8 < iVar14) {
            if (iVar14 == 0x1c6d7bd9) {
              local_31 = (int)local_54 % 400 == 0;
              iVar14 = iVar11;
              goto joined_r0x00405a9f;
            }
            if (iVar14 != 0x38420bec) {
              if (iVar14 == 0x568b716f) {
                uVar8 = 0;
                iVar14 = iVar7;
                goto joined_r0x00405a9f;
              }
              goto LAB_00406280;
            }
            uVar8 = (uint)(local_54 != ((int)local_54 / 100) * 100);
            iVar14 = 0x163b6c3c;
          }
          if (iVar14 == -0x4d7e0ac6) {
            iVar14 = -0x7cc9613a;
            if ((bool)local_3f) {
              iVar14 = 0x1c6d7bd9;
            }
            if (!(bool)local_3e) {
              iVar14 = -0x7cc9613a;
            }
            if (local_3e != local_3f) {
              iVar14 = 0x1c6d7bd9;
            }
          }
          else {
            if (iVar14 != -0x1c7cefb9) goto LAB_00405b7a;
            iVar14 = 0x568b716f;
            if (local_31 != '\0') {
              iVar14 = 0x163b6c3c;
            }
            uVar8 = 1;
          }
joined_r0x00405a9f:
          if ((iVar14 < -0x4d7e0ac6) &&
             (bVar15 = iVar14 != -0x7cc9613a, iVar14 = 0x1c6d7bd9, bVar15)) goto LAB_00406280;
          goto LAB_00405ab8;
        }
        if (uVar8 != 0x7915fa1e) {
LAB_00406270:
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        local_50 = local_44;
        uVar8 = 0x17d9883a;
      }
      local_50 = local_50 + local_64;
      local_4c = local_ac;
      iVar7 = 0x3bda8e02;
    }
    if (iVar7 < 0x20277c95) {
      if (iVar7 == 0x7f5053b) {
        iVar7 = -0x275d7339;
        local_58 = 0;
        goto LAB_004056bb;
      }
      if (iVar7 == 0x1e443601) {
        uVar8 = ~((DAT_005b8c10 + -1) * DAT_005b8c10) | 0xfffffffe;
        bVar15 = DAT_005b8ba4 < 10 == (uVar8 == 0xffffffff);
        iVar11 = -0x39110a57;
LAB_00405f03:
        iVar14 = 0x602dc72c;
        if (!bVar15) {
          iVar14 = iVar11;
        }
        iVar7 = iVar14;
        if (uVar8 == 0xffffffff) {
          iVar7 = iVar11;
        }
        if (9 < DAT_005b8ba4) {
          iVar7 = iVar14;
        }
      }
      else if (iVar7 == -0x1233d145) {
        return local_b8;
      }
      goto joined_r0x00405649;
    }
    if (iVar7 != 0x20277c95) break;
    local_60 = local_68 - 1;
    local_5c = local_48 + 0xc;
    iVar7 = 0x5c82b96d;
  } while( true );
  if (iVar7 == 0x2915fc59) {
    local_ac = ~-local_70;
    unaff_R14D = ~-local_6c;
    local_54 = local_38;
    iVar7 = -0x355b2edc;
    if (-local_6c == 0xffffffff) {
      iVar7 = 0x1e443601;
    }
  }
  else if (iVar7 == 0x3bda8e02) {
    local_b4 = local_50;
    local_48 = local_4c;
    uVar8 = (DAT_005b8c10 + -1) * DAT_005b8c10;
    uVar8 = (uVar8 ^ 0xfffffffe) & uVar8;
    iVar11 = -0x2ec0ba0f;
    iVar7 = -0x31b7b2c1;
    if (uVar8 == 0) {
      iVar7 = -0x2ec0ba0f;
    }
    iVar14 = -0x31b7b2c1;
LAB_00405cf8:
    if (9 < DAT_005b8ba4) {
      iVar7 = iVar14;
    }
    if (DAT_005b8ba4 < 10 != (uVar8 == 0)) {
      iVar7 = iVar11;
    }
  }
  goto joined_r0x00405649;
LAB_00405f9c:
  if (iVar7 < 0x24586076) {
    if (iVar7 == -0x2c966922) {
      iVar11 = *piVar5;
      iVar7 = *piVar2;
      bVar16 = SBORROW4(iVar11,iVar7);
      bVar17 = iVar11 - iVar7 < 0;
      bVar15 = iVar11 == iVar7;
      iVar7 = -0x4edb451b;
      goto LAB_00405f66;
    }
    if (iVar7 != -0x2a0b08d5) {
      if (iVar7 == 0xdef9997) {
        uVar8 = (DAT_005b8b78 + -1) * DAT_005b8b78;
        uVar8 = (uVar8 ^ 0xfffffffe) & uVar8;
        iVar11 = 0x2a57cab3;
        if (DAT_005b8bc8 < 10 != (uVar8 == 0)) {
          iVar11 = -0x31704134;
        }
        iVar7 = iVar11;
        if (uVar8 == 0) {
          iVar7 = -0x31704134;
        }
        if (9 < DAT_005b8bc8) {
          iVar7 = iVar11;
        }
      }
      goto joined_r0x00406000;
    }
    uVar8 = *puVar6;
    iVar7 = *piVar5;
    iVar11 = *piVar4;
    *puVar6 = *puVar3;
    *piVar5 = *piVar2;
    *piVar4 = *piVar1;
    *puVar3 = uVar8;
    *piVar2 = iVar7;
    *piVar1 = iVar11;
    iVar7 = 0x24586076;
    goto LAB_00405f9c;
  }
  if (iVar7 == 0x2a57cab3) {
    iVar7 = -0x31704134;
    goto LAB_00406090;
  }
  if (iVar7 == 0x36112f78) {
    bVar16 = SBORROW4(local_44,(uint)local_a8);
    bVar17 = (int)(local_44 - (uint)local_a8) < 0;
    bVar15 = local_44 == (uint)local_a8;
    iVar7 = -0x58abcd7b;
    goto LAB_00405f66;
  }
  if (iVar7 != 0x24586076) {
joined_r0x00406000:
    if (iVar7 < -0x2c966922) {
LAB_00406090:
      do {
        if (iVar7 < -0x3e34562e) {
          if (iVar7 == -0x58abcd7b) {
            bVar15 = local_44 == (uint)local_a8;
            iVar7 = -0x4edb451b;
            iVar11 = -0x2c966922;
          }
          else {
            if (iVar7 != -0x4edb451b) goto joined_r0x00406000;
            bVar15 = *puVar6 == *puVar3;
            iVar7 = 0x24586076;
            iVar11 = 0xdef9997;
          }
          if (bVar15) {
            iVar7 = iVar11;
          }
        }
        else if (iVar7 == -0x3e34562e) {
          iVar7 = 0x24586076;
          if (local_31 != '\0') {
            iVar7 = -0x37241dbf;
          }
        }
        else if (iVar7 == -0x37241dbf) {
          iVar11 = *piVar4;
          iVar7 = *piVar1;
          bVar16 = SBORROW4(iVar11,iVar7);
          bVar17 = iVar11 - iVar7 < 0;
          bVar15 = iVar11 == iVar7;
          iVar7 = 0x24586076;
LAB_00405f66:
          if (!bVar15 && bVar16 == bVar17) {
            iVar7 = -0x2a0b08d5;
          }
        }
        else {
          if (iVar7 != -0x31704134) goto joined_r0x00406000;
          local_31 = *piVar5 == *piVar2;
          bVar15 = (~(~-DAT_005b8b78 * DAT_005b8b78) | 0xfffffffeU) == 0xffffffff;
          iVar7 = 0x2a57cab3;
          if (bVar15) {
            iVar7 = -0x3e34562e;
          }
          if (9 < DAT_005b8bc8) {
            iVar7 = 0x2a57cab3;
          }
          if (DAT_005b8bc8 < 10 != bVar15) {
            iVar7 = -0x3e34562e;
          }
        }
        if (-0x2c966923 < iVar7) break;
      } while( true );
    }
    goto LAB_00405f9c;
  }
  local_38 = *local_90;
  local_68 = local_38 - *local_78;
  local_6c = *local_98;
  local_70 = local_6c - *local_80;
  local_64 = *local_a0 - *local_88;
  iVar7 = ((int)local_64 >> 0x1f & 0xed3b6e57U) + 0x3bda8e02;
  local_50 = local_64;
  local_4c = local_70;
  goto joined_r0x00405649;
LAB_00405b7a:
  if (iVar14 != 0x163b6c3c) {
LAB_00406280:
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  local_50 = -(-local_44 - (uint)((byte)uVar8 & 1));
  uVar8 = 0x17d9883a;
  goto LAB_004059e0;
}



/* ===== Function: FUN_004062a0 ===== */

/* WARNING: Removing unreachable block (ram,0x004063fb) */
/* WARNING: Removing unreachable block (ram,0x004068e7) */
/* WARNING: Removing unreachable block (ram,0x004062f2) */
/* WARNING: Removing unreachable block (ram,0x00406785) */
/* WARNING: Removing unreachable block (ram,0x004065c4) */
/* WARNING: Removing unreachable block (ram,0x004063b0) */

int * FUN_004062a0(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int unaff_R12D;
  int unaff_R14D;
  bool bVar7;
  bool bVar8;
  undefined1 auStack_68 [8];
  undefined4 *local_60;
  int *local_58;
  int local_50;
  int local_4c;
  int *local_48;
  int local_3c;
  int local_38;
  char local_34;
  char local_33;
  char local_32;
  char local_31;
  
  uVar3 = (DAT_005b8bb8 + -1) * DAT_005b8bb8;
  local_31 = ((uVar3 ^ 0xfffffffe) & uVar3) == 0;
  local_32 = DAT_005b8bf0 < 10;
  iVar1 = 0x6c1eabd0;
  piVar4 = (int *)auStack_68;
LAB_0040636b:
  if (iVar1 < 0x436403ff) {
    if (0x1e823a8b < iVar1) {
      if (iVar1 < 0x30382332) {
        if (iVar1 != 0x1e823a8c) {
          if (iVar1 == 0x26f047eb) {
            *local_48 = 200000;
            iVar1 = -0x39551d59;
            goto LAB_00406640;
          }
          goto joined_r0x00406500;
        }
      }
      else if (iVar1 != 0x38246190) {
        if (iVar1 == 0x30382332) {
          return local_58;
        }
        goto joined_r0x00406500;
      }
LAB_0040662d:
      iVar1 = 0x30382332;
      goto LAB_0040636b;
    }
    if (iVar1 < -0xbf760e8) {
      if (iVar1 == -0x207500cb) {
        local_3c = unaff_R14D;
        iVar1 = -0x299b7162;
        if (unaff_R14D < *local_48) {
          iVar1 = -0xbf760e8;
        }
        goto joined_r0x00406500;
      }
      if (iVar1 != -0xd97c096) goto joined_r0x00406500;
      *local_60 = 0;
      iVar1 = 0x525de5b6;
      goto LAB_0040636b;
    }
    if (iVar1 == -0xbf760e8) {
      bVar7 = local_3c == 0;
      iVar1 = -0x3bf5dc43;
      iVar6 = -0x26986331;
      goto LAB_0040661d;
    }
    if (iVar1 == -0x634a721) {
      piVar2 = piVar4 + -4;
      piVar4[-6] = 0x4064bd;
      piVar4[-5] = 0;
      local_58 = piVar2;
      local_48 = piVar2;
      iVar1 = __isoc99_scanf("%d",piVar2);
      local_33 = iVar1 != 1;
      bVar7 = (~(~-DAT_005b8bb8 * DAT_005b8bb8) | 0xfffffffeU) == 0xffffffff;
      iVar1 = -0x4e337cb8;
      if (bVar7) {
        iVar1 = 0x6131db72;
      }
      if (9 < DAT_005b8bf0) {
        iVar1 = -0x4e337cb8;
      }
      piVar4 = piVar2;
      if (DAT_005b8bf0 < 10 != bVar7) {
        iVar1 = 0x6131db72;
      }
    }
  }
  else if (iVar1 < 0x6131db72) {
    if (iVar1 == 0x436403ff) {
      piVar4[-2] = 0x4065b4;
      piVar4[-1] = 0;
      FUN_00407280(0,local_4c + -1);
      iVar1 = 0x69d32c70;
      goto LAB_0040636b;
    }
    if (iVar1 == 0x47ea9aed) {
      bVar8 = SBORROW4(local_50,200000);
      bVar7 = local_50 == 200000;
      iVar1 = -0x39551d59;
      iVar5 = 0x26f047eb;
      iVar6 = local_50 + -200000;
      goto LAB_00406833;
    }
    if (iVar1 == 0x525de5b6) {
      unaff_R12D = local_38 + 1;
      iVar1 = -0x557043a5;
      goto LAB_00406640;
    }
  }
  else {
    if (0x6c1eabcf < iVar1) {
      if (iVar1 == 0x755ae88d) {
        local_60 = (undefined4 *)(&DAT_0040b070 + (long)local_38 * 4);
        piVar4[-2] = 0x406610;
        piVar4[-1] = 0;
        iVar1 = __isoc99_scanf("%d",local_60);
        bVar7 = iVar1 == 1;
        iVar1 = 0x525de5b6;
        iVar6 = -0xd97c096;
        goto LAB_0040661d;
      }
      if (iVar1 == 0x6c1eabd0) {
        iVar1 = -0x4e337cb8;
        if (local_32 != '\0') {
          iVar1 = -0x634a721;
        }
        if (local_31 == '\0') {
          iVar1 = -0x4e337cb8;
        }
        if (local_31 != local_32) {
          iVar1 = -0x634a721;
        }
      }
      goto joined_r0x00406500;
    }
    if (iVar1 == 0x6131db72) {
      bVar7 = local_33 == '\0';
      iVar1 = -0x4759ef30;
      iVar6 = 0x38246190;
      goto LAB_0040661d;
    }
    if (iVar1 == 0x69d32c70) {
      iVar1 = -0x207500cb;
      unaff_R14D = 0;
      goto LAB_0040636b;
    }
  }
joined_r0x00406500:
  do {
    if (-0x207500cc < iVar1) goto LAB_0040636b;
LAB_00406640:
    if (iVar1 < -0x4759ef30) {
      if (iVar1 < -0x509f21d2) {
        if (iVar1 == -0x79c4d04b) {
          piVar4[-2] = 0x40686f;
          piVar4[-1] = 0;
          putc(10,stdout);
          iVar1 = -0x4b9c2289;
          goto LAB_00406640;
        }
        if (iVar1 != -0x5f9a750e) {
          if (iVar1 == -0x557043a5) {
            bVar7 = (~((DAT_005b8bb8 + -1) * DAT_005b8bb8) | 0xfffffffeU) == 0xffffffff;
            iVar6 = -0x5f9a750e;
            iVar1 = -0x4f2ac9e9;
            if (bVar7) {
              iVar1 = -0x5f9a750e;
            }
            iVar5 = -0x4f2ac9e9;
            local_38 = unaff_R12D;
            goto LAB_0040691f;
          }
          goto joined_r0x00406500;
        }
        local_4c = *local_48;
        local_34 = local_38 < local_4c;
        bVar7 = (~((DAT_005b8bb8 + -1) * DAT_005b8bb8) | 0xfffffffeU) == 0xffffffff;
        iVar6 = -0x457bf0b7;
        iVar1 = -0x4f2ac9e9;
        if (bVar7) {
          iVar1 = -0x457bf0b7;
        }
        iVar5 = -0x4f2ac9e9;
      }
      else {
        if (iVar1 < -0x4e337cb8) {
          if (iVar1 != -0x509f21d2) {
            if (iVar1 != -0x4f2ac9e9) goto joined_r0x00406500;
            iVar1 = -0x5f9a750e;
            goto LAB_00406640;
          }
          bVar8 = false;
          bVar7 = local_4c == 0;
          iVar1 = 0x69d32c70;
          iVar5 = 0x436403ff;
          iVar6 = local_4c;
LAB_00406833:
          if (!bVar7 && bVar8 == iVar6 < 0) {
            iVar1 = iVar5;
          }
          goto joined_r0x00406500;
        }
        if (iVar1 == -0x4e337cb8) {
          piVar4[-6] = 0x4068d7;
          piVar4[-5] = 0;
          __isoc99_scanf("%d");
          iVar1 = -0x634a721;
          piVar4 = piVar4 + -4;
          goto LAB_0040636b;
        }
        if (iVar1 != -0x4b9c2289) goto joined_r0x00406500;
        piVar4[-2] = 0x4067b1;
        piVar4[-1] = 0;
        putc(10,stdout);
        bVar7 = (~((DAT_005b8bb8 + -1) * DAT_005b8bb8) | 0xfffffffeU) == 0xffffffff;
        iVar6 = 0x1e823a8c;
        iVar1 = -0x79c4d04b;
        if (bVar7) {
          iVar1 = 0x1e823a8c;
        }
        iVar5 = -0x79c4d04b;
      }
      if (9 < DAT_005b8bf0) {
        iVar1 = iVar5;
      }
      if ((bool)(DAT_005b8bf0 < 10 ^ bVar7)) {
        iVar1 = iVar6;
      }
      goto joined_r0x00406500;
    }
    if (-0x39551d5a < iVar1) {
      if (-0x299b7163 < iVar1) {
        if (iVar1 == -0x299b7162) {
          bVar7 = (~((DAT_005b8bb8 + -1) * DAT_005b8bb8) | 0xfffffffeU) == 0xffffffff;
          iVar6 = -0x4b9c2289;
          iVar1 = -0x79c4d04b;
          if (bVar7) {
            iVar1 = -0x4b9c2289;
          }
          iVar5 = -0x79c4d04b;
LAB_0040691f:
          if (9 < DAT_005b8bf0) {
            iVar1 = iVar5;
          }
          if ((bool)(DAT_005b8bf0 < 10 ^ bVar7)) {
            iVar1 = iVar6;
          }
          goto joined_r0x00406500;
        }
        if (iVar1 != -0x26986331) goto joined_r0x00406500;
        piVar4[-2] = 0x406810;
        piVar4[-1] = 0;
        putc(0x20,stdout);
        iVar1 = -0x3bf5dc43;
        goto LAB_00406640;
      }
      if (iVar1 != -0x39551d59) break;
      iVar1 = -0x557043a5;
      unaff_R12D = 0;
      goto LAB_00406640;
    }
    if (iVar1 == -0x4759ef30) {
      local_50 = *local_48;
      iVar1 = (local_50 >> 0x1f & 0x85e05ac9U) + 0x47ea9aed;
      goto joined_r0x00406500;
    }
    if (iVar1 != -0x457bf0b7) {
      if (iVar1 != -0x3bf5dc43) goto joined_r0x00406500;
      uVar3 = *(uint *)(&DAT_0040b070 + (long)local_3c * 4);
      piVar4[-2] = 0x406767;
      piVar4[-1] = 0;
      printf("%d",(ulong)uVar3);
      unaff_R14D = local_3c + 1;
      iVar1 = -0x207500cb;
      goto LAB_0040636b;
    }
    bVar7 = local_34 == '\0';
    iVar1 = -0x509f21d2;
    iVar6 = 0x755ae88d;
LAB_0040661d:
    if (!bVar7) {
      iVar1 = iVar6;
    }
  } while( true );
  if (iVar1 == -0x32350a4a) {
    piVar4[-2] = 0x4066cd;
    piVar4[-1] = 0;
    putc(10,stdout);
    goto LAB_0040662d;
  }
  goto joined_r0x00406500;
}



/* ===== Function: FUN_00406950 ===== */

/* WARNING: Removing unreachable block (ram,0x00406a9c) */
/* WARNING: Removing unreachable block (ram,0x00406b80) */
/* WARNING: Removing unreachable block (ram,0x00407039) */
/* WARNING: Removing unreachable block (ram,0x0040704e) */
/* WARNING: Removing unreachable block (ram,0x00406bab) */
/* WARNING: Removing unreachable block (ram,0x00406f6e) */

undefined4 FUN_00406950(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int unaff_R12D;
  undefined8 unaff_R13;
  undefined4 unaff_R15D;
  bool bVar9;
  undefined1 auStack_78 [8];
  undefined4 *local_70;
  int *local_68;
  undefined4 local_5c;
  undefined4 *local_58;
  int *local_50;
  int local_44;
  undefined8 local_40;
  char local_34;
  char local_33;
  char local_32;
  char local_31;
  
  puVar6 = (undefined4 *)auStack_78;
  uVar5 = (DAT_005b8bc0 + -1) * DAT_005b8bc0;
  local_31 = ((uVar5 ^ 0xfffffffe) & uVar5) == 0;
  local_32 = DAT_005b8bec < 10;
  iVar3 = 0x7bdb4bc2;
LAB_00406d30:
  do {
    uVar2 = local_40;
    if (0x4f2b1570 < iVar3) {
      if (iVar3 < 0x6f7112a8) {
        if (iVar3 < 0x58f1a7a9) {
          if (iVar3 == 0x56377292) {
            uVar5 = (~-DAT_005b8bc0 * DAT_005b8bc0 ^ 0xfffffffeU) & ~-DAT_005b8bc0 * DAT_005b8bc0;
            bVar9 = DAT_005b8bec < 10 == (uVar5 == 0);
            iVar7 = -0x11f1f6e;
            iVar8 = -0x4801d8a;
            local_44 = unaff_R12D;
            local_40 = unaff_R13;
            goto LAB_00406d0d;
          }
          if (iVar3 == 0x4f2b1571) {
            return local_5c;
          }
        }
        else {
          if (iVar3 == 0x58f1a7a9) {
            iVar3 = 0x56377292;
            unaff_R12D = 0;
            unaff_R13 = 0;
            goto LAB_00406d30;
          }
          if (iVar3 == 0x6e20a28d) {
            *(undefined8 *)((long)puVar6 + -8) = 0x406d70;
            FUN_00407cf0(uVar2);
            *(undefined8 *)((long)puVar6 + -8) = 0x406d81;
            putc(10,stdout);
            uVar2 = local_40;
            *(undefined8 *)((long)puVar6 + -8) = 0x406d8a;
            FUN_00407fa0(uVar2);
            *(undefined8 *)((long)puVar6 + -8) = 0x406d9b;
            putc(10,stdout);
            uVar2 = local_40;
            *(undefined8 *)((long)puVar6 + -8) = 0x406da4;
            FUN_00408100(uVar2);
            *(undefined8 *)((long)puVar6 + -8) = 0x406db5;
            putc(10,stdout);
            uVar2 = local_40;
            *(undefined8 *)((long)puVar6 + -8) = 0x406dbe;
            FUN_00408270(uVar2);
            bVar9 = (~((DAT_005b8bc0 + -1) * DAT_005b8bc0) | 0xfffffffeU) == 0xffffffff;
            iVar3 = 0x2ec6560b;
            if (bVar9) {
              iVar3 = -0x981a0e3;
            }
            if (9 < DAT_005b8bec) {
              iVar3 = 0x2ec6560b;
            }
            if (DAT_005b8bec < 10 != bVar9) {
              iVar3 = -0x981a0e3;
            }
          }
        }
      }
      else if (iVar3 == 0x6f7112a8) {
        iVar3 = (*local_50 >> 0x1f & 0x68abe390U) + 0x58f1a7a9;
      }
      else {
        if (iVar3 == 0x7b079619) {
          uVar5 = ~((DAT_005b8bc0 + -1) * DAT_005b8bc0) | 0xfffffffe;
          bVar9 = DAT_005b8bec < 10 == (uVar5 == 0xffffffff);
          iVar7 = 0x1501938b;
          iVar8 = -0x2d268df8;
          goto LAB_0040699c;
        }
        if (iVar3 == 0x7bdb4bc2) {
          iVar3 = -0x3307179b;
          if (local_32 != '\0') {
            iVar3 = -0x4adca1a8;
          }
          if (local_31 == '\0') {
            iVar3 = -0x3307179b;
          }
          if (local_31 != local_32) {
            iVar3 = -0x4adca1a8;
          }
        }
      }
joined_r0x00406ea5:
      if (iVar3 < -0x981a0e3) {
LAB_004069fb:
        while (iVar3 < -0x3ade9f1a) {
          if (iVar3 < -0x4adca1a8) {
            if (iVar3 == -0x75a13672) {
              bVar9 = local_34 == '\0';
              iVar3 = -0x6c5c640d;
              iVar7 = -0x3a9e40e5;
              goto LAB_00406cfd;
            }
            if (iVar3 == -0x6c5c640d) {
              uVar5 = ~((DAT_005b8bc0 + -1) * DAT_005b8bc0) | 0xfffffffe;
              bVar9 = DAT_005b8bec < 10 == (uVar5 == 0xffffffff);
              iVar7 = 0x2ec6560b;
              iVar8 = 0x6e20a28d;
LAB_0040699c:
              if (!bVar9) {
                iVar7 = iVar8;
              }
              iVar3 = iVar7;
              if (uVar5 == 0xffffffff) {
                iVar3 = iVar8;
              }
              if (9 < DAT_005b8bec) {
                iVar3 = iVar7;
              }
              goto joined_r0x00406d05;
            }
            if (iVar3 != -0x5150d5c7) goto joined_r0x00406ea5;
            iVar3 = -0x3d25639d;
          }
          else {
            if (iVar3 == -0x4adca1a8) {
              local_68 = (int *)((long)puVar6 + -0x10);
              puVar4 = (undefined4 *)((long)puVar6 + -0x20);
              *(undefined8 *)((long)puVar6 + -0x28) = 0x406c66;
              local_58 = puVar4;
              local_50 = local_68;
              iVar3 = __isoc99_scanf("%d",local_68);
              local_33 = iVar3 != 1;
              bVar9 = (~((DAT_005b8bc0 + -1) * DAT_005b8bc0) | 0xfffffffeU) == 0xffffffff;
              iVar7 = -0x272354de;
              iVar3 = -0x3307179b;
              if (bVar9) {
                iVar3 = -0x272354de;
              }
              iVar8 = -0x3307179b;
LAB_00406ca0:
              if (9 < DAT_005b8bec) {
                iVar3 = iVar8;
              }
              puVar6 = puVar4;
              if ((bool)(DAT_005b8bec < 10 ^ bVar9)) {
                iVar3 = iVar7;
              }
              goto joined_r0x00406d05;
            }
            if (iVar3 != -0x3e6274c7) {
              if (iVar3 == -0x3d25639d) {
                bVar9 = (~(~-DAT_005b8bc0 * DAT_005b8bc0) | 0xfffffffeU) == 0xffffffff;
                iVar7 = 0x4f2b1571;
                iVar3 = -0x5150d5c7;
                if (bVar9) {
                  iVar3 = 0x4f2b1571;
                }
                iVar8 = -0x5150d5c7;
                puVar4 = puVar6;
                goto LAB_00406ca0;
              }
              goto joined_r0x00406ea5;
            }
            *(undefined8 *)((long)puVar6 + -8) = 0x406cc6;
            putc(10,stdout);
            *(undefined8 *)((long)puVar6 + -8) = 0x406cd7;
            putc(10,stdout);
            *(undefined8 *)((long)puVar6 + -8) = 0x406ce8;
            putc(10,stdout);
LAB_00406f58:
            iVar3 = -0x3ade9f1a;
            unaff_R15D = 1;
          }
        }
        if (iVar3 < -0x3307179b) {
          if (iVar3 == -0x3ade9f1a) {
            uVar5 = (DAT_005b8bc0 + -1) * DAT_005b8bc0;
            uVar5 = (uVar5 ^ 0xfffffffe) & uVar5;
            bVar9 = DAT_005b8bec < 10 == (uVar5 == 0);
            iVar7 = -0x5150d5c7;
            iVar8 = -0x3d25639d;
            local_5c = unaff_R15D;
LAB_00406d0d:
            if (!bVar9) {
              iVar7 = iVar8;
            }
            iVar3 = iVar7;
            if (uVar5 == 0) {
              iVar3 = iVar8;
            }
            if (9 < DAT_005b8bec) {
              iVar3 = iVar7;
            }
            goto joined_r0x00406d05;
          }
          if (iVar3 != -0x3a9e40e5) {
            if (iVar3 == -0x38b59f9b) {
              uVar1 = *local_58;
              *(undefined8 *)((long)puVar6 + -8) = 0x406ad1;
              unaff_R13 = FUN_004078b0(local_40,uVar1);
              unaff_R12D = local_44 + 1;
              iVar3 = 0x56377292;
              goto LAB_00406d30;
            }
            goto joined_r0x00406ea5;
          }
          local_70 = local_58;
          *(undefined8 *)((long)puVar6 + -8) = 0x406c1c;
          iVar3 = __isoc99_scanf("%d",local_58);
          bVar9 = iVar3 == 1;
          iVar3 = -0x38b59f9b;
          iVar7 = -0x1723ce08;
        }
        else {
          if (iVar3 < -0x272354de) {
            if (iVar3 != -0x3307179b) {
              if (iVar3 == -0x2d268df8) {
                uVar5 = (DAT_005b8bc0 + -1) * DAT_005b8bc0;
                uVar5 = (uVar5 ^ 0xfffffffe) & uVar5;
                bVar9 = DAT_005b8bec < 10 == (uVar5 == 0);
                iVar7 = 0x1501938b;
                iVar8 = 0xa795a57;
                goto LAB_00406d0d;
              }
              goto joined_r0x00406ea5;
            }
            *(undefined8 *)((long)puVar6 + -0x18) = 0x406b9b;
            __isoc99_scanf("%d");
            iVar3 = -0x4adca1a8;
            puVar6 = (undefined4 *)((long)puVar6 + -0x10);
            goto LAB_004069fb;
          }
          if (iVar3 != -0x272354de) {
            if (iVar3 != -0x1723ce08) goto joined_r0x00406ea5;
            *local_58 = 0;
            iVar3 = -0x38b59f9b;
            goto LAB_004069fb;
          }
          bVar9 = local_33 == '\0';
          iVar3 = 0x6f7112a8;
          iVar7 = 0x7b079619;
        }
LAB_00406cfd:
        if (!bVar9) {
          iVar3 = iVar7;
        }
joined_r0x00406d05:
        if (-0x981a0e4 < iVar3) goto LAB_00406d30;
        goto LAB_004069fb;
      }
      goto LAB_00406d30;
    }
    if (iVar3 < 0xa795a57) {
      if (iVar3 == -0x981a0e3) goto LAB_00406f58;
      if (iVar3 == -0x4801d8a) {
        local_34 = local_44 < *local_50;
        uVar5 = ~((DAT_005b8bc0 + -1) * DAT_005b8bc0) | 0xfffffffe;
        bVar9 = DAT_005b8bec < 10 == (uVar5 == 0xffffffff);
        iVar7 = -0x11f1f6e;
        iVar8 = -0x75a13672;
        goto LAB_0040699c;
      }
      if (iVar3 != -0x11f1f6e) goto joined_r0x00406ea5;
      iVar3 = -0x4801d8a;
    }
    else {
      if (iVar3 == 0xa795a57) {
        iVar3 = -0x3ade9f1a;
        unaff_R15D = 0;
        goto LAB_004069fb;
      }
      if (iVar3 == 0x1501938b) {
        iVar3 = -0x2d268df8;
        goto LAB_004069fb;
      }
      if (iVar3 != 0x2ec6560b) goto joined_r0x00406ea5;
      *(undefined8 *)((long)puVar6 + -8) = 0x406eda;
      FUN_00407cf0(uVar2);
      *(undefined8 *)((long)puVar6 + -8) = 0x406eeb;
      putc(10,stdout);
      uVar2 = local_40;
      *(undefined8 *)((long)puVar6 + -8) = 0x406ef4;
      FUN_00407fa0(uVar2);
      *(undefined8 *)((long)puVar6 + -8) = 0x406f05;
      putc(10,stdout);
      uVar2 = local_40;
      *(undefined8 *)((long)puVar6 + -8) = 0x406f0e;
      FUN_00408100(uVar2);
      *(undefined8 *)((long)puVar6 + -8) = 0x406f1f;
      putc(10,stdout);
      uVar2 = local_40;
      *(undefined8 *)((long)puVar6 + -8) = 0x406f28;
      FUN_00408270(uVar2);
      iVar3 = 0x6e20a28d;
    }
  } while( true );
}



/* ===== Function: FUN_004070b0 ===== */

long FUN_004070b0(long param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined4 local_28;
  undefined1 local_21;
  undefined8 local_20;
  undefined4 local_14;
  undefined8 local_10;
  
  bVar10 = ((~-DAT_005b8bb4 * DAT_005b8bb4 ^ 0xfffffffeU) & ~-DAT_005b8bb4 * DAT_005b8bb4) == 0;
  bVar1 = DAT_005b8bcc < 10;
  bVar2 = bVar1 == bVar10;
  iVar7 = -0x5258047;
  if (bVar2 && (!bVar1 || !bVar10)) {
    iVar7 = -0x1b970187;
  }
  iVar8 = -0x55cbdb48;
  if (bVar2 && (!bVar1 || !bVar10)) {
    iVar8 = -0x1b970187;
  }
  iVar5 = 0x3ce4a031;
  if (bVar2 && (!bVar1 || !bVar10)) {
    iVar5 = 0x5e5b5f8f;
  }
  iVar9 = -0x2505c8c1;
  if (bVar2 && (!bVar1 || !bVar10)) {
    iVar9 = 0x5e5b5f8f;
  }
  lVar4 = 1;
  iVar3 = 0x595f896f;
  do {
    while( true ) {
      do {
        while( true ) {
          while (iVar6 = iVar3, iVar3 = iVar6, iVar6 < 0x498f2e0) {
            if (iVar6 < -0x1b970187) {
              if (iVar6 == -0x55cbdb48) {
                iVar3 = 0x2e886c71;
                if (local_21 != '\0') {
                  iVar3 = 0x498f2e0;
                }
              }
              else if (iVar6 == -0x2505c8c1) {
                lVar4 = local_10;
                iVar3 = 0x595f896f;
                param_2 = local_14;
              }
            }
            else if (iVar6 == -0x1b970187) {
              iVar3 = -0x5258047;
            }
            else if (iVar6 == -0x5258047) {
              local_14 = local_28 + -1;
              local_21 = 0 < local_28;
              iVar3 = iVar8;
            }
          }
          if (iVar6 < 0x595f896f) break;
          if (iVar6 == 0x5e5b5f8f) {
            iVar3 = 0x3ce4a031;
          }
          else if (iVar6 == 0x595f896f) {
            iVar3 = iVar7;
            local_28 = param_2;
            local_20 = lVar4;
          }
        }
        iVar3 = iVar5;
      } while (iVar6 == 0x498f2e0);
      if (iVar6 != 0x3ce4a031) break;
      local_10 = local_20 * param_1;
      iVar3 = iVar9;
    }
    iVar3 = iVar6;
  } while (iVar6 != 0x2e886c71);
  return local_20;
}



/* ===== Function: FUN_00407280 ===== */

/* WARNING: Removing unreachable block (ram,0x00407709) */
/* WARNING: Removing unreachable block (ram,0x004073e6) */
/* WARNING: Removing unreachable block (ram,0x004075b3) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00407280(int param_1,int param_2)

{
  uint *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong extraout_RDX;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  bool bVar12;
  int local_68;
  char local_62;
  char local_61;
  int local_60;
  int local_58;
  int local_54;
  int *local_48;
  
  uVar5 = ~((DAT_005b8b7c + -1) * DAT_005b8b7c) | 0xfffffffe;
  uVar7 = (ulong)uVar5;
  bVar2 = DAT_005b8bc4 < 10;
  puVar1 = (uint *)(&DAT_0040b070 + (long)param_2 * 4);
  iVar4 = -0x2ce50ebf;
LAB_00407320:
  do {
    iVar8 = iVar4;
    if (0x1752f81f < iVar8) {
      iVar4 = -0xf8c957e;
      if (iVar8 != 0x7b7f91f8) {
        if (iVar8 == 0x444dce81) {
          uVar6 = *puVar1;
          uVar11 = 0xf8848c0f;
          iVar4 = 0x444dce81;
          iVar8 = param_1 + -1;
          iVar3 = param_1;
LAB_0040740c:
          do {
            while (iVar9 = (int)uVar11, iVar9 < 0x34a4b18a) {
              if (iVar9 != -0xa76b6a0) {
                if (iVar9 != -0x77b73f1) {
                  if (iVar9 != 0xd578b97) goto LAB_00407400;
                  bVar12 = (~((DAT_005b8b70 + -1) * DAT_005b8b70) | 0xfffffffeU) == 0xffffffff;
                  uVar11 = 0x34a4b18a;
                  if (bVar12) {
                    uVar11 = 0x9ae89bc7;
                  }
                  if (9 < DAT_005b8c34) {
                    uVar11 = 0x34a4b18a;
                  }
                  bVar12 = DAT_005b8c34 < 10 != bVar12;
                  uVar7 = (ulong)bVar12;
                  if (bVar12) {
                    uVar11 = 0x9ae89bc7;
                  }
                  iVar9 = (int)uVar11;
                  goto joined_r0x00407501;
                }
                uVar7 = 0xac0bc05f;
                uVar11 = 0xd578b97;
                if (iVar3 < param_2) {
                  uVar11 = 0xac0bc05f;
                }
                iVar9 = (int)uVar11;
                local_68 = iVar8;
                local_60 = iVar3;
                goto joined_r0x00407501;
              }
              uVar7 = (ulong)(local_68 + 1);
              iVar9 = *(int *)(&DAT_0040b070 + uVar7 * 4);
              *(int *)(&DAT_0040b070 + uVar7 * 4) = *local_48;
              *local_48 = iVar9;
              uVar11 = 0x63407196;
            }
            if (iVar9 < 0x660c5630) {
              if (iVar9 != 0x34a4b18a) {
                if (iVar9 != 0x63407196) goto LAB_00407400;
                local_54 = local_68 + 1;
                iVar9 = *(int *)(&DAT_0040b070 + (long)local_54 * 4);
                *(int *)(&DAT_0040b070 + (long)local_54 * 4) = *local_48;
                *local_48 = iVar9;
                uVar10 = ~(~-DAT_005b8b70 * DAT_005b8b70) | 0xfffffffe;
                uVar7 = 0xf5894960;
                if (DAT_005b8c34 < 10 != (uVar10 == 0xffffffff)) {
                  uVar7 = 0xebede7bb;
                }
                uVar11 = uVar7;
                if (uVar10 != 0xffffffff) goto LAB_004073eb;
                uVar11 = 0xebede7bb;
                goto LAB_004073eb;
              }
              uVar7 = (ulong)(local_68 + 1);
              uVar10 = *(uint *)(&DAT_0040b070 + uVar7 * 4);
              *(uint *)(&DAT_0040b070 + uVar7 * 4) = *puVar1;
              *puVar1 = uVar10;
              uVar11 = 0x9ae89bc7;
            }
            else {
              if (iVar9 == 0x660c5630) {
                bVar12 = (~((DAT_005b8b70 + -1) * DAT_005b8b70) | 0xfffffffeU) == 0xffffffff;
                uVar7 = (ulong)bVar12;
                uVar11 = 0xf5894960;
                if (bVar12) {
                  uVar11 = 0x63407196;
                }
                if (9 < DAT_005b8c34) {
                  uVar11 = 0xf5894960;
                }
                if (DAT_005b8c34 < 10 != bVar12) {
                  uVar11 = 0x63407196;
                }
                iVar9 = (int)uVar11;
                goto joined_r0x0040761c;
              }
              if (iVar9 != 0x7c9b2734) goto LAB_00407400;
              uVar7 = (ulong)uVar6;
              uVar11 = 0xdceeb638;
            }
LAB_00407630:
            do {
              while (iVar9 = (int)uVar11, iVar9 < -0x2d19698d) {
                if (iVar9 == -0x65176439) {
                  local_58 = local_68 + 1;
                  uVar10 = *(uint *)(&DAT_0040b070 + (long)local_58 * 4);
                  *(uint *)(&DAT_0040b070 + (long)local_58 * 4) = *puVar1;
                  *puVar1 = uVar10;
                  bVar12 = (~((DAT_005b8b70 + -1) * DAT_005b8b70) | 0xfffffffeU) == 0xffffffff;
                  uVar7 = (ulong)bVar12;
                  uVar11 = 0x34a4b18a;
                  if (bVar12) {
                    uVar11 = 0xdfdc9695;
                  }
                  if (9 < DAT_005b8c34) {
                    uVar11 = 0x34a4b18a;
                  }
                  if (DAT_005b8c34 < 10 != bVar12) {
                    uVar11 = 0xdfdc9695;
                  }
                  iVar9 = (int)uVar11;
                }
                else {
                  if (iVar9 != -0x53f43fa1) {
                    if (iVar9 != -0x47accba6) goto LAB_00407400;
                    iVar3 = local_60 + 1;
                    uVar11 = 0xf8848c0f;
                    iVar8 = iVar4;
                    goto LAB_0040740c;
                  }
                  bVar12 = (~((DAT_005b8b70 + -1) * DAT_005b8b70) | 0xfffffffeU) == 0xffffffff;
                  uVar7 = (ulong)bVar12;
                  uVar11 = 0x7c9b2734;
                  if (bVar12) {
                    uVar11 = 0xdceeb638;
                  }
                  if (9 < DAT_005b8c34) {
                    uVar11 = 0x7c9b2734;
                  }
                  if (DAT_005b8c34 < 10 != bVar12) {
                    uVar11 = 0xdceeb638;
                  }
                  iVar9 = (int)uVar11;
                }
joined_r0x00407501:
                if (-0xa76b6a1 < iVar9) goto LAB_0040740c;
              }
              if (-0x2023696c < iVar9) {
                if (iVar9 != -0x14121845) {
                  if (iVar9 != -0x2023696b) {
LAB_00407400:
                    iVar9 = (int)uVar11;
                    goto joined_r0x00407501;
                  }
                  FUN_00407280(param_1,local_58 + -1,uVar7);
                  FUN_00407280(local_58 + 1,param_2);
                  uVar7 = extraout_RDX;
                  iVar4 = 0x1752f820;
                  goto LAB_00407320;
                }
                uVar11 = 0xb853345a;
                iVar4 = local_54;
                goto LAB_00407630;
              }
              if (iVar9 != -0x2d19698d) {
                if (iVar9 == -0x231149c8) {
                  local_48 = (int *)(&DAT_0040b070 + (long)local_60 * 4);
                  local_61 = *local_48 <= (int)uVar6;
                  uVar10 = ~(~-DAT_005b8b70 * DAT_005b8b70) | 0xfffffffe;
                  uVar7 = 0x7c9b2734;
                  if (DAT_005b8c34 < 10 != (uVar10 == 0xffffffff)) {
                    uVar7 = 0xd2e69673;
                  }
                  uVar11 = uVar7;
                  if (uVar10 == 0xffffffff) {
                    uVar11 = 0xd2e69673;
                  }
LAB_004073eb:
                  if (9 < DAT_005b8c34) {
                    uVar11 = uVar7;
                  }
                }
                goto LAB_00407400;
              }
              uVar11 = 0xb853345a;
              if (local_61 != '\0') {
                uVar11 = 0x660c5630;
              }
              iVar9 = (int)uVar11;
              iVar4 = local_68;
joined_r0x0040761c:
            } while (iVar9 < -0xa76b6a0);
          } while( true );
        }
        if (iVar8 == 0x1752f820) {
          return;
        }
LAB_004078a0:
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      goto LAB_00407320;
    }
    if (iVar8 == -0x2ce50ebf) {
      uVar7 = 0x7b7f91f8;
      if ((uVar5 == 0xffffffff) != bVar2) {
        uVar7 = 0xf0736a82;
      }
      iVar4 = (int)uVar7;
      if (bVar2) {
        iVar4 = -0xf8c957e;
      }
      if (uVar5 != 0xffffffff) {
        iVar4 = (int)uVar7;
      }
    }
    else if (iVar8 == -0x21d79102) {
      iVar4 = 0x1752f820;
      if (local_62 != '\0') {
        iVar4 = 0x444dce81;
      }
    }
    else {
      if (iVar8 != -0xf8c957e) goto LAB_004078a0;
      local_62 = param_1 < param_2;
      uVar6 = (DAT_005b8b7c + -1) * DAT_005b8b7c;
      uVar6 = (uVar6 ^ 0xfffffffe) & uVar6;
      uVar7 = 0x7b7f91f8;
      if (DAT_005b8bc4 < 10 != (uVar6 == 0)) {
        uVar7 = 0xde286efe;
      }
      iVar4 = (int)uVar7;
      if (uVar6 == 0) {
        iVar4 = -0x21d79102;
      }
      if (9 < DAT_005b8bc4) {
        iVar4 = (int)uVar7;
      }
    }
  } while( true );
}



/* ===== Function: FUN_004078b0 ===== */

int * FUN_004078b0(int *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *unaff_R14;
  bool bVar7;
  
  iVar4 = 0xe1250ca;
  if (param_1 != (int *)0x0) {
    iVar4 = -0x10bd7cb3;
  }
  iVar1 = 0x1666462a;
LAB_004078f0:
  do {
    while (iVar5 = iVar1, iVar1 = iVar5, 0x148b1a51 < iVar5) {
      if (iVar5 < 0x4e19a9a6) {
        if (iVar5 == 0x148b1a52) {
          bVar7 = (~((DAT_005b8be0 + -1) * DAT_005b8be0) | 0xfffffffeU) == 0xffffffff;
          iVar1 = 0x4e19a9a6;
          if (bVar7) {
            iVar1 = 0x206ae8a9;
          }
          if (9 < DAT_005b8c3c) {
            iVar1 = 0x4e19a9a6;
          }
          if (DAT_005b8c3c < 10 != bVar7) {
            iVar1 = 0x206ae8a9;
          }
        }
        else {
          iVar1 = iVar4;
          if ((iVar5 != 0x1666462a) && (iVar1 = iVar5, iVar5 == 0x206ae8a9)) {
            unaff_R14 = param_1;
            iVar1 = 0x6e2ac77f;
          }
        }
      }
      else if (iVar5 < 0x6e2ac77f) {
        if (iVar5 == 0x4e19a9a6) {
          iVar1 = 0x148b1a52;
        }
        else if (iVar5 == 0x5e8e3c11) {
          uVar2 = FUN_004078b0(*(undefined8 *)(param_1 + 2),param_2);
          *(undefined8 *)(param_1 + 2) = uVar2;
          iVar1 = -0x31241b1c;
        }
      }
      else if (iVar5 == 0x7b19b9e1) {
        uVar2 = FUN_004078b0(*(undefined8 *)(param_1 + 4),param_2);
        *(undefined8 *)(param_1 + 4) = uVar2;
        iVar1 = -0x2dfa82b2;
      }
      else if (iVar5 == 0x6e2ac77f) {
        return unaff_R14;
      }
    }
    if (-0x10bd7cb4 < iVar5) {
      if (iVar5 == -0x10bd7cb3) {
        iVar1 = -0x26188aba;
        if (param_2 < *param_1) {
          iVar1 = 0x5e8e3c11;
        }
      }
      else if (iVar5 == -0x74195bd) {
        iVar1 = -0x31241b1c;
      }
      else if (iVar5 == 0xe1250ca) {
        unaff_R14 = (int *)malloc(0x18);
        iVar1 = 0x46899e9c;
        do {
          do {
            if (iVar1 == -0xc84360e) {
              uVar3 = (DAT_005b8b98 + -1) * DAT_005b8b98;
              uVar3 = (uVar3 ^ 0xfffffffe) & uVar3;
              iVar5 = -0x66a66da8;
              if (DAT_005b8c24 < 10 != (uVar3 == 0)) {
                iVar5 = -0x4d04701b;
              }
              iVar1 = iVar5;
              if (uVar3 == 0) {
                iVar1 = -0x4d04701b;
              }
              if (DAT_005b8c24 < 10) goto joined_r0x00407ca3;
              iVar1 = iVar5;
              goto joined_r0x00407ca3;
            }
            if (iVar1 != 0x46899e9c) {
              if (iVar1 == -0x9a2c5ec) {
                    /* WARNING: Subroutine does not return */
                exit(1);
              }
LAB_00407ce0:
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
            iVar1 = -0x9a2c5ec;
            if (unaff_R14 != (int *)0x0) {
              iVar1 = -0xc84360e;
            }
          } while (-0xc84360f < iVar1);
          do {
            while (iVar1 == -0x66a66da8) {
              *unaff_R14 = param_2;
              unaff_R14[2] = 0;
              unaff_R14[3] = 0;
              unaff_R14[4] = 0;
              unaff_R14[5] = 0;
              iVar1 = -0x4d04701b;
            }
            if (iVar1 != -0x4d04701b) {
              if (iVar1 != -0x44524e99) goto LAB_00407ce0;
              iVar1 = 0x6e2ac77f;
              goto LAB_004078f0;
            }
            *unaff_R14 = param_2;
            unaff_R14[2] = 0;
            unaff_R14[3] = 0;
            unaff_R14[4] = 0;
            unaff_R14[5] = 0;
            bVar7 = (~(~-DAT_005b8b98 * DAT_005b8b98) | 0xfffffffeU) == 0xffffffff;
            iVar1 = -0x66a66da8;
            if (bVar7) {
              iVar1 = -0x44524e99;
            }
            if (9 < DAT_005b8c24) {
              iVar1 = -0x66a66da8;
            }
            if (DAT_005b8c24 < 10 != bVar7) {
              iVar1 = -0x44524e99;
            }
joined_r0x00407ca3:
          } while (iVar1 < -0xc84360e);
        } while( true );
      }
      goto LAB_004078f0;
    }
    if (iVar5 == -0x31241b1c) {
      uVar3 = (DAT_005b8be0 + -1) * DAT_005b8be0;
      uVar3 = (uVar3 ^ 0xfffffffe) & uVar3;
      bVar7 = uVar3 == 0;
      iVar5 = 0x148b1a52;
      iVar1 = 0x4e19a9a6;
      if (uVar3 == 0) {
        iVar1 = 0x148b1a52;
      }
      iVar6 = 0x4e19a9a6;
LAB_004078de:
      if (9 < DAT_005b8c3c) {
        iVar1 = iVar6;
      }
      if ((bool)(DAT_005b8c3c < 10 ^ bVar7)) {
        iVar1 = iVar5;
      }
    }
    else {
      if (iVar5 == -0x2dfa82b2) {
        uVar2 = FUN_004078b0(*(undefined8 *)(param_1 + 4),param_2);
        *(undefined8 *)(param_1 + 4) = uVar2;
        bVar7 = (~(~-DAT_005b8be0 * DAT_005b8be0) | 0xfffffffeU) == 0xffffffff;
        iVar5 = -0x74195bd;
        iVar1 = 0x7b19b9e1;
        if (bVar7) {
          iVar1 = -0x74195bd;
        }
        iVar6 = 0x7b19b9e1;
        goto LAB_004078de;
      }
      if (iVar5 == -0x26188aba) {
        uVar3 = ~((DAT_005b8be0 + -1) * DAT_005b8be0) | 0xfffffffe;
        iVar5 = 0x7b19b9e1;
        if (DAT_005b8c3c < 10 != (uVar3 == 0xffffffff)) {
          iVar5 = -0x2dfa82b2;
        }
        iVar1 = iVar5;
        if (uVar3 == 0xffffffff) {
          iVar1 = -0x2dfa82b2;
        }
        if (9 < DAT_005b8c3c) {
          iVar1 = iVar5;
        }
      }
    }
  } while( true );
}



/* ===== Function: FUN_00407cf0 ===== */

/* WARNING: Removing unreachable block (ram,0x00407e93) */

void FUN_00407cf0(uint *param_1)

{
  int iVar1;
  undefined8 in_RAX;
  uint uVar2;
  int iVar3;
  bool bVar4;
  undefined8 uStack_38;
  
  uVar2 = (DAT_005b8bd8 + -1) * DAT_005b8bd8;
  uStack_38._7_1_ = (char)((ulong)in_RAX >> 0x38);
  uStack_38 = (ulong)CONCAT12(uStack_38._7_1_,
                              CONCAT11(DAT_005b8c38 < 10,((uVar2 ^ 0xfffffffe) & uVar2) == 0)) <<
              0x28;
  iVar1 = -0x35f202da;
LAB_00407ec0:
  if (iVar1 < -0x5db60c94) {
    if (iVar1 == -0x7bdefaa8) {
      iVar1 = -0x69b586ea;
      goto LAB_00407ec0;
    }
    if (iVar1 != -0x69b586ea) goto joined_r0x00407e30;
    uStack_38 = CONCAT17(param_1 != (uint *)0x0,(undefined7)uStack_38);
    bVar4 = (~((DAT_005b8bd8 + -1) * DAT_005b8bd8) | 0xfffffffeU) == 0xffffffff;
    iVar1 = -0x7bdefaa8;
    if (bVar4) {
      iVar1 = 0x4e2ac6f3;
    }
    if (9 < DAT_005b8c38) {
      iVar1 = -0x7bdefaa8;
    }
    if (DAT_005b8c38 < 10 != bVar4) {
      iVar1 = 0x4e2ac6f3;
    }
  }
  else {
    if (iVar1 == -0x5db60c94) {
      FUN_00407cf0(*(undefined8 *)(param_1 + 2));
      printf("%d ",(ulong)*param_1);
      FUN_00407cf0(*(undefined8 *)(param_1 + 4));
      iVar1 = 0x508c1666;
      goto joined_r0x00407e30;
    }
    if (iVar1 != -0x35f202da) goto joined_r0x00407e30;
    iVar1 = -0x7bdefaa8;
    if (uStack_38._6_1_ != '\0') {
      iVar1 = -0x69b586ea;
    }
    if (uStack_38._5_1_ == '\0') {
      iVar1 = -0x7bdefaa8;
    }
    if (uStack_38._5_1_ != uStack_38._6_1_) {
      iVar1 = -0x69b586ea;
    }
  }
joined_r0x00407f70:
  if (-0x32c802fc < iVar1) {
    do {
      while (0x4e2ac6f2 < iVar1) {
        if (iVar1 == 0x4e2ac6f3) {
          iVar1 = -0x32c802fb;
          if (uStack_38._7_1_ != '\0') {
            iVar1 = 0x3ded0d8b;
          }
        }
        else if (iVar1 == 0x508c1666) {
          FUN_00407cf0(*(undefined8 *)(param_1 + 2));
          printf("%d ",(ulong)*param_1);
          FUN_00407cf0(*(undefined8 *)(param_1 + 4));
          bVar4 = (~((DAT_005b8bd8 + -1) * DAT_005b8bd8) | 0xfffffffeU) == 0xffffffff;
          iVar1 = -0x5db60c94;
          if (bVar4) {
            iVar1 = 0x435e9bf5;
          }
          if (9 < DAT_005b8c38) {
            iVar1 = -0x5db60c94;
          }
          if (DAT_005b8c38 < 10 != bVar4) {
            iVar1 = 0x435e9bf5;
          }
        }
joined_r0x00407e30:
        if (iVar1 < -0x32c802fb) goto LAB_00407ec0;
      }
      if (iVar1 == 0x3ded0d8b) goto LAB_00407e3b;
      if (iVar1 != 0x435e9bf5) {
        if (iVar1 == -0x32c802fb) {
          return;
        }
        goto joined_r0x00407e30;
      }
      iVar1 = -0x32c802fb;
    } while( true );
  }
  goto LAB_00407ec0;
LAB_00407e3b:
  uVar2 = ~((DAT_005b8bd8 + -1) * DAT_005b8bd8) | 0xfffffffe;
  iVar3 = -0x5db60c94;
  if (DAT_005b8c38 < 10 != (uVar2 == 0xffffffff)) {
    iVar3 = 0x508c1666;
  }
  iVar1 = iVar3;
  if (uVar2 == 0xffffffff) {
    iVar1 = 0x508c1666;
  }
  if (9 < DAT_005b8c38) {
    iVar1 = iVar3;
  }
  goto joined_r0x00407f70;
}



/* ===== Function: FUN_00407fa0 ===== */

void FUN_00407fa0(uint *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0x6b37dde9;
  if (param_1 != (uint *)0x0) {
    iVar3 = -0x7b230c6d;
  }
  iVar1 = -0x27b4f4f7;
  while( true ) {
    do {
      while (iVar4 = iVar1, 0x5983b94c < iVar4) {
        if (iVar4 == 0x5983b94d) {
          iVar1 = 0x5fdc59ac;
        }
        else if (iVar4 == 0x5fdc59ac) {
          uVar2 = ~(~-DAT_005b8bdc * DAT_005b8bdc) | 0xfffffffe;
          iVar4 = 0x5983b94d;
          if (DAT_005b8c2c < 10 != (uVar2 == 0xffffffff)) {
            iVar4 = -0x47b6b805;
          }
          iVar1 = iVar4;
          if (uVar2 == 0xffffffff) {
            iVar1 = -0x47b6b805;
          }
          if (9 < DAT_005b8c2c) {
            iVar1 = iVar4;
          }
        }
        else {
          if (iVar4 != 0x6b37dde9) goto LAB_004080f0;
          uVar2 = (DAT_005b8bdc + -1) * DAT_005b8bdc;
          uVar2 = (uVar2 ^ 0xfffffffe) & uVar2;
          iVar1 = 0x5983b94d;
          if (uVar2 == 0) {
            iVar1 = 0x5fdc59ac;
          }
          if (9 < DAT_005b8c2c) {
            iVar1 = 0x5983b94d;
          }
          if (DAT_005b8c2c < 10 != (uVar2 == 0)) {
            iVar1 = 0x5fdc59ac;
          }
        }
      }
      iVar1 = iVar3;
    } while (iVar4 == -0x27b4f4f7);
    if (iVar4 != -0x7b230c6d) break;
    printf("%d ",(ulong)*param_1);
    FUN_00407fa0(*(undefined8 *)(param_1 + 2));
    FUN_00407fa0(*(undefined8 *)(param_1 + 4));
    iVar1 = 0x6b37dde9;
  }
  if (iVar4 == -0x47b6b805) {
    return;
  }
LAB_004080f0:
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ===== Function: FUN_00408100 ===== */

void FUN_00408100(uint *param_1)

{
  int iVar1;
  undefined8 in_RAX;
  uint uVar2;
  int iVar3;
  undefined8 uStack_38;
  
  uStack_38._7_1_ = (char)((ulong)in_RAX >> 0x38);
  uStack_38 = (ulong)CONCAT12(uStack_38._7_1_,
                              CONCAT11(DAT_005b8c20 < 10,
                                       (~((DAT_005b8c00 + -1) * DAT_005b8c00) | 0xfffffffeU) ==
                                       0xffffffff)) << 0x28;
  iVar1 = 0x9d81d95;
  while( true ) {
    do {
      while (iVar3 = iVar1, iVar3 < 0x38d27022) {
        if (iVar3 == -0x5d77d53c) {
          FUN_00408100(*(undefined8 *)(param_1 + 2));
          FUN_00408100(*(undefined8 *)(param_1 + 4));
          printf("%d ",(ulong)*param_1);
          iVar1 = 0x38d27022;
        }
        else if (iVar3 == -0x41bc4e7) {
          uStack_38 = CONCAT17(param_1 != (uint *)0x0,(undefined7)uStack_38);
          uVar2 = ~((DAT_005b8c00 + -1) * DAT_005b8c00) | 0xfffffffe;
          iVar3 = 0x7b48c714;
          if (DAT_005b8c20 < 10 != (uVar2 == 0xffffffff)) {
            iVar3 = 0x47c0db5d;
          }
          iVar1 = iVar3;
          if (uVar2 == 0xffffffff) {
            iVar1 = 0x47c0db5d;
          }
          if (9 < DAT_005b8c20) {
            iVar1 = iVar3;
          }
        }
        else {
          if (iVar3 != 0x9d81d95) goto LAB_00408260;
          iVar1 = 0x7b48c714;
          if (uStack_38._6_1_ != '\0') {
            iVar1 = -0x41bc4e7;
          }
          if (uStack_38._5_1_ == '\0') {
            iVar1 = 0x7b48c714;
          }
          if (uStack_38._5_1_ != uStack_38._6_1_) {
            iVar1 = -0x41bc4e7;
          }
        }
      }
      iVar1 = -0x41bc4e7;
    } while (iVar3 == 0x7b48c714);
    if (iVar3 != 0x47c0db5d) break;
    iVar1 = 0x38d27022;
    if (uStack_38._7_1_ != '\0') {
      iVar1 = -0x5d77d53c;
    }
  }
  if (iVar3 == 0x38d27022) {
    return;
  }
LAB_00408260:
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ===== Function: FUN_00408270 ===== */

/* WARNING: Removing unreachable block (ram,0x0040844c) */

void FUN_00408270(void *param_1)

{
  int iVar1;
  undefined8 in_RAX;
  uint uVar2;
  int iVar3;
  bool bVar4;
  undefined8 uStack_38;
  
  uStack_38._7_1_ = (char)((ulong)in_RAX >> 0x38);
  uStack_38 = (ulong)CONCAT12(uStack_38._7_1_,
                              CONCAT11(DAT_005b8c28 < 10,
                                       ((~-DAT_005b8b90 * DAT_005b8b90 ^ 0xfffffffeU) &
                                       ~-DAT_005b8b90 * DAT_005b8b90) == 0)) << 0x28;
  iVar1 = -0x469e2bc3;
  do {
    if (iVar1 < -0x356cd28c) {
      if (iVar1 != -0x4c10762c) {
        if (iVar1 != -0x469e2bc3) goto joined_r0x0040846a;
        iVar3 = 0x39867886;
        if (uStack_38._5_1_ != uStack_38._6_1_) {
          iVar3 = -0x356cd28c;
        }
        iVar1 = iVar3;
        if (uStack_38._6_1_ != '\0') {
          iVar1 = -0x356cd28c;
        }
        if (uStack_38._5_1_ != '\0') goto joined_r0x0040846a;
        iVar1 = iVar3;
        goto joined_r0x0040846a;
      }
      iVar1 = 0x7a15fcc9;
      if (uStack_38._7_1_ == '\0') goto joined_r0x0040846a;
      iVar1 = -0x28fd585d;
      goto joined_r0x0040846a;
    }
    if (iVar1 == -0x356cd28c) {
      uStack_38 = CONCAT17(param_1 != (void *)0x0,(undefined7)uStack_38);
      bVar4 = (~((DAT_005b8b90 + -1) * DAT_005b8b90) | 0xfffffffeU) == 0xffffffff;
      iVar1 = 0x39867886;
      if (bVar4) {
        iVar1 = -0x4c10762c;
      }
      if (9 < DAT_005b8c28) {
        iVar1 = 0x39867886;
      }
      if (DAT_005b8c28 < 10 == bVar4) goto joined_r0x0040846a;
      iVar1 = -0x4c10762c;
      goto joined_r0x0040846a;
    }
    if (iVar1 != -0x28fd585d) goto joined_r0x0040846a;
    FUN_00408270(*(undefined8 *)((long)param_1 + 8));
    FUN_00408270(*(undefined8 *)((long)param_1 + 0x10));
    free(param_1);
    iVar1 = 0x7a15fcc9;
LAB_004082eb:
    do {
      if (iVar1 < 0x5d2a6231) {
        if (iVar1 == 0xe086f52) {
          iVar1 = 0x5d2a6231;
          goto LAB_004082eb;
        }
        if (iVar1 == 0x39867886) {
          iVar1 = -0x356cd28c;
          break;
        }
      }
      else {
        if (iVar1 == 0x5d2a6231) {
          uVar2 = ~((DAT_005b8b90 + -1) * DAT_005b8b90) | 0xfffffffe;
          iVar3 = 0xe086f52;
          if (DAT_005b8c28 < 10 != (uVar2 == 0xffffffff)) {
            iVar3 = 0x7197eaf7;
          }
          iVar1 = iVar3;
          if (uVar2 == 0xffffffff) {
            iVar1 = 0x7197eaf7;
          }
        }
        else {
          if (iVar1 != 0x7a15fcc9) {
            if (iVar1 == 0x7197eaf7) {
              return;
            }
            goto joined_r0x0040846a;
          }
          uVar2 = ~((DAT_005b8b90 + -1) * DAT_005b8b90) | 0xfffffffe;
          iVar3 = 0xe086f52;
          if (DAT_005b8c28 < 10 != (uVar2 == 0xffffffff)) {
            iVar3 = 0x5d2a6231;
          }
          iVar1 = iVar3;
          if (uVar2 == 0xffffffff) {
            iVar1 = 0x5d2a6231;
          }
        }
        if (9 < DAT_005b8c28) {
          iVar1 = iVar3;
        }
      }
joined_r0x0040846a:
    } while (0xe086f51 < iVar1);
  } while( true );
}



/* ===== Function: FUN_004084e0 ===== */

undefined1  [16] FUN_004084e0(long param_1,long param_2,ulong param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint unaff_R12D;
  int iVar13;
  uint unaff_R14D;
  uint uVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auVar17 [16];
  uint local_6c;
  char local_65;
  uint local_64;
  uint local_60;
  uint local_5c;
  long local_58;
  uint local_4c;
  uint local_48;
  uint local_44;
  
  iVar4 = (int)param_3;
  bVar16 = 9 < DAT_005b8c1c;
  bVar15 = (~((DAT_005b8b8c + -1) * DAT_005b8b8c) | 0xfffffffeU) != 0xffffffff;
  bVar1 = bVar16 == bVar15;
  uVar2 = 0xf4552565;
  if ((bVar16 || bVar15) && bVar1) {
    uVar2 = 0xded83489;
  }
  uVar7 = 0x56aad88;
  if ((bVar16 || bVar15) && bVar1) {
    uVar7 = 0xded83489;
  }
  uVar3 = 0xfa3159d1;
  if ((bVar16 || bVar15) && bVar1) {
    uVar3 = 0xd545129;
  }
  uVar10 = 0x5323af9;
  if ((bVar16 || bVar15) && bVar1) {
    uVar10 = 0xd545129;
  }
  uVar11 = 0x1e2ab06a;
  if ((bVar16 || bVar15) && bVar1) {
    uVar11 = 0xcd100c5f;
  }
  uVar12 = 0xb9dd558a;
  if ((bVar16 || bVar15) && bVar1) {
    uVar12 = 0xcd100c5f;
  }
  uVar9 = 0xa3e7f3a3;
  uVar6 = 0;
  uVar14 = 0x7fffffff;
  uVar5 = 0xffffffff;
LAB_00408590:
  do {
    while (uVar8 = uVar9, iVar13 = (int)uVar8, uVar9 = uVar8, iVar13 < -0xdac118a) {
      if (iVar13 < -0x4622aa76) {
        if (iVar13 == -0x672ccc99) {
          local_58 = (long)(int)local_6c;
          bVar16 = *(int *)(param_2 + local_58 * 4) == 0;
          uVar9 = 0xd30f0692;
          param_3 = 0xa8a847d3;
LAB_0040857d:
          unaff_R14D = local_64;
          unaff_R12D = local_60;
          if (!bVar16) {
            uVar9 = param_3;
          }
        }
        else if (iVar13 == -0x5c180c5d) {
          param_3 = 0x98d33367;
          uVar9 = 0xf253ee76;
          local_6c = uVar6;
          local_64 = uVar14;
          local_60 = uVar5;
          if ((int)uVar6 < iVar4) {
            uVar9 = 0x98d33367;
          }
        }
        else if (iVar13 == -0x5757b82d) {
          uVar9 = (ulong)uVar11;
          local_48 = unaff_R12D;
          local_44 = unaff_R14D;
        }
      }
      else if (iVar13 < -0x2cf0f96e) {
        if (iVar13 == -0x4622aa76) {
          uVar9 = 0xa3e7f3a3;
          uVar6 = local_4c;
          uVar14 = local_44;
          uVar5 = local_48;
        }
        else if (iVar13 == -0x32eff3a1) {
          param_3 = (ulong)local_6c;
          uVar9 = 0x1e2ab06a;
        }
      }
      else {
        uVar9 = (ulong)uVar3;
        if ((iVar13 != -0x2cf0f96e) && (uVar9 = uVar8, iVar13 == -0x2127cb77)) {
          uVar9 = 0xf4552565;
        }
      }
    }
    if (0x56aad87 < iVar13) {
      if (iVar13 < 0x128d4781) {
        if (iVar13 == 0xd545129) {
          param_3 = (ulong)local_64;
          uVar9 = 0xfa3159d1;
        }
        else if (iVar13 == 0x56aad88) {
          auVar17._4_4_ = 0;
          auVar17._0_4_ = local_60;
          auVar17._8_8_ = param_3;
          return auVar17;
        }
      }
      else if (iVar13 == 0x128d4781) {
        uVar9 = 0xa8a847d3;
        unaff_R14D = local_5c;
        unaff_R12D = local_6c;
      }
      else if (iVar13 == 0x1e2ab06a) {
        local_4c = local_6c + 1;
        param_3 = (ulong)local_4c;
        uVar9 = (ulong)uVar12;
      }
      goto LAB_00408590;
    }
    if (iVar13 < -0x5cea62f) {
      uVar9 = (ulong)uVar2;
      if ((iVar13 != -0xdac118a) && (uVar9 = uVar8, iVar13 == -0xbaada9b)) {
        uVar9 = (ulong)uVar7;
      }
    }
    else if (iVar13 == -0x5cea62f) {
      local_5c = *(uint *)(param_1 + local_58 * 4);
      param_3 = (ulong)local_5c;
      local_65 = (int)local_5c < (int)local_64;
      uVar9 = (ulong)uVar10;
    }
    else if (iVar13 == 0x5323af9) {
      bVar16 = local_65 == '\0';
      uVar9 = 0xa8a847d3;
      param_3 = 0x128d4781;
      goto LAB_0040857d;
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


