#include <stdio.h>

void printarAprovados(float notas[], int numeros[], int quantidade);
void printarRecuperacao(float notas[], int numeros[], int quantidade);
void printarReprovados(float notas[], int numeros[], int quantidade);
int hasNextAprovados(float notas[], int numeros[], int quantidade, int i);
int hasNextRecuperacao(float notas[], int numeros[], int quantidade, int i);
int hasNextReprovados(float notas[], int numeros[], int quantidade, int i);

int main (void) {
    int quantidade;
    scanf("%d", &quantidade);
    
    int numeros[quantidade];
    float notas[quantidade];
    int aprovados[0], recuperacao[0], reprovados[0];

    for (int i = 0; i < quantidade; i++){
        scanf("%d - %f", &numeros[i], &notas[i]);
    }

    printarAprovados(notas, numeros, quantidade);
    printarRecuperacao(notas, numeros, quantidade);
    printarReprovados(notas, numeros, quantidade);

    return 0;
}

int hasNextAprovados(float notas[], int numeros[], int quantidade, int i){
    for (int j = i+1; j < quantidade; j++){
        if(notas[j] >= 7){
            return 1;
        }
    } return 0;
}

int hasNextRecuperacao(float notas[], int numeros[], int quantidade, int i){
    for (int j = i+1; j < quantidade; j++){
        if(notas[j] >= 5 && notas[j] < 7){
            return 1;
        }
    } return 0;
}

int hasNextReprovados(float notas[], int numeros[], int quantidade, int i){
    for (int j = i+1; j < quantidade; j++){
        if(notas[j] < 5){
            return 1;
        }
    } return 0;
}

void printarAprovados(float notas[], int numeros[], int quantidade){
    printf("Aprovados:");
    
    for (int i = 0; i < quantidade; i++){
        if(notas[i] >= 7){
            if(hasNextAprovados(notas, numeros, quantidade, i) == 0){
                printf(" %d (%.1f)", numeros[i], notas[i]);
            } else if(hasNextAprovados(notas, numeros, quantidade, i) == 1){
                printf(" %d (%.1f),", numeros[i], notas[i]);
            }
        }
    }
    printf("\n");
}

void printarRecuperacao(float notas[], int numeros[], int quantidade){
    printf("Recuperação:");
    
    for (int i = 0; i < quantidade; i++){
        if(notas[i] >= 5 && notas[i] < 7){
            if(hasNextRecuperacao(notas, numeros, quantidade, i) == 0){
                printf(" %d (%.1f)", numeros[i], notas[i]);
            } else if(hasNextRecuperacao(notas, numeros, quantidade, i) == 1){
                printf(" %d (%.1f),", numeros[i], notas[i]);
            }
        }
    }
    printf("\n");
}

void printarReprovados(float notas[], int numeros[], int quantidade){
    printf("Reprovados:");
    
    for (int i = 0; i < quantidade; i++){
        if(notas[i] < 5){
            if(hasNextReprovados(notas, numeros, quantidade, i) == 0){
                printf(" %d (%.1f)", numeros[i], notas[i]);
            } else if(hasNextReprovados(notas, numeros, quantidade, i) == 1){
                printf(" %d (%.1f),", numeros[i], notas[i]);
            }
        }
    }
    printf("\n");
}