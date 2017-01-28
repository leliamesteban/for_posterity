#include <stdio.h>

main() {
  int c, nb, nt, nl, nc;

  while ((c = getchar()) != EOF) {
    ++nc;
      if (c == '\n')
        ++nl;
      if (c == ' ')
        ++nb;
  }
  printf("Tabs: %d \t Blanks: %d \t Newlines: %d\n", nt, nb, nl);
}
