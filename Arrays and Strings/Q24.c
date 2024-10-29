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

  int rev[n] = {};

  for (size_t i = 0; i < n; ++i)
    rev[n - i - 1] = arr[i];

  printf("The reversed array is:\n");

  for (size_t i = 0; i < n; ++i)
    printf("%d ", rev[i]);

  return 0;
}