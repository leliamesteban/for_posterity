#include <stdio.h>

int celsius(int fahr); 

main() {
  int fahr;

#define LOWER 0
#define UPPER 300
#define STEP 20

  printf("Celsius Fahrenheit\n");
  for (fahr = LOWER ; fahr < UPPER ; fahr = fahr + STEP)
    printf("%3d\t %d\n", fahr, celsius(fahr)); 
}

int celsius(int fahr) {
int p;
p = (5.0/9.0) * (fahr)+32;
return p; 
}
