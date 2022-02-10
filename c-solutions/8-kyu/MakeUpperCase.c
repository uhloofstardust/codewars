// https://www.codewars.com/kata/57a0556c7cb1f31ab3000ad7
#include<string.h>
char *makeUpperCase (char *string){
  for (int i = 0; i < strlen(string); i++){
    if (string[i] >= 97 && string[i] <= 122) {
      string[i] = string[i] - 32;
    }
  }
  return string;
}
