#include <stdio.h>

union Variant {
  int x;
  long y;
} typedef Variant;

int main() {
  printf("Members of Variant union are 1 int and 1 long\n");
  printf("Size of 1 int and 1 long is: %lu", sizeof(int) + sizeof(long));
  printf("Size of Vairant is: %lu", sizeof(Variant));

  return 0;
}