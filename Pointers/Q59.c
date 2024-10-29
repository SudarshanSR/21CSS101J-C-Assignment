#include <stdio.h>

int main() {
  printf("Enter number of elements: ");

  int n;

  scanf("%d", &n);

  printf("Enter elements: ");

  int arr[n] = {};

  for (int i = 0; i < n; ++i)
    scanf("%d", arr + i);

  int sum = 0;

  for (int *start = arr; start < arr + n; ++start)
    sum += *start;

  printf("Sum of elements is: %d", sum);

  return 0;
}