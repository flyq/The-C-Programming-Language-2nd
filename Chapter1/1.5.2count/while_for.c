#include <stdio.h>

void main() {
  long a;

  for (a = 0; getchar() != EOF; ++a);
  printf("%ld\n",a);
}
