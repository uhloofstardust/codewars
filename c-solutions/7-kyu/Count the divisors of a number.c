// https://www.codewars.com/kata/542c0f198e077084c0000c2e
int divisors(int n) {
  int count = 0;
  for (int i = 1; i <=n; i++) {
    count = (n % i == 0) ? (count+1) : count;
  }
  return count;
}
