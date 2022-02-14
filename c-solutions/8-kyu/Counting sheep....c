// https://www.codewars.com/kata/54edbc7200b811e956000556
#include <stdbool.h>
#include <stddef.h>

size_t count_sheep(const bool *sheep, size_t count){
  int num = 0;
  for (int i = 0; i < count; i++){
    num = (sheep[i]) ? num + 1 : num;
  }
  return num;
}
