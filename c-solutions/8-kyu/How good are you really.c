// https://www.codewars.com/kata/5601409514fc93442500010b
#include <stdbool.h>
int better_than_average(int class_points[], int class_size, int your_points) {
  int avg = 0;
  for (int i = 0; i < class_size; i++){
    avg += class_points[i];
  }
  avg /= class_size;
  return (your_points > avg) ? true : false;
}
