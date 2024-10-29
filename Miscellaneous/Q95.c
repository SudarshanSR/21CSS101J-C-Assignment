#include <stdio.h>

int main() {
  printf("Enter number of terms: ");

  unsigned int n;

  scanf("%u", &n);

  unsigned int arr[n] = {};

  arr[0] = 0;
  arr[1] = 1;

  printf("The series is: \n");

  printf("%u %u ", arr[0], arr[1]);

  for (unsigned int i = 2; i < n; ++i) {
    arr[i] = arr[i - 1] + arr[i - 2];

    printf("%u ", arr[i]);
  }

  return 0;
}