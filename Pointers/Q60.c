#include <stdio.h>

int main() {
  int arr[2] = {1, 2};

  printf("Address of first element (arr + 0) %d is %p\n", arr[0], arr);
  printf("Address of second elemnt (arr + 1) %d is %p\n", arr[1], arr + 1);

  return 0;
}