#include <stdio.h>

int main() {

  int c;
  long nl, nt, nb;

  nl = nb = nt = 0;
  while ((c = getchar()) != EOF) {
    if ( c == '\t')
      nt++;
    else if (c == '\n')
      nl++;
    else if (c == ' ')
      nb++;
  }
  printf("number of new line characters : %ld\n", nl);
  printf("number of blanks : %ld\n", nb);
  printf("number of tabs : %ld\n", nt);

return 0;
}
