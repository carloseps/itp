#include <stdio.h>

int main (void){
  int a, b, soma;
  
  scanf("%d", &a);
  scanf("%d", &b);
  
  if(a < 0){
    printf("O valor de A precisa ser maior ou igual a 0\n");
  }
  if(b < 0){
    printf("O valor de B precisa ser maior ou igual a 0\n");
  } else if(a % 2 == 0 && b % 2 == 0 ){
    soma = a + b;
    printf("%d",soma);
  } else if (a % 2 != 0){
    printf("Não posso somar, pois %d não é par\n", a);
        if (b % 2 != 0){
        printf("Não posso somar, pois %d não é par\n", b);
        }
  } else if (b % 2 != 0){
    printf("Não posso somar, pois %d não é par\n", b);
        if (a % 2 != 0){
        printf("Não posso somar, pois %d não é par\n", a);
    }
  }
  
  return 0;
}