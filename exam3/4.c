#include <stdio.h>
#include <stdlib.h>
void compararCoord(int retangulo1[], int retangulo2[]);
void printaCoord(int vetor[]);
void preencheVetor(int vetor[]);
void inverteVetores(int vetor[], int vetor2[]);
int main (void){
  int retangulo1[4], retangulo2[4], auxiliar[4];
  while (1){
    preencheVetor(retangulo1);
    if (retangulo1[0] == 0 && retangulo1[1] == 0 && retangulo1[2] == 0 && retangulo1[3] == 0){
      inverteVetores(retangulo1, auxiliar);
      break;
    } else {
      inverteVetores(auxiliar, retangulo1);
    }
    preencheVetor(retangulo2);
    compararCoord(retangulo1, retangulo2);
  }
  return 0;
}
void compararCoord(int retangulo1[], int retangulo2[]){
  int win1 = 0, win2 = 0;
  for (int i = 0; i <= 3; i++){
    if(retangulo1[i] < retangulo2[i]){
      if(i >= 2){ win2++;} else{ win1++;}
    } else if (retangulo1[i] > retangulo2[i]){
      if(i >= 2){ win1++;} else{ win2++;}
    }    
  }
  if(win1 == win2){
    printf("Nao posso afirmar!");
  } else if (win1 > win2){
    printaCoord(retangulo1); printf(" contem "); printaCoord(retangulo2); printf(".");
  } else {
    printaCoord(retangulo2); printf(" contem "); printaCoord(retangulo1); printf(".");
  }
}
void printaCoord(int vetor[]){ printf("(<%d.00,%d.00>,<%d.00,%d.00>)", vetor[0], vetor[1], vetor[2], vetor[3]);}
void preencheVetor(int vetor[]){for (int i = 0; i <= 3; i++){ scanf("%d", &vetor[i]);}}
void inverteVetores(int vetor1[], int vetor2[]){for (int i = 0; i <= 3; i++){vetor1[i] = vetor2[i];}}