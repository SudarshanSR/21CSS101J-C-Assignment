#include <stdio.h>
#include <stdlib.h>

int **sum(int rows, int cols, int m1[rows][cols], int m2[rows][cols]) {
  int **result = (int **)malloc(sizeof(int *) * rows);

  for (int row = 0; row < rows; ++row) {
    result[row] = (int *)malloc(sizeof(int) * cols);

    for (int col = 0; col < cols; ++col) {
      result[row][col] = m1[row][col] + m2[row][col];
    }
  }

  return result;
}

int main() {
  printf("Enter number of rows and columns: ");

  int rows, cols;

  scanf("%d %d", &rows, &cols);

  int m1[rows][cols] = {}, m2[rows][cols] = {};

  printf("Enter elements of first matrix: ");

  for (int row = 0; row < rows; ++row) {
    for (int col = 0; col < cols; ++col) {
      scanf("%d", &(m1[row][col]));
    }
  }

  printf("Enter elements of second matrix: ");

  for (int row = 0; row < rows; ++row) {
    for (int col = 0; col < cols; ++col) {
      scanf("%d", &(m2[row][col]));
    }
  }

  printf("Sum of these two matrices is: ");

  int **result = sum(rows, cols, m1, m2);

  for (int row = 0; row < rows; ++row) {
    for (int col = 0; col < cols; ++col) {
      printf("%d ", result[row][col]);
    }

    printf("\n");
  }

  for (int row = 0; row < rows; ++row)
    free(result[row]);

  free(result);

  return 0;
}