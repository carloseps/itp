#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char *participantes = malloc(1024 * sizeof(char *));
    //malloc(1024 * sizeof(char))
    //scanf(" %[^\n]s", participantes[0]);
    int counter = 0, run = 1;
    scanf("%[^\n]s", participantes[0]);
    printf("%s\n", participantes[0]);
    while(counter <= 10){
        if(strcmp((participantes + counter)[0], "acabou") == 0){
            run = 0;
            break;
        } else {
            scanf("%[^\n]s", (participantes + counter)[0]);
            printf("%s\n", (participantes + counter)[0]);
        }
        counter++;
    }
    
    return 0;
}

