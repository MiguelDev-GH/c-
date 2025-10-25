#ifndef MACRO_H
#define MACRO_H

#include <stdio.h>
#include <stdlib.h>

#define print(fmt, ...) printf(fmt, ##__VA_ARGS__); printf("\n")

#define repeat(qntd,codigo) for(int i = 0; i < qntd;i++){codigo}

#endif