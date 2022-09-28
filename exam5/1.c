#include <stdio.h>

int main(void){
    
    int qtdBlocos;
    scanf("%d", &qtdBlocos);
    
    int matriz[qtdBlocos][qtdBlocos];
    
    for(int j=0; j<qtdBlocos; j++){
       for(int i=0; i<qtdBlocos; i++){
            matriz[j][i] = 1;
            if(j >= 1 && j < qtdBlocos-1 && i < qtdBlocos-1 && i >= 1 ){
                if(j >= 2 && j < qtdBlocos-2 && i < qtdBlocos-2 && i >= 2 ){
                    if(j >= 3 && j < qtdBlocos-3 && i < qtdBlocos-3 && i >= 3 ){
                        if(j >= 4 && j < qtdBlocos-4 && i < qtdBlocos-4 && i >= 4 ){
                            matriz[j][i]+=4;
                        } else matriz[j][i]+=3;
                    } else matriz[j][i]+=2;
                } else matriz[j][i]++;
            }
            printf("%d ", matriz[j][i]);
       } printf("\n");
    }
    return 0;
}