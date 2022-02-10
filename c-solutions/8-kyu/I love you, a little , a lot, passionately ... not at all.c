// https://www.codewars.com/kata/57f24e6a18e9fad8eb000296
#include <stddef.h> // NULL

const char* how_much_i_love_you(int nb_petals) {
  int count = 0;
  for (int i = 0; i < nb_petals; i++){
    if(count == 6) count = 0;
    count++;
  }
  switch (count) {
      case 1: return "I love you";
      case 2: return "a little";
      case 3: return "a lot";
      case 4: return "passionately";
      case 5: return "madly";
      case 6: return "not at all";
  }
}
