#include <stdbool.h>
#include <stdio.h>

int main() {
  printf("Enter start: ");

  int start;

  scanf("%d", &start);

  printf("Enter a number: ");

  int end;

  scanf("%d", &end);

  bool array[end] = {};

  for (int i = 0; i < end; ++i)
    array[i] = 1;

  for (int i = 2; i < end; ++i) {
    if (!array[i - 1])
      continue;

    for (int num = 2 * i; num <= end; num += i)
      array[num - 1] = 0;
  }

  printf("The primes are: \n");

  for (int i = start; i < end; ++i) {
    if (!array[i - 1])
      continue;

    printf("%d ", array[i]);
  }

  return 0;
}