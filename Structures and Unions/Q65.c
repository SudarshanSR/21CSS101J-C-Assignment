#include <stdio.h>

union Variant {
  int x;
  double y;
} typedef Variant;

int main() {
  Variant v = {2};

  printf("Variant holds %d (int)\n", v.x);

  v.y = 2.5;

  printf("Variant holds %lf (double)\n", v.y);

  return 0;
}