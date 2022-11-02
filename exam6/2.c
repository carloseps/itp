#include <stdio.h>
#include <string.h>

int verificaPadrao (char *padrao, char *texto){
    int run = 1, counter = 0;
    for (int n = counter; n < strlen(texto); n++){
        for(int i = n; i < (strlen(padrao)+n); i++){
            if(texto[i] == padrao[i]){
                if(i == strlen(padrao)-1){
                    printf("%c sim\n", texto[i]);
                    printf("Achei o padrão no índice %d", n);
                    run = 0;
                    break;
                    return 0;
                } else printf("%c ", texto[i]);
            } else if(texto[i] != padrao[i]){
                printf("%c não\n", texto[i]);
                counter = i+1;
            }
        } 
    }
    printf("Não achei o padrão");
}

int main(void){
    char texto[18], padrao[10];
    fgets(texto, 18, stdin);
    fgets(padrao, 10, stdin);
    //scanf("%s\n", texto);
    //scanf("%s", padrao);
    verificaPadrao(padrao, texto);
    return 0;
}