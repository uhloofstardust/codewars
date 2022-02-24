// https://www.codewars.com/kata/55cb632c1a5d7b3ad0000145
#include <stdint.h>

char *hoop_count(uint32_t n) {
  return (n >= 10) ?  "Great, now move on to tricks" : "Keep at it until you get it";
}
