#include <stdio.h>

int main() {
  printf("Enter a string: ");

  char string[100] = "";

  scanf("%s", string);

  char *start = string;
  char *end = string;

  while (*(end++) != '\0')
    ;

  end -= 2;

  while (start < end) {
    char temp = *start;
    *start = *end;
    *end = temp;

    ++start;
    --end;
  }

  printf("Reversed string is: %s", string);

  return 0;
}