/* Ghidra decompiler output (pseudo-C) */


/* ===== Function: _DT_INIT ===== */

void _DT_INIT(void)

{
  if (PTR___gmon_start___0040eff8 != (undefined *)0x0) {
    (*(code *)PTR___gmon_start___0040eff8)();
  }
  return;
}



/* ===== Function: FUN_00401020 ===== */

void FUN_00401020(void)

{
  (*(code *)PTR_0040f010)();
  return;
}



/* ===== Function: free ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free(void *__ptr)

{
  (*(code *)PTR_free_0040f018)();
  return;
}



/* ===== Function: putchar ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int putchar(int __c)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_putchar_0040f020)();
  return iVar1;
}



/* ===== Function: printf ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int printf(char *__format,...)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_printf_0040f028)();
  return iVar1;
}



/* ===== Function: malloc ===== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR_malloc_0040f030)();
  return pvVar1;
}



/* ===== Function: __isoc99_scanf ===== */

void __isoc99_scanf(void)

{
  (*(code *)PTR___isoc99_scanf_0040f038)();
  return;
}



/* ===== Function: exit ===== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void exit(int __status)

{
  (*_DAT_0040f040)();
  return;
}



/* ===== Function: entry ===== */

void processEntry entry(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  (*(code *)PTR___libc_start_main_0040eff0)
            (FUN_00401180,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* ===== Function: FUN_004010c0 ===== */

void FUN_004010c0(void)

{
  return;
}



/* ===== Function: FUN_004010d0 ===== */

/* WARNING: Removing unreachable block (ram,0x004010dd) */
/* WARNING: Removing unreachable block (ram,0x004010e7) */

void FUN_004010d0(void)

{
  return;
}



/* ===== Function: FUN_00401100 ===== */

/* WARNING: Removing unreachable block (ram,0x0040111f) */
/* WARNING: Removing unreachable block (ram,0x00401129) */

void FUN_00401100(void)

{
  return;
}



/* ===== Function: _FINI_0 ===== */

void _FINI_0(void)

{
  if (DAT_0040f060 == '\0') {
    FUN_004010d0();
    DAT_0040f060 = 1;
    return;
  }
  return;
}



/* ===== Function: _INIT_0 ===== */

void _INIT_0(void)

{
  FUN_00401100();
  return;
}



/* ===== Function: FUN_00401180 ===== */

undefined8 FUN_00401180(void)

{
  int iVar1;
  bool bVar2;
  int local_40;
  int local_3c;
  int local_34;
  
  local_40 = 0x736a48d3;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                while( true ) {
                  while( true ) {
                    while( true ) {
                      while( true ) {
                        while( true ) {
                          while( true ) {
                            while( true ) {
                              while( true ) {
                                while( true ) {
                                  while( true ) {
                                    while( true ) {
                                      while( true ) {
                                        while( true ) {
                                          while( true ) {
                                            while( true ) {
                                              while( true ) {
                                                while( true ) {
                                                  while( true ) {
                                                    while( true ) {
                                                      while( true ) {
                                                        while( true ) {
                                                          while( true ) {
                                                            while( true ) {
                                                              while( true ) {
                                                                while (local_40 == -0x7f845acf) {
                                                                  bVar2 = (DAT_005bcb88 *
                                                                           (DAT_005bcb88 + -1) & 1U)
                                                                          == 0;
                                                                  local_40 = -0x49e4e700;
                                                                  if (bVar2 && DAT_005bcbe8 < 10 ||
                                                                      bVar2 != DAT_005bcbe8 < 10) {
                                                                    local_40 = 0x30155f91;
                                                                  }
                                                                }
                                                                if (local_40 != -0x7aa08265) break;
                                                                FUN_00402a40();
                                                                bVar2 = (DAT_005bcb88 *
                                                                         (DAT_005bcb88 + -1) & 1U)
                                                                        != 0;
                                                                local_40 = -0x2ac143e2;
                                                                if (bVar2 != 9 < DAT_005bcbe8 ||
                                                                    !bVar2 && 9 >= DAT_005bcbe8) {
                                                                  local_40 = 0x6a983ffc;
                                                                }
                                                              }
                                                              if (local_40 != -0x7a136bd2) break;
                                                              local_40 = 0x4035e47d;
                                                              if (local_34 < 8) {
                                                                local_40 = -0x1764c77;
                                                              }
                                                            }
                                                            if (local_40 != -0x75e04a78) break;
                                                            local_40 = 0x736a48d3;
                                                          }
                                                          if (local_40 != -0x731c59fe) break;
                                                          local_40 = -0x7a136bd2;
                                                          if (local_34 < 6) {
                                                            local_40 = 0x4ae4b33e;
                                                          }
                                                        }
                                                        if (local_40 != -0x71ccd116) break;
                                                        local_40 = 0x3047c03b;
                                                        if (local_3c == 0) {
                                                          local_40 = 0x4eb50ba1;
                                                        }
                                                      }
                                                      if (local_40 != -0x6fb4eca3) break;
                                                      FUN_004031f0();
                                                      bVar2 = (DAT_005bcb88 * (DAT_005bcb88 + -1) &
                                                              1U) == 0;
                                                      local_40 = 0x5d11899c;
                                                      if (bVar2 != DAT_005bcbe8 < 10 ||
                                                          bVar2 && DAT_005bcbe8 < 10) {
                                                        local_40 = -0x25996b12;
                                                      }
                                                    }
                                                    if (local_40 != -0x6dc89299) break;
                                                    FUN_004021c0();
                                                    local_40 = 0x518b35a5;
                                                  }
                                                  if (local_40 != -0x6bdd1e47) break;
                                                  bVar2 = (DAT_005bcb88 * (DAT_005bcb88 + -1) & 1U)
                                                          == 0;
                                                  local_40 = -0x2785eb00;
                                                  if (bVar2 && DAT_005bcbe8 < 10 ||
                                                      bVar2 != DAT_005bcbe8 < 10) {
                                                    local_40 = 0x4fa42cc0;
                                                  }
                                                }
                                                if (local_40 != -0x63d02bba) break;
                                                local_40 = 0x49a1f340;
                                              }
                                              if (local_40 != -0x5cea0191) break;
                                              FUN_00406fa0();
                                              local_40 = -0x63d02bba;
                                            }
                                            if (local_40 != -0x503490db) break;
                                            FUN_00406630();
                                            local_40 = -0x63d02bba;
                                          }
                                          if (local_40 != -0x49e4e700) break;
                                          local_40 = 0x30155f91;
                                        }
                                        if (local_40 != -0x496aa545) break;
                                        local_40 = -0x63d02bba;
                                      }
                                      if (local_40 != -0x476fb75a) break;
                                      local_40 = 0x6eb8a5df;
                                      if (local_34 < 2) {
                                        local_40 = 0x16456078;
                                      }
                                    }
                                    if (local_40 != -0x34a08493) break;
                                    local_40 = -0x1d9ed9ee;
                                    if (local_34 == 10) {
                                      local_40 = -0x5cea0191;
                                    }
                                  }
                                  if (local_40 != -0x33d00240) break;
                                  local_40 = -0x13199980;
                                }
                                if (local_40 != -0x305da051) break;
                                local_40 = -0x63d02bba;
                              }
                              if (local_40 != -0x2ac143e2) break;
                              FUN_00402a40();
                              local_40 = -0x7aa08265;
                            }
                            if (local_40 != -0x2785eb00) break;
                            local_40 = 0x4fa42cc0;
                          }
                          if (local_40 != -0x2682258b) break;
                          local_40 = 0x17845f0d;
                          if (local_34 < 4) {
                            local_40 = 0x75975a98;
                          }
                        }
                        if (local_40 != -0x25996b12) break;
                        local_40 = -0x63d02bba;
                      }
                      if (local_40 != -0x2497bec8) break;
                      FUN_00402090();
                      local_40 = -0x63d02bba;
                    }
                    if (local_40 != -0x220044ec) break;
                    bVar2 = (DAT_005bcb88 * (DAT_005bcb88 + -1) & 1U) != 0;
                    local_40 = -0x33d00240;
                    if (bVar2 != 9 < DAT_005bcbe8 || !bVar2 && 9 >= DAT_005bcbe8) {
                      local_40 = -0x13199980;
                    }
                  }
                  if (local_40 != -0x1d9ed9ee) break;
                  local_40 = -0x7f845acf;
                }
                if (local_40 != -0x1b915ab7) break;
                FUN_00403df0();
                local_40 = 0xc1b917a;
              }
              if (local_40 != -0x13199980) break;
              bVar2 = (DAT_005bcb88 * (DAT_005bcb88 + -1) & 1U) == 0;
              local_40 = -0x33d00240;
              if (bVar2 && DAT_005bcbe8 < 10 || bVar2 != DAT_005bcbe8 < 10) {
                local_40 = 0x2b504114;
              }
            }
            if (local_40 != -0xe60bd6b) break;
            local_34 = local_3c;
            local_40 = -0x731c59fe;
          }
          if (local_40 != -0x1764c77) break;
          local_40 = 0x18f0a5e3;
          if (local_34 < 7) {
            local_40 = 0x59c87294;
          }
        }
        if (local_40 != 0xbdc82ff) break;
        local_40 = -0x63d02bba;
      }
      if (local_40 != 0xc1b917a) break;
      FUN_00403df0();
      bVar2 = (DAT_005bcb88 * (DAT_005bcb88 + -1) & 1U) != 0;
      local_40 = -0x1b915ab7;
      if (bVar2 != 9 < DAT_005bcbe8 || !bVar2 && 9 >= DAT_005bcbe8) {
        local_40 = -0x496aa545;
      }
    }
    if (local_40 == 0xd8cb3b4) break;
    if (local_40 == 0x16456078) {
      local_40 = -0x1d9ed9ee;
      if (local_34 == 1) {
        local_40 = -0x2497bec8;
      }
    }
    else if (local_40 == 0x17845f0d) {
      local_40 = 0x1d2fcf32;
      if (local_34 < 5) {
        local_40 = 0x579fe728;
      }
    }
    else if (local_40 == 0x1818b563) {
      local_40 = -0x34a08493;
      if (local_34 < 10) {
        local_40 = -0x503490db;
      }
    }
    else if (local_40 == 0x18f0a5e3) {
      FUN_00404e90();
      local_40 = -0x63d02bba;
    }
    else if (local_40 == 0x1d2fcf32) {
      bVar2 = (DAT_005bcb88 * (DAT_005bcb88 + -1) & 1U) == 0;
      local_40 = -0x1b915ab7;
      if (bVar2 && DAT_005bcbe8 < 10 || bVar2 != DAT_005bcbe8 < 10) {
        local_40 = 0xc1b917a;
      }
    }
    else if (local_40 == 0x253b3005) {
      FUN_00405f40();
      local_40 = -0x63d02bba;
    }
    else if (local_40 == 0x2b504114) {
      local_40 = -0xe60bd6b;
    }
    else if (local_40 == 0x30155f91) {
      bVar2 = (DAT_005bcb88 * (DAT_005bcb88 + -1) & 1U) == 0;
      local_40 = -0x49e4e700;
      if (bVar2 != DAT_005bcbe8 < 10 || bVar2 && DAT_005bcbe8 < 10) {
        local_40 = -0x305da051;
      }
    }
    else if (local_40 == 0x3047c03b) {
      local_40 = -0x220044ec;
    }
    else if (local_40 == 0x4035e47d) {
      local_40 = 0x1818b563;
      if (local_34 < 9) {
        local_40 = 0x253b3005;
      }
    }
    else if (local_40 == 0x49a1f340) {
      local_40 = -0x75e04a78;
    }
    else if (local_40 == 0x4ae4b33e) {
      local_40 = -0x2682258b;
      if (local_34 < 3) {
        local_40 = -0x476fb75a;
      }
    }
    else if (local_40 == 0x4eb50ba1) {
      local_40 = -0x6bdd1e47;
    }
    else if (local_40 == 0x4fa42cc0) {
      bVar2 = (DAT_005bcb88 * (DAT_005bcb88 + -1) & 1U) == 0;
      local_40 = -0x2785eb00;
      if (bVar2 && DAT_005bcbe8 < 10 || bVar2 != DAT_005bcbe8 < 10) {
        local_40 = 0xd8cb3b4;
      }
    }
    else if (local_40 == 0x518b35a5) {
      FUN_004021c0();
      bVar2 = (DAT_005bcb88 * (DAT_005bcb88 + -1) & 1U) == 0;
      local_40 = -0x6dc89299;
      if (bVar2 != DAT_005bcbe8 < 10 || bVar2 && DAT_005bcbe8 < 10) {
        local_40 = 0xbdc82ff;
      }
    }
    else if (local_40 == 0x579fe728) {
      bVar2 = (DAT_005bcb88 * (DAT_005bcb88 + -1) & 1U) != 0;
      local_40 = 0x5d11899c;
      if (bVar2 != 9 < DAT_005bcbe8 || !bVar2 && 9 >= DAT_005bcbe8) {
        local_40 = -0x6fb4eca3;
      }
    }
    else if (local_40 == 0x59c87294) {
      FUN_00404430();
      local_40 = -0x63d02bba;
    }
    else if (local_40 == 0x5d11899c) {
      FUN_004031f0();
      local_40 = -0x6fb4eca3;
    }
    else if (local_40 == 0x6a983ffc) {
      local_40 = -0x63d02bba;
    }
    else if (local_40 == 0x6eb8a5df) {
      bVar2 = (DAT_005bcb88 * (DAT_005bcb88 + -1) & 1U) == 0;
      local_40 = -0x6dc89299;
      if (bVar2 && DAT_005bcbe8 < 10 || bVar2 != DAT_005bcbe8 < 10) {
        local_40 = 0x518b35a5;
      }
    }
    else if (local_40 == 0x736a48d3) {
      iVar1 = __isoc99_scanf();
      local_40 = -0x6bdd1e47;
      if (iVar1 == 1) {
        local_40 = -0x71ccd116;
      }
    }
    else if ((local_40 == 0x75975a98) &&
            (bVar2 = (DAT_005bcb88 * (DAT_005bcb88 + -1) & 1U) == 0, local_40 = -0x2ac143e2,
            bVar2 != DAT_005bcbe8 < 10 || bVar2 && DAT_005bcbe8 < 10)) {
      local_40 = -0x7aa08265;
    }
  }
  return 0;
}



/* ===== Function: FUN_00402090 ===== */

undefined4 FUN_00402090(void)

{
  undefined *puVar1;
  int local_1c;
  long local_18;
  undefined4 local_10;
  int local_c;
  
  local_c = __isoc99_scanf(&DAT_0040d004,&local_18);
  local_1c = -0x6c7ac09a;
  do {
    while( true ) {
      while( true ) {
        while (local_1c == -0x7a66b12e) {
          local_10 = 0;
          local_1c = 0x1f139dbe;
        }
        if (local_1c != -0x6c7ac09a) break;
        local_1c = -0xff20111;
        if (local_c != 1) {
          local_1c = -0x7a66b12e;
        }
      }
      if (local_1c != -0xff20111) break;
      puVar1 = &DAT_0040d012;
      if (local_18 % 2 == 0) {
        puVar1 = &DAT_0040d00d;
      }
      printf("%s\n",puVar1);
      local_10 = 1;
      local_1c = 0x1f139dbe;
    }
  } while (local_1c != 0x1f139dbe);
  return local_10;
}



/* ===== Function: FUN_004021c0 ===== */

undefined4 FUN_004021c0(void)

{
  int iVar1;
  bool bVar2;
  int local_60;
  int local_4c;
  long local_48;
  long local_40;
  undefined4 local_38;
  byte local_2d;
  undefined4 local_2c;
  
  iVar1 = __isoc99_scanf(&DAT_0040d004);
  local_60 = 0x5a1bea1c;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                while( true ) {
                  while( true ) {
                    while( true ) {
                      while( true ) {
                        while (local_60 == -0x77c3c584) {
                          local_2d = local_40 < 0;
                          bVar2 = (DAT_005bcc0c * (DAT_005bcc0c + -1) & 1U) == 0;
                          local_60 = 0x6911b313;
                          if (bVar2 != DAT_005bcba0 < 10 || bVar2 && DAT_005bcba0 < 10) {
                            local_60 = 0xd6e9ca8;
                          }
                        }
                        if (local_60 != -0x74cc7d66) break;
                        bVar2 = (DAT_005bcc0c * (DAT_005bcc0c + -1) & 1U) != 0;
                        local_60 = 0x6911b313;
                        if (bVar2 != 9 < DAT_005bcba0 || !bVar2 && 9 >= DAT_005bcba0) {
                          local_60 = -0x77c3c584;
                        }
                      }
                      if (local_60 != -0x6b7c5ed4) break;
                      local_48 = local_40;
                      local_4c = 0;
                      local_60 = -0x4aced4f8;
                    }
                    if (local_60 != -0x6aa6cf26) break;
                    printf("no\n");
                    local_38 = 1;
                    local_60 = 0xb36091e;
                  }
                  if (local_60 != -0x5ee0757d) break;
                  local_60 = 0x5e28ee77;
                }
                if (local_60 != -0x4aced4f8) break;
                local_48 = local_40;
                local_4c = 0;
                bVar2 = (DAT_005bcc0c * (DAT_005bcc0c + -1) & 1U) == 0;
                local_60 = -0x6b7c5ed4;
                if (bVar2 && DAT_005bcba0 < 10 || bVar2 != DAT_005bcba0 < 10) {
                  local_60 = -0x5ee0757d;
                }
              }
              if (local_60 != -0x2d264220) break;
              FUN_00409a70((long)(int)(local_48 % 10),local_4c);
              local_48 = local_48 / 10;
              local_60 = 0x2e6ac498;
            }
            if (local_60 != -0x9fbb4b) break;
            bVar2 = (DAT_005bcc0c * (DAT_005bcc0c + -1) & 1U) != 0;
            local_60 = 0x7e91b7d5;
            if (bVar2 != 9 < DAT_005bcba0 || !bVar2 && 9 >= DAT_005bcba0) {
              local_60 = 0x4f4b3e23;
            }
          }
          if (local_60 != -0x27edd0) break;
          local_2c = local_38;
          bVar2 = (DAT_005bcc0c * (DAT_005bcc0c + -1) & 1U) == 0;
          local_60 = 0x25b9a1b9;
          if (bVar2 != DAT_005bcba0 < 10 || bVar2 && DAT_005bcba0 < 10) {
            local_60 = 0x14cb5b2a;
          }
        }
        if (local_60 != 0xb36091e) break;
        bVar2 = (DAT_005bcc0c * (DAT_005bcc0c + -1) & 1U) == 0;
        local_60 = 0x25b9a1b9;
        if (bVar2 && DAT_005bcba0 < 10 || bVar2 != DAT_005bcba0 < 10) {
          local_60 = -0x27edd0;
        }
      }
      if (local_60 != 0xd6e9ca8) break;
      local_60 = 0x388d1702;
      if ((local_2d & 1) != 0) {
        local_60 = -0x6aa6cf26;
      }
    }
    if (local_60 == 0x14cb5b2a) break;
    if (local_60 == 0x25b9a1b9) {
      local_60 = -0x27edd0;
    }
    else if (local_60 == 0x2e6ac498) {
      local_60 = 0x64399c26;
      if (local_48 != 0) {
        local_60 = -0x2d264220;
      }
    }
    else if (local_60 == 0x33e11378) {
      local_38 = 0;
      local_60 = 0xb36091e;
    }
    else if (local_60 == 0x388d1702) {
      bVar2 = (DAT_005bcc0c * (DAT_005bcc0c + -1) & 1U) != 0;
      local_60 = -0x6b7c5ed4;
      if (bVar2 != 9 < DAT_005bcba0 || !bVar2 && 9 >= DAT_005bcba0) {
        local_60 = -0x4aced4f8;
      }
    }
    else if (local_60 == 0x4f4b3e23) {
      local_48 = local_40;
      bVar2 = (DAT_005bcc0c * (DAT_005bcc0c + -1) & 1U) == 0;
      local_60 = 0x7e91b7d5;
      if (bVar2 && DAT_005bcba0 < 10 || bVar2 != DAT_005bcba0 < 10) {
        local_60 = 0x6946bde9;
      }
    }
    else if (local_60 == 0x4fd968cb) {
      local_60 = -0x9fbb4b;
      if (local_48 != 0) {
        local_60 = 0x5e28ee77;
      }
    }
    else if (local_60 == 0x5a1bea1c) {
      local_60 = -0x74cc7d66;
      if (iVar1 != 1) {
        local_60 = 0x33e11378;
      }
    }
    else if (local_60 == 0x5e28ee77) {
      local_4c = local_4c + 1;
      local_48 = local_48 / 10;
      local_60 = 0x4fd968cb;
    }
    else if (local_60 == 0x64399c26) {
      printf("%s\n");
      local_38 = 1;
      local_60 = 0xb36091e;
    }
    else if (local_60 == 0x6911b313) {
      local_60 = -0x77c3c584;
    }
    else if (local_60 == 0x6946bde9) {
      local_60 = -0x2d264220;
    }
    else if (local_60 == 0x7e91b7d5) {
      local_48 = local_40;
      local_60 = 0x4f4b3e23;
    }
  }
  return local_2c;
}



/* ===== Function: FUN_00402a40 ===== */

undefined4 FUN_00402a40(void)

{
  int iVar1;
  bool bVar2;
  int local_64;
  double local_60;
  int local_54;
  double local_50;
  int local_44;
  undefined4 local_40;
  int local_3c;
  byte local_35;
  undefined4 local_34;
  
  local_3c = __isoc99_scanf("%d",&local_44);
  local_64 = 0x1eaeac1b;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                while( true ) {
                  while( true ) {
                    while( true ) {
                      while( true ) {
                        while( true ) {
                          while( true ) {
                            while( true ) {
                              while( true ) {
                                while( true ) {
                                  while( true ) {
                                    while( true ) {
                                      while( true ) {
                                        while( true ) {
                                          while( true ) {
                                            while (local_64 == -0x732ccd50) {
                                              printf("0.000000\n");
                                              local_40 = 1;
                                              local_64 = -0x11d0af87;
                                            }
                                            if (local_64 != -0x71e449c7) break;
                                            local_54 = local_54 + 1;
                                            local_64 = 0x7ff14d5f;
                                          }
                                          if (local_64 != -0x529a0ca6) break;
                                          local_64 = -0x71e449c7;
                                        }
                                        if (local_64 != -0x34f15d79) break;
                                        __isoc99_scanf(&DAT_0040d02b,&local_60);
                                        local_64 = 0x11d6ef39;
                                      }
                                      if (local_64 != -0x34a09860) break;
                                      bVar2 = (DAT_005bcc08 * (DAT_005bcc08 + -1) & 1U) == 0;
                                      local_64 = -0x732ccd50;
                                      if (bVar2 != DAT_005bcb9c < 10 || bVar2 && DAT_005bcb9c < 10)
                                      {
                                        local_64 = -0x11d0af87;
                                      }
                                    }
                                    if (local_64 != -0x2f637a07) break;
                                    printf("%.6f\n",local_50 / (double)local_44);
                                    local_40 = 1;
                                    local_64 = 0x72a2030f;
                                  }
                                  if (local_64 != -0x1da95cf3) break;
                                  local_64 = 0x72a2030f;
                                }
                                if (local_64 != -0x1a2eaed1) break;
                                local_50 = local_60 + local_50;
                                bVar2 = (DAT_005bcc08 * (DAT_005bcc08 + -1) & 1U) == 0;
                                local_64 = 0x639e6ad3;
                                if (bVar2 && DAT_005bcb9c < 10 || bVar2 != DAT_005bcb9c < 10) {
                                  local_64 = -0x529a0ca6;
                                }
                              }
                              if (local_64 != -0x11d0af87) break;
                              printf("0.000000\n");
                              local_40 = 1;
                              bVar2 = (DAT_005bcc08 * (DAT_005bcc08 + -1) & 1U) != 0;
                              local_64 = -0x732ccd50;
                              if (bVar2 != 9 < DAT_005bcb9c || !bVar2 && 9 >= DAT_005bcb9c) {
                                local_64 = -0x1da95cf3;
                              }
                            }
                            if (local_64 != -0xba9dce1) break;
                            bVar2 = (DAT_005bcc08 * (DAT_005bcc08 + -1) & 1U) == 0;
                            local_64 = -0x34f15d79;
                            if (bVar2 && DAT_005bcb9c < 10 || bVar2 != DAT_005bcb9c < 10) {
                              local_64 = 0x11d6ef39;
                            }
                          }
                          if (local_64 != -0xcfe404) break;
                          local_60 = 0.0;
                          local_64 = 0x2d7625df;
                        }
                        if (local_64 != 0x7cdfe77) break;
                        local_40 = 0;
                        local_64 = 0x72a2030f;
                      }
                      if (local_64 != 0x11d6ef39) break;
                      iVar1 = __isoc99_scanf(&DAT_0040d02b,&local_60);
                      local_35 = iVar1 != 1;
                      bVar2 = (DAT_005bcc08 * (DAT_005bcc08 + -1) & 1U) == 0;
                      local_64 = -0x34f15d79;
                      if (bVar2 && DAT_005bcb9c < 10 || bVar2 != DAT_005bcb9c < 10) {
                        local_64 = 0x5a4e2102;
                      }
                    }
                    if (local_64 != 0x122e2d89) break;
                    local_34 = local_40;
                    bVar2 = (DAT_005bcc08 * (DAT_005bcc08 + -1) & 1U) == 0;
                    local_64 = 0x232471bd;
                    if (bVar2 && DAT_005bcb9c < 10 || bVar2 != DAT_005bcb9c < 10) {
                      local_64 = 0x64ea554f;
                    }
                  }
                  if (local_64 != 0x1eaeac1b) break;
                  local_64 = 0x3aaaff6d;
                  if (local_3c != 1) {
                    local_64 = 0x7cdfe77;
                  }
                }
                if (local_64 != 0x232471bd) break;
                local_64 = 0x122e2d89;
              }
              if (local_64 != 0x2d7625df) break;
              bVar2 = (DAT_005bcc08 * (DAT_005bcc08 + -1) & 1U) == 0;
              local_64 = 0x639e6ad3;
              if (bVar2 && DAT_005bcb9c < 10 || bVar2 != DAT_005bcb9c < 10) {
                local_64 = -0x1a2eaed1;
              }
            }
            if (local_64 != 0x3aaaff6d) break;
            local_64 = 0x5426a5d4;
            if (local_44 < 1) {
              local_64 = -0x34a09860;
            }
          }
          if (local_64 != 0x5426a5d4) break;
          local_50 = 0.0;
          local_54 = 0;
          local_64 = 0x7ff14d5f;
        }
        if (local_64 != 0x5a4e2102) break;
        local_64 = 0x2d7625df;
        if ((local_35 & 1) != 0) {
          local_64 = -0xcfe404;
        }
      }
      if (local_64 != 0x639e6ad3) break;
      local_50 = local_50 + local_60;
      local_64 = -0x1a2eaed1;
    }
    if (local_64 == 0x64ea554f) break;
    if (local_64 == 0x72a2030f) {
      bVar2 = (DAT_005bcc08 * (DAT_005bcc08 + -1) & 1U) == 0;
      local_64 = 0x232471bd;
      if (bVar2 && DAT_005bcb9c < 10 || bVar2 != DAT_005bcb9c < 10) {
        local_64 = 0x122e2d89;
      }
    }
    else if ((local_64 == 0x7ff14d5f) && (local_64 = -0x2f637a07, local_54 < local_44)) {
      local_64 = -0xba9dce1;
    }
  }
  return local_34;
}



/* ===== Function: FUN_004031f0 ===== */

undefined4 FUN_004031f0(void)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  int local_94;
  int local_90;
  int local_8c;
  char acStack_88 [72];
  uint local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  
  local_38 = __isoc99_scanf(&DAT_0040d035);
  local_94 = 0x530425ce;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                while( true ) {
                  while( true ) {
                    while( true ) {
                      while( true ) {
                        while( true ) {
                          while( true ) {
                            while (local_94 == -0x6297ea99) {
                              local_94 = 0x46f8b98f;
                              if (local_40 == 0) {
                                local_94 = -0x5d3bca96;
                              }
                            }
                            if (local_94 != -0x62965bca) break;
                            local_94 = 0x32ccc65f;
                            if (local_40 != 0) {
                              local_94 = 0x690c0f35;
                            }
                          }
                          if (local_94 != -0x61aa2d6c) break;
                          printf("0\n");
                          local_3c = 1;
                          bVar3 = (DAT_005bcc14 * (DAT_005bcc14 + -1) & 1U) == 0;
                          local_94 = 0x1092a605;
                          if (bVar3 && DAT_005bcba8 < 10 || bVar3 != DAT_005bcba8 < 10) {
                            local_94 = -0x51e891f7;
                          }
                        }
                        if (local_94 != -0x5d3bca96) break;
                        bVar3 = (DAT_005bcc14 * (DAT_005bcc14 + -1) & 1U) == 0;
                        local_94 = 0x1092a605;
                        if (bVar3 && DAT_005bcba8 < 10 || bVar3 != DAT_005bcba8 < 10) {
                          local_94 = -0x61aa2d6c;
                        }
                      }
                      if (local_94 != -0x51e891f7) break;
                      local_94 = 0x14000fa0;
                    }
                    if (local_94 != -0x492e2285) break;
                    local_90 = local_90 + -1;
                    local_94 = -0x3d05fc2f;
                  }
                  if (local_94 != -0x3d05fc2f) break;
                  local_90 = local_90 + -1;
                  bVar3 = (DAT_005bcc14 * (DAT_005bcc14 + -1) & 1U) == 0;
                  local_94 = -0x492e2285;
                  if (bVar3 && DAT_005bcba8 < 10 || bVar3 != DAT_005bcba8 < 10) {
                    local_94 = 0x1b499402;
                  }
                }
                if (local_94 != -0x38d3845b) break;
                local_3c = 0;
                bVar3 = (DAT_005bcc14 * (DAT_005bcc14 + -1) & 1U) == 0;
                local_94 = 0xd43d4cc;
                if (bVar3 && DAT_005bcba8 < 10 || bVar3 != DAT_005bcba8 < 10) {
                  local_94 = 0x2cb4158;
                }
              }
              if (local_94 != -0x222a5065) break;
              bVar3 = (DAT_005bcc14 * (DAT_005bcc14 + -1) & 1U) == 0;
              local_94 = -0x492e2285;
              if (bVar3 != DAT_005bcba8 < 10 || bVar3 && DAT_005bcba8 < 10) {
                local_94 = -0x3d05fc2f;
              }
            }
            if (local_94 != -0x1b862a1b) break;
            bVar3 = (DAT_005bcc14 * (DAT_005bcc14 + -1) & 1U) == 0;
            local_94 = -0x19b0418d;
            if (bVar3 && DAT_005bcba8 < 10 || bVar3 != DAT_005bcba8 < 10) {
              local_94 = 0x34ceaa5b;
            }
          }
          if (local_94 != -0x19b0418d) break;
          putchar((int)acStack_88[local_90]);
          local_94 = 0x34ceaa5b;
        }
        if (local_94 != -0xa6f5cf2) break;
        bVar3 = (DAT_005bcc14 * (DAT_005bcc14 + -1) & 1U) != 0;
        local_94 = 0xd43d4cc;
        if (bVar3 != 9 < DAT_005bcba8 || !bVar3 && 9 >= DAT_005bcba8) {
          local_94 = -0x38d3845b;
        }
      }
      if (local_94 != 0x2cb4158) break;
      local_94 = 0x14000fa0;
    }
    if (local_94 == 0x6c019ae) break;
    if (local_94 == 0x9124cf2) {
      local_94 = -0x222a5065;
    }
    else {
      bVar1 = (byte)local_40;
      if (local_94 == 0xaabdb2f) {
        iVar2 = local_8c + 1;
        acStack_88[local_8c] = -(-0x30 - ((bVar1 ^ 0xfe) & bVar1));
        local_40 = local_40 >> 1;
        bVar3 = (DAT_005bcc14 * (DAT_005bcc14 + -1) & 1U) != 0;
        local_94 = 0x2be53ea6;
        local_8c = iVar2;
        if (bVar3 != 9 < DAT_005bcba8 || !bVar3 && 9 >= DAT_005bcba8) {
          local_94 = 0x1938a8f7;
        }
      }
      else if (local_94 == 0xd43d4cc) {
        local_3c = 0;
        local_94 = -0x38d3845b;
      }
      else if (local_94 == 0x1092a605) {
        printf("0\n");
        local_3c = 1;
        local_94 = -0x61aa2d6c;
      }
      else if (local_94 == 0x14000fa0) {
        bVar3 = (DAT_005bcc14 * (DAT_005bcc14 + -1) & 1U) != 0;
        local_94 = 0x15987fdc;
        if (bVar3 != 9 < DAT_005bcba8 || !bVar3 && 9 >= DAT_005bcba8) {
          local_94 = 0x73fabcb5;
        }
      }
      else if (local_94 == 0x15987fdc) {
        local_94 = 0x73fabcb5;
      }
      else if (local_94 == 0x16f23bed) {
        local_94 = 0x6ad45dcb;
        if (-1 < local_90) {
          local_94 = -0x1b862a1b;
        }
      }
      else if (local_94 == 0x1938a8f7) {
        local_94 = -0x62965bca;
      }
      else if (local_94 == 0x1b499402) {
        local_94 = 0x16f23bed;
      }
      else if (local_94 == 0x2be53ea6) {
        acStack_88[local_8c] = ((bVar1 ^ 0xfe) & bVar1) + 0x30;
        local_40 = local_40 >> 1;
        local_94 = 0xaabdb2f;
        local_8c = local_8c + 1;
      }
      else if (local_94 == 0x32ccc65f) {
        local_90 = local_8c + -1;
        local_94 = 0x16f23bed;
      }
      else if (local_94 == 0x34ceaa5b) {
        putchar((int)acStack_88[local_90]);
        bVar3 = (DAT_005bcc14 * (DAT_005bcc14 + -1) & 1U) == 0;
        local_94 = -0x19b0418d;
        if (bVar3 != DAT_005bcba8 < 10 || bVar3 && DAT_005bcba8 < 10) {
          local_94 = 0x9124cf2;
        }
      }
      else if (local_94 == 0x46f8b98f) {
        local_8c = 0;
        local_94 = -0x62965bca;
      }
      else if (local_94 == 0x530425ce) {
        local_94 = -0x6297ea99;
        if (local_38 != 1) {
          local_94 = -0xa6f5cf2;
        }
      }
      else if (local_94 == 0x690c0f35) {
        bVar3 = (DAT_005bcc14 * (DAT_005bcc14 + -1) & 1U) == 0;
        local_94 = 0x2be53ea6;
        if (bVar3 && DAT_005bcba8 < 10 || bVar3 != DAT_005bcba8 < 10) {
          local_94 = 0xaabdb2f;
        }
      }
      else if (local_94 == 0x6ad45dcb) {
        putchar(10);
        local_3c = 1;
        local_94 = 0x14000fa0;
      }
      else if (local_94 == 0x73fabcb5) {
        local_34 = local_3c;
        bVar3 = (DAT_005bcc14 * (DAT_005bcc14 + -1) & 1U) != 0;
        local_94 = 0x15987fdc;
        if (bVar3 != 9 < DAT_005bcba8 || !bVar3 && 9 >= DAT_005bcba8) {
          local_94 = 0x6c019ae;
        }
      }
    }
  }
  return local_34;
}



/* ===== Function: FUN_00403df0 ===== */

undefined4 FUN_00403df0(void)

{
  int iVar1;
  bool bVar2;
  int local_58;
  int local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  byte local_1d;
  undefined4 local_1c;
  
  local_24 = __isoc99_scanf("%d %d %d %d %d %d",&local_2c,&local_30,&local_34,&local_38,&local_3c,
                            &local_40);
  local_58 = 0x463d4707;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                while( true ) {
                  while( true ) {
                    while( true ) {
                      while( true ) {
                        while( true ) {
                          while( true ) {
                            while( true ) {
                              while (local_58 == -0x651195ac) {
                                FUN_00409d70(&local_2c,&local_30,&local_34,&local_38,&local_3c,
                                             &local_40);
                                local_44 = local_38 - local_2c;
                                local_48 = local_3c - local_30;
                                local_4c = local_40 - local_34;
                                local_58 = 0x4019426e;
                                if ((int)local_4c < 0) {
                                  local_58 = 0x12cfdb68;
                                }
                              }
                              if (local_58 != -0x51db48df) break;
                              local_1c = local_28;
                              bVar2 = (DAT_005bcc10 * (DAT_005bcc10 + -1) & 1U) == 0;
                              local_58 = 0x7684e9ad;
                              if (bVar2 && DAT_005bcba4 < 10 || bVar2 != DAT_005bcba4 < 10) {
                                local_58 = 0x4d8e2987;
                              }
                            }
                            if (local_58 != -0x2cc15b0d) break;
                            local_44 = -(1 - local_44);
                            local_48 = -(-0xc - local_48);
                            local_58 = 0x163a34b8;
                          }
                          if (local_58 != -0x18f80a1c) break;
                          local_58 = 0x60034b91;
                          if ((local_1d & 1) != 0) {
                            local_58 = 0x74c2252f;
                          }
                        }
                        if (local_58 != -0xc2e6c49) break;
                        local_50 = local_50 + -1;
                        local_58 = 0x23727927;
                      }
                      if (local_58 != 0x8dcc5b7) break;
                      local_1d = (int)local_48 < 0;
                      bVar2 = (DAT_005bcc10 * (DAT_005bcc10 + -1) & 1U) == 0;
                      local_58 = 0x19560016;
                      if (bVar2 && DAT_005bcba4 < 10 || bVar2 != DAT_005bcba4 < 10) {
                        local_58 = -0x18f80a1c;
                      }
                    }
                    if (local_58 != 0xdac8191) break;
                    bVar2 = (DAT_005bcc10 * (DAT_005bcc10 + -1) & 1U) == 0;
                    local_58 = 0x7684e9ad;
                    if (bVar2 && DAT_005bcba4 < 10 || bVar2 != DAT_005bcba4 < 10) {
                      local_58 = -0x51db48df;
                    }
                  }
                  if (local_58 != 0x12cfdb68) break;
                  local_48 = local_48 - 1;
                  local_50 = local_38;
                  local_58 = 0x23727927;
                  if (local_3c == 1) {
                    local_58 = -0xc2e6c49;
                  }
                }
                if (local_58 != 0x163a34b8) break;
                local_44 = local_44 - 1;
                local_48 = local_48 + 0xc;
                bVar2 = (DAT_005bcc10 * (DAT_005bcc10 + -1) & 1U) == 0;
                local_58 = -0x2cc15b0d;
                if (bVar2 && DAT_005bcba4 < 10 || bVar2 != DAT_005bcba4 < 10) {
                  local_58 = 0x6d52fd9b;
                }
              }
              if (local_58 != 0x19560016) break;
              local_58 = 0x8dcc5b7;
            }
            if (local_58 != 0x23727927) break;
            iVar1 = FUN_0040a340(local_50);
            local_4c = local_4c + iVar1;
            local_58 = 0x4019426e;
          }
          if (local_58 != 0x4019426e) break;
          bVar2 = (DAT_005bcc10 * (DAT_005bcc10 + -1) & 1U) == 0;
          local_58 = 0x19560016;
          if (bVar2 && DAT_005bcba4 < 10 || bVar2 != DAT_005bcba4 < 10) {
            local_58 = 0x8dcc5b7;
          }
        }
        if (local_58 != 0x463d4707) break;
        local_58 = -0x651195ac;
        if (local_24 != 6) {
          local_58 = 0x487a6539;
        }
      }
      if (local_58 != 0x487a6539) break;
      local_28 = 0;
      local_58 = 0xdac8191;
    }
    if (local_58 == 0x4d8e2987) break;
    if (local_58 == 0x60034b91) {
      printf("%d years %d months %d days\n",(ulong)local_44,(ulong)local_48,(ulong)local_4c);
      local_28 = 1;
      local_58 = 0xdac8191;
    }
    else if (local_58 == 0x6d52fd9b) {
      local_58 = 0x60034b91;
    }
    else if (local_58 == 0x74c2252f) {
      bVar2 = (DAT_005bcc10 * (DAT_005bcc10 + -1) & 1U) == 0;
      local_58 = -0x2cc15b0d;
      if (bVar2 && DAT_005bcba4 < 10 || bVar2 != DAT_005bcba4 < 10) {
        local_58 = 0x163a34b8;
      }
    }
    else if (local_58 == 0x7684e9ad) {
      local_58 = -0x51db48df;
    }
  }
  return local_1c;
}



/* ===== Function: FUN_00404430 ===== */

undefined4 FUN_00404430(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  byte local_2e;
  byte local_2d;
  undefined4 local_2c;
  
  iVar1 = __isoc99_scanf("%d");
  local_4c = -0x571e5693;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                while( true ) {
                  while( true ) {
                    while( true ) {
                      while( true ) {
                        while( true ) {
                          while (local_4c == -0x571e5693) {
                            local_4c = 0x266ad52d;
                            if (iVar1 != 1) {
                              local_4c = -0xd360073;
                            }
                          }
                          if (local_4c != -0x4da79f2e) break;
                          local_40 = local_48;
                          bVar3 = (DAT_005bcc04 * (DAT_005bcc04 + -1) & 1U) == 0;
                          local_4c = 0x5821db63;
                          if (bVar3 && DAT_005bcbfc < 10 || bVar3 != DAT_005bcbfc < 10) {
                            local_4c = -0x3ef9cd27;
                          }
                        }
                        if (local_4c != -0x4cd5e07e) break;
                        local_4c = 0x78bf5b6b;
                      }
                      if (local_4c != -0x4ad91504) break;
                      local_4c = 0x3a47b6ca;
                    }
                    if (local_4c != -0x3ef9cd27) break;
                    local_4c = -0x4ad91504;
                  }
                  if (local_4c != -0x3da31885) break;
                  bVar3 = (DAT_005bcc04 * (DAT_005bcc04 + -1) & 1U) == 0;
                  local_4c = 0x7f9ec5f0;
                  if (bVar3 != DAT_005bcbfc < 10 || bVar3 && DAT_005bcbfc < 10) {
                    local_4c = 0x5535970e;
                  }
                }
                if (local_4c != -0x39327e42) break;
                local_4c = 0x3cd34630;
              }
              if (local_4c != -0x34a7e257) break;
              printf("%d\n");
              local_38 = 1;
              local_4c = 0x78bf5b6b;
            }
            if (local_4c != -0x2d86bce9) break;
            local_4c = -0x34a7e257;
            if ((local_2e & 1) != 0) {
              local_4c = -0x2947c1ab;
            }
          }
          if (local_4c != -0x29634d83) break;
          local_48 = 0;
          local_4c = -0x124da774;
        }
        if (local_4c != -0x2947c1ab) break;
        iVar2 = __isoc99_scanf("%d");
        local_4c = -0x124da774;
        if (iVar2 != 1) {
          local_4c = -0x29634d83;
        }
      }
      if (local_4c != -0x124da774) break;
      bVar3 = (DAT_005bcc04 * (DAT_005bcc04 + -1) & 1U) != 0;
      local_4c = 0x1e60634b;
      if (bVar3 != 9 < DAT_005bcbfc || !bVar3 && 9 >= DAT_005bcbfc) {
        local_4c = 0x4cd9e0a3;
      }
    }
    if (local_4c == -0xd9d00dc) break;
    if (local_4c == -0xd360073) {
      local_38 = 0;
      local_4c = 0x78bf5b6b;
    }
    else if (local_4c == -0x1304004) {
      printf("0\n");
      local_38 = 1;
      local_4c = 0x7fe0db49;
    }
    else if (local_4c == -0x9fb637) {
      local_4c = -0x4ad91504;
      if ((local_2d & 1) != 0) {
        local_4c = 0x247b5d88;
      }
    }
    else if (local_4c == 0xaa0b8e1) {
      local_4c = 0x6e8667f7;
    }
    else if (local_4c == 0x1e60634b) {
      local_4c = 0x4cd9e0a3;
    }
    else if (local_4c == 0x22d4a5a5) {
      local_3c = 200000;
      local_4c = -0x3da31885;
    }
    else if (local_4c == 0x247b5d88) {
      bVar3 = (DAT_005bcc04 * (DAT_005bcc04 + -1) & 1U) == 0;
      local_4c = 0x5821db63;
      if (bVar3 && DAT_005bcbfc < 10 || bVar3 != DAT_005bcbfc < 10) {
        local_4c = -0x4da79f2e;
      }
    }
    else if (local_4c == 0x266ad52d) {
      local_4c = 0x6b301597;
      if (local_3c < 1) {
        local_4c = 0x29c20c59;
      }
    }
    else if (local_4c == 0x29c20c59) {
      bVar3 = (DAT_005bcc04 * (DAT_005bcc04 + -1) & 1U) == 0;
      local_4c = -0x1304004;
      if (bVar3 && DAT_005bcbfc < 10 || bVar3 != DAT_005bcbfc < 10) {
        local_4c = 0x7fe0db49;
      }
    }
    else if (local_4c == 0x2be5ac68) {
      local_4c = 0x57893b50;
    }
    else if (local_4c == 0x3a47b6ca) {
      local_44 = local_44 + 1;
      local_4c = 0x6e8667f7;
    }
    else if (local_4c == 0x3cd34630) {
      local_2c = local_38;
      bVar3 = (DAT_005bcc04 * (DAT_005bcc04 + -1) & 1U) == 0;
      local_4c = -0x39327e42;
      if (bVar3 && DAT_005bcbfc < 10 || bVar3 != DAT_005bcbfc < 10) {
        local_4c = -0xd9d00dc;
      }
    }
    else if (local_4c == 0x4cd9e0a3) {
      local_2d = local_40 < local_48;
      bVar3 = (DAT_005bcc04 * (DAT_005bcc04 + -1) & 1U) == 0;
      local_4c = 0x1e60634b;
      if (bVar3 && DAT_005bcbfc < 10 || bVar3 != DAT_005bcbfc < 10) {
        local_4c = -0x9fb637;
      }
    }
    else if (local_4c == 0x5535970e) {
      local_40 = -0x80000000;
      local_44 = 0;
      bVar3 = (DAT_005bcc04 * (DAT_005bcc04 + -1) & 1U) == 0;
      local_4c = 0x7f9ec5f0;
      if (bVar3 && DAT_005bcbfc < 10 || bVar3 != DAT_005bcbfc < 10) {
        local_4c = 0xaa0b8e1;
      }
    }
    else if (local_4c == 0x57893b50) {
      local_2e = local_44 < local_3c;
      bVar3 = (DAT_005bcc04 * (DAT_005bcc04 + -1) & 1U) == 0;
      local_4c = 0x2be5ac68;
      if (bVar3 && DAT_005bcbfc < 10 || bVar3 != DAT_005bcbfc < 10) {
        local_4c = -0x2d86bce9;
      }
    }
    else if (local_4c == 0x5821db63) {
      local_40 = local_48;
      local_4c = -0x4da79f2e;
    }
    else if (local_4c == 0x6b301597) {
      local_4c = -0x3da31885;
      if (200000 < local_3c) {
        local_4c = 0x22d4a5a5;
      }
    }
    else if (local_4c == 0x6e8667f7) {
      bVar3 = (DAT_005bcc04 * (DAT_005bcc04 + -1) & 1U) == 0;
      local_4c = 0x2be5ac68;
      if (bVar3 != DAT_005bcbfc < 10 || bVar3 && DAT_005bcbfc < 10) {
        local_4c = 0x57893b50;
      }
    }
    else if (local_4c == 0x78bf5b6b) {
      bVar3 = (DAT_005bcc04 * (DAT_005bcc04 + -1) & 1U) == 0;
      local_4c = -0x39327e42;
      if (bVar3 && DAT_005bcbfc < 10 || bVar3 != DAT_005bcbfc < 10) {
        local_4c = 0x3cd34630;
      }
    }
    else if (local_4c == 0x7f9ec5f0) {
      local_40 = -0x80000000;
      local_44 = 0;
      local_4c = 0x5535970e;
    }
    else if (local_4c == 0x7fe0db49) {
      printf("0\n");
      local_38 = 1;
      bVar3 = (DAT_005bcc04 * (DAT_005bcc04 + -1) & 1U) == 0;
      local_4c = -0x1304004;
      if (bVar3 && DAT_005bcbfc < 10 || bVar3 != DAT_005bcbfc < 10) {
        local_4c = -0x4cd5e07e;
      }
    }
  }
  return local_2c;
}



/* ===== Function: FUN_00404e90 ===== */

int FUN_00404e90(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  undefined1 auStack_158 [8];
  int *local_150;
  int local_148;
  int local_144;
  int *local_140;
  int *local_138;
  undefined4 local_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  byte local_5a;
  byte local_59;
  int *local_58;
  int *local_50;
  int *local_48;
  int *local_40;
  byte local_37;
  byte local_36;
  byte local_35;
  int local_34;
  
  local_5a = (DAT_005bcbb8 * (DAT_005bcbb8 + -1) & 1U) == 0;
  local_59 = DAT_005bcbf0 < 10;
  local_60 = -0x569c6567;
  piVar4 = (int *)auStack_158;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                while( true ) {
                  while( true ) {
                    while( true ) {
                      while( true ) {
                        while( true ) {
                          while( true ) {
                            while( true ) {
                              while( true ) {
                                while( true ) {
                                  while( true ) {
                                    while( true ) {
                                      while( true ) {
                                        while( true ) {
                                          while( true ) {
                                            while( true ) {
                                              while( true ) {
                                                while( true ) {
                                                  while( true ) {
                                                    while( true ) {
                                                      while( true ) {
                                                        while( true ) {
                                                          while( true ) {
                                                            while( true ) {
                                                              while( true ) {
                                                                local_68 = local_60 + 0x7e8bd67a;
                                                                local_64 = local_60;
                                                                if (local_68 != 0) break;
                                                                local_60 = -0x2f6e80f9;
                                                                if ((local_36 & 1) != 0) {
                                                                  local_60 = -0x1fdf7a62;
                                                                }
                                                              }
                                                              local_6c = local_60 + 0x748295f3;
                                                              if (local_6c != 0) break;
                                                              local_60 = 0x112a58d2;
                                                              if (0 < *local_50) {
                                                                local_60 = 0x89d83a2;
                                                              }
                                                            }
                                                            local_70 = local_60 + 0x6d22fd7a;
                                                            if (local_70 != 0) break;
                                                            local_36 = *local_50 < 0;
                                                            bVar5 = (DAT_005bcbb8 *
                                                                     (DAT_005bcbb8 + -1) & 1U) == 0;
                                                            local_60 = -0x58062303;
                                                            if (bVar5 != DAT_005bcbf0 < 10 ||
                                                                bVar5 && DAT_005bcbf0 < 10) {
                                                              local_60 = -0x7e8bd67a;
                                                            }
                                                          }
                                                          local_74 = local_60 + 0x6ac5745d;
                                                          if (local_74 != 0) break;
                                                          piVar4[-10] = 0x405e46;
                                                          piVar4[-9] = 0;
                                                          local_130 = __isoc99_scanf("%d");
                                                          local_60 = -0x651b387d;
                                                          piVar4 = piVar4 + -8;
                                                        }
                                                        local_78 = local_60 + 0x651b387d;
                                                        if (local_78 != 0) break;
                                                        local_58 = piVar4 + -4;
                                                        local_50 = piVar4 + -8;
                                                        local_48 = piVar4 + -0xc;
                                                        piVar3 = piVar4 + -0x10;
                                                        piVar4[-0x12] = 0x4053d5;
                                                        piVar4[-0x11] = 0;
                                                        local_40 = piVar3;
                                                        iVar2 = __isoc99_scanf("%d");
                                                        local_37 = iVar2 != 1;
                                                        bVar5 = (DAT_005bcbb8 * (DAT_005bcbb8 + -1)
                                                                & 1U) == 0;
                                                        piVar4 = piVar3;
                                                        local_60 = -0x6ac5745d;
                                                        if (bVar5 != DAT_005bcbf0 < 10 ||
                                                            bVar5 && DAT_005bcbf0 < 10) {
                                                          local_60 = 0x2adba6bb;
                                                        }
                                                      }
                                                      local_7c = local_60 + 0x5f873e59;
                                                      if (local_7c != 0) break;
                                                      bVar5 = (DAT_005bcbb8 * (DAT_005bcbb8 + -1) &
                                                              1U) == 0;
                                                      local_60 = 0x4f5e53c4;
                                                      if (bVar5 != DAT_005bcbf0 < 10 ||
                                                          bVar5 && DAT_005bcbf0 < 10) {
                                                        local_60 = 0x6647011e;
                                                      }
                                                    }
                                                    local_80 = local_60 + 0x5d3e1fa3;
                                                    if (local_80 != 0) break;
                                                    *(undefined4 *)
                                                     (&DAT_0040f070 + (long)*local_48 * 4) = 0;
                                                    local_60 = 0x73082887;
                                                  }
                                                  local_84 = local_60 + 0x58062303;
                                                  if (local_84 != 0) break;
                                                  local_60 = -0x6d22fd7a;
                                                  local_138 = local_50;
                                                }
                                                local_88 = local_60 + 0x569c6567;
                                                if (local_88 != 0) break;
                                                local_60 = -0x6ac5745d;
                                                if (((local_5a & local_59 | local_5a ^ local_59) & 1
                                                    ) != 0) {
                                                  local_60 = -0x651b387d;
                                                }
                                              }
                                              local_8c = local_60 + 0x5166b1b3;
                                              if (local_8c != 0) break;
                                              *local_58 = 0;
                                              local_60 = -0x5f873e59;
                                            }
                                            local_90 = local_60 + 0x3f4927b9;
                                            if (local_90 != 0) break;
                                            local_60 = 0x4b6209cd;
                                            local_140 = local_50;
                                          }
                                          local_94 = local_60 + 0x3d9e1cd4;
                                          if (local_94 != 0) break;
                                          uVar1 = *(uint *)(&DAT_0040f070 + (long)*local_40 * 4);
                                          piVar4[-2] = 0x405c33;
                                          piVar4[-1] = 0;
                                          local_128 = printf("%d",(ulong)uVar1);
                                          bVar5 = (DAT_005bcbb8 * (DAT_005bcbb8 + -1) & 1U) == 0;
                                          local_60 = 0x4ff08710;
                                          if (bVar5 != DAT_005bcbf0 < 10 ||
                                              bVar5 && DAT_005bcbf0 < 10) {
                                            local_60 = 0x3215fdea;
                                          }
                                        }
                                        local_98 = local_60 + 0x3517d839;
                                        if (local_98 != 0) break;
                                        piVar4[-2] = 0x405b1f;
                                        piVar4[-1] = 0;
                                        local_124 = putchar(0x20);
                                        bVar5 = (DAT_005bcbb8 * (DAT_005bcbb8 + -1) & 1U) == 0;
                                        local_60 = 0x4244b0ad;
                                        if (bVar5 && DAT_005bcbf0 < 10 || bVar5 != DAT_005bcbf0 < 10
                                           ) {
                                          local_60 = 0x342975d1;
                                        }
                                      }
                                      local_9c = local_60 + 0x2f6e80f9;
                                      if (local_9c != 0) break;
                                      bVar5 = (DAT_005bcbb8 * (DAT_005bcbb8 + -1) & 1U) != 0;
                                      local_60 = -0x3f4927b9;
                                      if (bVar5 != 9 < DAT_005bcbf0 || !bVar5 && 9 >= DAT_005bcbf0)
                                      {
                                        local_60 = 0x4b6209cd;
                                      }
                                    }
                                    local_a0 = local_60 + 0x2c944a59;
                                    if (local_a0 != 0) break;
                                    piVar4[-2] = 0x405cfa;
                                    piVar4[-1] = 0;
                                    iVar2 = putchar(10);
                                    *local_58 = 1;
                                    local_60 = -0x5f873e59;
                                    local_12c = iVar2;
                                  }
                                  local_a4 = local_60 + 0x1fdf7a62;
                                  if (local_a4 != 0) break;
                                  piVar4[-2] = 0x4055fc;
                                  piVar4[-1] = 0;
                                  iVar2 = putchar(10);
                                  *local_58 = 1;
                                  local_60 = -0x5f873e59;
                                  local_120 = iVar2;
                                }
                                local_a8 = local_60 + 0x1dae81ea;
                                if (local_a8 != 0) break;
                                local_60 = 0x4e67a54a;
                                if (*local_40 != 0) {
                                  local_60 = 0x7c0723ea;
                                }
                              }
                              local_ac = local_60 + 0x12c86c90;
                              if (local_ac != 0) break;
                              local_60 = -0x2c944a59;
                              if (*local_40 < *local_50) {
                                local_60 = -0x1dae81ea;
                              }
                            }
                            local_b0 = local_60 + 0xb654fce;
                            if (local_b0 != 0) break;
                            *local_40 = 0;
                            bVar5 = (DAT_005bcbb8 * (DAT_005bcbb8 + -1) & 1U) == 0;
                            local_60 = 0x6bd0d18;
                            if (bVar5 != DAT_005bcbf0 < 10 || bVar5 && DAT_005bcbf0 < 10) {
                              local_60 = 0x53d6996b;
                            }
                          }
                          local_b4 = local_60 + 0x86dd314;
                          if (local_b4 != 0) break;
                          bVar5 = (DAT_005bcbb8 * (DAT_005bcbb8 + -1) & 1U) == 0;
                          local_60 = -0x58062303;
                          if (bVar5 != DAT_005bcbf0 < 10 || bVar5 && DAT_005bcbf0 < 10) {
                            local_60 = -0x6d22fd7a;
                          }
                        }
                        local_b8 = local_60 + -0x6bd0d18;
                        if (local_b8 != 0) break;
                        *local_40 = 0;
                        local_60 = -0xb654fce;
                      }
                      local_bc = local_60 + -0x89d83a2;
                      if (local_bc != 0) break;
                      bVar5 = (DAT_005bcbb8 * (DAT_005bcbb8 + -1) & 1U) != 0;
                      local_60 = 0x2ddce021;
                      if (bVar5 != 9 < DAT_005bcbf0 || !bVar5 && 9 >= DAT_005bcbf0) {
                        local_60 = 0x55a3dbe6;
                      }
                    }
                    local_c0 = local_60 + -0x112a58d2;
                    if (local_c0 != 0) break;
                    bVar5 = (DAT_005bcbb8 * (DAT_005bcbb8 + -1) & 1U) == 0;
                    local_60 = 0x6bd0d18;
                    if (bVar5 && DAT_005bcbf0 < 10 || bVar5 != DAT_005bcbf0 < 10) {
                      local_60 = -0xb654fce;
                    }
                  }
                  local_c4 = local_60 + -0x15162456;
                  if (local_c4 != 0) break;
                  *local_48 = 0;
                  local_60 = 0x6e0645b0;
                }
                local_c8 = local_60 + -0x2adba6bb;
                if (local_c8 != 0) break;
                local_60 = -0x86dd314;
                if ((local_37 & 1) != 0) {
                  local_60 = -0x5166b1b3;
                }
              }
              local_cc = local_60 + -0x2ddce021;
              if (local_cc != 0) break;
              iVar2 = *local_50;
              piVar4[-2] = 0x405eae;
              piVar4[-1] = 0;
              FUN_0040a7f0(&DAT_0040f070,0,iVar2 + -1);
              local_60 = 0x55a3dbe6;
            }
            local_d0 = local_60 + -0x2e955ded;
            if (local_d0 != 0) break;
            piVar4[-2] = 0x4057b1;
            piVar4[-1] = 0;
            iVar2 = __isoc99_scanf("%d");
            local_60 = 0x73082887;
            if (iVar2 != 1) {
              local_60 = -0x5d3e1fa3;
            }
          }
          local_d4 = local_60 + -0x3215fdea;
          if (local_d4 != 0) break;
          local_60 = 0x677e147d;
        }
        local_d8 = local_60 + -0x342975d1;
        if (local_d8 != 0) break;
        local_60 = 0x4e67a54a;
      }
      local_dc = local_60 + -0x4244b0ad;
      if (local_dc != 0) break;
      piVar4[-2] = 0x405eda;
      piVar4[-1] = 0;
      local_144 = putchar(0x20);
      local_60 = -0x3517d839;
    }
    local_e0 = local_60 + -0x4941affc;
    if (local_e0 == 0) break;
    local_e4 = local_60 + -0x4b6209cd;
    if (local_e4 == 0) {
      local_35 = 200000 < *local_50;
      bVar5 = (DAT_005bcbb8 * (DAT_005bcbb8 + -1) & 1U) == 0;
      local_60 = -0x3f4927b9;
      if (bVar5 && DAT_005bcbf0 < 10 || bVar5 != DAT_005bcbf0 < 10) {
        local_60 = 0x59c925f8;
      }
    }
    else {
      local_e8 = local_60 + -0x4e67a54a;
      if (local_e8 == 0) {
        bVar5 = (DAT_005bcbb8 * (DAT_005bcbb8 + -1) & 1U) != 0;
        local_60 = 0x4ff08710;
        if (bVar5 != 9 < DAT_005bcbf0 || !bVar5 && 9 >= DAT_005bcbf0) {
          local_60 = -0x3d9e1cd4;
        }
      }
      else {
        local_ec = local_60 + -0x4f5e53c4;
        if (local_ec == 0) {
          local_60 = 0x6647011e;
          local_150 = local_58;
        }
        else {
          local_f0 = local_60 + -0x4ff08710;
          if (local_f0 == 0) {
            piVar4[-2] = 0x405f0b;
            piVar4[-1] = 0;
            local_148 = printf("%d");
            local_60 = -0x3d9e1cd4;
          }
          else {
            local_f4 = local_60 + -0x5189a6b5;
            if (local_f4 == 0) {
              *local_50 = 200000;
              local_60 = 0x15162456;
            }
            else {
              local_f8 = local_60 + -0x53d6996b;
              if (local_f8 == 0) {
                local_60 = -0x12c86c90;
              }
              else {
                local_fc = local_60 + -0x55a3dbe6;
                if (local_fc == 0) {
                  iVar2 = *local_50;
                  piVar4[-2] = 0x4058e6;
                  piVar4[-1] = 0;
                  FUN_0040a7f0(&DAT_0040f070,0,iVar2 + -1);
                  bVar5 = (DAT_005bcbb8 * (DAT_005bcbb8 + -1) & 1U) == 0;
                  local_60 = 0x2ddce021;
                  if (bVar5 != DAT_005bcbf0 < 10 || bVar5 && DAT_005bcbf0 < 10) {
                    local_60 = 0x778d5e53;
                  }
                }
                else {
                  local_100 = local_60 + -0x59c925f8;
                  if (local_100 == 0) {
                    local_60 = 0x15162456;
                    if ((local_35 & 1) != 0) {
                      local_60 = 0x5189a6b5;
                    }
                  }
                  else {
                    local_104 = local_60 + -0x5ab9a24c;
                    if (local_104 == 0) {
                      *local_48 = *local_48 + 1;
                      local_60 = 0x6e0645b0;
                    }
                    else {
                      local_108 = local_60 + -0x6647011e;
                      if (local_108 == 0) {
                        local_34 = *local_58;
                        bVar5 = (DAT_005bcbb8 * (DAT_005bcbb8 + -1) & 1U) == 0;
                        local_60 = 0x4f5e53c4;
                        if (bVar5 && DAT_005bcbf0 < 10 || bVar5 != DAT_005bcbf0 < 10) {
                          local_60 = 0x4941affc;
                        }
                      }
                      else {
                        local_10c = local_60 + -0x677e147d;
                        if (local_10c == 0) {
                          *local_40 = *local_40 + 1;
                          local_60 = -0x12c86c90;
                        }
                        else {
                          local_110 = local_60 + -0x6e0645b0;
                          if (local_110 == 0) {
                            local_60 = -0x748295f3;
                            if (*local_48 < *local_50) {
                              local_60 = 0x2e955ded;
                            }
                          }
                          else {
                            local_114 = local_60 + -0x73082887;
                            if (local_114 == 0) {
                              local_60 = 0x5ab9a24c;
                            }
                            else {
                              local_118 = local_60 + -0x778d5e53;
                              if (local_118 == 0) {
                                local_60 = 0x112a58d2;
                              }
                              else {
                                local_11c = local_60 + -0x7c0723ea;
                                if ((local_11c == 0) &&
                                   (bVar5 = (DAT_005bcbb8 * (DAT_005bcbb8 + -1) & 1U) == 0,
                                   local_60 = 0x4244b0ad,
                                   bVar5 && DAT_005bcbf0 < 10 || bVar5 != DAT_005bcbf0 < 10)) {
                                  local_60 = -0x3517d839;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return local_34;
}



/* ===== Function: FUN_00405f40 ===== */

undefined4 FUN_00405f40(void)

{
  int iVar1;
  bool bVar2;
  int local_44;
  undefined4 local_40;
  int local_3c;
  undefined8 local_38;
  int local_30;
  undefined4 local_2c;
  int local_28;
  byte local_21;
  
  local_28 = __isoc99_scanf("%d",&local_30);
  local_44 = -0xd7aa823;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                while( true ) {
                  while( true ) {
                    while( true ) {
                      while( true ) {
                        while( true ) {
                          while( true ) {
                            while( true ) {
                              while( true ) {
                                while( true ) {
                                  while( true ) {
                                    while( true ) {
                                      while( true ) {
                                        while( true ) {
                                          while (local_44 == -0x7dc839f5) {
                                            bVar2 = (DAT_005bcbc0 * (DAT_005bcbc0 + -1) & 1U) == 0;
                                            local_44 = 0x38343583;
                                            if (bVar2 && DAT_005bcbec < 10 ||
                                                bVar2 != DAT_005bcbec < 10) {
                                              local_44 = -0x64004c92;
                                            }
                                          }
                                          if (local_44 != -0x76e2b65a) break;
                                          local_40 = 0;
                                          local_44 = 0x2e2b63e0;
                                        }
                                        if (local_44 != -0x64004c92) break;
                                        local_21 = local_3c < local_30;
                                        bVar2 = (DAT_005bcbc0 * (DAT_005bcbc0 + -1) & 1U) == 0;
                                        local_44 = 0x38343583;
                                        if (bVar2 != DAT_005bcbec < 10 || bVar2 && DAT_005bcbec < 10
                                           ) {
                                          local_44 = -0x3cb11af2;
                                        }
                                      }
                                      if (local_44 != -0x5af9e605) break;
                                      local_2c = 0;
                                      bVar2 = (DAT_005bcbc0 * (DAT_005bcbc0 + -1) & 1U) == 0;
                                      local_44 = 0x29422c62;
                                      if (bVar2 && DAT_005bcbec < 10 || bVar2 != DAT_005bcbec < 10)
                                      {
                                        local_44 = 0x194da76;
                                      }
                                    }
                                    if (local_44 != -0x526d56b3) break;
                                    local_44 = 0x7c417e2f;
                                  }
                                  if (local_44 != -0x458af5aa) break;
                                  local_38 = 0;
                                  local_3c = 0;
                                  local_44 = -0x7dc839f5;
                                }
                                if (local_44 != -0x3cb11af2) break;
                                local_44 = 0x362f0026;
                                if ((local_21 & 1) != 0) {
                                  local_44 = 0x7040511e;
                                }
                              }
                              if (local_44 != -0x1c2be4f5) break;
                              local_3c = local_3c + 1;
                              local_44 = -0x7dc839f5;
                            }
                            if (local_44 != -0xd7aa823) break;
                            local_44 = 0x19bd224c;
                            if (local_28 != 1) {
                              local_44 = 0x4808c6a6;
                            }
                          }
                          if (local_44 != 0x194da76) break;
                          local_44 = 0x7c417e2f;
                        }
                        if (local_44 != 0x8c451e0) break;
                        FUN_0040b530(local_38);
                        putchar(10);
                        FUN_0040b800(local_38);
                        putchar(10);
                        FUN_0040ba90(local_38);
                        putchar(10);
                        FUN_0040bd10(local_38);
                        local_2c = 1;
                        local_44 = 0xf6342ed;
                      }
                      if (local_44 != 0xf6342ed) break;
                      FUN_0040b530(local_38);
                      putchar(10);
                      FUN_0040b800(local_38);
                      putchar(10);
                      FUN_0040ba90(local_38);
                      putchar(10);
                      FUN_0040bd10(local_38);
                      local_2c = 1;
                      bVar2 = (DAT_005bcbc0 * (DAT_005bcbc0 + -1) & 1U) == 0;
                      local_44 = 0x8c451e0;
                      if (bVar2 && DAT_005bcbec < 10 || bVar2 != DAT_005bcbec < 10) {
                        local_44 = -0x526d56b3;
                      }
                    }
                    if (local_44 != 0x19bd224c) break;
                    local_44 = -0x458af5aa;
                    if (local_30 < 0) {
                      local_44 = 0x75c60385;
                    }
                  }
                  if (local_44 != 0x29422c62) break;
                  local_2c = 0;
                  local_44 = -0x5af9e605;
                }
                if (local_44 != 0x2e2b63e0) break;
                local_38 = FUN_0040b260(local_38,local_40);
                local_44 = -0x1c2be4f5;
              }
              if (local_44 != 0x362f0026) break;
              bVar2 = (DAT_005bcbc0 * (DAT_005bcbc0 + -1) & 1U) == 0;
              local_44 = 0x8c451e0;
              if (bVar2 && DAT_005bcbec < 10 || bVar2 != DAT_005bcbec < 10) {
                local_44 = 0xf6342ed;
              }
            }
            if (local_44 != 0x38343583) break;
            local_44 = -0x64004c92;
          }
          if (local_44 != 0x4808c6a6) break;
          bVar2 = (DAT_005bcbc0 * (DAT_005bcbc0 + -1) & 1U) == 0;
          local_44 = 0x29422c62;
          if (bVar2 != DAT_005bcbec < 10 || bVar2 && DAT_005bcbec < 10) {
            local_44 = -0x5af9e605;
          }
        }
        if (local_44 != 0x7040511e) break;
        iVar1 = __isoc99_scanf("%d",&local_40);
        local_44 = 0x2e2b63e0;
        if (iVar1 != 1) {
          local_44 = -0x76e2b65a;
        }
      }
      if (local_44 != 0x75c60385) break;
      putchar(10);
      putchar(10);
      putchar(10);
      local_2c = 1;
      local_44 = 0x7c417e2f;
    }
  } while (local_44 != 0x7c417e2f);
  return local_2c;
}



/* ===== Function: FUN_00406630 ===== */

undefined4 FUN_00406630(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  undefined1 auStack_f8 [8];
  undefined4 *local_f0;
  int *local_e8;
  undefined4 local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  byte local_5a;
  byte local_59;
  undefined4 *local_58;
  int *local_50;
  int *local_48;
  undefined4 *local_40;
  byte local_36;
  byte local_35;
  undefined4 local_34;
  
  local_5a = (DAT_005bcbbc * (DAT_005bcbbc + -1) & 1U) == 0;
  local_59 = DAT_005bcbf8 < 10;
  local_60 = 0x77dace6;
  puVar5 = (undefined4 *)auStack_f8;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                while( true ) {
                  while( true ) {
                    while( true ) {
                      local_68 = local_60 + 0x79232ffe;
                      local_64 = local_60;
                      if (local_68 != 0) break;
                      local_34 = *local_58;
                      bVar6 = (DAT_005bcbbc * (DAT_005bcbbc + -1) & 1U) == 0;
                      local_60 = 0x1ab33fe4;
                      if (bVar6 && DAT_005bcbf8 < 10 || bVar6 != DAT_005bcbf8 < 10) {
                        local_60 = -0x10e82ca0;
                      }
                    }
                    local_6c = local_60 + 0x5e5a6b45;
                    if (local_6c != 0) break;
                    *(undefined8 *)(puVar5 + -2) = 0x406d95;
                    iVar2 = __isoc99_scanf("%d",local_40);
                    local_60 = -0x3b4ce0d;
                    if (iVar2 != 1) {
                      local_60 = 0x296cf1f;
                    }
                  }
                  local_70 = local_60 + 0x506c4e82;
                  if (local_70 != 0) break;
                  local_60 = -0x4b4afd94;
                }
                local_74 = local_60 + 0x4ca0b70e;
                if (local_74 != 0) break;
                *(undefined4 *)(&DAT_004d2570 + (long)*local_48 * 4) = 0;
                local_60 = 0x7dcaff87;
              }
              local_78 = local_60 + 0x4b4afd94;
              if (local_78 != 0) break;
              *local_48 = 0;
              local_60 = -0x19af9e99;
            }
            local_7c = local_60 + 0x4447bd8f;
            if (local_7c != 0) break;
            local_60 = 0x35ee5258;
            local_e8 = local_50;
          }
          local_80 = local_60 + 0x3dbfbcbd;
          if (local_80 != 0) break;
          *(undefined8 *)(puVar5 + -10) = 0x406f3d;
          local_e0 = __isoc99_scanf("%d",puVar5 + -8);
          local_60 = -0x3474b4ac;
          puVar5 = puVar5 + -8;
        }
        local_84 = local_60 + 0x3474b4ac;
        if (local_84 != 0) break;
        local_58 = puVar5 + -4;
        local_50 = puVar5 + -8;
        local_48 = puVar5 + -0xc;
        puVar4 = puVar5 + -0x10;
        *(undefined8 *)(puVar5 + -0x12) = 0x4069b3;
        local_40 = puVar4;
        iVar2 = __isoc99_scanf("%d",local_50);
        local_36 = iVar2 != 1;
        bVar6 = (DAT_005bcbbc * (DAT_005bcbbc + -1) & 1U) == 0;
        local_60 = -0x3dbfbcbd;
        puVar5 = puVar4;
        if (bVar6 != DAT_005bcbf8 < 10 || bVar6 && DAT_005bcbf8 < 10) {
          local_60 = 0x77d8cb;
        }
      }
      local_88 = local_60 + 0x19af9e99;
      if (local_88 != 0) break;
      local_60 = -0x5e5a6b45;
      if (*local_48 < *local_50) {
        local_60 = 0x65c67441;
      }
    }
    local_8c = local_60 + 0x10e82ca0;
    if (local_8c == 0) break;
    local_90 = local_60 + 0xbcca8ba;
    if (local_90 == 0) {
      bVar6 = (DAT_005bcbbc * (DAT_005bcbbc + -1) & 1U) == 0;
      local_60 = 0x5f355cc5;
      if (bVar6 && DAT_005bcbf8 < 10 || bVar6 != DAT_005bcbf8 < 10) {
        local_60 = 0x1226e44e;
      }
    }
    else {
      local_94 = local_60 + 0x3b4ce0d;
      if (local_94 == 0) {
        iVar2 = *local_50;
        uVar1 = *local_40;
        *(undefined8 *)(puVar5 + -2) = 0x406dde;
        uVar3 = FUN_0040c080(&DAT_004d2570,iVar2,uVar1);
        *(undefined8 *)(puVar5 + -2) = 0x406df1;
        iVar2 = printf("%d\n",(ulong)uVar3);
        *local_58 = 1;
        local_60 = 0x77a2a0a0;
        local_dc = iVar2;
      }
      else {
        local_98 = local_60 + -0x77d8cb;
        if (local_98 == 0) {
          local_60 = 0x7686b3c1;
          if ((local_36 & 1) != 0) {
            local_60 = 0x68804b6d;
          }
        }
        else {
          local_9c = local_60 + -0x296cf1f;
          if (local_9c == 0) {
            *local_40 = 0;
            local_60 = -0x3b4ce0d;
          }
          else {
            local_a0 = local_60 + -0x77dace6;
            if (local_a0 == 0) {
              local_60 = -0x3dbfbcbd;
              if (((local_5a & local_59 | local_5a ^ local_59) & 1) != 0) {
                local_60 = -0x3474b4ac;
              }
            }
            else {
              local_a4 = local_60 + -0x1226e44e;
              if (local_a4 == 0) {
                *local_50 = 200000;
                bVar6 = (DAT_005bcbbc * (DAT_005bcbbc + -1) & 1U) == 0;
                local_60 = 0x5f355cc5;
                if (bVar6 != DAT_005bcbf8 < 10 || bVar6 && DAT_005bcbf8 < 10) {
                  local_60 = -0x506c4e82;
                }
              }
              else {
                local_a8 = local_60 + -0x1999cbbe;
                if (local_a8 == 0) {
                  local_60 = 0x280e23de;
                  if ((local_35 & 1) != 0) {
                    local_60 = 0x44e221ea;
                  }
                }
                else {
                  local_ac = local_60 + -0x1ab33fe4;
                  if (local_ac == 0) {
                    local_60 = -0x79232ffe;
                    local_f0 = local_58;
                  }
                  else {
                    local_b0 = local_60 + -0x280e23de;
                    if (local_b0 == 0) {
                      local_60 = -0x4b4afd94;
                      if (200000 < *local_50) {
                        local_60 = -0xbcca8ba;
                      }
                    }
                    else {
                      local_b4 = local_60 + -0x325c5b47;
                      if (local_b4 == 0) {
                        *local_48 = *local_48 + 1;
                        local_60 = -0x19af9e99;
                      }
                      else {
                        local_b8 = local_60 + -0x35ee5258;
                        if (local_b8 == 0) {
                          local_35 = *local_50 < 0;
                          bVar6 = (DAT_005bcbbc * (DAT_005bcbbc + -1) & 1U) == 0;
                          local_60 = -0x4447bd8f;
                          if (bVar6 && DAT_005bcbf8 < 10 || bVar6 != DAT_005bcbf8 < 10) {
                            local_60 = 0x1999cbbe;
                          }
                        }
                        else {
                          local_bc = local_60 + -0x44e221ea;
                          if (local_bc == 0) {
                            *(undefined8 *)(puVar5 + -2) = 0x406b7e;
                            iVar2 = printf("-1\n");
                            *local_58 = 1;
                            local_60 = 0x77a2a0a0;
                            local_d8 = iVar2;
                          }
                          else {
                            local_c0 = local_60 + -0x5f355cc5;
                            if (local_c0 == 0) {
                              *local_50 = 200000;
                              local_60 = 0x1226e44e;
                            }
                            else {
                              local_c4 = local_60 + -0x65c67441;
                              if (local_c4 == 0) {
                                iVar2 = *local_48;
                                *(undefined8 *)(puVar5 + -2) = 0x406d15;
                                iVar2 = __isoc99_scanf("%d",&DAT_004d2570 + (long)iVar2 * 4);
                                local_60 = 0x7dcaff87;
                                if (iVar2 != 1) {
                                  local_60 = -0x4ca0b70e;
                                }
                              }
                              else {
                                local_c8 = local_60 + -0x68804b6d;
                                if (local_c8 == 0) {
                                  *local_58 = 0;
                                  local_60 = 0x77a2a0a0;
                                }
                                else {
                                  local_cc = local_60 + -0x7686b3c1;
                                  if (local_cc == 0) {
                                    bVar6 = (DAT_005bcbbc * (DAT_005bcbbc + -1) & 1U) == 0;
                                    local_60 = -0x4447bd8f;
                                    if (bVar6 && DAT_005bcbf8 < 10 || bVar6 != DAT_005bcbf8 < 10) {
                                      local_60 = 0x35ee5258;
                                    }
                                  }
                                  else {
                                    local_d0 = local_60 + -0x77a2a0a0;
                                    if (local_d0 == 0) {
                                      bVar6 = (DAT_005bcbbc * (DAT_005bcbbc + -1) & 1U) != 0;
                                      local_60 = 0x1ab33fe4;
                                      if (bVar6 != 9 < DAT_005bcbf8 || !bVar6 && 9 >= DAT_005bcbf8)
                                      {
                                        local_60 = -0x79232ffe;
                                      }
                                    }
                                    else {
                                      local_d4 = local_60 + -0x7dcaff87;
                                      if (local_d4 == 0) {
                                        local_60 = 0x325c5b47;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return local_34;
}



/* ===== Function: FUN_00406fa0 ===== */

int FUN_00406fa0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  undefined1 auStack_318 [8];
  int *local_310;
  int local_308;
  int local_304;
  int *local_300;
  int *local_2f8;
  int *local_2f0;
  int *local_2e8;
  int *local_2e0;
  int *local_2d8;
  int *local_2d0;
  int local_2c4;
  int *local_2c0;
  int *local_2b8;
  int *local_2b0;
  int local_2a8;
  undefined4 local_2a4;
  int *local_2a0;
  int *local_298;
  undefined4 local_290;
  int local_28c;
  int local_288;
  int local_284;
  int local_280;
  int local_27c;
  int local_278;
  int local_274;
  int local_270;
  int local_26c;
  int local_268;
  int local_264;
  int local_260;
  int local_25c;
  int local_258;
  int local_254;
  int local_250;
  int local_24c;
  int local_248;
  int local_244;
  int local_240;
  int local_23c;
  int local_238;
  int local_234;
  int local_230;
  int local_22c;
  int local_228;
  int local_224;
  int local_220;
  int local_21c;
  int local_218;
  int local_214;
  int local_210;
  int local_20c;
  int local_208;
  int local_204;
  int local_200;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  int local_1d0;
  int local_1cc;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  int local_198;
  int local_194;
  int local_190;
  int local_18c;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  byte local_aa;
  byte local_a9;
  int *local_a8;
  int *local_a0;
  int *local_98;
  int *local_90;
  int *local_88;
  int *local_80;
  int *local_78;
  int *local_70;
  int *local_68;
  int *local_60;
  int *local_58;
  int *local_50;
  int *local_48;
  byte local_3c;
  byte local_3b;
  byte local_3a;
  byte local_39;
  byte local_38;
  byte local_37;
  byte local_36;
  byte local_35;
  int local_34;
  
  local_aa = (DAT_005bcbb0 * (DAT_005bcbb0 + -1) & 1U) == 0;
  local_a9 = DAT_005bcbf4 < 10;
  local_b0 = 0x7f3e52e0;
  piVar4 = (int *)auStack_318;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                while( true ) {
                  while( true ) {
                    while( true ) {
                      while( true ) {
                        while( true ) {
                          while( true ) {
                            while( true ) {
                              while( true ) {
                                while( true ) {
                                  while( true ) {
                                    while( true ) {
                                      while( true ) {
                                        while( true ) {
                                          while( true ) {
                                            while( true ) {
                                              while( true ) {
                                                while( true ) {
                                                  while( true ) {
                                                    while( true ) {
                                                      while( true ) {
                                                        while( true ) {
                                                          while( true ) {
                                                            while( true ) {
                                                              while( true ) {
                                                                while( true ) {
                                                                  while( true ) {
                                                                    while( true ) {
                                                                      while( true ) {
                                                                        while( true ) {
                                                                          while( true ) {
                                                                            while( true ) {
                                                                              while( true ) {
                                                                                while( true ) {
                                                                                  while( true ) {
                                                                                    while( true ) {
                                                                                      while( true )
                                                                                      {
                                                                                        while( true 
                                                  ) {
                                                    while( true ) {
                                                      while( true ) {
                                                        while( true ) {
                                                          while( true ) {
                                                            while( true ) {
                                                              while( true ) {
                                                                while( true ) {
                                                                  local_b8 = local_b0 + 0x79bd5d0b;
                                                                  local_b4 = local_b0;
                                                                  if (local_b8 != 0) break;
                                                                  local_b0 = -0x5d4b2ed4;
                                                                  if ((local_39 & 1) != 0) {
                                                                    local_b0 = -0x5102feff;
                                                                  }
                                                                }
                                                                local_bc = local_b0 + 0x703fb7d9;
                                                                if (local_bc != 0) break;
                                                                local_b0 = -0x13a9b437;
                                                                if ((local_38 & 1) != 0) {
                                                                  local_b0 = -0x5102feff;
                                                                }
                                                              }
                                                              local_c0 = local_b0 + 0x6f8f3d12;
                                                              if (local_c0 != 0) break;
                                                              bVar5 = (DAT_005bcbb0 *
                                                                       (DAT_005bcbb0 + -1) & 1U) ==
                                                                      0;
                                                              local_b0 = 0x69b316aa;
                                                              if (bVar5 && DAT_005bcbf4 < 10 ||
                                                                  bVar5 != DAT_005bcbf4 < 10) {
                                                                local_b0 = -0x1adad42b;
                                                              }
                                                            }
                                                            local_c4 = local_b0 + 0x6e3f818d;
                                                            if (local_c4 != 0) break;
                                                            local_78[*local_60] = 1;
                                                            *local_58 = 0;
                                                            local_b0 = 0x4c024238;
                                                          }
                                                          local_c8 = local_b0 + 0x6c2cd720;
                                                          if (local_c8 != 0) break;
                                                          local_b0 = -0x6a19aca5;
                                                          local_2b0 = local_88;
                                                        }
                                                        local_cc = local_b0 + 0x6bd3e985;
                                                        if (local_cc != 0) break;
                                                        local_b0 = 0x7ecdbe98;
                                                      }
                                                      local_d0 = local_b0 + 0x6a19aca5;
                                                      if (local_d0 != 0) break;
                                                      local_39 = *local_88 < 0;
                                                      bVar5 = (DAT_005bcbb0 * (DAT_005bcbb0 + -1) &
                                                              1U) == 0;
                                                      local_b0 = -0x6c2cd720;
                                                      if (bVar5 && DAT_005bcbf4 < 10 ||
                                                          bVar5 != DAT_005bcbf4 < 10) {
                                                        local_b0 = -0x79bd5d0b;
                                                      }
                                                    }
                                                    local_d4 = local_b0 + 0x69bbe64f;
                                                    if (local_d4 != 0) break;
                                                    *(undefined4 *)
                                                     (&DAT_00595a70 +
                                                     (long)*local_90 * 4 + (long)*local_98 * 800) =
                                                         0xffffffff;
                                                    local_b0 = 0x961d63d;
                                                  }
                                                  local_d8 = local_b0 + 0x687bde7b;
                                                  if (local_d8 != 0) break;
                                                  local_b0 = 0x15571bc2;
                                                  }
                                                  local_dc = local_b0 + 0x67fdd5c7;
                                                  if (local_dc != 0) break;
                                                  bVar5 = (DAT_005bcbb0 * (DAT_005bcbb0 + -1) & 1U)
                                                          == 0;
                                                  local_b0 = -0x53124b2;
                                                  if (bVar5 && DAT_005bcbf4 < 10 ||
                                                      bVar5 != DAT_005bcbf4 < 10) {
                                                    local_b0 = -0x62ea06b0;
                                                  }
                                                  }
                                                  local_e0 = local_b0 + 0x6473d8cc;
                                                  if (local_e0 != 0) break;
                                                  local_35 = *local_48 + 1 < *local_a0;
                                                  bVar5 = (DAT_005bcbb0 * (DAT_005bcbb0 + -1) & 1U)
                                                          == 0;
                                                  local_b0 = -0x1b9b8e0;
                                                  if (bVar5 && DAT_005bcbf4 < 10 ||
                                                      bVar5 != DAT_005bcbf4 < 10) {
                                                    local_b0 = -0x586948ab;
                                                  }
                                                  }
                                                  local_e4 = local_b0 + 0x6337cafa;
                                                  if (local_e4 != 0) break;
                                                  bVar5 = (DAT_005bcbb0 * (DAT_005bcbb0 + -1) & 1U)
                                                          == 0;
                                                  local_b0 = -0x3284d864;
                                                  if (bVar5 != DAT_005bcbf4 < 10 ||
                                                      bVar5 && DAT_005bcbf4 < 10) {
                                                    local_b0 = -0x6bd3e985;
                                                  }
                                                  }
                                                  local_e8 = local_b0 + 0x62ea06b0;
                                                  if (local_e8 != 0) break;
                                                  piVar4[-2] = 0x40825e;
                                                  piVar4[-1] = 0;
                                                  iVar1 = __isoc99_scanf("%d");
                                                  local_3a = iVar1 != 1;
                                                  bVar5 = (DAT_005bcbb0 * (DAT_005bcbb0 + -1) & 1U)
                                                          == 0;
                                                  local_b0 = -0x53124b2;
                                                  if (bVar5 && DAT_005bcbf4 < 10 ||
                                                      bVar5 != DAT_005bcbf4 < 10) {
                                                    local_b0 = -0x2f449763;
                                                  }
                                                  }
                                                  iVar1 = local_b0 + 0x62567af1;
                                                  local_ec = iVar1;
                                                  if (iVar1 != 0) break;
                                                  bVar5 = (DAT_005bcbb0 * (DAT_005bcbb0 + -1) & 1U)
                                                          == 0;
                                                  local_b0 = 0x6ed2da11;
                                                  if (bVar5 && DAT_005bcbf4 < 10 ||
                                                      bVar5 != DAT_005bcbf4 < 10) {
                                                    local_b0 = -0x91a28cd;
                                                  }
                                                  }
                                                  iVar1 = local_b0 + 0x61cfca61;
                                                  local_f0 = iVar1;
                                                  if (iVar1 != 0) break;
                                                  local_b0 = 0x4405994d;
                                                  if (200 < *local_a0) {
                                                    local_b0 = -0x112a519;
                                                  }
                                                  }
                                                  iVar1 = local_b0 + 0x5fdd3483;
                                                  local_f4 = iVar1;
                                                  if (iVar1 != 0) break;
                                                  local_b0 = 0x63515f56;
                                                  }
                                                  iVar1 = local_b0 + 0x5d4b2ed4;
                                                  local_f8 = iVar1;
                                                  if (iVar1 != 0) break;
                                                  bVar5 = (DAT_005bcbb0 * (DAT_005bcbb0 + -1) & 1U)
                                                          == 0;
                                                  local_b0 = -0x35fef31e;
                                                  if (bVar5 != DAT_005bcbf4 < 10 ||
                                                      bVar5 && DAT_005bcbf4 < 10) {
                                                    local_b0 = -0x27f09101;
                                                  }
                                                  }
                                                  iVar1 = local_b0 + 0x58d62610;
                                                  local_fc = iVar1;
                                                  if (iVar1 != 0) break;
                                                  *local_48 = 0;
                                                  local_b0 = -0x3171ff75;
                                                  }
                                                  iVar1 = local_b0 + 0x586948ab;
                                                  local_100 = iVar1;
                                                  if (iVar1 != 0) break;
                                                  local_b0 = -0x5fdd3483;
                                                  if ((local_35 & 1) != 0) {
                                                    local_b0 = -0x508b9770;
                                                  }
                                                  }
                                                  iVar1 = local_b0 + 0x5565b638;
                                                  local_104 = iVar1;
                                                  if (iVar1 != 0) break;
                                                  local_b0 = 0x15571bc2;
                                                  }
                                                  iVar1 = local_b0 + 0x54f03b8e;
                                                  local_108 = iVar1;
                                                  if (iVar1 != 0) break;
                                                  bVar5 = (DAT_005bcbb0 * (DAT_005bcbb0 + -1) & 1U)
                                                          == 0;
                                                  local_b0 = 0x64ae368d;
                                                  if (bVar5 && DAT_005bcbf4 < 10 ||
                                                      bVar5 != DAT_005bcbf4 < 10) {
                                                    local_b0 = 0x73986eb7;
                                                  }
                                                  }
                                                  iVar1 = local_b0 + 0x5384693e;
                                                  local_10c = iVar1;
                                                  if (iVar1 != 0) break;
                                                  bVar5 = (DAT_005bcbb0 * (DAT_005bcbb0 + -1) & 1U)
                                                          != 0;
                                                  local_b0 = -0x1b9b8e0;
                                                  if (bVar5 != 9 < DAT_005bcbf4 ||
                                                      !bVar5 && 9 >= DAT_005bcbf4) {
                                                    local_b0 = -0x6473d8cc;
                                                  }
                                                  }
                                                  iVar1 = local_b0 + 0x52a58d79;
                                                  local_110 = iVar1;
                                                  if (iVar1 != 0) break;
                                                  bVar5 = (DAT_005bcbb0 * (DAT_005bcbb0 + -1) & 1U)
                                                          == 0;
                                                  local_b0 = -0x114b0c06;
                                                  if (bVar5 && DAT_005bcbf4 < 10 ||
                                                      bVar5 != DAT_005bcbf4 < 10) {
                                                    local_b0 = 0x49de3fdf;
                                                  }
                                                  }
                                                  iVar1 = local_b0 + 0x5288eb29;
                                                  local_114 = iVar1;
                                                  if (iVar1 != 0) break;
                                                  local_b0 = 0x23fb024f;
                                                  if ((local_3b & 1) != 0) {
                                                    local_b0 = -0xa6e36a7;
                                                  }
                                                  }
                                                  iVar1 = local_b0 + 0x519ccd27;
                                                  local_118 = iVar1;
                                                  if (iVar1 != 0) break;
                                                  *local_50 = -(-*(int *)(&DAT_00595a70 +
                                                                         (long)*local_58 * 4 +
                                                                         (long)*local_60 * 800) -
                                                               local_80[*local_60]);
                                                  local_37 = *local_50 < local_80[*local_58];
                                                  bVar5 = (DAT_005bcbb0 * (DAT_005bcbb0 + -1) & 1U)
                                                          == 0;
                                                  local_b0 = 0x2e1847b7;
                                                  if (bVar5 && DAT_005bcbf4 < 10 ||
                                                      bVar5 != DAT_005bcbf4 < 10) {
                                                    local_b0 = 0x4adbde42;
                                                  }
                                                  }
                                                  iVar1 = local_b0 + 0x5175b00f;
                                                  local_11c = iVar1;
                                                  if (iVar1 != 0) break;
                                                  piVar4[-2] = 0x40934d;
                                                  piVar4[-1] = 0;
                                                  local_288 = putchar(0x20);
                                                  bVar5 = (DAT_005bcbb0 * (DAT_005bcbb0 + -1) & 1U)
                                                          != 0;
                                                  local_b0 = 0x47d63;
                                                  if (bVar5 != 9 < DAT_005bcbf4 ||
                                                      !bVar5 && 9 >= DAT_005bcbf4) {
                                                    local_b0 = 0x63ecb8ff;
                                                  }
                                                  }
                                                  iVar1 = local_b0 + 0x5102feff;
                                                  local_120 = iVar1;
                                                  if (iVar1 != 0) break;
                                                  bVar5 = (DAT_005bcbb0 * (DAT_005bcbb0 + -1) & 1U)
                                                          == 0;
                                                  local_b0 = -0x50a25840;
                                                  if (bVar5 && DAT_005bcbf4 < 10 ||
                                                      bVar5 != DAT_005bcbf4 < 10) {
                                                    local_b0 = -0x15739a15;
                                                  }
                                                  }
                                                  iVar1 = local_b0 + 0x50fa9c83;
                                                  local_124 = iVar1;
                                                  if (iVar1 != 0) break;
                                                  local_b0 = -0x58d62610;
                                                }
                                                iVar1 = local_b0 + 0x50a25840;
                                                local_128 = iVar1;
                                                if (iVar1 != 0) break;
                                                piVar4[-2] = 0x409852;
                                                piVar4[-1] = 0;
                                                iVar1 = putchar(10);
                                                *local_a8 = 1;
                                                local_b0 = -0x15739a15;
                                                local_2c4 = iVar1;
                                              }
                                              iVar1 = local_b0 + 0x508b9770;
                                              local_12c = iVar1;
                                              if (iVar1 != 0) break;
                                              bVar5 = (DAT_005bcbb0 * (DAT_005bcbb0 + -1) & 1U) != 0
                                              ;
                                              local_b0 = 0x47d63;
                                              if (bVar5 != 9 < DAT_005bcbf4 ||
                                                  !bVar5 && 9 >= DAT_005bcbf4) {
                                                local_b0 = -0x5175b00f;
                                              }
                                            }
                                            iVar1 = local_b0 + 0x5018f940;
                                            local_130 = iVar1;
                                            if (iVar1 != 0) break;
                                            *local_48 = *local_48 + 1;
                                            bVar5 = (DAT_005bcbb0 * (DAT_005bcbb0 + -1) & 1U) == 0;
                                            local_b0 = -0x77be27;
                                            if (bVar5 != DAT_005bcbf4 < 10 ||
                                                bVar5 && DAT_005bcbf4 < 10) {
                                              local_b0 = -0x456e7e8a;
                                            }
                                          }
                                          iVar1 = local_b0 + 0x4ac0b95b;
                                          local_134 = iVar1;
                                          if (iVar1 != 0) break;
                                          local_b0 = 0x74f29e9c;
                                          local_310 = local_a8;
                                        }
                                        iVar1 = local_b0 + 0x48474b66;
                                        local_138 = iVar1;
                                        if (iVar1 != 0) break;
                                        *local_90 = 0;
                                        local_b0 = -0x1750b136;
                                      }
                                      iVar1 = local_b0 + 0x456e7e8a;
                                      local_13c = iVar1;
                                      if (iVar1 != 0) break;
                                      local_b0 = -0x3171ff75;
                                    }
                                    iVar1 = local_b0 + 0x3cdc95f8;
                                    local_140 = iVar1;
                                    if (iVar1 != 0) break;
                                    bVar5 = (DAT_005bcbb0 * (DAT_005bcbb0 + -1) & 1U) == 0;
                                    local_b0 = 0x14716e63;
                                    if (bVar5 && DAT_005bcbf4 < 10 || bVar5 != DAT_005bcbf4 < 10) {
                                      local_b0 = 0x886643b;
                                    }
                                  }
                                  iVar1 = local_b0 + 0x367e49f9;
                                  local_144 = iVar1;
                                  if (iVar1 != 0) break;
                                  piVar4[-2] = 0x40916e;
                                  piVar4[-1] = 0;
                                  local_284 = printf("%d");
                                  local_b0 = -0x5384693e;
                                }
                                iVar1 = local_b0 + 0x35fef31e;
                                local_148 = iVar1;
                                if (iVar1 != 0) break;
                                local_b0 = -0x27f09101;
                                local_2b8 = local_88;
                                local_2c0 = local_a0;
                              }
                              iVar1 = local_b0 + 0x3590efd9;
                              local_14c = iVar1;
                              if (iVar1 != 0) break;
                              local_3b = *local_90 < *local_a0;
                              bVar5 = (DAT_005bcbb0 * (DAT_005bcbb0 + -1) & 1U) == 0;
                              local_b0 = 0x298f384b;
                              if (bVar5 && DAT_005bcbf4 < 10 || bVar5 != DAT_005bcbf4 < 10) {
                                local_b0 = -0x5288eb29;
                              }
                            }
                            iVar1 = local_b0 + 0x3284d864;
                            local_150 = iVar1;
                            if (iVar1 != 0) break;
                            local_b0 = -0x6337cafa;
                          }
                          iVar1 = local_b0 + 0x3171ff75;
                          local_154 = iVar1;
                          if (iVar1 != 0) break;
                          local_b0 = -0x6f8f3d12;
                          if (*local_48 < *local_a0) {
                            local_b0 = -0x3cdc95f8;
                          }
                        }
                        iVar1 = local_b0 + 0x316719b4;
                        local_158 = iVar1;
                        if (iVar1 != 0) break;
                        local_80[*local_88] = 0;
                        *local_68 = 0;
                        local_b0 = 0x35ba8236;
                      }
                      iVar1 = local_b0 + 0x2f449763;
                      local_15c = iVar1;
                      if (iVar1 != 0) break;
                      local_b0 = 0x1c056895;
                      if ((local_3a & 1) != 0) {
                        local_b0 = -0x145b0fca;
                      }
                    }
                    iVar1 = local_b0 + 0x2de89e78;
                    local_160 = iVar1;
                    if (iVar1 != 0) break;
                    local_b0 = 0x7ecdbe98;
                    if (local_80[*local_60] != 0x7fffffff) {
                      local_b0 = 0x16792f0c;
                    }
                  }
                  iVar1 = local_b0 + 0x27f09101;
                  local_164 = iVar1;
                  if (iVar1 != 0) break;
                  local_38 = *local_a0 <= *local_88;
                  bVar5 = (DAT_005bcbb0 * (DAT_005bcbb0 + -1) & 1U) != 0;
                  local_b0 = -0x35fef31e;
                  if (bVar5 != 9 < DAT_005bcbf4 || !bVar5 && 9 >= DAT_005bcbf4) {
                    local_b0 = -0x703fb7d9;
                  }
                }
                iVar1 = local_b0 + 0x2490b835;
                local_168 = iVar1;
                if (iVar1 != 0) break;
                piVar4[-2] = 0x408381;
                piVar4[-1] = 0;
                iVar1 = putchar(10);
                *local_a8 = 1;
                bVar5 = (DAT_005bcbb0 * (DAT_005bcbb0 + -1) & 1U) == 0;
                local_278 = iVar1;
                local_b0 = -0x7083850;
                if (bVar5 && DAT_005bcbf4 < 10 || bVar5 != DAT_005bcbf4 < 10) {
                  local_b0 = -0x1a16b8cf;
                }
              }
              iVar1 = local_b0 + 0x24827cc9;
              local_16c = iVar1;
              if (iVar1 != 0) break;
              piVar4[-2] = 0x40913a;
              piVar4[-1] = 0;
              local_280 = printf((char *)&PTR_DAT_0040d072);
              local_b0 = -0x5384693e;
            }
            iVar1 = local_b0 + 0x225efd87;
            local_170 = iVar1;
            if (iVar1 != 0) break;
            bVar5 = (DAT_005bcbb0 * (DAT_005bcbb0 + -1) & 1U) != 0;
            local_b0 = -0x316719b4;
            if (bVar5 != 9 < DAT_005bcbf4 || !bVar5 && 9 >= DAT_005bcbf4) {
              local_b0 = 0x35ba8236;
            }
          }
          iVar1 = local_b0 + 0x1e845e5c;
          local_174 = iVar1;
          if (iVar1 != 0) break;
          local_a8 = piVar4 + -4;
          local_a0 = piVar4 + -8;
          local_98 = piVar4 + -0xc;
          local_90 = piVar4 + -0x10;
          local_88 = piVar4 + -0x14;
          local_80 = piVar4 + -0xdc;
          local_78 = piVar4 + -0x1a4;
          local_70 = piVar4 + -0x1a8;
          local_68 = piVar4 + -0x1ac;
          local_60 = piVar4 + -0x1b0;
          local_58 = piVar4 + -0x1b4;
          local_50 = piVar4 + -0x1b8;
          piVar3 = piVar4 + -0x1bc;
          piVar4[-0x1be] = 0x407d79;
          piVar4[-0x1bd] = 0;
          local_48 = piVar3;
          iVar1 = __isoc99_scanf("%d");
          local_3c = iVar1 != 1;
          bVar5 = (DAT_005bcbb0 * (DAT_005bcbb0 + -1) & 1U) == 0;
          piVar4 = piVar3;
          local_b0 = 0x5d9021ce;
          if (bVar5 && DAT_005bcbf4 < 10 || bVar5 != DAT_005bcbf4 < 10) {
            local_b0 = -0x954cf09;
          }
        }
        iVar1 = local_b0 + 0x1adad42b;
        local_178 = iVar1;
        if (iVar1 != 0) break;
        piVar4[-2] = 0x409576;
        piVar4[-1] = 0;
        iVar1 = putchar(10);
        *local_a8 = 1;
        bVar5 = (DAT_005bcbb0 * (DAT_005bcbb0 + -1) & 1U) == 0;
        local_28c = iVar1;
        local_b0 = 0x69b316aa;
        if (bVar5 && DAT_005bcbf4 < 10 || bVar5 != DAT_005bcbf4 < 10) {
          local_b0 = -0x687bde7b;
        }
      }
      iVar1 = local_b0 + 0x1a16b8cf;
      local_17c = iVar1;
      if (iVar1 != 0) break;
      local_b0 = 0x15571bc2;
    }
    iVar1 = local_b0 + 0x197b1a01;
    if (iVar1 == 0) break;
    iVar2 = local_b0 + 0x1750b136;
    local_184 = iVar2;
    local_180 = iVar1;
    if (iVar2 == 0) {
      bVar5 = (DAT_005bcbb0 * (DAT_005bcbb0 + -1) & 1U) == 0;
      local_b0 = 0x298f384b;
      if (bVar5 && DAT_005bcbf4 < 10 || bVar5 != DAT_005bcbf4 < 10) {
        local_b0 = -0x3590efd9;
      }
    }
    else {
      iVar1 = local_b0 + 0x15739a15;
      local_188 = iVar1;
      if (iVar1 == 0) {
        piVar4[-2] = 0x4086b6;
        piVar4[-1] = 0;
        iVar1 = putchar(10);
        *local_a8 = 1;
        bVar5 = (DAT_005bcbb0 * (DAT_005bcbb0 + -1) & 1U) == 0;
        local_27c = iVar1;
        local_b0 = -0x50a25840;
        if (bVar5 && DAT_005bcbf4 < 10 || bVar5 != DAT_005bcbf4 < 10) {
          local_b0 = -0x5565b638;
        }
      }
      else {
        iVar1 = local_b0 + 0x145b0fca;
        local_18c = iVar1;
        if (iVar1 == 0) {
          bVar5 = (DAT_005bcbb0 * (DAT_005bcbb0 + -1) & 1U) == 0;
          local_b0 = -0x7083850;
          if (bVar5 != DAT_005bcbf4 < 10 || bVar5 && DAT_005bcbf4 < 10) {
            local_b0 = -0x2490b835;
          }
        }
        else {
          iVar1 = local_b0 + 0x13a9b437;
          local_190 = iVar1;
          if (iVar1 == 0) {
            *local_70 = 0;
            local_b0 = 0x6c33c63;
          }
          else {
            iVar1 = local_b0 + 0x11d74f0c;
            local_194 = iVar1;
            if (iVar1 == 0) {
              local_b0 = -0x58d62610;
              if (*local_68 < *local_a0) {
                local_b0 = 0x6dea5d00;
              }
            }
            else {
              iVar1 = local_b0 + 0x114b0c06;
              local_198 = iVar1;
              if (iVar1 == 0) {
                *local_58 = *local_58 + 1;
                local_b0 = 0x49de3fdf;
              }
              else {
                iVar1 = local_b0 + 0xa6e36a7;
                local_19c = iVar1;
                if (iVar1 == 0) {
                  piVar4[-2] = 0x408115;
                  piVar4[-1] = 0;
                  iVar1 = __isoc99_scanf("%d");
                  local_b0 = 0x961d63d;
                  if (iVar1 != 1) {
                    local_b0 = -0x69bbe64f;
                  }
                }
                else {
                  iVar1 = local_b0 + 0xa3d69cf;
                  local_1a0 = iVar1;
                  if (iVar1 == 0) {
                    *local_70 = -(-1 - *local_70);
                    local_b0 = 0x6c33c63;
                  }
                  else {
                    iVar1 = local_b0 + 0x954cf09;
                    local_1a4 = iVar1;
                    if (iVar1 == 0) {
                      local_b0 = 0x7b1b1f4f;
                      if ((local_3c & 1) != 0) {
                        local_b0 = -0x62567af1;
                      }
                    }
                    else {
                      iVar1 = local_b0 + 0x91a28cd;
                      local_1a8 = iVar1;
                      if (iVar1 == 0) {
                        *local_a8 = 0;
                        bVar5 = (DAT_005bcbb0 * (DAT_005bcbb0 + -1) & 1U) == 0;
                        local_b0 = 0x6ed2da11;
                        if (bVar5 != DAT_005bcbf4 < 10 || bVar5 && DAT_005bcbf4 < 10) {
                          local_b0 = 0x4df37a23;
                        }
                      }
                      else {
                        iVar1 = local_b0 + 0x7083850;
                        local_1ac = iVar1;
                        if (iVar1 == 0) {
                          piVar4[-2] = 0x4097e4;
                          piVar4[-1] = 0;
                          iVar1 = putchar(10);
                          *local_a8 = 1;
                          local_b0 = -0x2490b835;
                          local_2a8 = iVar1;
                        }
                        else {
                          iVar1 = local_b0 + 0x53124b2;
                          local_1b0 = iVar1;
                          if (iVar1 == 0) {
                            piVar4[-2] = 0x4097c5;
                            piVar4[-1] = 0;
                            local_2a4 = __isoc99_scanf("%d");
                            local_b0 = -0x62ea06b0;
                          }
                          else {
                            iVar1 = local_b0 + 0x4e7328d;
                            local_1b4 = iVar1;
                            if (iVar1 == 0) {
                              local_b0 = -0x2de89e78;
                              if (local_78[*local_58] != 0) {
                                local_b0 = 0x7ecdbe98;
                              }
                            }
                            else {
                              iVar1 = local_b0 + 0x1b9b8e0;
                              local_1b8 = iVar1;
                              if (iVar1 == 0) {
                                local_b0 = -0x6473d8cc;
                                local_2f8 = local_48;
                                local_300 = local_a0;
                              }
                              else {
                                iVar1 = local_b0 + 0x112a519;
                                local_1bc = iVar1;
                                if (iVar1 == 0) {
                                  piVar4[-2] = 0x407f5a;
                                  piVar4[-1] = 0;
                                  iVar1 = putchar(10);
                                  *local_a8 = 1;
                                  local_b0 = 0x15571bc2;
                                  local_274 = iVar1;
                                }
                                else {
                                  iVar1 = local_b0 + 0x77be27;
                                  local_1c0 = iVar1;
                                  if (iVar1 == 0) {
                                    *local_48 = *local_48 + 1;
                                    local_b0 = -0x5018f940;
                                  }
                                  else {
                                    iVar1 = local_b0 + -0x47d63;
                                    local_1c4 = iVar1;
                                    if (iVar1 == 0) {
                                      piVar4[-2] = 0x4099e0;
                                      piVar4[-1] = 0;
                                      local_304 = putchar(0x20);
                                      local_b0 = -0x5175b00f;
                                    }
                                    else {
                                      iVar1 = local_b0 + -0x2ca1603;
                                      local_1c8 = iVar1;
                                      if (iVar1 == 0) {
                                        bVar5 = (DAT_005bcbb0 * (DAT_005bcbb0 + -1) & 1U) != 0;
                                        local_b0 = -0x3284d864;
                                        if (bVar5 != 9 < DAT_005bcbf4 || !bVar5 && 9 >= DAT_005bcbf4
                                           ) {
                                          local_b0 = -0x6337cafa;
                                        }
                                      }
                                      else {
                                        iVar1 = local_b0 + -0x6c33c63;
                                        local_1cc = iVar1;
                                        if (iVar1 == 0) {
                                          local_b0 = -0x225efd87;
                                          if (*local_70 < *local_a0) {
                                            local_b0 = 0xce4e3d2;
                                          }
                                        }
                                        else {
                                          iVar1 = local_b0 + -0x886643b;
                                          local_1d0 = iVar1;
                                          if (iVar1 == 0) {
                                            local_36 = local_80[*local_48] == 0x7fffffff;
                                            bVar5 = (DAT_005bcbb0 * (DAT_005bcbb0 + -1) & 1U) != 0;
                                            local_b0 = 0x14716e63;
                                            if (bVar5 != 9 < DAT_005bcbf4 ||
                                                !bVar5 && 9 >= DAT_005bcbf4) {
                                              local_b0 = 0x28a3581f;
                                            }
                                          }
                                          else {
                                            iVar1 = local_b0 + -0x961d63d;
                                            local_1d4 = iVar1;
                                            if (iVar1 == 0) {
                                              local_b0 = 0x292f4e2a;
                                            }
                                            else {
                                              iVar1 = local_b0 + -0xad16d12;
                                              local_1d8 = iVar1;
                                              if (iVar1 == 0) {
                                                local_b0 = 0x7ecdbe98;
                                                if (-1 < *(int *)(&DAT_00595a70 +
                                                                 (long)*local_58 * 4 +
                                                                 (long)*local_60 * 800)) {
                                                  local_b0 = -0x4e7328d;
                                                }
                                              }
                                              else {
                                                iVar1 = local_b0 + -0xce4e3d2;
                                                local_1dc = iVar1;
                                                if (iVar1 == 0) {
                                                  bVar5 = (DAT_005bcbb0 * (DAT_005bcbb0 + -1) & 1U)
                                                          == 0;
                                                  local_b0 = 0x4f977507;
                                                  if (bVar5 && DAT_005bcbf4 < 10 ||
                                                      bVar5 != DAT_005bcbf4 < 10) {
                                                    local_b0 = 0x77d5438a;
                                                  }
                                                }
                                                else {
                                                  iVar1 = local_b0 + -0x11d0dc47;
                                                  local_1e0 = iVar1;
                                                  if (iVar1 == 0) {
                                                    local_80[*local_58] = *local_50;
                                                    local_b0 = 0x2ca1603;
                                                  }
                                                  else {
                                                    iVar1 = local_b0 + -0x14716e63;
                                                    local_1e4 = iVar1;
                                                    if (iVar1 == 0) {
                                                      local_b0 = 0x886643b;
                                                      local_2e8 = local_48;
                                                      local_2f0 = local_80;
                                                    }
                                                    else {
                                                      iVar1 = local_b0 + -0x14de935c;
                                                      local_1e8 = iVar1;
                                                      if (iVar1 == 0) {
                                                        local_b0 = 0x4c024238;
                                                      }
                                                      else {
                                                        iVar1 = local_b0 + -0x15571bc2;
                                                        local_1ec = iVar1;
                                                        if (iVar1 == 0) {
                                                          bVar5 = (DAT_005bcbb0 *
                                                                   (DAT_005bcbb0 + -1) & 1U) != 0;
                                                          local_b0 = -0x4ac0b95b;
                                                          if (bVar5 != 9 < DAT_005bcbf4 ||
                                                              !bVar5 && 9 >= DAT_005bcbf4) {
                                                            local_b0 = 0x74f29e9c;
                                                          }
                                                        }
                                                        else {
                                                          iVar1 = local_b0 + -0x16792f0c;
                                                          local_1f0 = iVar1;
                                                          if (iVar1 == 0) {
                                                            bVar5 = (DAT_005bcbb0 *
                                                                     (DAT_005bcbb0 + -1) & 1U) == 0;
                                                            local_b0 = 0x2e1847b7;
                                                            if (bVar5 && DAT_005bcbf4 < 10 ||
                                                                bVar5 != DAT_005bcbf4 < 10) {
                                                              local_b0 = -0x519ccd27;
                                                            }
                                                          }
                                                          else {
                                                            iVar1 = local_b0 + -0x1c056895;
                                                            local_1f4 = iVar1;
                                                            if (iVar1 == 0) {
                                                              bVar5 = (DAT_005bcbb0 *
                                                                       (DAT_005bcbb0 + -1) & 1U) ==
                                                                      0;
                                                              local_b0 = -0x6c2cd720;
                                                              if (bVar5 && DAT_005bcbf4 < 10 ||
                                                                  bVar5 != DAT_005bcbf4 < 10) {
                                                                local_b0 = -0x6a19aca5;
                                                              }
                                                            }
                                                            else {
                                                              iVar1 = local_b0 + -0x2132044d;
                                                              local_1f8 = iVar1;
                                                              if (iVar1 == 0) {
                                                                local_b0 = -0xa3d69cf;
                                                              }
                                                              else {
                                                                iVar1 = local_b0 + -0x23fb024f;
                                                                local_1fc = iVar1;
                                                                if (iVar1 == 0) {
                                                                  local_b0 = 0x66f1001c;
                                                                }
                                                                else {
                                                                  iVar1 = local_b0 + -0x28a3581f;
                                                                  local_200 = iVar1;
                                                                  if (iVar1 == 0) {
                                                                    local_b0 = -0x367e49f9;
                                                                    if ((local_36 & 1) != 0) {
                                                                      local_b0 = -0x24827cc9;
                                                                    }
                                                                  }
                                                                  else {
                                                                    iVar1 = local_b0 + -0x28f6ba5d;
                                                                    local_204 = iVar1;
                                                                    if (iVar1 == 0) {
                                                                      local_b0 = -0x11d74f0c;
                                                                    }
                                                                    else {
                                                                      iVar1 = local_b0 + -0x292f4e2a
                                                                      ;
                                                                      local_208 = iVar1;
                                                                      if (iVar1 == 0) {
                                                                        *local_90 = *local_90 + 1;
                                                                        local_b0 = -0x1750b136;
                                                                      }
                                                                      else {
                                                                        local_20c = local_b0 +
                                                                                    -0x298f384b;
                                                                        if (local_20c == 0) {
                                                                          local_b0 = -0x3590efd9;
                                                                          local_298 = local_90;
                                                                          local_2a0 = local_a0;
                                                                        }
                                                                        else {
                                                                          local_210 = local_b0 +
                                                                                      -0x2e1847b7;
                                                                          if (local_210 == 0) {
                                                                            *local_50 = local_80[*
                                                  local_60] +
                                                  *(int *)(&DAT_00595a70 +
                                                          (long)*local_58 * 4 +
                                                          (long)*local_60 * 800);
                                                  local_b0 = -0x519ccd27;
                                                  local_2d0 = local_50;
                                                  local_2d8 = local_58;
                                                  local_2e0 = local_80;
                                                  }
                                                  else {
                                                    iVar1 = local_b0 + -0x3332d7c5;
                                                    local_214 = iVar1;
                                                    if (iVar1 == 0) {
                                                      local_b0 = -0x67fdd5c7;
                                                      if (*local_98 < *local_a0) {
                                                        local_b0 = -0x48474b66;
                                                      }
                                                    }
                                                    else {
                                                      iVar1 = local_b0 + -0x35ba8236;
                                                      local_218 = iVar1;
                                                      if (iVar1 == 0) {
                                                        local_80[*local_88] = 0;
                                                        *local_68 = 0;
                                                        bVar5 = (DAT_005bcbb0 * (DAT_005bcbb0 + -1)
                                                                & 1U) == 0;
                                                        local_b0 = -0x316719b4;
                                                        if (bVar5 != DAT_005bcbf4 < 10 ||
                                                            bVar5 && DAT_005bcbf4 < 10) {
                                                          local_b0 = 0x28f6ba5d;
                                                        }
                                                      }
                                                      else {
                                                        local_21c = local_b0 + -0x36033f76;
                                                        if (local_21c == 0) {
                                                          *local_68 = *local_68 + 1;
                                                          local_b0 = -0x11d74f0c;
                                                        }
                                                        else {
                                                          iVar1 = local_b0 + -0x4405994d;
                                                          local_220 = iVar1;
                                                          if (iVar1 == 0) {
                                                            *local_98 = 0;
                                                            local_b0 = 0x3332d7c5;
                                                          }
                                                          else {
                                                            local_224 = local_b0 + -0x49de3fdf;
                                                            if (local_224 == 0) {
                                                              *local_58 = -(-1 - *local_58);
                                                              bVar5 = (DAT_005bcbb0 *
                                                                       (DAT_005bcbb0 + -1) & 1U) ==
                                                                      0;
                                                              local_b0 = -0x114b0c06;
                                                              if (bVar5 && DAT_005bcbf4 < 10 ||
                                                                  bVar5 != DAT_005bcbf4 < 10) {
                                                                local_b0 = 0x14de935c;
                                                              }
                                                            }
                                                            else {
                                                              iVar1 = local_b0 + -0x4adbde42;
                                                              local_228 = iVar1;
                                                              if (iVar1 == 0) {
                                                                local_b0 = 0x2ca1603;
                                                                if ((local_37 & 1) != 0) {
                                                                  local_b0 = 0x11d0dc47;
                                                                }
                                                              }
                                                              else {
                                                                iVar1 = local_b0 + -0x4c024238;
                                                                local_22c = iVar1;
                                                                if (iVar1 == 0) {
                                                                  local_b0 = -0x54f03b8e;
                                                                  if (*local_58 < *local_a0) {
                                                                    local_b0 = 0xad16d12;
                                                                  }
                                                                }
                                                                else {
                                                                  iVar1 = local_b0 + -0x4df37a23;
                                                                  local_230 = iVar1;
                                                                  if (iVar1 == 0) {
                                                                    local_b0 = 0x15571bc2;
                                                                  }
                                                                  else {
                                                                    iVar1 = local_b0 + -0x4f977507;
                                                                    local_234 = iVar1;
                                                                    if (iVar1 == 0) {
                                                                      local_80[*local_70] =
                                                                           0x7fffffff;
                                                                      local_78[*local_70] = 0;
                                                                      local_b0 = 0x77d5438a;
                                                                    }
                                                                    else {
                                                                      local_238 = local_b0 +
                                                                                  -0x5678f23a;
                                                                      if (local_238 == 0) {
                                                                        local_b0 = 0x36033f76;
                                                                      }
                                                                      else {
                                                                        local_23c = local_b0 +
                                                                                    -0x5d9021ce;
                                                                        if (local_23c == 0) {
                                                                          piVar4[-10] = 0x409754;
                                                                          piVar4[-9] = 0;
                                                                          local_290 = __isoc99_scanf
                                                  ("%d");
                                                  local_b0 = -0x1e845e5c;
                                                  piVar4 = piVar4 + -8;
                                                  }
                                                  else {
                                                    iVar1 = local_b0 + -0x63515f56;
                                                    local_240 = iVar1;
                                                    if (iVar1 == 0) {
                                                      bVar5 = (DAT_005bcbb0 * (DAT_005bcbb0 + -1) &
                                                              1U) == 0;
                                                      local_b0 = -0x77be27;
                                                      if (bVar5 && DAT_005bcbf4 < 10 ||
                                                          bVar5 != DAT_005bcbf4 < 10) {
                                                        local_b0 = -0x5018f940;
                                                      }
                                                    }
                                                    else {
                                                      iVar1 = local_b0 + -0x63ecb8ff;
                                                      local_244 = iVar1;
                                                      if (iVar1 == 0) {
                                                        local_b0 = -0x5fdd3483;
                                                      }
                                                      else {
                                                        iVar1 = local_b0 + -0x64ae368d;
                                                        local_248 = iVar1;
                                                        if (iVar1 == 0) {
                                                          local_b0 = 0x73986eb7;
                                                        }
                                                        else {
                                                          iVar1 = local_b0 + -0x66f1001c;
                                                          local_24c = iVar1;
                                                          if (iVar1 == 0) {
                                                            *local_98 = *local_98 + 1;
                                                            local_b0 = 0x3332d7c5;
                                                          }
                                                          else {
                                                            local_250 = local_b0 + -0x69b316aa;
                                                            if (local_250 == 0) {
                                                              piVar4[-2] = 0x409a29;
                                                              piVar4[-1] = 0;
                                                              iVar1 = putchar(10);
                                                              *local_a8 = 1;
                                                              local_b0 = -0x1adad42b;
                                                              local_308 = iVar1;
                                                            }
                                                            else {
                                                              iVar1 = local_b0 + -0x6dea5d00;
                                                              local_254 = iVar1;
                                                              if (iVar1 == 0) {
                                                                iVar1 = *local_a0;
                                                                piVar4[-2] = 0x408a07;
                                                                piVar4[-1] = 0;
                                                                iVar1 = FUN_0040c420(local_80,
                                                  local_78,iVar1);
                                                  *local_60 = iVar1;
                                                  local_b0 = -0x6e3f818d;
                                                  if (*local_60 == -1) {
                                                    local_b0 = -0x50fa9c83;
                                                  }
                                                  }
                                                  else {
                                                    local_258 = local_b0 + -0x6ed2da11;
                                                    if (local_258 == 0) {
                                                      *local_a8 = 0;
                                                      local_b0 = -0x91a28cd;
                                                    }
                                                    else {
                                                      iVar1 = local_b0 + -0x73986eb7;
                                                      local_25c = iVar1;
                                                      if (iVar1 == 0) {
                                                        bVar5 = (DAT_005bcbb0 * (DAT_005bcbb0 + -1)
                                                                & 1U) != 0;
                                                        local_b0 = 0x64ae368d;
                                                        if (bVar5 != 9 < DAT_005bcbf4 ||
                                                            !bVar5 && 9 >= DAT_005bcbf4) {
                                                          local_b0 = 0x5678f23a;
                                                        }
                                                      }
                                                      else {
                                                        iVar1 = local_b0 + -0x74f29e9c;
                                                        local_260 = iVar1;
                                                        if (iVar1 == 0) {
                                                          local_34 = *local_a8;
                                                          bVar5 = (DAT_005bcbb0 *
                                                                   (DAT_005bcbb0 + -1) & 1U) != 0;
                                                          local_b0 = -0x4ac0b95b;
                                                          if (bVar5 != 9 < DAT_005bcbf4 ||
                                                              !bVar5 && 9 >= DAT_005bcbf4) {
                                                            local_b0 = -0x197b1a01;
                                                          }
                                                        }
                                                        else {
                                                          iVar1 = local_b0 + -0x77d5438a;
                                                          local_264 = iVar1;
                                                          if (iVar1 == 0) {
                                                            local_80[*local_70] = 0x7fffffff;
                                                            local_78[*local_70] = 0;
                                                            bVar5 = (DAT_005bcbb0 *
                                                                     (DAT_005bcbb0 + -1) & 1U) == 0;
                                                            local_b0 = 0x4f977507;
                                                            if (bVar5 && DAT_005bcbf4 < 10 ||
                                                                bVar5 != DAT_005bcbf4 < 10) {
                                                              local_b0 = 0x2132044d;
                                                            }
                                                          }
                                                          else {
                                                            local_268 = local_b0 + -0x7b1b1f4f;
                                                            if (local_268 == 0) {
                                                              local_b0 = -0x61cfca61;
                                                              if (*local_a0 < 1) {
                                                                local_b0 = -0x112a519;
                                                              }
                                                            }
                                                            else {
                                                              local_26c = local_b0 + -0x7ecdbe98;
                                                              if (local_26c == 0) {
                                                                local_b0 = -0x52a58d79;
                                                              }
                                                              else {
                                                                local_270 = local_b0 + -0x7f3e52e0;
                                                                if ((local_270 == 0) &&
                                                                   (local_b0 = 0x5d9021ce,
                                                                   ((local_aa ^ 0xff ^
                                                                    local_a9 ^ 0xff) & 1) != 0 ||
                                                                   (((local_aa ^ 0xff |
                                                                     local_a9 ^ 0xff) ^ 0xff) & 1)
                                                                   != 0)) {
                                                                  local_b0 = -0x1e845e5c;
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return local_34;
}



/* ===== Function: FUN_00409a70 ===== */

long FUN_00409a70(long param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  bool bVar5;
  undefined1 auStack_88 [44];
  int local_5c;
  long local_58;
  int local_50;
  byte local_4a;
  byte local_49;
  long *local_48;
  long *local_40;
  long *local_38;
  
  plVar4 = (long *)auStack_88;
  local_4a = (DAT_005bcbb4 * (DAT_005bcbb4 + -1) & 1U) == 0;
  local_49 = DAT_005bcbcc < 10;
  local_50 = -0x2261f88e;
  local_5c = param_2;
  local_58 = param_1;
  while (local_50 != -0x7ba0891f) {
    if (local_50 == -0x4a51a3ac) {
      lVar1 = *local_40;
      *(int *)local_40 = -(1 - (int)lVar1);
      local_50 = -0x7ba0891f;
      if (0 < (int)lVar1) {
        local_50 = -0x140cd319;
      }
    }
    else if (local_50 == -0x2261f88e) {
      local_50 = 0x47e60846;
      if (((local_4a ^ 0xff ^ local_49 ^ 0xff) & 1) != 0 ||
          (((local_4a ^ 0xff | local_49 ^ 0xff) ^ 0xff) & 1) != 0) {
        local_50 = 0x6c140739;
      }
    }
    else if (local_50 == -0x140cd319) {
      *local_38 = *local_48 * *local_38;
      local_50 = -0x4a51a3ac;
    }
    else if (local_50 == 0x15b507fa) {
      local_50 = -0x4a51a3ac;
    }
    else if (local_50 == 0x47e60846) {
      plVar2 = plVar4 + -2;
      plVar3 = plVar4 + -4;
      plVar4 = plVar4 + -6;
      *plVar2 = local_58;
      *(int *)plVar3 = local_5c;
      *plVar4 = 1;
      local_50 = 0x6c140739;
    }
    else if (local_50 == 0x6c140739) {
      local_48 = plVar4 + -2;
      local_40 = plVar4 + -4;
      plVar4 = plVar4 + -6;
      *local_48 = local_58;
      *(int *)local_40 = local_5c;
      *plVar4 = 1;
      bVar5 = (DAT_005bcbb4 * (DAT_005bcbb4 + -1) & 1U) != 0;
      local_50 = 0x47e60846;
      local_38 = plVar4;
      if (bVar5 != 9 < DAT_005bcbcc || !bVar5 && 9 >= DAT_005bcbcc) {
        local_50 = 0x15b507fa;
      }
    }
  }
  return *local_38;
}



/* ===== Function: FUN_00409d70 ===== */

void FUN_00409d70(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int local_78;
  byte local_2b;
  byte local_2a;
  byte local_29;
  
  iVar1 = *param_1;
  iVar2 = *param_4;
  local_78 = -0x74a2852;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                while (local_78 == -0x7a23afdf) {
                  local_78 = -0x4f9e2261;
                }
                if (local_78 != -0x58a4c01e) break;
                local_78 = 0x7c1186ca;
                if (*param_5 < *param_2) {
                  local_78 = -0x5d29382;
                }
              }
              if (local_78 != -0x4f9e2261) break;
              local_2b = *param_1 == *param_4;
              bVar6 = (DAT_005bcb78 * (DAT_005bcb78 + -1) & 1U) == 0;
              local_78 = -0x7a23afdf;
              if (bVar6 && DAT_005bcbc8 < 10 || bVar6 != DAT_005bcbc8 < 10) {
                local_78 = 0x44ab7164;
              }
            }
            if (local_78 != -0x3518e613) break;
            local_78 = 0x516da23c;
          }
          if (local_78 != -0x2febddfd) break;
          local_78 = -0x19d121d1;
          if ((local_29 & 1) != 0) {
            local_78 = -0x5d29382;
          }
        }
        if (local_78 != -0x290aec1d) break;
        local_78 = -0x19d121d1;
        if ((local_2a & 1) != 0) {
          local_78 = -0x212cf3f4;
        }
      }
      if (local_78 != -0x212cf3f4) break;
      bVar6 = (DAT_005bcb78 * (DAT_005bcb78 + -1) & 1U) != 0;
      local_78 = 0x12e0bdd7;
      if (bVar6 != 9 < DAT_005bcbc8 || !bVar6 && 9 >= DAT_005bcbc8) {
        local_78 = 0x3679756e;
      }
    }
    if (local_78 == -0x19d121d1) break;
    if (local_78 == -0x74a2852) {
      local_78 = 0x5703b22a;
      if (iVar2 < iVar1) {
        local_78 = -0x5d29382;
      }
    }
    else if (local_78 == -0x5d29382) {
      iVar3 = *param_1;
      iVar4 = *param_2;
      iVar5 = *param_3;
      *param_1 = *param_4;
      *param_2 = *param_5;
      *param_3 = *param_6;
      *param_4 = iVar3;
      *param_5 = iVar4;
      *param_6 = iVar5;
      local_78 = -0x19d121d1;
    }
    else if (local_78 == 0x12e0bdd7) {
      local_78 = 0x3679756e;
    }
    else if (local_78 == 0x3679756e) {
      local_29 = *param_6 < *param_3;
      bVar6 = (DAT_005bcb78 * (DAT_005bcb78 + -1) & 1U) == 0;
      local_78 = 0x12e0bdd7;
      if (bVar6 && DAT_005bcbc8 < 10 || bVar6 != DAT_005bcbc8 < 10) {
        local_78 = -0x2febddfd;
      }
    }
    else if (local_78 == 0x401ff607) {
      bVar6 = (DAT_005bcb78 * (DAT_005bcb78 + -1) & 1U) == 0;
      local_78 = -0x3518e613;
      if (bVar6 && DAT_005bcbc8 < 10 || bVar6 != DAT_005bcbc8 < 10) {
        local_78 = 0x516da23c;
      }
    }
    else if (local_78 == 0x44ab7164) {
      local_78 = -0x19d121d1;
      if ((local_2b & 1) != 0) {
        local_78 = 0x401ff607;
      }
    }
    else if (local_78 == 0x516da23c) {
      local_2a = *param_2 == *param_5;
      bVar6 = (DAT_005bcb78 * (DAT_005bcb78 + -1) & 1U) == 0;
      local_78 = -0x3518e613;
      if (bVar6 && DAT_005bcbc8 < 10 || bVar6 != DAT_005bcbc8 < 10) {
        local_78 = -0x290aec1d;
      }
    }
    else if (local_78 == 0x5703b22a) {
      local_78 = 0x7c1186ca;
      if (*param_1 == *param_4) {
        local_78 = -0x58a4c01e;
      }
    }
    else if ((local_78 == 0x7c1186ca) &&
            (bVar6 = (DAT_005bcb78 * (DAT_005bcb78 + -1) & 1U) == 0, local_78 = -0x7a23afdf,
            bVar6 && DAT_005bcbc8 < 10 || bVar6 != DAT_005bcbc8 < 10)) {
      local_78 = -0x4f9e2261;
    }
  }
  return;
}



/* ===== Function: FUN_0040a340 ===== */

int FUN_0040a340(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_1c;
  int local_10;
  
  local_1c = -0x71490c61;
  while( true ) {
    while( true ) {
      while (local_1c == -0x78998ec1) {
        iVar1 = *(int *)(&DAT_0040d080 + (long)(param_2 + -1) * 4);
        iVar2 = FUN_0040a450(param_1);
        local_10 = iVar1 + (uint)(iVar2 != 0);
        local_1c = -0x4c3637d7;
      }
      if (local_1c != -0x71490c61) break;
      local_1c = 0x68ce2bbb;
      if (param_2 == 2) {
        local_1c = -0x78998ec1;
      }
    }
    if (local_1c == -0x4c3637d7) break;
    if (local_1c == 0x68ce2bbb) {
      local_10 = *(int *)(&DAT_0040d080 + (long)(param_2 + -1) * 4);
      local_1c = -0x4c3637d7;
    }
  }
  return local_10;
}



/* ===== Function: FUN_0040a450 ===== */

uint FUN_0040a450(int param_1)

{
  bool bVar1;
  byte local_36;
  byte local_35;
  int local_34;
  uint local_28;
  byte local_22;
  byte local_21;
  
  local_34 = 0x1bef4711;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while (local_34 == -0x768d721f) {
                local_22 = local_35 & 1;
                bVar1 = (DAT_005bcb80 * (DAT_005bcb80 + -1) & 1U) == 0;
                local_34 = 0x19f93eb3;
                if (bVar1 && DAT_005bcbd0 < 10 || bVar1 != DAT_005bcbd0 < 10) {
                  local_34 = 0x1c1ff59f;
                }
              }
              if (local_34 != -0x30cb52b9) break;
              local_21 = local_36 & 1;
              bVar1 = (DAT_005bcb80 * (DAT_005bcb80 + -1) & 1U) == 0;
              local_34 = 0xc751c33;
              if (bVar1 != DAT_005bcbd0 < 10 || bVar1 && DAT_005bcbd0 < 10) {
                local_34 = 0x7acb5f5f;
              }
            }
            if (local_34 != 0xc751c33) break;
            local_34 = 0x7acb5f5f;
          }
          if (local_34 != 0x19f93eb3) break;
          local_34 = 0x1c1ff59f;
        }
        if (local_34 != 0x1bef4711) break;
        local_34 = 0x4069383d;
        if (param_1 % 400 == 0) {
          local_34 = -0x30cb52b9;
        }
        local_36 = 1;
      }
      if (local_34 != 0x1c1ff59f) break;
      bVar1 = (DAT_005bcb80 * (DAT_005bcb80 + -1) & 1U) == 0;
      local_34 = 0x19f93eb3;
      if (bVar1 && DAT_005bcbd0 < 10 || bVar1 != DAT_005bcbd0 < 10) {
        local_34 = 0x609bc57f;
      }
    }
    if (local_34 == 0x1e095f46) break;
    if (local_34 == 0x31521574) {
      local_35 = param_1 % 100 != 0;
      local_34 = -0x768d721f;
    }
    else if (local_34 == 0x4069383d) {
      local_34 = -0x768d721f;
      if (param_1 % 4 == 0) {
        local_34 = 0x31521574;
      }
      local_35 = 0;
    }
    else if (local_34 == 0x609bc57f) {
      local_34 = -0x30cb52b9;
      local_36 = local_22 & 1;
    }
    else if (local_34 == 0x7acb5f5f) {
      local_28 = (uint)(local_21 & 1);
      bVar1 = (DAT_005bcb80 * (DAT_005bcb80 + -1) & 1U) == 0;
      local_34 = 0xc751c33;
      if (bVar1 && DAT_005bcbd0 < 10 || bVar1 != DAT_005bcbd0 < 10) {
        local_34 = 0x1e095f46;
      }
    }
  }
  return local_28;
}



/* ===== Function: FUN_0040a7f0 ===== */

void FUN_0040a7f0(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  int local_40;
  
  local_40 = -0x6cbde272;
  while( true ) {
    while( true ) {
      while( true ) {
        while (local_40 == -0x6cbde272) {
          local_40 = 0x6b16d697;
          if (param_2 < param_3) {
            local_40 = -0x3be7ebae;
          }
        }
        if (local_40 != -0x472271f0) break;
        local_40 = -0x17a920b4;
      }
      if (local_40 != -0x3be7ebae) break;
      iVar1 = FUN_0040aa20(param_1,param_2,param_3);
      FUN_0040a7f0(param_1,param_2,iVar1 + -1);
      FUN_0040a7f0(param_1,iVar1 + 1,param_3);
      local_40 = 0x6b16d697;
    }
    if (local_40 == -0x384e09f1) break;
    if (local_40 == -0x17a920b4) {
      bVar2 = (DAT_005bcb7c * (DAT_005bcb7c + -1) & 1U) == 0;
      local_40 = -0x472271f0;
      if (bVar2 != DAT_005bcbc4 < 10 || bVar2 && DAT_005bcbc4 < 10) {
        local_40 = -0x384e09f1;
      }
    }
    else if ((local_40 == 0x6b16d697) &&
            (bVar2 = (DAT_005bcb7c * (DAT_005bcb7c + -1) & 1U) == 0, local_40 = -0x472271f0,
            bVar2 && DAT_005bcbc4 < 10 || bVar2 != DAT_005bcbc4 < 10)) {
      local_40 = -0x17a920b4;
    }
  }
  return;
}



/* ===== Function: FUN_0040aa20 ===== */

int FUN_0040aa20(long param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  bool bVar11;
  undefined1 auStack_c8 [8];
  int *local_c0;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  long local_78;
  int local_6c;
  int local_68;
  bool local_62;
  bool local_61;
  long *local_60;
  int *local_58;
  int *local_50;
  int *local_48;
  int *local_40;
  int local_34;
  
  piVar8 = (int *)auStack_c8;
  local_62 = (DAT_005bcb70 * (DAT_005bcb70 + -1) & 1U) == 0;
  local_61 = DAT_005bcc34 < 10;
  local_68 = 0x690cb57e;
  local_6c = param_2;
  local_78 = param_1;
  local_7c = param_3;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                while( true ) {
                  while( true ) {
                    while( true ) {
                      while( true ) {
                        while( true ) {
                          while( true ) {
                            local_80 = local_68;
                            local_84 = local_68 + 0x68efe9e5;
                            if (local_68 + 0x68efe9e5 != 0) break;
                            local_68 = -0x17bf602a;
                            if (*(int *)(*local_60 + (long)*local_40 * 4) <= *local_50) {
                              local_68 = 0x44715a4e;
                            }
                          }
                          local_88 = local_68 + 0x5b3ecd13;
                          if (local_68 + 0x5b3ecd13 != 0) break;
                          local_68 = 0x35fc548b;
                          if (*local_40 < *local_58) {
                            local_68 = -0x68efe9e5;
                          }
                        }
                        local_8c = local_68 + 0x5914a165;
                        if (local_68 + 0x5914a165 != 0) break;
                        *local_40 = *local_40 + 1;
                        local_68 = -0x5b3ecd13;
                      }
                      local_90 = local_68 + 0x3b80f6bb;
                      if (local_68 + 0x3b80f6bb != 0) break;
                      lVar3 = *local_60;
                      iVar1 = *local_48;
                      lVar4 = *local_60;
                      iVar2 = *local_58;
                      piVar8[-2] = 0x40b044;
                      piVar8[-1] = 0;
                      FUN_0040b060(lVar3 + (long)-(-1 - iVar1) * 4,lVar4 + (long)iVar2 * 4);
                      local_68 = 0x661fa47e;
                      local_c0 = local_48;
                    }
                    local_94 = local_68 + 0x27214fa8;
                    if (local_68 + 0x27214fa8 != 0) break;
                    local_68 = -0x5b3ecd13;
                  }
                  local_98 = local_68 + 0x1c23a159;
                  if (local_68 + 0x1c23a159 != 0) break;
                  plVar5 = (long *)(piVar8 + -4);
                  piVar6 = piVar8 + -8;
                  piVar7 = piVar8 + -0xc;
                  piVar9 = piVar8 + -0x10;
                  piVar10 = piVar8 + -0x14;
                  piVar8 = piVar8 + -0x18;
                  *plVar5 = local_78;
                  *piVar6 = local_6c;
                  *piVar7 = local_7c;
                  *piVar9 = *(int *)(*plVar5 + (long)*piVar7 * 4);
                  *piVar10 = *piVar6 + -1;
                  *piVar8 = *piVar6;
                  local_68 = 0x654c1991;
                }
                local_9c = local_68 + 0x17bf602a;
                if (local_68 + 0x17bf602a != 0) break;
                local_68 = -0x5914a165;
              }
              local_a0 = local_68 + -0x35fc548b;
              if (local_68 + -0x35fc548b != 0) break;
              bVar11 = (DAT_005bcb70 * (DAT_005bcb70 + -1) & 1U) != 0;
              local_68 = -0x3b80f6bb;
              if (bVar11 != 9 < DAT_005bcc34 || !bVar11 && 9 >= DAT_005bcc34) {
                local_68 = 0x661fa47e;
              }
            }
            local_a4 = local_68 + -0x44715a4e;
            if (local_68 + -0x44715a4e != 0) break;
            *local_48 = *local_48 + 1;
            lVar3 = *local_60;
            iVar1 = *local_48;
            lVar4 = *local_60;
            iVar2 = *local_40;
            piVar8[-2] = 0x40adb0;
            piVar8[-1] = 0;
            FUN_0040b060(lVar3 + (long)iVar1 * 4,lVar4 + (long)iVar2 * 4);
            local_68 = -0x17bf602a;
          }
          local_a8 = local_68 + -0x654c1991;
          if (local_68 + -0x654c1991 != 0) break;
          local_60 = (long *)(piVar8 + -4);
          piVar6 = piVar8 + -8;
          local_58 = piVar8 + -0xc;
          local_50 = piVar8 + -0x10;
          local_48 = piVar8 + -0x14;
          piVar8 = piVar8 + -0x18;
          local_40 = piVar8;
          *local_60 = local_78;
          *piVar6 = local_6c;
          *local_58 = local_7c;
          *local_50 = *(int *)(*local_60 + (long)*local_58 * 4);
          *local_48 = *piVar6 + -1;
          *piVar8 = *piVar6;
          bVar11 = (DAT_005bcb70 * (DAT_005bcb70 + -1) & 1U) == 0;
          local_68 = -0x1c23a159;
          if (bVar11 && DAT_005bcc34 < 10 || bVar11 != DAT_005bcc34 < 10) {
            local_68 = -0x27214fa8;
          }
        }
        local_ac = local_68 + -0x661fa47e;
        if (local_68 + -0x661fa47e != 0) break;
        lVar3 = *local_60;
        iVar1 = *local_48;
        lVar4 = *local_60;
        iVar2 = *local_58;
        piVar8[-2] = 0x40aebd;
        piVar8[-1] = 0;
        FUN_0040b060(lVar3 + (long)(iVar1 + 1) * 4,lVar4 + (long)iVar2 * 4);
        local_34 = *local_48 + 1;
        bVar11 = (DAT_005bcb70 * (DAT_005bcb70 + -1) & 1U) != 0;
        local_68 = -0x3b80f6bb;
        if (bVar11 != 9 < DAT_005bcc34 || !bVar11 && 9 >= DAT_005bcc34) {
          local_68 = 0x6d1aa72e;
        }
      }
      local_b0 = local_68 + -0x690cb57e;
      if (local_68 + -0x690cb57e != 0) break;
      local_68 = -0x1c23a159;
      if (((local_62 & local_61 | local_62 ^ local_61) & 1U) != 0) {
        local_68 = 0x654c1991;
      }
    }
    local_b4 = local_68 + -0x6d1aa72e;
  } while (local_68 + -0x6d1aa72e != 0);
  return local_34;
}



/* ===== Function: FUN_0040b060 ===== */

void FUN_0040b060(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auStack_68 [48];
  int local_38;
  
  puVar3 = (undefined4 *)auStack_68;
  bVar5 = (DAT_005bcbe4 * (DAT_005bcbe4 + -1) & 1U) == 0;
  bVar1 = DAT_005bcc30 < 10;
  local_38 = -0x7e2e8004;
  while( true ) {
    while (local_38 == -0x7e2e8004) {
      local_38 = 0x26e6dfcc;
      if (bVar5 && bVar1 || bVar5 != bVar1) {
        local_38 = -0x4aa2aed6;
      }
    }
    if (local_38 == -0x6a371a44) break;
    if (local_38 == -0x4aa2aed6) {
      puVar2 = (undefined8 *)(puVar3 + -4);
      puVar4 = (undefined8 *)(puVar3 + -8);
      puVar3 = puVar3 + -0xc;
      *puVar2 = param_1;
      *puVar4 = param_2;
      *puVar3 = *(undefined4 *)*puVar2;
      *(undefined4 *)*puVar2 = *(undefined4 *)*puVar4;
      *(undefined4 *)*puVar4 = *puVar3;
      bVar6 = (DAT_005bcbe4 * (DAT_005bcbe4 + -1) & 1U) == 0;
      local_38 = 0x26e6dfcc;
      if (bVar6 && DAT_005bcc30 < 10 || bVar6 != DAT_005bcc30 < 10) {
        local_38 = -0x6a371a44;
      }
    }
    else if (local_38 == 0x26e6dfcc) {
      puVar2 = (undefined8 *)(puVar3 + -4);
      puVar4 = (undefined8 *)(puVar3 + -8);
      puVar3 = puVar3 + -0xc;
      *puVar2 = param_1;
      *puVar4 = param_2;
      *puVar3 = *(undefined4 *)*puVar2;
      *(undefined4 *)*puVar2 = *(undefined4 *)*puVar4;
      *(undefined4 *)*puVar4 = *puVar3;
      local_38 = -0x4aa2aed6;
    }
  }
  return;
}



/* ===== Function: FUN_0040b260 ===== */

int * FUN_0040b260(int *param_1,int param_2)

{
  undefined8 uVar1;
  bool bVar2;
  int local_40;
  int *local_30;
  
  local_40 = -0x6649b104;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while (local_40 == -0x71d23fe6) {
                local_30 = (int *)FUN_0040bfa0(param_2);
                local_40 = -0x553eab26;
              }
              if (local_40 != -0x6649b104) break;
              local_40 = 0x2946cf33;
              if (param_1 != (int *)0x0) {
                local_40 = 0x735494a6;
              }
            }
            if (local_40 != -0x553eab26) break;
            local_30 = (int *)FUN_0040bfa0(param_2);
            bVar2 = (DAT_005bcbe0 * (DAT_005bcbe0 + -1) & 1U) == 0;
            local_40 = -0x71d23fe6;
            if (bVar2 && DAT_005bcc3c < 10 || bVar2 != DAT_005bcc3c < 10) {
              local_40 = 0x342aacaa;
            }
          }
          if (local_40 != -0x4754b7bd) break;
          uVar1 = FUN_0040b260(*(undefined8 *)(param_1 + 2),param_2);
          *(undefined8 *)(param_1 + 2) = uVar1;
          local_40 = 0x608bdfe3;
        }
        if (local_40 != 0x26cc792a) break;
        uVar1 = FUN_0040b260(*(undefined8 *)(param_1 + 4),param_2);
        *(undefined8 *)(param_1 + 4) = uVar1;
        local_40 = 0x608bdfe3;
      }
      if (local_40 != 0x2946cf33) break;
      bVar2 = (DAT_005bcbe0 * (DAT_005bcbe0 + -1) & 1U) == 0;
      local_40 = -0x71d23fe6;
      if (bVar2 != DAT_005bcc3c < 10 || bVar2 && DAT_005bcc3c < 10) {
        local_40 = -0x553eab26;
      }
    }
    if (local_40 == 0x2ab78db7) break;
    if (local_40 == 0x342aacaa) {
      local_40 = 0x2ab78db7;
    }
    else if (local_40 == 0x608bdfe3) {
      local_40 = 0x2ab78db7;
      local_30 = param_1;
    }
    else if ((local_40 == 0x735494a6) && (local_40 = 0x26cc792a, param_2 < *param_1)) {
      local_40 = -0x4754b7bd;
    }
  }
  return local_30;
}



/* ===== Function: FUN_0040b530 ===== */

void FUN_0040b530(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  bool bVar4;
  long local_88 [2];
  undefined1 auStack_78 [4];
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  long local_50;
  int local_48;
  byte local_42;
  byte local_41;
  long *local_40;
  byte local_31;
  
  plVar3 = (long *)auStack_78;
  local_42 = (DAT_005bcbd8 * (DAT_005bcbd8 + -1) & 1U) == 0;
  local_41 = DAT_005bcc38 < 10;
  local_48 = -0x34aa9f00;
  local_50 = param_1;
  while( true ) {
    local_58 = local_48 + 0x70d90499;
    local_54 = local_48;
    if (local_58 == 0) break;
    local_5c = local_48 + 0x66d1c116;
    if (local_5c == 0) {
      plVar3 = plVar3 + -2;
      *plVar3 = local_50;
      local_31 = *plVar3 != 0;
      bVar4 = (DAT_005bcbd8 * (DAT_005bcbd8 + -1) & 1U) != 0;
      local_48 = 0x336701e6;
      local_40 = plVar3;
      if (bVar4 != 9 < DAT_005bcc38 || !bVar4 && 9 >= DAT_005bcc38) {
        local_48 = -0xb5d4b0d;
      }
    }
    else {
      local_60 = local_48 + 0x34aa9f00;
      if (local_60 == 0) {
        local_48 = 0x336701e6;
        if (((local_42 ^ 0xff ^ local_41 ^ 0xff) & 1) != 0 ||
            (((local_42 ^ 0xff | local_41 ^ 0xff) ^ 0xff) & 1) != 0) {
          local_48 = -0x66d1c116;
        }
      }
      else {
        local_64 = local_48 + 0xb5d4b0d;
        if (local_64 == 0) {
          local_48 = 0x43274121;
          if ((local_31 & 1) != 0) {
            local_48 = 0x68576adb;
          }
        }
        else {
          local_68 = local_48 + -0x336701e6;
          if (local_68 == 0) {
            plVar3 = plVar3 + -2;
            *plVar3 = local_50;
            local_48 = -0x66d1c116;
          }
          else {
            local_6c = local_48 + -0x43274121;
            if (local_6c == 0) {
              local_48 = -0x70d90499;
            }
            else {
              local_70 = local_48 + -0x68576adb;
              if (local_70 == 0) {
                uVar2 = *(undefined8 *)(*local_40 + 8);
                plVar3[-1] = 0x40b78d;
                FUN_0040b530(uVar2);
                uVar1 = *(uint *)*local_40;
                plVar3[-1] = 0x40b7a7;
                local_74 = printf("%d ",(ulong)uVar1);
                uVar2 = *(undefined8 *)(*local_40 + 0x10);
                plVar3[-1] = 0x40b7ba;
                FUN_0040b530(uVar2);
                local_48 = -0x70d90499;
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== Function: FUN_0040b800 ===== */

void FUN_0040b800(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  bool bVar4;
  long local_88 [2];
  undefined1 auStack_78 [4];
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  long local_50;
  int local_48;
  byte local_42;
  byte local_41;
  long *local_40;
  byte local_31;
  
  plVar3 = (long *)auStack_78;
  local_42 = (DAT_005bcbdc * (DAT_005bcbdc + -1) & 1U) == 0;
  local_41 = DAT_005bcc2c < 10;
  local_48 = -0x258352b2;
  local_50 = param_1;
  while( true ) {
    while( true ) {
      while( true ) {
        local_58 = local_48 + 0x37fcd313;
        local_54 = local_48;
        if (local_58 != 0) break;
        local_48 = 0x5ef2b2be;
        if ((local_31 & 1) != 0) {
          local_48 = -0x37e50419;
        }
      }
      local_5c = local_48 + 0x37e50419;
      if (local_5c != 0) break;
      uVar1 = *(uint *)*local_40;
      plVar3[-1] = 0x40ba32;
      local_74 = printf("%d ",(ulong)uVar1);
      uVar2 = *(undefined8 *)(*local_40 + 8);
      plVar3[-1] = 0x40ba45;
      FUN_0040b800(uVar2);
      uVar2 = *(undefined8 *)(*local_40 + 0x10);
      plVar3[-1] = 0x40ba55;
      FUN_0040b800(uVar2);
      local_48 = -0x3706dcc7;
    }
    local_60 = local_48 + 0x3706dcc7;
    if (local_60 == 0) break;
    local_64 = local_48 + 0x258352b2;
    if (local_64 == 0) {
      local_48 = -0x1f478f46;
      if (((local_42 & local_41 | local_42 ^ local_41) & 1) != 0) {
        local_48 = -0x32ed535;
      }
    }
    else {
      local_68 = local_48 + 0x1f478f46;
      if (local_68 == 0) {
        plVar3 = plVar3 + -2;
        *plVar3 = local_50;
        local_48 = -0x32ed535;
      }
      else {
        local_6c = local_48 + 0x32ed535;
        if (local_6c == 0) {
          plVar3 = plVar3 + -2;
          *plVar3 = local_50;
          local_31 = *plVar3 != 0;
          bVar4 = (DAT_005bcbdc * (DAT_005bcbdc + -1) & 1U) != 0;
          local_48 = -0x1f478f46;
          local_40 = plVar3;
          if (bVar4 != 9 < DAT_005bcc2c || !bVar4 && 9 >= DAT_005bcc2c) {
            local_48 = -0x37fcd313;
          }
        }
        else {
          local_70 = local_48 + -0x5ef2b2be;
          if (local_70 == 0) {
            local_48 = -0x3706dcc7;
          }
        }
      }
    }
  }
  return;
}



/* ===== Function: FUN_0040ba90 ===== */

void FUN_0040ba90(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  bool bVar4;
  long local_68 [2];
  undefined1 auStack_58 [4];
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  long local_30;
  int local_28;
  byte local_22;
  byte local_21;
  long *local_20;
  byte local_11;
  
  plVar3 = (long *)auStack_58;
  local_22 = (DAT_005bcc00 * (DAT_005bcc00 + -1) & 1U) == 0;
  local_21 = DAT_005bcc20 < 10;
  local_28 = 0x441bc064;
  local_30 = param_1;
  while( true ) {
    while( true ) {
      local_38 = local_28 + 0x61916684;
      local_34 = local_28;
      if (local_38 != 0) break;
      local_28 = 0x7cd1d13f;
      if ((local_11 & 1) != 0) {
        local_28 = 0x76b2e208;
      }
    }
    local_3c = local_28 + 0x2b8fef31;
    if (local_3c == 0) break;
    local_40 = local_28 + -0x441bc064;
    if (local_40 == 0) {
      local_28 = 0x635eb78d;
      if (((local_22 ^ 0xff ^ local_21 ^ 0xff) & 1) != 0 ||
          (((local_22 ^ 0xff | local_21 ^ 0xff) ^ 0xff) & 1) != 0) {
        local_28 = 0x771e6e4c;
      }
    }
    else {
      local_44 = local_28 + -0x635eb78d;
      if (local_44 == 0) {
        plVar3 = plVar3 + -2;
        *plVar3 = local_30;
        local_28 = 0x771e6e4c;
      }
      else {
        local_48 = local_28 + -0x76b2e208;
        if (local_48 == 0) {
          uVar2 = *(undefined8 *)(*local_20 + 8);
          plVar3[-1] = 0x40bcaa;
          FUN_0040ba90(uVar2);
          uVar2 = *(undefined8 *)(*local_20 + 0x10);
          plVar3[-1] = 0x40bcba;
          FUN_0040ba90(uVar2);
          uVar1 = *(uint *)*local_20;
          plVar3[-1] = 0x40bcd4;
          local_54 = printf("%d ",(ulong)uVar1);
          local_28 = -0x2b8fef31;
        }
        else {
          local_4c = local_28 + -0x771e6e4c;
          if (local_4c == 0) {
            plVar3 = plVar3 + -2;
            *plVar3 = local_30;
            local_11 = *plVar3 != 0;
            bVar4 = (DAT_005bcc00 * (DAT_005bcc00 + -1) & 1U) == 0;
            local_28 = 0x635eb78d;
            local_20 = plVar3;
            if (bVar4 && DAT_005bcc20 < 10 || bVar4 != DAT_005bcc20 < 10) {
              local_28 = -0x61916684;
            }
          }
          else {
            local_50 = local_28 + -0x7cd1d13f;
            if (local_50 == 0) {
              local_28 = -0x2b8fef31;
            }
          }
        }
      }
    }
  }
  return;
}



/* ===== Function: FUN_0040bd10 ===== */

void FUN_0040bd10(void *param_1)

{
  bool bVar1;
  int local_44;
  
  local_44 = -0x478a00a6;
  while( true ) {
    while( true ) {
      while( true ) {
        while (local_44 == -0x5ffc4fe4) {
          FUN_0040bd10(*(undefined8 *)((long)param_1 + 8));
          FUN_0040bd10(*(undefined8 *)((long)param_1 + 0x10));
          free(param_1);
          local_44 = -0x1fbc00d;
        }
        if (local_44 != -0x478a00a6) break;
        local_44 = 0x4e076b1f;
        if (param_1 != (void *)0x0) {
          local_44 = -0x977dce4;
        }
      }
      if (local_44 != -0x977dce4) break;
      bVar1 = (DAT_005bcb90 * (DAT_005bcb90 + -1) & 1U) != 0;
      local_44 = -0x5ffc4fe4;
      if (bVar1 != 9 < DAT_005bcc28 || !bVar1 && 9 >= DAT_005bcc28) {
        local_44 = -0x1fbc00d;
      }
    }
    if (local_44 == -0x47a0f8d) break;
    if (local_44 == -0x1fbc00d) {
      FUN_0040bd10(*(undefined8 *)((long)param_1 + 8));
      FUN_0040bd10(*(undefined8 *)((long)param_1 + 0x10));
      free(param_1);
      bVar1 = (DAT_005bcb90 * (DAT_005bcb90 + -1) & 1U) == 0;
      local_44 = -0x5ffc4fe4;
      if (bVar1 != DAT_005bcc28 < 10 || bVar1 && DAT_005bcc28 < 10) {
        local_44 = 0x1a737700;
      }
    }
    else if (local_44 == 0x1a737700) {
      local_44 = -0x47a0f8d;
    }
    else if (local_44 == 0x4e076b1f) {
      local_44 = -0x47a0f8d;
    }
  }
  return;
}



/* ===== Function: FUN_0040bfa0 ===== */

undefined4 * FUN_0040bfa0(undefined4 param_1)

{
  undefined4 *puVar1;
  int local_24;
  
  puVar1 = (undefined4 *)malloc(0x18);
  local_24 = 0x42c4d62a;
  do {
    while( true ) {
      if (local_24 == 0x1cc954bf) {
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      if (local_24 != 0x42c4d62a) break;
      local_24 = 0x1cc954bf;
      if (puVar1 != (undefined4 *)0x0) {
        local_24 = 0x60449b58;
      }
    }
  } while (local_24 != 0x60449b58);
  *puVar1 = param_1;
  *(undefined8 *)(puVar1 + 2) = 0;
  *(undefined8 *)(puVar1 + 4) = 0;
  return puVar1;
}



/* ===== Function: FUN_0040c080 ===== */

int FUN_0040c080(long param_1,int param_2,int param_3)

{
  bool bVar1;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_24;
  
  local_3c = 0;
  local_40 = param_2 + -1;
  local_48 = 0x308ec32;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while (local_48 == -0x7fe88c78) {
            local_44 = local_3c + (local_40 - local_3c) / 2;
            local_48 = -0x3c805d8d;
            if (*(int *)(param_1 + (long)local_44 * 4) == param_3) {
              local_48 = 0x6cfce85d;
            }
          }
          if (local_48 != -0x7a496f01) break;
          local_48 = -0xc7b9320;
        }
        if (local_48 != -0x4d07e875) break;
        local_24 = -1;
        bVar1 = (DAT_005bcb94 * (DAT_005bcb94 + -1) & 1U) != 0;
        local_48 = 0x5bb98e1b;
        if (bVar1 != 9 < DAT_005bcc18 || !bVar1 && 9 >= DAT_005bcc18) {
          local_48 = -0x7a496f01;
        }
      }
      if (local_48 != -0x3c805d8d) break;
      local_48 = 0x762d2c9;
      if (*(int *)(param_1 + (long)local_44 * 4) < param_3) {
        local_48 = 0x1a30526d;
      }
    }
    if (local_48 == -0xc7b9320) break;
    if (local_48 == 0x308ec32) {
      local_48 = 0xd3c07c9;
      if (local_3c <= local_40) {
        local_48 = -0x7fe88c78;
      }
    }
    else if (local_48 == 0x762d2c9) {
      local_40 = local_44 + -1;
      local_48 = 0xfe69a93;
    }
    else if (local_48 == 0xd3c07c9) {
      bVar1 = (DAT_005bcb94 * (DAT_005bcb94 + -1) & 1U) == 0;
      local_48 = 0x5bb98e1b;
      if (bVar1 != DAT_005bcc18 < 10 || bVar1 && DAT_005bcc18 < 10) {
        local_48 = -0x4d07e875;
      }
    }
    else if (local_48 == 0xfe69a93) {
      local_48 = 0x308ec32;
    }
    else if (local_48 == 0x1a30526d) {
      local_3c = local_44 + 1;
      local_48 = 0xfe69a93;
    }
    else if (local_48 == 0x5bb98e1b) {
      local_24 = -1;
      local_48 = -0x4d07e875;
    }
    else if (local_48 == 0x6cfce85d) {
      local_24 = local_44;
      local_48 = -0xc7b9320;
    }
  }
  return local_24;
}



/* ===== Function: FUN_0040c420 ===== */

int FUN_0040c420(long param_1,long param_2,int param_3)

{
  bool bVar1;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  byte local_31;
  
  local_50 = 0x7fffffff;
  local_54 = -1;
  local_58 = 0;
  local_5c = -0x1ee956c1;
  while( true ) {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while (local_5c == -0x74be5583) {
                local_50 = *(int *)(param_1 + (long)local_58 * 4);
                local_54 = local_58;
                bVar1 = (DAT_005bcb8c * (DAT_005bcb8c + -1) & 1U) == 0;
                local_5c = -0x414e5f4b;
                if (bVar1 && DAT_005bcc1c < 10 || bVar1 != DAT_005bcc1c < 10) {
                  local_5c = -0x36b182f;
                }
              }
              if (local_5c != -0x5d89709c) break;
              local_58 = local_58 + 1;
              local_5c = 0x53b9c9b2;
            }
            if (local_5c != -0x414e5f4b) break;
            local_50 = *(int *)(param_1 + (long)local_58 * 4);
            local_54 = local_58;
            local_5c = -0x74be5583;
          }
          if (local_5c != -0x3baa1af2) break;
          bVar1 = (DAT_005bcb8c * (DAT_005bcb8c + -1) & 1U) == 0;
          local_5c = -0x414e5f4b;
          if (bVar1 != DAT_005bcc1c < 10 || bVar1 && DAT_005bcc1c < 10) {
            local_5c = -0x74be5583;
          }
        }
        if (local_5c != -0x369f96f0) break;
        local_31 = *(int *)(param_1 + (long)local_58 * 4) < local_50;
        bVar1 = (DAT_005bcb8c * (DAT_005bcb8c + -1) & 1U) != 0;
        local_5c = -0x15ea7767;
        if (bVar1 != 9 < DAT_005bcc1c || !bVar1 && 9 >= DAT_005bcc1c) {
          local_5c = 0x6389c398;
        }
      }
      if (local_5c != -0x1ee956c1) break;
      local_5c = -0x1c504c3d;
      if (local_58 < param_3) {
        local_5c = -0xa923a74;
      }
    }
    if (local_5c == -0x1c504c3d) break;
    if (local_5c == -0x15ea7767) {
      local_5c = -0x369f96f0;
    }
    else if (local_5c == -0xe928ee1) {
      local_5c = -0x1ee956c1;
    }
    else if (local_5c == -0xa923a74) {
      local_5c = 0x33ea144b;
      if (*(int *)(param_2 + (long)local_58 * 4) != 0) {
        local_5c = 0x78f01129;
      }
    }
    else if (local_5c == -0x36b182f) {
      local_5c = 0x78f01129;
    }
    else if (local_5c == 0x1be83b7b) {
      bVar1 = (DAT_005bcb8c * (DAT_005bcb8c + -1) & 1U) == 0;
      local_5c = -0x5d89709c;
      if (bVar1 != DAT_005bcc1c < 10 || bVar1 && DAT_005bcc1c < 10) {
        local_5c = 0x53b9c9b2;
      }
    }
    else if (local_5c == 0x33ea144b) {
      bVar1 = (DAT_005bcb8c * (DAT_005bcb8c + -1) & 1U) == 0;
      local_5c = -0x15ea7767;
      if (bVar1 != DAT_005bcc1c < 10 || bVar1 && DAT_005bcc1c < 10) {
        local_5c = -0x369f96f0;
      }
    }
    else if (local_5c == 0x53b9c9b2) {
      local_58 = local_58 + 1;
      bVar1 = (DAT_005bcb8c * (DAT_005bcb8c + -1) & 1U) == 0;
      local_5c = -0x5d89709c;
      if (bVar1 && DAT_005bcc1c < 10 || bVar1 != DAT_005bcc1c < 10) {
        local_5c = -0xe928ee1;
      }
    }
    else if (local_5c == 0x6389c398) {
      local_5c = 0x78f01129;
      if ((local_31 & 1) != 0) {
        local_5c = -0x3baa1af2;
      }
    }
    else if (local_5c == 0x78f01129) {
      local_5c = 0x1be83b7b;
    }
  }
  return local_54;
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


