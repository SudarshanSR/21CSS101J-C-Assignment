#include <stdio.h>

int main() {
  printf("Enter two numbers: ");

  int a, b;

  scanf("%d %d", &a, &b);

  printf("Before swapping:\n a = %d\n b = %d\n\n", a, b);

  a += b;
  b = a - b;
  a -= b;

  printf("After swapping:\n a = %d\n b = %d", a, b);

  return 0;
}