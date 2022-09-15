#include <stdio.h>

int main (void){

    int qtd = 0, qtdTotal  = 0;
    float valor = 0.00;
    float valorTotal = 0.00;

    while (qtd != -1) {
        scanf("%d", &qtd);
        if (qtd == -1){
            break;
        }
        scanf("%f", &valor);
        qtdTotal += qtd;
        valorTotal = valorTotal + (((float)qtd) * valor);
    }
    printf("%d %.2f", qtdTotal, valorTotal);
     
    return 0;
}

