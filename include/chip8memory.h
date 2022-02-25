#ifndef CHIP8MEMORY_H
#define CHIP8MEMORY_H

#include "config.h"

struct chip8_memory
{
    unsigned char memory[CHIP8_MEMORY_SIZE];
};

static void chip8_is_memory_in_bounds(int index);
void chip8_memory_set(struct chip8_memory* memory, int index, unsigned char val);
unsigned char chip8_memory_get(struct chip8_memory* memory, int index);

#endif