#include <stdio.h>

int main() {
  printf("Enter a number: ");

  int n;

  scanf("%d", &n);

  printf("%d is %s", n, n % 2 ? "odd" : "even");

  return 0;
}