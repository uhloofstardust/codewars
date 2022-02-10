// https://www.codewars.com/kata/57f609022f4d534f05000024
#include <stddef.h>

int stray(size_t n, int arr[n]) {
  int odd = arr[0];
  if (arr[0] != arr[1] && arr[0] != arr[2]) return arr[0]; //case that the first one is odd
  for (int i = 0; i < n; i++){
    if (odd != arr[i]) return arr[i]; //for the remaining cases
  }
}
