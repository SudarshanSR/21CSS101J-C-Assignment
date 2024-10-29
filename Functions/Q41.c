#include <stdio.h>

unsigned long factorial(unsigned int num) {
  if (num == 0 || num == 1)
    return 1;

  return num * factorial(num - 1);
}

int main() {
  printf("Enter a number: ");

  int num;

  scanf("%d", &num);

  printf("%d! is %lu", num, factorial(num));

  return 0;
}