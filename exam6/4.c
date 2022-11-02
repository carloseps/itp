#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int charToInt(char c){
    return c - '0';
}

void criptografarMensagem(char *mensagem, char *chave){
    const char s[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
                      'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
                      'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
                      'W', 'X', 'Y', 'Z', '.', ',', '?', ' '};
    int achouChar = 0;

    int tamanhoMensagem = strlen(mensagem) - 1;
    int indiceCaractere[tamanhoMensagem];
    for (int i = 0; i < tamanhoMensagem; i++){
        for (int j = 0; j < strlen(s); j++){
            if (mensagem[i] == s[j]){
                achouChar++;
                indiceCaractere[i] = j;
            }
        }
    }
    int numero = atoi(chave) + 1;
    if (achouChar < tamanhoMensagem){
        printf("Caractere invalido na entrada!");
    }
    else{
        int j = 0;
        for (int i = 0; i < tamanhoMensagem; i++){
            if (j >= 4){
                j = 0;
            }
            int keyConvertida = charToInt(chave[j]);
            int novaPosicao = indiceCaractere[i] + keyConvertida;

            if (novaPosicao >= strlen(s)){
                novaPosicao = novaPosicao - strlen(s);
            }
            printf("%c", s[novaPosicao]);
            j++;
        }
    }
}

int main(void){
    char chave[4];
    char mensagem[200];
    scanf(" %s\n", chave);
    fgets(mensagem, 200, stdin);
    criptografarMensagem(mensagem, chave);

    return 0;
}