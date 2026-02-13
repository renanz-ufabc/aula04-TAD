#include <stdio.h>
#include "matrix/matrix.h"

int main(void)
{    
    Matrix * m = matrix_create(3, 3);

    for (size_t i = 0; i < matrix_rows(m); i++) for (size_t j = 0; j < matrix_cols(m); j++)
    {
        matrix_set(m, i, j, i * matrix_cols(m) + j + 1);
    }

    matrix_print(m);

    matrix_destroy(m);

    return 0;
}
