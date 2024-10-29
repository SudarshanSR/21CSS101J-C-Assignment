#include <stdio.h>

int main() {
  printf("Enter number of elements: ");

  int n;

  scanf("%d", &n);

  printf("Enter elements: ");

  int arr[n] = {};

  for (int i = 0; i < n; ++i)
    scanf("%d", arr + i);

  for (int *start = arr; start < arr + n; ++start) {
    for (int *p = start + 1; p < arr + n; ++p) {
      if (*p >= *start)
        continue;

      int x = *start;
      *start = *p;
      *p = x;
    }
  }

  printf("Sorted arr is: ");

  for (int i = 0; i < n; ++i)
    printf("%d ", arr[i]);

  return 0;
}