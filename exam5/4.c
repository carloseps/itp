#include <stdio.h>

void verificaJogada(char tabuleiroInicial[3][3], char jogada, int linha, int coluna);

void verificaJogada(char tabuleiroInicial[3][3], char jogada, int linha, int coluna){
    if(tabuleiroInicial[coluna-1][linha-1] != '.'){
        printf("Jogada inválida!\n");
    } else if(coluna-1 == 1 && tabuleiroInicial[coluna-2][linha-1] == jogada && tabuleiroInicial[coluna][linha-1] == jogada || coluna-1 == 1 && tabuleiroInicial[coluna-2][linha-2] == jogada && tabuleiroInicial[coluna][linha] == jogada || coluna-1 == 1 && tabuleiroInicial[coluna][linha-2] == jogada && tabuleiroInicial[coluna-2][linha] == jogada){
        printf("Boa jogada, vai vencer!\n");
    } else if(coluna-1 == 0 && tabuleiroInicial[coluna][linha-1] == jogada && tabuleiroInicial[coluna+1][linha-1] == jogada){
        printf("Boa jogada, vai vencer!\n");
    } else if(coluna-1 == 2 && tabuleiroInicial[coluna-3][linha-1] == jogada && tabuleiroInicial[coluna-2][linha-1] == jogada || coluna-1 == 2 && tabuleiroInicial[coluna-2][linha-2] == jogada && tabuleiroInicial[coluna-3][linha-3] == jogada){
        printf("Boa jogada, vai vencer!\n");
    } else if(linha-1 == 1 && tabuleiroInicial[coluna-1][linha-2] == jogada && tabuleiroInicial[coluna-1][linha] == jogada){
        printf("Boa jogada, vai vencer!\n");
    } else if(linha-1 == 0 && tabuleiroInicial[coluna-1][linha] == jogada && tabuleiroInicial[coluna-1][linha+1] == jogada){
        printf("Boa jogada, vai vencer!\n");
    } else if(linha-1 == 2 && tabuleiroInicial[coluna-1][linha-3] == jogada && tabuleiroInicial[coluna-1][linha-2] == jogada){
        printf("Boa jogada, vai vencer!\n");
    } else if(coluna-1 == 0 && linha-1 ==2 && tabuleiroInicial[coluna][linha-2] == jogada && tabuleiroInicial[coluna+1][linha-3] == jogada){
        printf("Boa jogada, vai vencer!\n");
    } else {printf("Continua o jogo.\n");}
}

int main(void){
    char tabuleiroInicial[3][3], jogada;
    int qtdJogadas, linha, coluna;
    for(int j=0; j<3; j++){
       for(int i=0; i<3; i++){
            scanf("%c\n", &tabuleiroInicial[i][j]);
       }
    }
    scanf("%d", &qtdJogadas);
    for(int j=0; j<qtdJogadas; j++){
        scanf("%d %d %c\n", &linha, &coluna, &jogada);
        verificaJogada(tabuleiroInicial, jogada, linha, coluna);
    }
    return 0;
}