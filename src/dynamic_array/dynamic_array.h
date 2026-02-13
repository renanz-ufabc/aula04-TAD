#ifndef MATRIX_H
#define MATRIX_H
#include <stdlib.h>


typedef struct DynamicArray DynamicArray;


DynamicArray * dynamicArray_create();
void dynamicArray_destroy(DynamicArray * dynamicArray);

int dynamicArray_get(const DynamicArray * dynamicArray, size_t index);
size_t dynamicArray_size(const DynamicArray * dynamicArray);
size_t dynamicArray_capacity(const DynamicArray * dynamicArray);
void dynamicArray_set(DynamicArray * dynamicArray, size_t index, int value);

void dynamicArray_print(const DynamicArray * dynamicArray);
void dynamicArray_add(DynamicArray * dynamicArray, int value);


#endif
