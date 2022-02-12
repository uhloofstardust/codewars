// https://www.codewars.com/kata/54ff0d1f355cfd20e60001fc
int factorial(int n) {
  if (n < 0 || n > 12) return -1;
  return (n == 0) ? 1 : n*factorial(n-1);
}
