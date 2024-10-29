#include <stdio.h>
#include <string.h>

int main() {
  printf("Enter a string: ");

  char string[100] = "";

  scanf("%s", string);

  int length = strlen(string);

  for (int i = 0; i < length; ++i) {
    switch (string[i]) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
      for (int j = i + 1; j < length; ++j)
        string[j - 1] = string[j];

      --length;

      string[length] = '\0';

    default:
      break;
    }
  }

  printf("String without vowels is: %s", string);

  return 0;
}