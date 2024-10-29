#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool is_palindrome(unsigned int n);

int main() {
  printf("Enter a number: ");

  unsigned int n;

  scanf("%u", &n);

  if (is_palindrome(n)) {
    printf("%u is a palindrome", n);
  } else {
    printf("%u is not a palindrome", n);
  }

  return 0;
}

bool is_palindrome(unsigned int n) {
  unsigned int copy = n;

  unsigned int reverse = 0;

  while (copy != 0) {
    div_t s = div(copy, 10);

    copy = s.quot;

    reverse += s.rem;
    reverse *= 10;
  }

  return reverse == n;
}