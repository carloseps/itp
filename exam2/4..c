#include <stdio.h>

int main(void){
    
    int linha, coluna, numeroDLinhas;
    char letra;
    scanf("%d\n",&numeroDLinhas);
    scanf("%c\n",&letra);
    for (linha = 0; linha < numeroDLinhas; linha++){
        for (coluna = 0; coluna < numeroDLinhas; coluna++){
            if((linha == coluna) || ((linha + coluna) == (numeroDLinhas-1)) ){
                printf("%c", letra);
            } else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}