#include <stdio.h>

int main() {
  printf("Enter two numbers: ");

  int a, b;

  scanf("%d %d", &a, &b);

  printf("Maximum of %d and %d is %d", a, b, a > b ? a : b);

  return 0;
}