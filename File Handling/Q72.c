#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *file = fopen("test.txt", "w");

  if (!file) {
    perror("Could not open file!");

    return EXIT_FAILURE;
  }

  printf("Enter text to write: ");

  char buffer[100] = "";

  while (fgets(buffer, sizeof(buffer), stdin) != 0) {
    printf("%s", buffer);

    int rc = fputs(buffer, file);

    if (rc == EOF)
      perror("fputs()\n");
  }

  rewind(file);

  int exit;

  if (ferror(file)) {
    perror("\nError while writing");
    exit = EXIT_FAILURE;
  } else if (feof(file)) {
    printf("\nEnd of file reached");
    exit = EXIT_SUCCESS;
  }

  fclose(file);

  return exit;
}