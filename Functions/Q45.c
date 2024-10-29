#include <stdio.h>
#include <stdlib.h>

struct Pair {
  int num;
  int level;
} typedef Pair;

Pair reverse(unsigned int num) {
  Pair p;

  if (num < 10) {
    p.num = num;
    p.level = 1;

    return p;
  }

  div_t s = div(num, 10);

  p = reverse(s.quot);

  for (int i = 0; i < p.level; ++i) {
    s.rem *= 10;
  }

  p.num += s.rem;
  ++p.level;

  return p;
}

int main() {
  printf("Enter number: ");

  unsigned int num;

  scanf("%u", &num);

  printf("Reverse of %u is %u", num, reverse(num).num);

  return 0;
}