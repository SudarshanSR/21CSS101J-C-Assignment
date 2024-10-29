#include <stdio.h>

int main() {
  printf("Enter a number: ");

  int x;

  scanf("%d", &x);

  printf("x holds: %d\n", x);

  int *pX = &x;

  printf("Pointer to x holds: %p\n", pX);

  return 0;
}