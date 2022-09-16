#include <stdio.h>
int terminou(float retangulo1[]);
int main (void){
  float retangulo1[4], retangulo2[4];
  scanf("%f %f %f %f", &retangulo1[0], &retangulo1[1], &retangulo1[2], &retangulo1[3]);
  while (terminou(retangulo2) == 0){
    scanf("%f %f %f %f", &retangulo2[0], &retangulo2[1], &retangulo2[2], &retangulo2[3]);
    if (terminou(retangulo2) == 0){
      if(retangulo1[0] < retangulo2[0] && retangulo1[1] < retangulo2[1] && retangulo2[2] < retangulo1[2] && retangulo2[3] < retangulo1[3]){
        printf("(<%.2f,%.2f>,<%.2f,%.2f>) contem (<%.2f,%.2f>,<%.2f,%.2f>).\n", retangulo1[0], retangulo1[1], retangulo1[2], retangulo1[3], retangulo2[0], retangulo2[1], retangulo2[2], retangulo2[3]);
      } else if (retangulo1[0] > retangulo2[0] && retangulo1[1] > retangulo2[1] && retangulo2[2] > retangulo1[2] && retangulo2[3] > retangulo1[3]){
        printf("(<%.2f,%.2f>,<%.2f,%.2f>) contem (<%.2f,%.2f>,<%.2f,%.2f>).\n", retangulo2[0], retangulo2[1], retangulo2[2], retangulo2[3], retangulo1[0], retangulo1[1], retangulo1[2], retangulo1[3]);
      } else{
        printf("Nao posso afirmar!\n"); 
      }
    }
  }
  return 0;
}
int terminou(float retangulo2[]){
  if (retangulo2[0] == 0 && retangulo2[1] == 0 && retangulo2[2] == 0 && retangulo2[3] == 0) return 1; else return 0;
}
