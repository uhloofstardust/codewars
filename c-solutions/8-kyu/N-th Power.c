// https://www.codewars.com/kata/57d814e4950d8489720008db
#include <math.h>
int index (int *array, int size, int n){
  return (n >= size) ? -1 : pow(array[n], n);
}
