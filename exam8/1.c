#include <stdio.h>

void computarVotos(int qtdVotos, int chapas[], int *maisVotado, int *segundoMaisVotado, int counters[]){
    int temp1, temp2;
    for(int i = 0; i < 8; i++){
        for (int j = (i + 1); j < 10; j++){
            if (counters[i] > counters[j]){
                temp1 = counters[i];
                counters[i] = counters[j];
                counters[j] = temp1;

                temp2 = chapas[i];
                chapas[i] = chapas[j];
                chapas[j] = temp2;

                maisVotado = &i;
                segundoMaisVotado = &j;
            }
        }
    }
    printf("%d %d", chapas[(*maisVotado)], chapas[(*segundoMaisVotado)-1]);
}

int main(void){
    int chapas[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int counters[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int *maisVotado = &counters[0], *segundoMaisVotado = &counters[0];
    int qtdVotos;
    scanf("%d\n", &qtdVotos);
    int votos[qtdVotos];
    for (int i = 0; i < qtdVotos; i++){
        scanf("%d ", &votos[i]);
        for (int n = 0; n < qtdVotos; n++){
            if(chapas[n] == votos[i]){
                counters[n]++;
            }
        }
    } scanf("\n");
    computarVotos(qtdVotos, chapas, maisVotado, segundoMaisVotado, counters);
    return 0;
}

