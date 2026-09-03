#ifndef _ARRARY_H_
#define _ARRARY_H_
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
const int BLOCK_SIZE=20;
typedef struct {
    int* array;
    int size;
} Array;
Array  array_creat(int init_sieze);
void array_free(Array* a);
int array_at(Array* a,int index);
int array_get(const Array *a,int index);
void array_set(Array *a,int index,int value);
void array_inflate(Array *a,int more_size);
#endif
