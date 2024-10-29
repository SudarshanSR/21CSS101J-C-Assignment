#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool is_palindrome(char *string);

int main() {
  printf("Enter string: ");

  char string[100] = "";

  scanf("%s", string);

  if (is_palindrome(string))
    printf("%s is a palindrome", string);

  else
    printf("%s is not a palindrome", string);

  return 0;
}

bool is_palindrome(char *string) {
  int length = strlen(string);

  for (int i = 0; i < length / 2 + 1; ++i)
    if (string[i] != string[length - i - 1])
      return false;

  return true;
}