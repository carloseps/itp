#include <stdio.h>

int main (void){
    int numero, invertido = 0, resto, original;
    scanf("%d", &numero);
    original = numero;

    while (numero != 0) {
        resto = numero % 10;
        invertido = invertido * 10 + resto;
        numero /= 10;
    }

    if (original == invertido){
        printf("%d é Palíndromo", original);
        if(original % 2 == 0){
            printf(" e par.");
        } else{
            printf(" e impar.");
        }   
    } else {
        printf("%d não é Palíndromo", original);
        if(original % 2 == 0){
            printf(" e par.");
        } else{
            printf(" e impar.");
        }   
    }
     
    return 0;
}

