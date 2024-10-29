#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("Enter a number: ");

  int n;

  scanf("%d", &n);

  int const copy = n;
  int sum = 0;

  while (n != 0) {
    div_t temp = div(n, 10);

    sum += temp.rem;
    n = temp.quot;
  }

  printf("Sum of digits in %d is %d", copy, sum);

  return 0;
}