#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *source = fopen("test.txt", "r");

  if (!source) {
    perror("Could not open source file!");

    return EXIT_FAILURE;
  }

  FILE *dest = fopen("test 2.txt", "w");

  if (!dest) {
    fclose(source);

    perror("Could not open destination file!");

    return EXIT_FAILURE;
  }

  char buffer[100] = "";

  while (fgets(buffer, sizeof(buffer), source) != 0)
    fputs(buffer, dest);

  rewind(source);

  int exit;

  if (ferror(source)) {
    perror("\nError while reading");
    exit = EXIT_FAILURE;
  } else if (feof(source)) {
    printf("\nEnd of source file reached");
    exit = EXIT_SUCCESS;
  }

  if (ferror(dest)) {
    perror("\nError while writing");
    exit = EXIT_FAILURE;
  } else if (feof(dest)) {
    printf("\nEnd of dest file reached");
    exit = EXIT_SUCCESS;
  }

  fclose(source);
  fclose(dest);

  return exit;
}