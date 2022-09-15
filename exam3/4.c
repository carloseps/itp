#include <stdio.h>

int compararCoord(int quadrado1[], int quadrado1[]);

int main (void){
  int quadrado1[4];
  int quadrado2[4];
  int run = 1;

  while (run = 1){
    scanf("%d %d %d %d", &quadrado1[0], &quadrado1[1], &quadrado1[2], &quadrado1[3]);
    if (quadrado1[0] == 0 && quadrado1[1] == 0 && quadrado1[2] == 0 && quadrado1[3] == 0){
      run = 0;
      break;
    } else {
      scanf("%d %d %d %d", &quadrado2[0], &quadrado2[1], &quadrado2[2], &quadrado2[3]);
    }
  }
  return 0;
}

int compararCoord(int quadrado1[], int quadrado2[]){
  if(quadrado1[0] < quadrado2[0] || quadrado1[1] < quadrado2[1]){

  }
  return 0;
}