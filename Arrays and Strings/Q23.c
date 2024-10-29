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

  unsigned long sum = 0;

  for (size_t i = 0; i < n; sum += arr[i++])
    ;

  printf("The sum of elements is: %lu", sum);

  return 0;
}