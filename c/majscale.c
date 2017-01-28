#include <stdio.h>

extern char all[17] = "AA#BCC#DD#EFF#GG#";

char
allnotes () {
  int g;
/* make note and accidental be in one position only */ 
  printf("All notes\n");
  for (g = 0; g<sizeof(all); ++g)
    printf("%c", all[g]); 

}

int
main (int argc, char **argv)
{
  int i;

/*  printf("A Maj Scale\n");
  printf("Root:%c \n", all[1]);
  printf("Second: %c \n", all[3]);
  printf("Third: %c \n", all[5]); 
 * get from other function */

/* join arrays */
  char amaj[17];
/* if note A */
  i = 0;
  while (i<sizeof(all)) {
  i++;
  amaj[i] = all[i];
  printf("%c\n", amaj[i]);
  }
  printf("\n");
  while (i>(sizeof(all)-i)) {
  i--;
  amaj[i] = all[i];
  printf("%c\n", amaj[i]);
  }
}

