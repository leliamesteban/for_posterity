#include <stdio.h>

/* my version, modified from copy */
main() {
int c, s;
s = 0;
while ((c = getchar()) != EOF)
  if (c == 32) { /* 32 is ascii code for space */
    if (!s) {
      s = 1;
      putchar(c);
    }
  }
  else {
    s = 0;
    putchar(c);
  }
}
