#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int c = 0;
  for (int i = 1; i <= n; i++) {
    printf("%d ", i);
    c = i * i;
    printf("%d\n", c);
  }
  printf("\n");
  return 0;
}
