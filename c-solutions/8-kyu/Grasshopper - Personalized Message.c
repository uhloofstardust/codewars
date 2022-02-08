// https://www.codewars.com/kata/5772da22b89313a4d50012f7
#include <string.h>
const char* greet(const char *name, const char *owner) {
  return (strcmp(name, owner) == 0) ? "Hello boss" : "Hello guest";
}
