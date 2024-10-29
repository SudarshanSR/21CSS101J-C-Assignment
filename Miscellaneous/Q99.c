#include <stdio.h>

int main() {
  printf("Enter first term: ");

  double a;

  scanf("%lf", &a);

  printf("Enter difference: ");

  double d;

  scanf("%lf", &d);

  printf("Enter number of terms: ");

  unsigned int n;

  scanf("%u", &n);

  double sum = n / 2.0 * (2 * a + (n - 1) * d);

  printf("The sum of the series is: %lf", sum);

  return 0;
}