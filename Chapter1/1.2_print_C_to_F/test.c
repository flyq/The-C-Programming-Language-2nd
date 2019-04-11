#include<stdio.h>

void main() {
  int n;
 
  n = 86627;

  for(int i = 2; i < n; ++i) {
    if (n % i == 0) {
      printf("%d",i);
      return;
    }

  }
  printf("yes");
  return;
}
