#include <stdio.h>
#include <stdlib.h>

int function(int x) {
  if (x <= 0)
    return 0;
  x = x - 2;
  x = function(x);
  return x;
}

int main() {
  int a = 30, i = 0;

  while (a > 0) {
    a = function(a);
    i++;
  }
  printf("Modificare:\n");

  printf("%d", i);
  return 0;
}
