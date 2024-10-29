#include <stdio.h>
#include <stdlib.h>

unsigned long sum(unsigned int num) {
  if (num == 0)
    return num;

  div_t s = div(num, 10);

  return s.rem + sum(s.quot);
}

int main() {
  printf("Enter number: ");

  unsigned int num;

  scanf("%u", &num);

  printf("Sum of digits of %u is %lu", num, sum(num));

  return 0;
}