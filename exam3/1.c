#include <stdio.h>
#include <stdbool.h>

bool ehPar(int numero);

int main (void){
    int numero;
    scanf("%d", &numero);
    bool ehPar(numero);
    if(ehPar(numero) == 1){
        printf("true");
    } else {
        printf("false");
    }
    return 0;
}

bool ehPar(int numero){
    if(numero % 2 == 0){
        return true;
    } else {
        return false;
    }
}
