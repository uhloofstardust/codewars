// https://www.codewars.com/kata/55f2b110f61eb01779000053
int get_sum(int a , int b) {
  int sum = 0;
  if (a == b) {
      sum = a;
    }
    else if (a < b) {
      int diff = (b-a);
      for (int i = 0; i <= diff; i++){
        sum += a;
        a++;
      }
     }
    else if (a > b) {
      int diff = (a-b);
      for (int i = 0; i <= diff; i++){
        sum += b;
        b++;
      }
    }

  return sum;
}
