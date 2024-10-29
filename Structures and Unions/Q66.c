#include <stdio.h>

struct Complex {
  double real;
  double imag;
} typedef Complex;

int main() {
  printf("Members of Complex struct are 2 doubles\n");
  printf("Size of two doubles is: %lu", sizeof(double) + sizeof(double));
  printf("Size of Complex is: %lu", sizeof(Complex));

  return 0;
}