#include <stdio.h>

int main(int argc, char const *argv[]){
  double fahr, cel;
  int lower, upper, step;

  lower = 0;
  upper = 32;
  step = 1;

  fahr = lower;
  while (fahr <= upper ) {
    cel = 5 * (fahr - 32) / 9;
    printf("%2.2f°F= %2.2f°C\n",fahr, cel );
    fahr = fahr + step;
  }
  return 0;

}
