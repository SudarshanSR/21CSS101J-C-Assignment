#include <stdbool.h>
#include <stdio.h>

int main() {
  int n;

  printf("Enter a number: ");
  scanf("%d", &n);

  bool array[n] = {};

  for (int i = 0; i < n; ++i)
    array[i] = 1;

  for (int i = 2; i < n; ++i) {
    if (!array[i - 1])
      continue;

    for (int num = 2 * i; num <= n; num += i)
      array[num - 1] = 0;
  }

  if (array[n - 1])
    printf("%d is a prime\n", n);
  else
    printf("%d is not a prime\n", n);

  return 0;
}