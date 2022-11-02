#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[50];
    int golsFeitos;
    int golsSofridos;
} Time;

Time cadastraTime(){
    Time time;
    fgets(time.nome, 50, stdin);
    //printf("NOME - %s\n", time.nome);
    scanf("%d %d\n", &time.golsFeitos, &time.golsSofridos);
    return time;
}

Time * ordenarTabela(int qtdTimes, Time times[]){
    Time temp;
    for (int i = 0; i < qtdTimes - 1; i++){
        for (int j = 0; j < (qtdTimes - 1-i); j++){
            if (times[j].golsFeitos < times[j + 1].golsFeitos){
                temp = times[j];
                times[j] = times[j + 1];
                times[j + 1] = temp;
            }
        }
    }
    return times;
}

void printarTimes(int qtdTimes, Time times[]){
    Time* tblOrdenada = ordenarTabela(qtdTimes, times);
    for (int i = 0; i < qtdTimes; i++){
        printf("%d - %sGols marcados: %d\nGols sofridos: %d\n", i+1, (tblOrdenada+ i)->nome, (tblOrdenada+ i)->golsFeitos, (tblOrdenada+ i)->golsSofridos);
    }
}

int main(void){
    int qtdTimes;
    scanf("%d\n", &qtdTimes);
    Time times[qtdTimes];
    for (int i = 0; i < qtdTimes; i++){
        Time time = cadastraTime();
        times[i] = time;
    }
    printarTimes(qtdTimes, times);
    return 0;
}

