#include "matrix.h"
#include <stdio.h>


struct Matrix
{
    double ** data;
    size_t rows;
    size_t cols;
};


Matrix * matrix_create(size_t rows, size_t cols)
{
    Matrix * matrix = malloc(sizeof(Matrix));
    matrix->data = malloc(rows * sizeof(double *));
    for (size_t i = 0; i < rows; i++)
    {
        matrix->data[i] = calloc(cols, sizeof(double));
    }
    matrix->rows = rows;
    matrix->cols = cols;

    return matrix;
}
void matrix_destroy(Matrix * matrix)
{
    for (size_t i = 0; i < matrix->rows; i++)
    {
        free(matrix->data[i]);
    }
    free(matrix->data);
    free(matrix);
}

double matrix_get(const Matrix * matrix, size_t row, size_t col)
{
    if (row < 0) { row = 0; }
    if (row > matrix->rows - 1) { row = matrix->rows - 1; }
    if (col < 0) { col = 0; }
    if (col > matrix->cols - 1) { col = matrix->cols - 1; }

    return matrix->data[row][col];
}
size_t matrix_rows(const Matrix * matrix)
{
    return matrix->rows;
}
size_t matrix_cols(const Matrix * matrix)
{
    return matrix->cols;
}
void matrix_set(Matrix * matrix, size_t row, size_t col, double value)
{
    if (row < 0) { row = 0; }
    if (row > matrix->rows - 1) { row = matrix->rows - 1; }
    if (col < 0) { col = 0; }
    if (col > matrix->cols - 1) { col = matrix->cols - 1; }
    
    matrix->data[row][col] = value;
}

void matrix_print(const Matrix * matrix)
{
    for (size_t i = 0; i < matrix->rows; i++)
    {
        for (size_t j = 0; j < matrix->cols; j++)
        {
            printf("%.2lf ", matrix->data[i][j]);
        }
        printf("\n");
    }
}
