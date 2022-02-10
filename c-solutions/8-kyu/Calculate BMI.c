// https://www.codewars.com/kata/57a429e253ba3381850000fb
/*    N.B. do not allocate memory,
   instead: return a string literal  */

const char *bmi (int weight, double height)
{
  double bmi = (weight)/(height * height);
  if (bmi <= 18.5) return "Underweight";
  if (bmi <= 25.0) return "Normal";
  if (bmi <= 30.0) return "Overweight";
  if (bmi > 30) return "Obese";
}
