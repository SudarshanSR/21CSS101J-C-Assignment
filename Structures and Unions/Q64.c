#include <math.h>
#include <stdio.h>

struct Point {
  double x;
  double y;
  double z;
} typedef Point;

double dist(Point first, Point second) {
  double x_diff = first.x - second.x;
  double y_diff = first.y - second.y;
  double z_diff = first.z - second.z;

  return sqrt((double)(x_diff * x_diff) + (double)(y_diff * y_diff) +
              (double)(z_diff * z_diff));
}

int main() {
  printf("Enter first point: ");

  Point first;

  scanf("%lf %lf %lf", &first.x, &first.y, &first.z);

  printf("Enter second point: ");

  Point second;

  scanf("%lf %lf %lf", &second.x, &second.y, &second.z);

  printf("Distance between (%lf, %lf, %lf) and (%lf, %lf, %lf) is %lf", first.x,
         first.y, first.z, second.x, second.y, second.z, dist(first, second));

  return 0;
}