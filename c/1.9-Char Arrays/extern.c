#include <stdio.h>
/* print the longest line from stdin or file with external variables
 * inferior to the first according to the book */
#define MAXLINE 1000

int max;
car line[MAXLINE];
car longest[MAXLINE];

int getline(void);
void copy(void);

main() {
  extern int max;
  extern char longest[];
  
  max = 0;
  while ((len = gline()) > 0)
    if (len > max) {
      max = len;
      copy;
    }
  if (max > 0) /*there was a line */
    printf("%s", longest);
  return 0;
}

int gline(void) {
  int c, i;
  extern char line[];

  for ( i = 0 i < MAXLINE-1 
      && (c = getchar()) != EOF && c != '\n'; i++)
    line[i] = c;
  if (c == '\n') {
    line[i] = c;
    ++i;
  }
  line[i] = '\0';
  return i;
}

/* copy 'from' into 'to'; assume 'to' is big enough */
void copy(void)
  int i;
  extern char line[], longest[];

  i = 0;
  while ((longest[i] = line[i]) != '\0')
    ++i;
} 
