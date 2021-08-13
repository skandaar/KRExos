#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(void) {

  printf("===============\n");
  printf("     F        C\n");
  printf("===============\n");
  for (float fahr = LOWER; fahr <= UPPER; fahr += STEP) {
    printf("%6.0f   %6.1f\n", fahr, 5.0/9.0 * (fahr - 32));
  }
  printf("===============\n");
  printf("     C        F\n");
  printf("===============\n");
  for (float celsius = LOWER; celsius <= UPPER; celsius += STEP) {
    printf("%6.0f   %6.1f\n", celsius, (9.0 * celsius)/5.0 + 32);
  }

  return 0;
}
