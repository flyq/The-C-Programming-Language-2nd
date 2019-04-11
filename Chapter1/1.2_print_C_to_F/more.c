/// result 441684627

#include<stdio.h>

int getAmount(int i) {
  int amount;
  int k;
  amount = 0;
  k = 0;
  
  while (i > 0) {
    k = i % 10;
    if ( k == 3)
      amount++;

    i = i / 10;
  }

  return amount;
}

void main() {
  int n;
  int amount;
  
  amount = 0;
  n = 866278171;

  for(int i = 1; i <= n ; i = i + 2) {
    amount += getAmount(i);
  }

  printf("%d\n",amount);
  
}


