#include <stdio.h>

int calcNota(int nota1, int nota2, int nota3){
    int media = (nota1 + nota2 + nota3)/3; 
    if(nota1 >= 3 && nota2 >= 3 && nota3 >= 3 && media < 5){
        return nota1;
    } else return -1;
}
int main(){
    int notas[3], notaNecessaria;
    for (int i = 0; i < 3; i++){
        scanf("%d", &notas[i]);
    }
    if(calcNota(notas[0], notas[1], notas[2])==-1){
        printf("Nao faz prova final");
    } else {
        if(notas[0] >= notas[1] && notas[1] >= notas[2]){
            notaNecessaria = 15 - (notas[0] + notas[1]);
        } else if (notas[1] >= notas[0] && notas[2] >= notas[0]){
            notaNecessaria = 15 - (notas[1] + notas[2]);
        } else if (notas[0] >= notas[1] && notas[2] >= notas[1]){
            notaNecessaria = 15 - (notas[0] + notas[2]);
        }
        printf("Final\n%d.0", notaNecessaria);
    }
    return 0;
}