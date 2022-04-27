#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  while (a > 0) {
    printf("%d ", a % 10);
    a = a / 10;
  }
  printf("\n");
  return 0;
}
