#include <stdio.h>

int main() {
  char a, b, c;

  a = '\013';
  b = '\xb';
  c = 11;

  if( a == b && b == c)
    printf("yes, you are fucked\n");

  for(int i = 0; i < 3; ++i)
    printf("asdfadf%csadfasdf%dadsfa%d\n", a, b, c);
}
