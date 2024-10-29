#include <stdio.h>

int main() {
  unsigned long sum = 0;

  for (int i = -1; i < 99; sum += (i += 2))
    ;

  printf("Sum of first all odd numbers upto 100 is %lu", sum);

  return 0;
}