#ifndef __INC_6502_H
#define __INC_6502_H

#include "6502debug.h"

extern uint8_t a,x,y,s;
extern uint16_t pc;

extern PREG p;

extern int output;
extern int interrupt;
extern int nmi;

extern int romsel;
extern uint8_t ram1k, ram4k, ram8k;

void m6502_reset(void);
void m6502_exec(void);
void m65c02_exec(void);
void dumpregs(void);
void m6502_update_swram(void);

uint8_t readmem(uint16_t addr);
void writemem(uint16_t addr, uint8_t val);

void m6502_savestate(FILE *f);
void m6502_loadstate(FILE *f);

extern cpu_debug_t core6502_cpu_debug;

void os_paste_start(char *str);

#endif
