#include <stdio.h>

unsigned long fibonacci(unsigned int num) {
  if (num == 0 || num == 1)
    return num;

  return fibonacci(num - 1) + fibonacci(num - 2);
}

int main() {
  printf("Enter number of terms: ");

  unsigned int num;

  scanf("%u", &num);

  for (unsigned int i = 0; i < num; ++i)
    printf("%lu ", fibonacci(i));

  return 0;
}