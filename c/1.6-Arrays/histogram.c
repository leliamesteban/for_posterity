#include <stdio.h>

main() {
  int c, wl;
  wl = 0;

  while ((c = getchar()) != EOF)
    if (c != ' ' || c != '\t' || c != '\n')
      ++wl;
    if (c == ' ' || c == '\t' || c == '\n')
      wl = 0;
      printf("%d\n",wl);
    }
}
