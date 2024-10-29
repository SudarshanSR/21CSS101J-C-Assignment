#include <stdio.h>

int gcd(int a, int b) {
  if (b == 0)
    return a;

  return gcd(b, a % b);
}

int main() {
  printf("Enter two numbers: ");

  int a, b;

  scanf("%d %d", &a, &b);

  printf("GCD of %d and %d is %d", a, b, gcd(a, b));

  return 0;
}