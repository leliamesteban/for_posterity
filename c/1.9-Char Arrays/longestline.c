#include <stdio.h>
/* print the longest line from stdin or file */
#define MAXLINE 1000

int gline(char line[], int maxline); 
void copy(char to[], char from[]); 

main() {
  int len; /*current line length */
  int max; /*max line lenght, updated */
  char line[MAXLINE]; /*current input line */
  char longest[MAXLINE]; /* longest line, so far */
  
  max = 0;
  while ((len = gline(line, MAXLINE)) > 0)
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  if (max > 0) /*there was a line */
    printf("%s", longest);
  return 0;
}

/* read a line into s, return length */
/* for every character in input, fill an array (max size defined above as MAXLINE) with the character and end it with '\n' and then '\0' 
 * returns length */
int gline(char s[], int lim) {
  int c, i;

  for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

/* copy 'from' into 'to'; assume 'to' is big enough */
void copy(char to[], char from[]) {
  int i;

  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
} 
