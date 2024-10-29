#include <stdio.h>

int main() {
  printf("Enter two numbers: ");

  int a, b;

  scanf("%d %d", &a, &b);

  printf("Before swapping:\n a = %d\n b = %d\n\n", a, b);

  int const c = a;

  a = b;
  b = c;

  printf("After swapping:\n a = %d\n b = %d", a, b);

  return 0;
}