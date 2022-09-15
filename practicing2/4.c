#include <stdio.h>

int main (void){

    int qtd, counter = 0;
    float dist, media = 0;
    float distTotal = 0.00;
    scanf("%d", &qtd);
    if(qtd == 0){
        printf("A competicao nao possui dados historicos!");
        return 0;
    }
    int qtdInicial = qtd;
    while (counter <= qtd) {
        scanf("%f", &dist);
        if (dist > 0){
            if(qtd == qtdInicial && counter == qtd){
                break;
            }
            distTotal = distTotal + ((float) dist);
        } else if (dist <= -1){
            qtd--;
        }
        counter++;
    }
    media = distTotal/((float)qtd);
    if(qtd == 1 && media > 0){
        printf("%.2f", dist);
    } else if (media <= 0){
        printf("A competicao nao possui dados historicos!");
    } else {
        printf("%.2f", media);
    }
    return 0;
}

