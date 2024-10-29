#include <stdio.h>

int main() {
  printf("Enter number: ");

  unsigned int n;

  scanf("%u", &n);

  unsigned long sum = 0;

  for (unsigned int i = 1; i <= n; sum += i++)
    ;

  printf("Sum of first %u natural numbers is %lu", n, sum);

  return 0;
}