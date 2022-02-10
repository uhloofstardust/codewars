// https://www.codewars.com/kata/576b93db1129fcf2200001e6
int sum(int* numbers, int numbersCount)
{
  int maxValue = numbers[0], minValue = numbers[0], sum = 0;
  for (int i = 0; i < numbersCount; i++) {
    sum += numbers[i];
    if (maxValue < numbers[i]) {
      maxValue = numbers[i];
  }
    if (minValue > numbers[i]) {
      minValue  = numbers[i];
    }
  }
  sum -= (maxValue + minValue);

  return (numbersCount < 2) ? 0 : sum;
}
