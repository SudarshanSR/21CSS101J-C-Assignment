#include <stdio.h>
#include <stdlib.h>

char *oct(int dec) {
  char *result = (char *)malloc(100 * sizeof(char));

  int i = 0;

  while (dec != 0) {
    div_t s = div(dec, 8);

    result[i++] = '0' + s.rem;

    dec = s.quot;
  }

  result[i--] = '\0';

  for (int j = 0; j < i / 2 + 1; ++j) {
    char c = result[j];
    result[j] = result[i - j];
    result[i - j] = c;
  }

  return result;
}

int main() {
  printf("Enter a number: ");

  int n;

  scanf("%d", &n);

  char *result = oct(n);
  printf("%d in octal is %s", n, result);
  free(result);

  return 0;
}