#include <stdio.h>

int verificarPrimo(int numero){
    int contador = 0;
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
           contador++;
        }
    } if (contador > 2){
        return 0;
    } else return 1;
}

int verificaGemeo(int numero){
    int numeroaux = numero + 2;
    if(verificarPrimo(numero) == 1 && verificarPrimo(numeroaux) == 1){
        return 1;
    } else return 0;
}

int main(){
    int numero;
    scanf("%d\n", &numero);
    if(numero == 1){
        printf("Numero nao forma par de gemeos");
    } else if(verificaGemeo(numero) == 1){
        printf("Numero forma par de gemeos");
    } else if(verificaGemeo(numero) == 0){
        printf("Numero nao forma par de gemeos");
    }
    return 0;
}