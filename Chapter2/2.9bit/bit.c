#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);

int main() {
  int a;


  printf("%d\n", getbits(15,1,2));
}

unsigned getbits(unsigned x, int p, int n) {
    return (x >> (p+1-n)) & ~(~0 << n);
}    
