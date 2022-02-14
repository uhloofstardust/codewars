// https://www.codewars.com/kata/57f36495c0bb25ecf50000e7
int findSum (int n){
  int sum = 0;
  for (int i = 1; i <= n; i++){
    sum = (i % 3 == 0 || i % 5 == 0) ? sum + i : sum;
  }
  return sum;
}
