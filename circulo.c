#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  size(800,600);
//int x = 550; segunda alternativa para que se vean todos los circulos.
//int y = 550;
// x -= 10;
// y -= 10;
noFill();
int x = 50;
int y = 50;
for (int i = 0; i <= 50; i++) {
  if (i % 4 == 0) stroke(255,0,0);
  else if (i % 3 == 0) stroke(0,255,0);
  else if (i % 2 == 0) stroke(0,0,255);
  else if (i % 1 == 0) stroke(0,255,255);
  ellipse(400,300,x,y);
  x+=10;
  y+=10;
}
  return 0;
}
