#include <stdio.h>
int main(void){
    int n, i, j, counter = 0, numero = 1;
    scanf("%d",&n);
    if(n <= 0){
        printf("Você entrou com %d, tente de novo na próxima", n);
    } else {
        for(i=1; i <= n; i++){
            for(j=1; j <= i; ++j){
                if(i < 5 && counter < 9){
                    printf(" %d ", numero);
                    ++numero;
                    counter++;
                } else {
                    printf("%d ", numero);
                    ++numero;
                }
            }
            printf("\n");
        }
    }
    return 0;
}