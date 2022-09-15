#include <stdio.h>
// retorna verdadeiro se numero é divisível por divisor e falso em caso contrário
int testaDivisor(int numero, int divisor);
// retorna a soma dos divisores de value no intervalo [1, value)
int somaDivisores (int value);
// retorna verdadeiro se a é amigo de b e falso em caso contrário
int testaAmigos (int a, int b);
// recebe dois intervalos naturais L1 = [A,B] e L2 = [C,D]
// apresenta todos os valores em L1 que possuem ao menos um amigo em L2.
int main (void){
  int l1[2], l2[2];
  int qtdAmigos = 0;
  scanf("%d %d", &l1[0], &l1[1]);
  scanf("%d %d", &l2[0], &l2[1]);
  int aux1 = l1[0], aux2 = l2[0];
  while(aux1 <= l1[1]){
    aux2 = l2[0];
    while(aux2 <= l2[1]){
        if(testaAmigos(aux1, aux2) == 1){
            printf("O %d possui um amigo!\n", aux1);
            qtdAmigos++;
        } aux2++;
    } aux1++;
  }
  if(qtdAmigos == 0){
    printf("Os intervalos nao apresentam amigos!");
  }
}
int testaDivisor(int numero, int divisor){
  if(numero % divisor == 0){
      return 1;
  } else {
        return 0;
  }   
}
int somaDivisores (int value) {
  int somaDeDivisores = 0, counter = 1;
  while(counter < value){
    if (testaDivisor(value, counter) == 1){
      somaDeDivisores += counter;
    }    
    counter++;  
  }
  return somaDeDivisores;
}
int testaAmigos (int a, int b){
  if((a == somaDivisores(b)) && (b == somaDivisores(a)) && a != b){
    return 1;
  } else {
    return 0;
  }
}