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

  int max = INT32_MIN, second_max = INT32_MIN;

  for (size_t i = 0; i < n; ++i) {
    if (arr[i] > max) {
      second_max = max;
      max = arr[i];
    } else if (arr[i] > second_max) {
      second_max = arr[i];
    }
  }

  printf("The second maximum element is: %d", second_max);

  return 0;
}