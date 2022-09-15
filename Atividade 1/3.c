#include <stdio.h>

int main (void){

    char alfabeto[25] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    int n1, n2, n3, n4, aux;

    char letraASerPrintada;
    
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    scanf("%d", &n4);

    int somaDosValores = (n1 + n2 + n3 + n4);

    if(somaDosValores == 0){
        printf("Ei! Ninguém colocou nada!");
    } else if (somaDosValores < 26){
        REPEAT: letraASerPrintada = alfabeto[somaDosValores-1]; 
        printf("Letra: %c", letraASerPrintada);
    } else if(somaDosValores == 26){
        printf("Letra: Z");
    } else if (somaDosValores > 26){
        somaDosValores = somaDosValores - 26;
        goto REPEAT;
    }
    return 0;
}