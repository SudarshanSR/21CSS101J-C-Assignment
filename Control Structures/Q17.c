#include <stdio.h>

int main() {
  printf("Enter three numbers: ");

  int a, b, c;

  scanf("%d %d %d", &a, &b, &c);

  if (a > b) {
    printf("%d is the largest!", c > a ? c : a);
  } else {
    printf("%d is the largest!", c > b ? c : b);
  }

  return 0;
}