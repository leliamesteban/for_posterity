#include <stdio.h>

int
main (int argc, char **argv)
{
  int i,g;
  char all[12] = "A", "A#", "B", "C", "C#", "

  printf("All notes\n");
  for (g = 0; g<24; ++g)
    printf("%c", all[g]); 

/* if note A */
/* A B C# D E F# G# A */
  i = 0;
  char majscale[] = {0, 3, 6, 7, 10, 14, 17};
  /* for i in majscale[] */
  int m;
  for (m = 0; m<sizeof(majscale); m++)
  
    printf("%c ", all[m+g]);
  printf("\n");
  printf("R 2 3 4 5 6 7 8\n");
}
