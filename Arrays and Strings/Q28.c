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

  int max = INT32_MIN;

  for (size_t i = 0; i < n; ++i) {
    if (arr[i] < max)
      continue;

    max = arr[i];
  }

  size_t freq[max] = {};

  for (size_t i = 0; i < n; ++i)
    ++freq[arr[i] - 1];

  printf("Frequency of elements is: \n");

  for (size_t i = 0; i < sizeof(freq) / sizeof(freq[0]); ++i) {
    if (!freq[i])
      continue;

    printf("%lu : %lu\n", i + 1, freq[i]);
  }

  return 0;
}