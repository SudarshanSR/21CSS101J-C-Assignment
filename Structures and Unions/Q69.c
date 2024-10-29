#include <stdio.h>

struct Outer {
  int a;

  struct Inner {
    int b;
  };

  struct Inner c;
} typedef Outer;

int main() {
  Outer o = {1, {2}};

  printf("o.a : %d\n", o.a);
  printf("o.c.b : %d\n", o.c.b);

  return 0;
}