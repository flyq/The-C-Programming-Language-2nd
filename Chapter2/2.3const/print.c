#include <stdio.h>

int main() {
  printf("\\a  a%ca   %d\n",'\a','\a');
  printf("\\b  a%ca   %d\n",'\b','\b');
  printf("\\f  a%ca   %d\n",'\f','\f');
  printf("\\n  a%ca   %d\n",'\n','\n');
  printf("\\r  a%ca   %d\n",'\r','\r');
  printf("\\t  a%ca   %d\n",'\t','\t');  
  printf("\\v  a%ca   %d\n",'\v','\v');
  printf("\\  a%ca   %d\n",'\\','\\');
  printf("\\?  a%ca   %d\n",'\?','\?');
  printf("\\'  a%ca   %d\n",'\'','\'');  

  printf("\" %c   %d\n",'\"','\"');
}
