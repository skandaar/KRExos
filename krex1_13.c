#include <stdio.h>

#define IN 1    // indide space
#define OUT 0   // outside space
#define MAX 45
/* output a word per line */

int main() {

  int c, state, i, nbr_words;
  int lwordmax, lword[MAX];

  state = OUT;
  for (i = 0; i < MAX; ++i)
    lword[i] = 0;

  i = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      if (state == OUT) {
        ++i;
        state = IN;
      }
    }
    else {
      state = OUT;
      ++lword[i];
    }
  }
  nbr_words = i;

  // compute the longest word
  lwordmax = lword[0];
  for (i = 1; i < MAX; ++i) {
    if (lword[i] >= lwordmax)
      lwordmax = lword[i];
  }

  /* Horizontal Histogram */

  /* Heading */
  printf("\n>> Horizontal Histogram\n\n");
  printf("wd : length\n");
  printf("-----");
  for (int k = 0; k < lwordmax; ++k)
    printf("-");
  printf("\n");
  /* End Heading */

  for (i = 0; i < nbr_words; ++i) {
    printf("%2d : ", i);
    for (int k = 0; k < lword[i]; ++k)
      printf("|");
    printf("\n");
  }

  /* Vertical Histogram */
  printf("\n");
  printf(">> Vertical Histogram\n\n");
  while (lwordmax) {
    printf("%2d | ", lwordmax);
    for (i = 0; i < nbr_words; ++i) {
      if ( lword[i] == lwordmax ) {
        printf(" +");
        --lword[i];
      } else {
        printf("  ");
      }
    }
    printf("\n");
    --lwordmax;
  }

  for (i = 0; i < nbr_words+3; ++i) {
    printf("--");
  }
  printf("\nwd | ");
  for (i = 0; i < nbr_words; ++i) {
    printf("%2d", i);
  }
  printf("\n");

  return 0;
}
