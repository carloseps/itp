#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[10];
    int votos;
    int numero;
} Partido;

void computarVotos(int qtdPartidos, Partido partidos[qtdPartidos], int *maisVotado, int *segundoMaisVotado, int votosValidos){
    int temp1;
    char temp2[10];
    for(int i = 0; i <= (qtdPartidos -1); i++){
        for (int j = (i + 1); j < qtdPartidos; j++){
            if (partidos[i].votos > partidos[j].votos){
                temp1 = partidos[i].votos;
                partidos[i].votos = partidos[j].votos;
                partidos[j].votos = temp1;

                strcpy(temp2, partidos[i].nome); 
                strcpy(partidos[i].nome, partidos[j].nome);
                strcpy(partidos[j].nome, temp2);
            }
        }
    }
    float porcentagem1 = (float)partidos[qtdPartidos-1].votos/votosValidos*100;
    float porcentagem2 = (float)partidos[qtdPartidos-2].votos/votosValidos*100; 
    printf("VENCEDOR: %s (%d votos = %.2f%c)\n", partidos[qtdPartidos-1].nome, partidos[qtdPartidos-1].votos, porcentagem1, '%');
    printf("VICE: %s (%d votos = %.2f%c)\n\n", partidos[qtdPartidos-2].nome, partidos[qtdPartidos-2].votos, porcentagem2, '%');
}

int main(void){
    int qtdPartidos;
    scanf("%d\n", &qtdPartidos);
    Partido partidos[qtdPartidos];
    for (int i = 0; i < qtdPartidos; i++){
        scanf("%d %s\n", &partidos[i].numero, partidos[i].nome);
        partidos[i].votos = 0;
    }
    int *maisVotado = &partidos[0].votos, *segundoMaisVotado = &partidos[0].votos;
    int qtdVotos, votosValidos = 0;
    scanf("%d", &qtdVotos);
    int votosTotais[qtdVotos];
    for (int i = 0; i < qtdVotos; i++){
        scanf("%d ", &votosTotais[i]);
        for (int n = 0; n < qtdPartidos; n++){
            if (votosTotais[i] == partidos[n].numero){
                partidos[n].votos++;
                votosValidos++;
            }
        }
    }
    computarVotos(qtdPartidos, partidos, maisVotado, segundoMaisVotado, votosValidos);
    return 0;
}

