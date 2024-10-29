#include <stdio.h>

size_t search(int *arr, size_t start, size_t end, int target);

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

  size_t index = search(arr, 0, n - 1, target);

  if (index == -1) {
    printf("%d is not in the source array!", target);
  } else {
    printf("%d is at index %lu in the source array!", target, index);
  }

  return 0;
}

size_t search(int *arr, size_t start, size_t end, int target) {
  size_t mid = (start + end) / 2;

  if (arr[mid] == target)
    return mid;

  if (start == end)
    return -1;

  if (arr[mid] < target)
    return search(arr, mid + 1, end, target);

  return search(arr, start, mid - 1, target);
}