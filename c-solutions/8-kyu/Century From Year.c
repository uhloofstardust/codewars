// https://www.codewars.com/kata/5a3fe3dde1ce0e8ed6000097
int centuryFromYear(int year)
{
  // 100, 200 etc. are in the 1st, 2nd century respectively.
  // 101, 201 etc. are in the 2nd, 3rd century respectively.
  return (year % 100 == 0) ? year / 100 : year / 100 + 1 ;
}
