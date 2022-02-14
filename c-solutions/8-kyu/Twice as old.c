// https://www.codewars.com/kata/5b853229cfde412a470000d0
int twice_as_old (int father_age, int son_age)
{
  return (father_age > son_age * 2) ? father_age - son_age * 2 : son_age * 2 - father_age;
}
