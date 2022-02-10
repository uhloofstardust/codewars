// https://www.codewars.com/kata/544675c6f971f7399a000e79
#include<stdlib.h>
int string_to_number(const char *src) {
  char *ptr;
  return strtol(src, &ptr, 10);
}
