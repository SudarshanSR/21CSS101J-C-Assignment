#include <stdio.h>

int main() {
  printf("Enter number of elements: ");

  size_t n;

  scanf("%lu", &n);

  int arr[n] = {};

  printf("Enter the elements: ");

  for (size_t i = 0; i < n; ++i)
    scanf("%d", arr + i);

  size_t count = 0;

  for (size_t i = 0; i < n; ++i, ++count)
    ;

  printf("The number of elements is: %lu", count);

  return 0;
}