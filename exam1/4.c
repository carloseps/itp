#include <stdio.h>

int main(void){
    int qtdHerois, classeDosHerois, monstro;

    scanf("%d\n", &qtdHerois);
    scanf("%d\n", &classeDosHerois);
    scanf("%d\n", &monstro);

    if(((classeDosHerois > monstro) || (monstro==5 && classeDosHerois == 5)) && (qtdHerois >= 1)){
        printf("Heróis vencerão!");
    } else if((qtdHerois >= 3) && (classeDosHerois == monstro )){
        printf("Heróis vencerão!");
    } else{
        printf("Melhor chamar Saitama!");
    }
    return 0;
}