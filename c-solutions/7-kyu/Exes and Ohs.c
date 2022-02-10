// https://www.codewars.com/kata/55908aad6620c066bc00002a
#include <stdbool.h>

bool xo (const char* str)
{
  int x = 0, o = 0;
  for(int i = 0; str[i]; i++){
    if (str[i] == 'x' || str[i] == 'X'){
      x++;
    }
    else if (str[i] == 'o' || str[i] == 'O'){
      o++;
    }
  }
  return (x == o);
}
