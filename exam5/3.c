#include <stdio.h>

int calcularAposta(int largura, int altura, int bandeira[altura][largura], char cor, int numInicial);

int calcularAposta(int largura, int altura, int bandeira[altura][largura], char cor, int numInicial){
    int numASerSomado = 0, somaTotal = 0;
    if(cor == 'G'){
        numASerSomado = numInicial+1;
    } else if(cor == 'Y'){
        numASerSomado = numInicial+2;
    } else if(cor == 'R'){
        numASerSomado = numInicial+3;
    }
    for(int j=0; j<altura; j++){
       for(int i=0; i<largura; i++){
           if(bandeira[j][i] == numASerSomado){
               somaTotal+=numASerSomado;
           }
       }
    }
    return somaTotal;
}

int main(void){
    
    int largura, numInicial = 0;
    char cor;
    
    //largura, número inicial, cor; 
    scanf("%d %d %c", &largura, &numInicial, &cor);
    
    int altura = 2*(largura/3);
    int bandeira[altura][largura];
    
    
    for(int j=0; j<altura; j++){
       for(int i=0; i<largura; i++){
           if(i < largura/3){
               bandeira[j][i] = numInicial+1;
           } else if(i >= largura/3 && i < (2*largura)/3){
               bandeira[j][i] = numInicial+2;
           } else if(i >= (2*largura)/3 && i < largura){
               bandeira[j][i] = numInicial+3;
           }
       }
    }
    int aposta = calcularAposta(largura, altura, bandeira, cor, numInicial);
    printf("%d", aposta);
    return 0;
}
