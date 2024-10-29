#include <stdio.h>

int lcm(int a, int b) {
  int rem = a % b;

  if (rem == 0)
    return a;

  return a * lcm(b, rem) / rem;
}

int main() {
  printf("Enter two numbers: ");

  int a, b;

  scanf("%d %d", &a, &b);

  printf("lcm of %d and %d is %d", a, b, lcm(a, b));

  return 0;
}