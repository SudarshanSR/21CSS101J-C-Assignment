#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
  printf("Enter string: ");

  char string[100] = "";

  scanf("%s", string);

  for (int i = 0; i < strlen(string); ++i)
    string[i] = toupper(string[i]);

  printf("All uppercase string is: %s", string);

  return 0;
}