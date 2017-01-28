#include <stdio.h>

/* print fahrenheit-celsius table from fahr = 0 ... 300 */

main () {
  float fahr, celsius;
  int lower, upper, step;
  
  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  printf("Celsius\tFahrenheit\n");
/* U+(encoding for degrees? */
  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr)+32.0;
    printf("%3.0f\t%6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}
