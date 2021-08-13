/* a program that copies its input to its output*/
// exercise 1.6

#include <stdio.h>
int main(int argc, char const *argv[]) {

  int c;
  while ((c = getchar()) != EOF)
    putchar(c);

  return 0;
}
