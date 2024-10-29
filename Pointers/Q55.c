#include <stdio.h>

int main() {
  printf("Enter a string: ");

  char string[100] = "";

  scanf("%s", string);

  char *p = string;

  int count = 0;

  while (*(p++) != '\0')
    ++count;

  printf("Length of string is: %d", count);

  return 0;
}