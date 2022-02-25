#ifndef CHIP8_H
#define CHIP8_H

#include "config.h"
#include "chip8memory.h"
#include "chip8registers.h"

struct chip8
{
    struct chip8_memory memory;
    struct chip8_registers registers;
};

//void chip8_memory_set(struct chip8_memory* memory, int index, unsigned char val);
//unsigned char chip8_memory_get(struct chip8_memory* memory, int index);

#endif