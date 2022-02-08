int centuryFromYear(int year)
{
  // 100, 200 etc. are in the 1st, 2nd century respectively.
  // 101, 201 etc. are in the 2nd, 3rd century respectively.
  return (year % 100 == 0) ? year / 100 : year / 100 + 1 ;
}
