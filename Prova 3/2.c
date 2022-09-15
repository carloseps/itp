#include <stdio.h>
#include <stdbool.h>

bool ehPerfeito(int numero);

int main (void){
    int qtdCasos, counter;
    scanf("%d", &qtdCasos);
    for (counter = 0; counter < qtdCasos; counter++){
      int numero;
      scanf("%d", &numero);
      bool ehPerfeito(numero);
      if(ehPerfeito(numero) == 1){
        printf("%d eh perfeito\n", numero);
      } else {
        printf("%d nao eh perfeito\n", numero);
      }
    }  
  return 0;
}

bool ehPerfeito(int numero){
  int somaDeDivisores = 0, counter = 1;
  while(counter < numero){
    if(numero % counter == 0){
      somaDeDivisores += counter;
    }
    counter++;  
  }
  if(somaDeDivisores == numero){
    return true;
  } else {
    return false;
  }  
}   
  