#include <stdio.h>

int main(void) {

  float x;
  float y;

  printf("Defina um valor para x:\n");
  scanf("%f" , &x);

  printf("Defina um valor para y:\n");
  scanf("%f" , &y);

  if(x==0 && y==0)
    printf("Origem\n");

  else if(x==0)
    printf("Eixo y\n");

  else if(y==0)
    printf("Eixo x\n");

  else if(x>0 && y>0)
    printf("Quadrante 1\n");

  else if(x<0 && y>0)
    printf("Quadrante 2\n");

  else if(x<0 && y<0)
    printf("Quadrante 3\n");

  else if(x>0 && y<0)
    printf("Quadrante 4\n");
  
  return 0;
}