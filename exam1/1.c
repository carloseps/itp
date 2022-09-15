#include <stdio.h>

int main (void){

    int num;

    int counter = 1;

    scanf("%d",&num);

    int vetor[num];
    
    while (num > 0) {
        int mod = num  % 10;
        vetor[counter] = mod;
        counter++;
        num /= 10;
    }
    counter -= 1;
    while (counter > 0) {
        printf("%d\n", vetor[counter]);
        counter--;
    }

    return 0;
}