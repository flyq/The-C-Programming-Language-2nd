#include <stdio.h>

void main() {
  int c, f;
  int lower, uper, step;

  lower = 0;
  uper = 300;
  step = 20;
  f = lower;
  
  while(f <= uper) {
    printf("%d\t%d\n", f, 5*(f-32)/9);
    f = f + step;
  }
}
