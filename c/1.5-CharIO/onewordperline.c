#include <stdio.h>

/* print one word per line */
main() {
  int c;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n')
      printf("\n");
    else
      putchar(c);
  }
} 
