#include <stdio.h>

int main() {
  printf("Enter two numbers: ");

  int a, b;

  scanf("%d %d", &a, &b);

  printf("%d + %d = %d", a, b, a + b);

  return 0;
}