#include <stdio.h>

struct Complex {
  double real;
  double imag;
} typedef Complex;

Complex add(Complex lhs, Complex rhs) {
  Complex result;
  result.real = lhs.real + rhs.real;
  result.imag = lhs.imag + rhs.imag;

  return result;
}

int main() {
  printf("Enter real and imag part of first number: ");

  Complex lhs;

  scanf("%lf %lf", &lhs.real, &lhs.imag);

  printf("Enter real and imag part of second number: ");

  Complex rhs;

  scanf("%lf %lf", &rhs.real, &rhs.imag);

  Complex sum = add(lhs, rhs);

  printf("(%lf + (%lf)i) + (%lf + (%lf)i) = %lf + (%lf)i", lhs.real, lhs.imag,
         rhs.real, rhs.imag, sum.real, sum.imag);

  return 0;
}