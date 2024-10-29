#include <stdio.h>

int main() {
  printf("Enter a string: ");

  char string[100] = "";

  scanf("%s", string);

  int end = 0;

  while (string[end++] != '\0')
    ;

  end -= 2;

  for (int i = 0; i < end / 2 + 1; ++i) {
    char temp = string[i];
    string[i] = string[end - i];
    string[end - i] = temp;
  }

  printf("The reversed string is %s", string);

  return 0;
}