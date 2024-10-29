#include <stdio.h>

int main() {
  printf("Enter a number: ");

  unsigned int n;

  scanf("%d", &n);

  unsigned long factorial = 1;

  for (unsigned int i = 1; i <= n; ++i)
    factorial *= i;

  printf("Factorial of %u is %lu", n, factorial);

  return 0;
}