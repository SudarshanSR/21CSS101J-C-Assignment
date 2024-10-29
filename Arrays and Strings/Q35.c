#include <stdio.h>
#include <string.h>

int main() {
  printf("Enter destination string: ");
  char string1[100] = "";

  scanf("%s", string1);

  printf("Enter source string: ");
  char string2[100] = "";

  scanf("%s", string2);

  strcpy(string1, string2);

  printf("Source: %s\n", string2);
  printf("Destination: %s\n", string1);

  return 0;
}