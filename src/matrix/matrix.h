#ifndef MATRIX_H
#define MATRIX_H
#include <stdlib.h>


typedef struct Matrix Matrix;


Matrix * matrix_create(size_t rows, size_t cols);
void matrix_destroy(Matrix * matrix);

double matrix_get(const Matrix * matrix, size_t row, size_t col);
size_t matrix_rows(const Matrix * matrix);
size_t matrix_cols(const Matrix * matrix);
void matrix_set(Matrix * matrix, size_t row, size_t col, double value);

void matrix_print(const Matrix * matrix);


#endif
