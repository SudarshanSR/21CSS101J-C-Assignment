#include <stdio.h>

int main() {
  printf("Enter two numbers: ");

  int a, b;

  scanf("%d %d", &a, &b);

  printf("Enter an operation (+, -, *, /): ");

  char op;

  scanf("%c", &op);

  switch (op) {
  case '+':
    printf("%d + %d = %d", a, b, a + b);

    break;

  case '-':
    printf("%d - %d = %d", a, b, a - b);

    break;

  case '*':
    printf("%d * %d = %d", a, b, a * b);

    break;

  case '/':
    if (b == 0)
      printf("Cannot divide by 0!");

    else
      printf("%d / %d = %d", a, b, a / b);

    break;

  default:
    printf("Invalid operation!");

    break;
  }

  return 0;
}