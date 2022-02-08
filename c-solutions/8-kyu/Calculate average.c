// https://www.codewars.com/kata/57a2013acf1fa5bfc4000921
double find_average(double* array, int length) {

  double average, sum = 0;

  int i = 0;
  while (i < length){
    sum += array[i];
    i++;
  }

  average = sum/length;

  return average;
}
