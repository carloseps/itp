#include <stdio.h>

int ehLegal(int vetor[], int tamanho);

int main(void){
    int n;
    scanf("%d", &n);
    int vetor[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }
    
    if(ehLegal(vetor, n) == 1){
        printf("Legal");
    } else if(ehLegal(vetor, n) == 0){
        printf("Chato");
    }

 return 0;
}

int ehLegal(int vetor[], int tamanho){
    int contadorDeCasos = 0;
    for(int i = 1; i < tamanho; i++){
        if((vetor[i] - vetor[i-1]) % 2 != 0){
            contadorDeCasos++;
        }
    }
    if(contadorDeCasos > 0){
        return 0;
    } else return 1;
}