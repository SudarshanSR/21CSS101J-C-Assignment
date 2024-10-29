#include <stdio.h>

int main() {
  printf("Enter number of elements: ");

  size_t n;

  scanf("%lu", &n);

  int arr[n] = {};

  printf("Enter the elements: ");

  for (size_t i = 0; i < n; ++i)
    scanf("%d", arr + i);

  for (size_t i = 0; i < n; ++i)
    for (size_t j = i + 1; j < n; ++j) {
      if (arr[j] <= arr[i])
        continue;

      int temp = arr[j];
      arr[j] = arr[i];
      arr[i] = temp;
    }

  printf("The sorted array is: ");

  for (size_t i = 0; i < n; ++i)
    printf("%d ", arr[i]);

  return 0;
}