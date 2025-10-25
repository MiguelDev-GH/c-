#ifndef MACRO_H
#define MACRO_H

#include <stdio.h>
#include <stdlib.h>

#define print(fmt, ...) printf(fmt, ##__VA_ARGS__); printf("\n")

#define repeat(qntd,codigo) for(int i = 0; i < qntd;i++){codigo}

#define arrSize(array) (sizeof(array) / sizeof(array[0]))

#define index(array, n) ({ \
    int __result = -1; \
    for(int i = 0; i < arrSize(array); i++){ \
        if(array[i] == n){ \
            __result = i;\
            break; \
        } \
    } \
    __result; \
})

#endif