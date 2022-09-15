#include <stdio.h>

int main (void){

    float cels, kelv, fahr;

    int temperatura;
    char escala;
    scanf("%d\n", &temperatura);
    scanf("%c\n", &escala);
    

    if(escala == 'C'){
        cels = temperatura;
        kelv = ((float) cels) + 273.15;
        fahr = (((float) cels) * 1.8) + 32; 

        printf("Celsius: %.2f\nFarenheit: %.2f\nKelvin: %.2f\n", cels, fahr, kelv);
    }

    if(escala == 'F'){
        fahr = temperatura; 
        kelv = ((float) fahr + 459.67) * 5/9;
        cels = (5/9 * ((float) fahr)) - 32; 

        printf("Celsius: %.2f\nFarenheit: %.2f\nKelvin: %.2f\n", cels, fahr, kelv);
    }

    if(escala == 'K'){
        kelv = temperatura;
        cels = ((float) kelv) - 273.15;//1.8*(K-273) + 32
        fahr = (1.8 * ((float) kelv) - 273) + 32; 

        printf("Celsius: %.2f\nFarenheit: %.2f\nKelvin: %.2f\n", cels, fahr, kelv);
    }
    return 0;
}