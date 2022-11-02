#include <stdio.h>
#include <string.h>

char* delete(char string[], char fixo[]){
    int i = 0;
    int string_length = strlen(string);
    int fixo_length = strlen(fixo);
    
    while (i < string_length){
        if (strstr(&string[i], fixo) == &string[i]){
        string_length -= fixo_length;
        for (int j = i; j < string_length; j++)
            string[j] = string[j + fixo_length];
        }
        else i++;
    }
    string[i] = '\0';
    return string;
}

int main(void){
    int qtdPrefixos;
    scanf("%d\n", &qtdPrefixos);
    char prefixos[qtdPrefixos][10];
    for (int i = 0; i < qtdPrefixos; i++){
        char prefixo[10];
        scanf("%s\n", prefixos[i]);
    }
    int qtdSufixos;
    scanf("%d\n", &qtdSufixos);
    char sufixos[qtdSufixos][10];
    for (int i = 0; i < qtdSufixos; i++){
        char sufixo[10];
        scanf("%s\n", sufixos[i]);
    }

    char palavras[20][100];

    for (int i = 0; i < 20; i++){
        fgets(palavras[i], 100, stdin);
        if (palavras[i][0] == '-' && palavras[i][1] == '1'){
            break;
        }
        else if (qtdPrefixos == 0 && qtdSufixos == 0){
            printf("%s", palavras[i]);
        }
        else{
            char aux[20];
            if(qtdPrefixos != 0){
                for (int j = 0; j < qtdPrefixos; j++){
                    char *palavraModificada = delete(palavras[i], prefixos[j]);
                    if(j == qtdPrefixos-1){
                        for (int n = 0; n < 20; n++)
                        {
                            aux[n] = palavraModificada[n];
                        }
                    }  
                }
                if(qtdSufixos == 0){
                    printf("%s", aux);
                } else {
                    for (int j = 0; j < qtdSufixos; j++){
                        char *palavraModificada = delete(aux, sufixos[j]);
                        if(j == qtdSufixos-1){
                            printf("%s", palavraModificada);
                        }
                    }
                }
            } else if(qtdSufixos != 0){
                for (int j = 0; j < qtdSufixos; j++){
                    char *palavraModificada = delete(palavras[i], sufixos[j]);
                    if(j == qtdSufixos-1){
                        printf("%s", palavraModificada);
                    }
                }
            }
        }
    }
    return 0;
}
