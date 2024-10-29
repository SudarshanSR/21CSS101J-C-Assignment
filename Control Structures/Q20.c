#include <stdio.h>

int main() {
  printf("Enter two numbers: ");

  int a, b;

  scanf("%d %d", &a, &b);

  int greater, smaller;

  if (a > b) {
    greater = a;
    smaller = b;
  } else {
    greater = b;
    smaller = a;
  }

  if (greater % smaller == 0) {
    printf("GCD of %d and %d is %d", a, b, smaller);

    return 0;
  }

  int gcd = 1;

  for (int i = smaller / 2 + 1; i >= 1; ++i) {
    if (greater % i || smaller % i)
      break;

    gcd = i;
  }

  printf("GCD of %d and %d is %d", a, b, gcd);

  return 0;
}