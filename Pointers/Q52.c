#include <stdio.h>

void swap(int *pX, int *pY) {
  int temp = *pX;
  *pX = *pY;
  *pY = temp;
}

int main() {
  printf("Enter two numbers: ");

  int x, y;

  scanf("%d %d", &x, &y);

  printf("Before swapping: \n");
  printf("x = %d, y = %d\n", x, y);

  swap(&x, &y);

  printf("After swapping: \n");
  printf("x = %d, y = %d\n", x, y);

  return 0;
}