#include <stdio.h>
#include <string.h>

typedef struct{
    char modelo[40];
    int memoria;
    float processador;
    float camera;
    float bateria;
} Smartphone;

int cadastraSmartphone(int qnt_cadastrada, Smartphone phones[]){
    Smartphone phone;
    scanf(" %[^\n]s", phone.modelo);
    scanf(" %d %f %f %f", &phone.memoria, &phone.processador, &phone.camera, &phone.bateria);
    phones[qnt_cadastrada] = phone;
}

int pesquisaSmartphones(int qnt_cadastrada, Smartphone phones[], Smartphone reqMinimo){
    int phonesAchados = 0;
    for (int i = 0; i < qnt_cadastrada; i++){
        if (phones[i].memoria >= reqMinimo.memoria && phones[i].processador >= reqMinimo.processador && phones[i].camera >= reqMinimo.camera && phones[i].bateria >= reqMinimo.bateria){
            printf("Modelo: %s\n", phones[i].modelo);
            printf("Memoria: %dGB\n", phones[i].memoria);
            printf("Processador: %.2fGhz\n", phones[i].processador);
            printf("Camera: %.2fMPixels\n", phones[i].camera);
            printf("Bateria: %.2fmA\n", phones[i].bateria);
            printf("\n");
            phonesAchados++;
        }
    }
    return phonesAchados;
}

int main(void){
    Smartphone phones[20];
    int run = 1;
    char lerOutro;
    int qnt_cadastrada = 0;
    while (run = 1){
        scanf("%c", &lerOutro);
        if (lerOutro == 'n'){
            run = 0;
            break;
        }
        else if (lerOutro == 's' && qnt_cadastrada < 20){
            cadastraSmartphone(qnt_cadastrada + 1, phones);
            qnt_cadastrada++;
        }
    }
    Smartphone reqMinimo;
    scanf(" %d %f %f %f", &reqMinimo.memoria, &reqMinimo.processador, &reqMinimo.camera, &reqMinimo.bateria);
    printf("%d smartphones encontrados.", pesquisaSmartphones(qnt_cadastrada, phones, reqMinimo));

    return 0;
}

