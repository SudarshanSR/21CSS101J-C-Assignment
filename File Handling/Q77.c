#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  FILE *first = fopen("test.txt", "r");

  if (!first) {
    perror("Could not open first file!");

    return EXIT_FAILURE;
  }

  FILE *second = fopen("test 2.txt", "r");

  if (!second) {
    fclose(first);

    perror("Could not open second file!");

    return EXIT_FAILURE;
  }

  char first_buffer[100] = "";
  char second_buffer[100] = "";

  bool equal = false;

  while (fgets(first_buffer, sizeof(first_buffer), first) != 0) {
    if (fgets(second_buffer, sizeof(second_buffer), second) != 0 &&
        strcmp(first_buffer, second_buffer) == 0) {
      equal = true;
    } else {
      equal = false;

      break;
    }
  }

  int exit;

  if (ferror(first)) {
    perror("Error while reading first file\n");
    exit = EXIT_FAILURE;
  } else if (feof(first)) {
    printf("End of first file reached\n");
    exit = EXIT_SUCCESS;
  }

  if (ferror(second)) {
    perror("Error while reading second file\n");
    exit = EXIT_FAILURE;
  } else if (feof(second)) {
    printf("End of second file reached\n");
  }

  fclose(first);
  fclose(second);

  if (equal) {
    printf("The contents are the same!");
  } else {
    printf("The contents are not the same!");
  }

  return exit;
}