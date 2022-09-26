#include <stdio.h>

void bubbleSort(int vetor[], int tamanho);

void printarVetor(int vetor[], int tamanho);

int main(void){
    int n;
    scanf("%d", &n);
    int vetor[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }
    bubbleSort(vetor, n);

    return 0;
}

void printarVetor(int vetor[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
    } printf("\n");
}

void bubbleSort(int vetor[], int tamanho){
    int run = 1;
    int temp;
    do {
        int contadorDeTrocas = 0;
        printarVetor(vetor, tamanho);
        for(int i = 1; i < tamanho; i++){
            if((vetor[i-1] > vetor[i])){
                contadorDeTrocas++;
                temp = vetor[i];
                vetor[i] = vetor[i-1];
                vetor[i-1] = temp;
            }
        } if (contadorDeTrocas == 0){
            break;
        }
    } while(run = 1);
    
}