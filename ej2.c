#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);
  if (a == 0){
    printf("No se puede dividir por 0\n");
  }
  int disc = b*b -4 * a * c;
  if
  (disc < 0)
  printf("No hay raices R\n");
  else if (disc = 0)
  printf("Es una sola raiz la cual es:%d\n", -b / 2 * a);
  else {
    printf("%d\n", -b + sqrt(disc));
    printf("%d\n", -b - sqrt(disc));
  }
  return 0;
}
