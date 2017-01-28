#include <stdio.h>

int power(int m, int n);

main() {
  int i;

#define SECOND 2
#define THIRD -3

  printf("i base %d base %d\n", SECOND, THIRD );
  for (i = 0; i < 10;  ++i)
    printf("%d %d\t %d\n", i, power(SECOND,i), power(THIRD,i));
  return 0;
}

int power(int base, int n)
{
  int i, p;
  
  p = 1;
  for (i = 1; i <= n; ++i)
    p = p * base;
  return p;
}
