#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int n = 100;

  bool array[n] = {};

  for (int i = 0; i < n; ++i)
    array[i] = 1;

  for (int i = 2; i < n; ++i) {
    if (!array[i - 1])
      continue;

    for (int num = 2 * i; num <= n; num += i)
      array[num - 1] = 0;
  }

  for (int i = 2; i <= 100; ++i)
    if (array[i - 1])
      printf("%d\n", i);

  return 0;
}