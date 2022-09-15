#include <stdio.h>

int main (void){
    
    int combos[5] = {12, 23, 31, 28, 15};
    
    int comboEscolhido, saldo, troco, oqFalta;
    
    scanf("%d\n", &comboEscolhido);
    scanf("%d\n", &saldo);
    
    if(saldo == combos[comboEscolhido-1]){
        printf("Deu certim!");
    } else if (saldo < combos[comboEscolhido-1]){
        oqFalta = combos[comboEscolhido-1] - saldo;
        printf("Saldo insuficiente! Falta %d reais\n",oqFalta);
    } else if (saldo > combos[comboEscolhido-1]){
        troco = saldo - combos[comboEscolhido-1];
        printf("Troco = %d reais\n",troco);
    }
    return 0;
}