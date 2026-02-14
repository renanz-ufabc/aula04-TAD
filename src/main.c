#include <stdio.h>
#include "dynamic_array/dynamic_array.h"
#include "matrix/matrix.h"

int main()
{    
    Matrix * m = matrix_create(3, 3);
    for (size_t i = 0; i < matrix_rows(m); i++) for (size_t j = 0; j < matrix_cols(m); j++)
    {
        matrix_set(m, i, j, i * matrix_cols(m) + j + 1);
    }

    matrix_print(m);
    matrix_destroy(m);

    printf("\n\n");

    DynamicArray * a = dynamicArray_create();
    for (size_t i = 1; i <= 5; i++)
    {
        dynamicArray_add(a, i);
    }
    dynamicArray_remove(a, 2);

    printf("array: ");
    dynamicArray_print(a);
    printf("\nsize: %lu  capacity: %lu\n", dynamicArray_size(a), dynamicArray_capacity(a));
    dynamicArray_destroy(a);

    return 0;
}
