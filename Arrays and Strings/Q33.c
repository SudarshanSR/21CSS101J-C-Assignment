#include <stdio.h>
#include <string.h>

int main() {
  printf("Enter a string: ");

  char string[100] = "";

  scanf("%s", string);

  int count = 0;

  for (int i = 0; i < strlen(string); ++i) {
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
      break;

    default:
      ++count;
    }
  }

  printf("Number of consonants is: %d", count);

  return 0;
}