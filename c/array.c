#include <stdio.h>

int
main (int argc, char **argv) {
  char s[20];
  int i;
  for (i = 0; i < 10; i++) {
    s[i] = i;
    printf("Position %d in the array s is %d\n", i, s[i]);
  }
/* join arrays */
}
