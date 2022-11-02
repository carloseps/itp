#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int qtdElementos;
    int elementos[50];
} Conjunto;

void uniao(Conjunto* conjA, Conjunto* conjB){
    Conjunto uniao;
    int i, n;
    uniao.qtdElementos = 0;
    for (i = 0; i < conjA->qtdElementos; i++){
        uniao.elementos[i] = conjA->elementos[i];
        //printf("add %d no indice (%d)\n", uniao.elementos[i], i);
        uniao.qtdElementos++;
    }
    int qtdCasos = 0;
    for (int j = 0; j < conjB->qtdElementos; j++){
        for (n = 0; n < conjA->qtdElementos; n++){
            if(conjB->elementos[j] == conjA->elementos[n]){
                qtdCasos++;
            }
        } if(qtdCasos == 0){
            uniao.elementos[i] = conjB->elementos[j];
            //printf("add %d no indice (%d)\n", uniao.elementos[i], i);
            uniao.qtdElementos++; i++;
        } else {
            qtdCasos = 0;
            continue;
        }
    }
    printf("A união B == {");
    for(int k = 0; k < uniao.qtdElementos; k++){
        if(k == uniao.qtdElementos-1){
            printf("%d", uniao.elementos[k]);
        } else printf("%d ", uniao.elementos[k]);
    }
    printf("}\n");
    
}

void intersecao(Conjunto* conjA, Conjunto* conjB){       
    Conjunto intersecao;
    intersecao.qtdElementos = 0;
    for(int i = 0; i < conjB->qtdElementos; i++){
        for(int j = 0; j < conjA->qtdElementos; j++){
            if(conjB->elementos[i] == conjA->elementos[j]){
                intersecao.elementos[intersecao.qtdElementos] = conjB->elementos[i];
                intersecao.qtdElementos++;
            }
        }
    }
    printf("A interseção B == {");
    for(int k = 0; k < intersecao.qtdElementos; k++){
        if(k == intersecao.qtdElementos-1){
            printf("%d", intersecao.elementos[k]);
        } else printf("%d ", intersecao.elementos[k]);
    }
    printf("}");
}
int main(void){
    Conjunto conjA, conjB;
    scanf("%d ", &conjA.qtdElementos);
    for (int i = 0; i < conjA.qtdElementos; i++){
        scanf("%d ", &conjA.elementos[i]);
        //printf("Add %d no A\n", conjA.elementos[i]);
    }
    scanf("%d", &conjB.qtdElementos);
    for (int i = 0; i < conjB.qtdElementos; i++){
        scanf("%d ", &conjB.elementos[i]);
        //printf("Add %d no B\n", conjB.elementos[i]);
    }
    if(conjA.qtdElementos == 0){
        if(conjB.qtdElementos == 0){
            printf("A união B == {vazio}\nA interseção B == {vazio}");
            exit(1);
        } else {
            printf("A união B == {%d}\n", conjB.elementos[0]);
            printf("A interseção B == {vazio}");
            exit(1);
        }
    }
    Conjunto *pA = &conjA;
    Conjunto *pB = &conjB;
    uniao(pA, pB);
    intersecao(pA, pB);
    return 0;
}

