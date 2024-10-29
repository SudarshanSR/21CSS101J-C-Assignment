#include <stdio.h>

int main() {
  printf("Enter path: ");

  char path[100] = "";

  scanf("%s", path);

  if (!remove(path)) {
    printf("Could not remove file!");

    return 1;
  }

  printf("Successfully removed file!");

  return 0;
}