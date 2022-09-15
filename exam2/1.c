#include <stdio.h>

int main (void){

    float inscricao, tempoMax;
    int qtdSeries = 0;
    int counter = 1;
    int qtdAptos = 0;

    scanf("%f\n",&tempoMax);
    while (inscricao != -1){
        scanf("%f\n",&inscricao);
        if (inscricao <= tempoMax && inscricao!=-1){
            qtdAptos++;
        } counter++;
        
    } 
    
    if(qtdAptos <= 8 && qtdAptos !=0){
        qtdSeries = 1;
    } else if(qtdAptos == 0){
        qtdSeries = 0;
    }
    else if(qtdAptos > 8){
        qtdSeries = (qtdAptos / 8) + 1;
    }
    printf("%d %d", qtdAptos, qtdSeries);
    
    return 0;
}