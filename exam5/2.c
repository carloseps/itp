#include <stdio.h>

void determinarPlaneta (int tils, int xs, int circs, int asters, int pontos, int qtdCells);

int main(void){
    
    int n, m;
    scanf("%d %d", &n, &m);
    int qtdCells = n * m;
    int tils = 0, xs = 0, circs = 0, asters = 0, pontos = 0;
    char matriz[n][m];
    for(int j=0; j<=m; j++){
       for(int i=0; i<n; i++){
            if(i == n-1){
                scanf("%c\n", &matriz[j][i]);
            } else {
                scanf("%c", &matriz[j][i]);
            } 
            if(matriz[j][i] == '~'){
                tils++;
            } else if(matriz[j][i] == 'X'){
                xs++;
            } else if(matriz[j][i] == '^'){
                circs++;
            } else if(matriz[j][i] == '*'){
                asters++;
            } else if(matriz[j][i] == '.'){
                pontos++;
            }
       }
    }
    
    determinarPlaneta (tils, xs, circs, asters, pontos, qtdCells);
    
    return 0;
}

void determinarPlaneta (int tils, int xs, int circs, int asters, int pontos, int qtdCells){
    if(tils >= (qtdCells*0.5) && asters >= (qtdCells*0.2) && xs == 0){
        printf("Planeta Classe M");
    } else if (xs > 0){
        printf("Planeta Hostil");
    } else if(tils >= (qtdCells*0.85)){
        printf("Planeta Aquático");
    } else if(circs >= (qtdCells*0.6)){
        printf("Planeta Desértico");
    } else if(asters >= (qtdCells*0.65)){
        printf("Planeta Selvagem");
    } else {
        printf("Planeta Inóspito");
    }
}


