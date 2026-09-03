#include "Array.h"
Array  array_creat(int init_sieze){
    Array a;
    a.size=init_sieze;
    a.array=(int*)malloc(sizeof(int)*a.size);
    return a;
}
void array_free(Array* a){
    free(a->array);
    a->size=0;
    a->array=NULL;
}
int array_size(const Array* a){
    return a->size;
}
int array_at(Array *a,int index){
    if(index<=a->size){
        array_inflate(a,(index/BLOCK_SIZE+1)*BLOCK_SIZE-a->size);
    }
    return a->array[index];
}
int array_get(const Array *a,int index){
    return a->array[index];
}
void array_set(Array *a,int index,int value){
    a->array[index]=value;
}
void array_inflate(Array *a,int more_size){
    int *p = (int*)malloc(sizeof(int) * (a->size + more_size));
    int i=0;
    memcpy(p,a->array,sizeof(int)*a->size);
    free (a->array);
    a->array=p;
    a->size+=more_size;
}
 
