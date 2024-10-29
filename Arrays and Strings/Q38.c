#include <ctype.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

int main() {
  printf("Enter string: ");

  char string[100] = "";

  scanf("%s", string);

  int max = INT32_MIN;

  int length = strlen(string);

  for (size_t i = 0; i < length; ++i) {
    string[i] = tolower(string[i]);

    if (string[i] < max)
      continue;

    max = string[i];
  }

  size_t freq[max - 96] = {};

  for (size_t i = 0; i < length; ++i)
    ++freq[string[i] - 97];

  printf("Frequency of elements is: \n");

  for (int i = 0; i < sizeof(freq) / sizeof(freq[0]); ++i) {
    if (!freq[i])
      continue;

    printf("%c : %lu\n", i + 97, freq[i]);
  }

  return 0;
}