#include "dynamic_array.h"
#include <stdio.h>


struct DynamicArray
{
    int * data;
    size_t size;
    size_t capacity;
};


void dynamicArray_resize(DynamicArray * dynamicArray, size_t newCapacity)
{
    int * newData = realloc(dynamicArray->data, newCapacity * sizeof(int));
    if (newData != NULL)
    {
        dynamicArray->data = newData;
        dynamicArray->capacity = newCapacity;
    }
}


DynamicArray * dynamicArray_create()
{
    DynamicArray * dynArray = malloc(sizeof(DynamicArray));
    dynArray->capacity = 1;
    dynArray->size = 0;
    dynArray->data = calloc(dynArray->capacity, sizeof(int));

    return dynArray;
}
void dynamicArray_destroy(DynamicArray * dynamicArray)
{
    free(dynamicArray->data);
    free(dynamicArray);
}

int dynamicArray_get(const DynamicArray * dynamicArray, size_t index)
{
    if (index < 0) { index = 0; }
    if (index > dynamicArray->size - 1) { index = dynamicArray->size - 1; }

    return dynamicArray->data[index];
}
size_t dynamicArray_size(const DynamicArray * dynamicArray)
{
    return dynamicArray->size;
}
size_t dynamicArray_capacity(const DynamicArray * dynamicArray)
{
    return dynamicArray->capacity;
}
void dynamicArray_set(DynamicArray * dynamicArray, size_t index, int value)
{
    if (index < 0) { index = 0; }
    if (index > dynamicArray->size - 1) { index = dynamicArray->size - 1; }

    dynamicArray->data[index] = value;
}

void dynamicArray_print(const DynamicArray * dynamicArray)
{
    printf("[ ");
    for (size_t i = 0; i < dynamicArray->size; i++)
    {
        printf("%d ", dynamicArray->data[i]);
    }
    printf("]");
}
void dynamicArray_add(DynamicArray * dynamicArray, int value)
{
    if (dynamicArray->size >= dynamicArray->capacity)
    {
        dynamicArray_resize(dynamicArray, 2 * dynamicArray->capacity);
    }
    dynamicArray->data[dynamicArray->size++] = value;
}
void dynamicArray_remove(DynamicArray * dynamicArray, size_t index)
{
    if (index < 0) { index = 0; }
    if (index > dynamicArray->size - 1) { index = dynamicArray->size - 1; }

    for (size_t i = index; i < dynamicArray->size - 1; i++)
    {
        dynamicArray->data[i] = dynamicArray->data[i + 1];
    }
    dynamicArray->size--;
}
