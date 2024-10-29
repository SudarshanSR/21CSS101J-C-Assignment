#include <math.h>
#include <stdbool.h>
#include <stdio.h>

struct Complex {
  double real;
  double imag;
} typedef Complex;

bool predicate(Complex lhs, Complex rhs) {
  // Sorts by distance from origin

  if (lhs.real == rhs.real && lhs.imag == rhs.imag)
    return true;

  double lhs_d = sqrt(lhs.real * lhs.real + lhs.imag * lhs.imag);
  double rhs_d = sqrt(rhs.real * rhs.real + rhs.imag * rhs.imag);

  if (lhs_d < rhs_d)
    return true;

  if (lhs_d > rhs_d)
    return false;

  if (lhs.real < rhs.real)
    return true;

  if (lhs.real > rhs.real)
    return false;

  return lhs.imag < rhs.imag;
}

int main() {
  Complex arr[3] = {{2, 1}, {1, 2}, {1, 1}};

  printf("Before sorting: \n");

  for (int i = 0; i < 3; ++i) {
    printf("(%lf) + (%lf)i \n", arr[i].real, arr[i].imag);
  }

  for (int i = 0; i < 3; ++i) {
    for (int j = i + 1; j < 3; ++j) {
      if (predicate(arr[i], arr[j]))
        continue;

      Complex temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
  }

  printf("After sorting: \n");

  for (int i = 0; i < 3; ++i) {
    printf("(%lf) + (%lf)i \n", arr[i].real, arr[i].imag);
  }

  return 0;
}