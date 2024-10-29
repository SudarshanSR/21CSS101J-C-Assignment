#include <stdio.h>

int main() {
  printf("Enter a year: ");

  unsigned int year;

  scanf("%u", &year);

  if (year % 4 != 0) {
    printf("%u is not a leap year", year);

    return 0;
  }

  if (year % 100 != 0) {
    printf("%u is a leap year", year);

    return 0;
  }

  if (year % 400 != 0) {
    printf("%u is not a leap year", year);

    return 0;
  }

  printf("%u is a leap year", year);

  return 0;
}