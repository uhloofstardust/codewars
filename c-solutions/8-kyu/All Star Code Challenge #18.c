// https://www.codewars.com/kata/5865918c6b569962950002a1
#include <stddef.h>
#include <string.h>

size_t str_count(const char *str, char letter) {
  int count = 0, len = strlen(str);
  for (int i = 0; i < len; i++){
    if (str[i] == letter) count++;
  }
  return count;
}
