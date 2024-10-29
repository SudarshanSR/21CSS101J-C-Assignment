#include <stdio.h>

int main() {
  unsigned long sum = 0;

  for (int i = 0; i < 100; sum += (i += 2))
    ;

  printf("Sum of first all even numbers upto 100 is %lu", sum);

  return 0;
}