#include <stdbool.h>
#include <stdio.h>

bool is_prime(int n);

int main() {
  int n;

  printf("Enter a number: ");
  scanf("%d", &n);

  if (is_prime(n))
    printf("%d is a prime\n", n);
  else
    printf("%d is not a prime\n", n);

  return 0;
}

bool is_prime(int const n) {
  bool array[n] = {};

  for (int i = 0; i < n; ++i)
    array[i] = 1;

  for (int i = 2; i < n; ++i) {
    if (!array[i - 1])
      continue;

    for (int num = 2 * i; num <= n; num += i)
      array[num - 1] = 0;
  }

  return array[n - 1];
}
