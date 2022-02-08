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
