#include <stdio.h>
#include <math.h>

int main (void){

    int temp, counter = 0;
    float mH, mG, mA, errH, errG, errMedio, somaTotal = 0, somaTotalHarmonica = 0, somaTotalGeometrica = 1;
    
    for (int i = 0; i < 10; i++){
        scanf("%d\n",&temp);
        somaTotal += temp;
        somaTotalGeometrica = (somaTotalGeometrica * temp);
        somaTotalHarmonica  += ((float)1/temp);
        counter++;
    } 
    mA = somaTotal/10;
    printf("Média aritmética é %.2f\n", mA);
    mH = 10.0/((float)somaTotalHarmonica);
    printf("Média harmônica é %.2f\n", mH);
    mG = pow(((float)somaTotalGeometrica), ((float)1/10));
    printf("Média geométrica é %.2f\n", mG);

    char c = '%';
    errH = (mH-mA)/mA;
    errG = (mG-mA)/mA;
    errMedio = ((errH + errG)/2)*100;
    printf("Erro médio é %.2f %c", errMedio, c);

    return 0;
}