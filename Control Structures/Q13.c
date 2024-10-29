#include <stdio.h>

int main() {
  printf("Enter a number: ");

  int n;

  scanf("%d", &n);

  printf("Enter number of multiples: ");

  unsigned int m;

  scanf("%u", &m);

  for (unsigned int i = 1; i <= m; ++i)
    printf("%u * %d is %d", i, n, i * n);

  return 0;
}