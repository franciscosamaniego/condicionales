#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      printf("*");
    }
    for (int j = 0; j < n; j++) {
    if (j % 2 == 0) {
      printf(" ");
    }
  }
}
  return 0;
}
