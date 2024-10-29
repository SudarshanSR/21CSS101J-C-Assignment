#include <stdint.h>
#include <stdio.h>

int main() {
  printf("Enter number of elements of first array: ");

  size_t m;

  scanf("%lu", &m);

  int first[m] = {};

  printf("Enter the elements: ");

  for (size_t i = 0; i < m; ++i)
    scanf("%d", first + i);

  printf("Enter number of elements of second array: ");

  size_t n;

  scanf("%lu", &n);

  int second[m] = {};

  printf("Enter the elements: ");

  for (size_t i = 0; i < n; ++i)
    scanf("%d", second + i);

  int result[m + n] = {};

  for (size_t i = 0; i < m; ++i)
    result[i] = first[i];

  for (size_t i = 0; i < n; ++i)
    result[i + m] = second[i];

  printf("The merged array is:\n");

  for (size_t i = 0; i < m + n; ++i)
    printf("%d ", result[i]);

  return 0;
}