#include <stdio.h>

double power(double base, int p) {
  if (p == 0)
    return 1;

  if (p < 0)
    return 1.0 / power(base, -p);

  return base * power(base, p - 1);
}

int main() {
  printf("Enter base and exponent: ");

  double base;
  int p;

  scanf("%lf %d", &base, &p);

  printf("%lf ^ %d = %lf", base, p, power(base, p));

  return 0;
}