#include <stdbool.h>
#include <stdio.h>

enum Symmetric { True, False, Invalid } typedef Symmetric;

Symmetric is_symmetric(int rows, int cols, int m[rows][cols]);

int main() {
  printf("Enter number of rows and columns: ");

  int rows, cols;

  scanf("%d %d", &rows, &cols);

  int m[rows][cols] = {};

  printf("Enter elements of matrix: ");

  for (int row = 0; row < rows; ++row) {
    for (int col = 0; col < cols; ++col) {
      scanf("%d", &(m[row][col]));
    }
  }

  switch (is_symmetric(rows, cols, m)) {
  case True:
    printf("It is symmetric!");
    break;

  case False:
    printf("It is not symmetric!");
    break;

  case Invalid:
    printf("It is not a square matrix!");
    break;
  }

  return 0;
}

Symmetric is_symmetric(int rows, int cols, int m[rows][cols]) {
  if (rows != cols)
    return Invalid;

  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      if (i == j)
        continue;

      if (m[i][j] != m[j][i])
        return False;
    }
  }

  return True;
}