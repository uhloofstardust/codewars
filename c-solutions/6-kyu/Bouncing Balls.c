// https://www.codewars.com/kata/5544c7a5cb454edb3c000047
int bouncingBall(double h, double bounce, double window) {
    int howManyTimes = -1;
    while (h > window){
      h *= bounce;
      howManyTimes += 2;
    }

  return (h > 0 && bounce > 0 && bounce < 1 && window < h) ? howManyTimes : -1;
}
