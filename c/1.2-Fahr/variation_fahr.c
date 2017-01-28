#include <stdio.h>

/* numbers: float, int?? */

main() {
  float fahr, c;

#define LOWER 0
#define UPPER 300
#define STEP 20

  for (fahr = UPPER ; fahr > LOWER ; fahr = fahr - STEP)
    c = (5.0/9.0) * fahr + 32;
    printf("%3d %3f\n", fahr, c);
}
