#include <stdio.h>

int max;

void main() {
  extern int max;
  ++max;
  printf("%d\n", max);
}
