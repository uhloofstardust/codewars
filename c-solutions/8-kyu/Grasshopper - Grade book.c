// https://www.codewars.com/kata/55cbd4ba903825f7970000f5
char get_grade(int a, int b, int c) {
  int avg = (a + b + c) / 3;
  if (avg < 60) return 'F';
  else if (avg < 70) return 'D';
  else if (avg < 80) return 'C';
  else if (avg < 90) return 'B';
  else if (avg <= 100) return 'A';
}
