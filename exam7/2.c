#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[200];
    int vitorias;
    int empates;
    int derrotas;
    int golsFeitos;
    int golsSofridos;
    int pontos;
    int jogos;
    int saldoDeGols;
} Time;

Time cadastraTime(){
    Time time;
    scanf(" %[^;]%*c %d %d %d %d %d", time.nome, &time.vitorias, &time.empates, &time.derrotas, &time.golsFeitos, &time.golsSofridos);
    time.pontos = (time.vitorias*3) + time.empates;
    time.jogos = time.vitorias + time.derrotas + time.empates;
    time.saldoDeGols = time.golsFeitos - time.golsSofridos;
    return time;
}

Time * ordenarTabela(int qtdTimes, Time times[]){
    Time temp;
    for (int i = 0; i < qtdTimes - 1; i++){
        for (int j = 0; j < (qtdTimes - 1-i); j++){
            if (times[j].pontos < times[j + 1].pontos){
                temp = times[j];
                times[j] = times[j + 1];
                times[j + 1] = temp;
            } else if(times[j].pontos == times[j + 1].pontos && times[j].vitorias < times[j + 1].vitorias){
                temp = times[j];
                times[j] = times[j + 1];
                times[j + 1] = temp; 
            } else if(times[j].vitorias == times[j + 1].vitorias && times[j].saldoDeGols < times[j + 1].saldoDeGols){
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
    printf("Tabela do campeonato:\n");
    printf("Nome| Pontos| Jogos| Vitorias| Empates| Derrotas| Gols Pro| Gols Contra| Saldo de Gols\n");
    for (int i = 0; i < qtdTimes; i++){
        printf("%s| %d| %d| %d| %d| %d| %d| %d| %d\n", (tblOrdenada+ i)->nome, (tblOrdenada+ i)->pontos, (tblOrdenada+ i)->jogos, (tblOrdenada+ i)->vitorias, (tblOrdenada+ i)->empates,
        (tblOrdenada+ i)->derrotas, (tblOrdenada+ i)->golsFeitos, (tblOrdenada+ i)->golsSofridos, (tblOrdenada+ i)->saldoDeGols);
    }
    printf("\nTimes na zona da libertadores:\n");
    for (int i = 0; i < 6; i++){
        printf("%s\n", (tblOrdenada+ i)->nome);
    }
    printf("\nTimes rebaixados:\n");
    for (int i = qtdTimes-1; i >= qtdTimes-4; i--){
        printf("%s\n", (tblOrdenada+ i)->nome);
    }    
}

int main(void){
    int qtdTimes;
    scanf("%d", &qtdTimes);
    Time times[qtdTimes];
    for (int i = 0; i < qtdTimes; i++){
        Time time = cadastraTime();
        times[i] = time;
    }
    printarTimes(qtdTimes, times);
    return 0;
}

