#include <stdio.h>

#define MAX 1000


int main() {
  int max = 0;
  char line[MAX];
  char lineMax[MAX];
  int len;
  while(len = (getline1(line, MAX)) > 0) {
    if(len > max) {
      max = len;
      copy(lineMax, line);
    }
  }
  if(max > 0)
    printf("%s\n", lineMax);

  return 0;
}

void copy(char a[], char b[]) {
  int i = 0;

  while(b[i] != "\0") {
    a[i] = b[i];
    ++i;
  }

  return;
}

int getline1(char line[], int maxline) {
  int c , i;
  for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    line[i] = c;
  }

  if(c == '\n') {
    line[i] = c;
    ++i;
  }
  line[i] = "\0";
  return i;
}
