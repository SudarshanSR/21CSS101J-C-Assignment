#include <math.h>
#include <stdio.h>

int main() {
  printf("Enter radius of circle: ");

  double r;

  scanf("%lf", &r);

  printf("Circumference of circle of radius %lf is %lf\n", r, 2 * M_PI * r);
  printf("Area of circle of radius %lf is %lf\n", r, M_PI * r * r);

  return 0;
}