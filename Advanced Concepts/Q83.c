#include <stdio.h>

size_t search(int *arr, size_t n, int target);

int main() {
  printf("Enter number of elements: ");

  size_t n;

  scanf("%lu", &n);

  int arr[n] = {};

  printf("Enter elements: ");

  for (size_t i = 0; i < n; ++i)
    scanf("%d", arr + i);

  printf("Enter target: ");

  int target;

  scanf("%d", &target);

  size_t index = search(arr, n, target);

  if (index == -1) {
    printf("%d is not in the source array!", target);
  } else {
    printf("%d is at index %lu in the source array!", target, index);
  }

  return 0;
}

size_t search(int *arr, size_t n, int target) {
  for (size_t i = 0; i < n; ++i) {
    if (arr[i] == target)
      return i;
  }

  return -1;
}