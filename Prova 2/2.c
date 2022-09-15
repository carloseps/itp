#include <stdio.h>

int main (void){
    int i;
    int qtdEquipes = 0;
    int counter = 0;
    int qtdC = 0;
    int qtdS = 0;
    int qtdL = 0;
    int qtdTotal = 0;
    char prova;

    scanf("%d",&qtdEquipes);
    while (prova != 'F' && counter <= qtdEquipes){
        scanf("%c",&prova);
        if (prova == 'C'){
            qtdC++;
        } else if (prova == 'S'){
            qtdS++;
        } else if (prova == 'L'){
            qtdL++;
        } else if (prova == 'F'){
            counter++;
        }
    }
    
    qtdTotal = qtdC + qtdS + qtdL;
    printf("%d %d %d %d", qtdC, qtdS, qtdL, qtdTotal);
    
    return 0;
}