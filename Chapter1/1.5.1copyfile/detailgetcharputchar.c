#include <stdio.h>

void main() {
    char c,d,e,f;
    printf("please input two characters:\n");
    c=getchar(); // 1  12
    putchar(c);  // 1
    putchar('\n');
    d=getchar(); // 2
    putchar(d);  // 2
    putchar('\n'); 
    e=getchar(); // 34
    putchar(e); // 3
    putchar('\n');
    f=getchar(); // 3
    putchar(f);  // 3
    putchar('\n');
    printf("c= %c\n",c);
    printf("d= %c\n",d);
    printf("e= %c\n",e);
    printf("f= %d\n",f);
}
