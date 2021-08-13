#include <stdio.h>

int main(void) {

  float fahr, celsius;
  int lower, upper, step;
  lower = 0; upper = 300;
  step = 20;
  printf("===============\n");
  printf("     F        C\n");
  printf("===============\n");
  fahr = lower;
  while (fahr <= upper) {
    celsius = 5.0/9.0 * (fahr - 32);
    printf("%6.0f   %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
  celsius = lower; fahr = 0;
  printf("===============\n");
  printf("     C        F\n");
  printf("===============\n");
  while (celsius <= upper) {
    fahr = (9.0 * celsius)/5.0 + 32;
    printf("%6.0f   %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
  return 0;
}
