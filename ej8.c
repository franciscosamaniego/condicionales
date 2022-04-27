#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  for (int i = 0; i <= (n - 1); i++) {
    for (int j = 0; j <= (n - 1); j++) {
      if ((i + j) % 2 == 0) printf("* ");
      else printf("  ");
    }
      printf("\n");
    }
  return 0;
}
