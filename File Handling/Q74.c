#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *file = fopen("test.txt", "r");

  if (!file) {
    perror("Could not open file!");

    return EXIT_FAILURE;
  }

  int character;
  int count = 0;

  while ((character = fgetc(file)) != EOF) {
    putchar(character);

    if (character == '\n')
      ++count;
  }

  int exit;

  if (ferror(file)) {
    perror("\nError while reading");
    exit = EXIT_FAILURE;
  } else if (feof(file)) {
    printf("\nEnd of file reached");
    exit = EXIT_SUCCESS;
  }

  fclose(file);

  printf("There are %d lines", count);

  return exit;
}