#include <stdio.h>
#include <stdbool.h>

void bubbleSort(int vetor[], int tamanho);
void printarVetor(int vetor[], int tamanho);
bool contains(int elemento, int vetor[], int tamanho);

int main (void) {
    int qtdA, qtdB, counter = 0;
    scanf("%d %d", &qtdA, &qtdB);
    int vetorA[qtdA], vetorB[qtdB], difSimetrica[qtdA+qtdB];
    
    for (int i = 0; i < qtdA; i++) {
        scanf("%d", &vetorA[i]);
    }
    for (int i = 0; i < qtdB; i++) {
        scanf("%d", &vetorB[i]);
    }
    for (int i = 0; i < qtdA; i++) {
        if(!contains(vetorA[i], vetorB, qtdB)) {
            difSimetrica[counter] = vetorA[i];
            counter++;
        }
    }
    for (int i = 0; i < qtdB; i++) {
        if(!contains(vetorB[i], vetorA, qtdA)) {
            difSimetrica[counter] = vetorB[i];
            counter++;
        }
    }
    bubbleSort(difSimetrica, counter);
    return 0;
}

void printarVetor(int vetor[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
    } printf("\n");
}

bool contains(int elemento, int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == elemento) {
            return true;
            break;
        }
    }
    return false;
}

void bubbleSort(int vetor[], int tamanho){
    for (int i = 1; i < tamanho; i++) {
        for (int j = 0; j < tamanho-1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                int k = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = k;
            }
        }
    }
    printarVetor(vetor, tamanho);
}

