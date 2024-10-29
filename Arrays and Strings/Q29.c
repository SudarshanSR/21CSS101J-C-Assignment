#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

int main() {
  printf("Enter number of elements: ");

  size_t n;

  scanf("%lu", &n);

  int arr[n] = {};

  printf("Enter the elements: ");

  for (size_t i = 0; i < n; ++i)
    scanf("%d", arr + i);

  int max = INT32_MIN;

  for (size_t i = 0; i < n; ++i) {
    if (arr[i] < max)
      continue;

    max = arr[i];
  }

  bool found[max] = {};

  int unique[n] = {};

  int j = 0;

  for (size_t i = 0; i < n; ++i) {
    if (found[arr[i] - 1])
      continue;

    found[arr[i] - 1] = true;

    unique[j++] = arr[i];
  }

  printf("Unique elements are: \n");

  for (size_t i = 0; i < j; ++i)
    printf("%d ", unique[i]);

  return 0;
}