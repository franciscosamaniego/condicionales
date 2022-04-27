#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int n = atoi(argv[1]);
  for (int i = 0; i < n; i++) {
  int r = rand() % 100;
     printf("%d ", r);
  }
  printf("\n");
  return 0;
}
