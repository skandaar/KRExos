#include <stdio.h>

#define IN 1    // indide a word
#define OUT 0   // outside a word

/* wc : count lines, words and characters in input */

int main() {

  int nc, nw, nl, c, state;

  state = OUT;
  nc = nw = nl = 0;
  while ((c = getchar()) != EOF) {
    nc++;
    if (c == '\n')
      ++nl;
    if (c == ' ' || c == '\t' || c == '\n')
      state = OUT;
    else if (state  == OUT) {
      state = IN;
      ++nw;
    }
  }

  printf("Counter :\n");
  printf("\tcharacters : %d\n", nc);
  printf("\tlines : %d\n", nl);
  printf("\twords : %d\n", nw);

  return 0;
}
