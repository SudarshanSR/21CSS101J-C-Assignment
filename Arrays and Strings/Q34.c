#include <stdio.h>

int main() {
  printf("Enter a string: ");

  char string[100] = "";

  scanf("%s", string);

  int length = 0;

  while (string[length++] != '\0')
    ;

  --length;

  printf("Length of %s is %d", string, length);

  return 0;
}