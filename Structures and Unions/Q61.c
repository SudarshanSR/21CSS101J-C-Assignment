#include <stdio.h>

struct Person {
  char name[30];
  int age;
} typedef Person;

int main() {
  printf("Enter name and age: ");

  Person p;

  scanf("%s %d", p.name, &p.age);

  printf("Name: %s\nAge: %d", p.name, p.age);

  return 0;
}