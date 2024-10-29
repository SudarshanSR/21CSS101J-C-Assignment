#include <stdio.h>
#include <stdlib.h>

int **multiply(int rows_1, int common, int cols_2, int **m1, int **m2) {
  int **result = (int **)malloc(sizeof(int *) * rows_1);

  for (int row = 0; row < rows_1; ++row) {
    result[row] = (int *)malloc(sizeof(int) * cols_2);

    for (int col = 0; col < cols_2; ++col) {
      result[row][col] = 0;

      for (int i = 0; i < common; ++i) {
        result[row][col] += m1[row][i] * m2[i][col];
      }
    }
  }

  return result;
}

int main() {
  printf("Enter number of rows of first matrix, common dimension, and columns "
         "of second matrix: ");

  int rows_1, common, cols_2;

  scanf("%d %d %d", &rows_1, &common, &cols_2);

  int **m1 = (int **)malloc(sizeof(int *) * rows_1);

  printf("Enter elements of first matrix: ");

  for (int row = 0; row < rows_1; ++row) {
    m1[row] = (int *)malloc(sizeof(int) * common);

    for (int col = 0; col < common; ++col) {
      scanf("%d", &(m1[row][col]));
    }
  }

  int **m2 = (int **)malloc(sizeof(int *) * common);

  printf("Enter elements of second matrix: ");

  for (int row = 0; row < common; ++row) {
    m2[row] = (int *)malloc(sizeof(int) * cols_2);

    for (int col = 0; col < cols_2; ++col) {
      scanf("%d", &(m2[row][col]));
    }
  }

  printf("Sum of these two matrices is: ");

  int **result = multiply(rows_1, common, cols_2, m1, m2);

  for (int row = 0; row < rows_1; ++row) {
    for (int col = 0; col < cols_2; ++col) {
      printf("%d ", result[row][col]);
    }

    printf("\n");
  }

  for (int row = 0; row < rows_1; ++row) {
    free(m1[row]);
    free(result[row]);
  }

  for (int row = 0; row < common; ++row)
    free(m2[row]);

  free(m1);
  free(m2);
  free(result);

  return 0;
}