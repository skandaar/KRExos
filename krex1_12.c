#include <stdio.h>

#define IN 1    // indide space
#define OUT 0   // outside space

/* output a word per line */

int main() {

  int c, state;

  state = OUT;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      if (state == OUT) {
        putchar('\n');
        state = IN;
      }
    }
    else {
      state = OUT;
      putchar(c);
    }
  }

  return 0;
}
