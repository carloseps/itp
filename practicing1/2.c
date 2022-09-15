#include <stdio.h>

int main (void){
    int i, menor, maior;

    int pontos[4];

    //preenchendo o array com os valores
    for(i=0; i < 4; i++)  {
        scanf("%d", &pontos[i]);  
    } 

    //descobrindo qual é o menor valor dentro do array para determinar nosso limite
    menor = pontos[0];
    for (i = 1; i < 4; i++){
        if (pontos[i] < menor){
            menor = pontos[i];
        }
    }
    //descobrindo qual é o maior valor dentro do array para determinar nosso limite
    maior = pontos[0];
    for (i = 1; i < 4; i++){
        if (pontos[i] > maior){
            maior = pontos[i];
        }
    }

    int coord1, coord2;
    scanf("%d", &coord1);
    scanf("%d", &coord2);

    if(coord1 >= menor && coord1 <= maior && coord2 >= menor && coord2 <= maior){
        printf("Dentro!");
    } else {
        printf("Fora!");
    }

    return 0;
}