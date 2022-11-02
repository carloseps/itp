#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[50];
    int idade;
    char sexo;
} Pessoa;

Pessoa cadastraPessoa(){
    Pessoa pessoa;
    scanf(" %[^\n]s", pessoa.nome);
    scanf("%d\n%c", &pessoa.idade, &pessoa.sexo);
    return pessoa;
}

Pessoa * deletarPessoa(int qtdPessoas, Pessoa pessoas[], char nome[], int idade, char sexo){
    for (int i = 0; i < qtdPessoas; i++){
        if((pessoas +i)->nome == nome && (pessoas +i)->idade == idade && (pessoas +i)->sexo == sexo){
            (pessoas +i)->nome = [];
            (pessoas +i)->idade = [];
            (pessoas +i)->sexo = [];
        }
    }
    return pessoas;
}

void printarPessoas(int qtdPessoas, Pessoa *pessoas){
    for (int i = 0; i < qtdPessoas; i++){
        printf("%s,%d,%c\n", (pessoas+ i)->nome, (pessoas+ i)->idade, (pessoas+ i)->sexo);
    }
}

int main(void){
    Pessoa pessoas[20];
    Pessoa* pessoasP;
    int run = 1;
    char codigo;
    int qtdPessoas = 0, qtdDeletados = 0;
    while (run = 1){
        scanf("%c", &codigo);
        if (codigo == 'p'){
            if(qtdDeletados != 0){
                pessoasP = pessoas;
            }
            printarPessoas(qtdPessoas, pessoasP);
            run = 0;
            exit(0);
        }
        else if (codigo == 'i' && qtdPessoas < 20){
            Pessoa pessoa = cadastraPessoa();
            pessoas[i] = pessoa;
            qtdPessoas++;
        }
        else if (codigo == 'd' && qtdPessoas < 20){
            pessoasP = deletarPessoa();
            qtdPessoas--;
            qtdDeletados++;
        }
    }
    return 0;
}

