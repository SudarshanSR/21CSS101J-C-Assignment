#include <stdio.h>

void sort(int *arr, size_t n);

int main() {
  printf("Enter number of elements: ");

  size_t n;

  scanf("%lu", &n);

  int arr[n] = {};

  printf("Enter elements: ");

  for (size_t i = 0; i < n; ++i)
    scanf("%d", arr + i);

  printf("Before sorting: ");

  for (size_t i = 0; i < n; ++i)
    printf("%d ", arr[i]);

  sort(arr, n);

  printf("After sorting: ");

  for (size_t i = 0; i < n; ++i)
    printf("%d ", arr[i]);

  return 0;
}

void sort(int *arr, size_t n) {
  for (size_t i = 0; i < n; ++i) {
    for (size_t j = i + 1; j < n; ++j) {
      if (arr[j] >= arr[i])
        continue;

      int copy = arr[i];

      arr[i] = arr[j];
      arr[j] = copy;
    }
  }
}