#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void removeEspacos(char *palavra){ 
    int i, count = 0;
    for(i = 0; palavra[i]; i++){
        if(palavra[i] != ' '){
            palavra[count++] = palavra[i];
        }
    }
    palavra[count] = 0;
} 

char* reverteString(char palavra[]){ 
    int i, tamanho, temp;  
    tamanho = strlen(palavra);   
    for (i = 0; i < (tamanho/2); i++){
        temp = palavra[i];  
        palavra[i] = palavra[tamanho - i - 1];  
        palavra[tamanho - i - 1] = temp;  
    }
    return palavra;
}  

int compararStrings(char *strAux, char *stringInvertida, int counter){
    //printf("%s %s %d\n", strAux, stringInvertida, counter);
    if (counter == (strlen(strAux)-1)){
        return 1;
    } else {
        counter++;
        if(strAux[counter] == stringInvertida[counter] && compararStrings(strAux, stringInvertida, (counter)) == 1){
            return 1;
        } else return 0;
    }
}

int palindromo(char *entrada){
    int tamanho = strlen(entrada);
    char original[tamanho];
    strcpy(original, entrada);
    removeEspacos(entrada);
    char strAux[tamanho];
    strcpy(strAux, entrada);
    char* stringInvertida = reverteString(entrada);
    removeEspacos(stringInvertida);
    if(compararStrings(strAux, stringInvertida, 0) == 1){
        printf("O texto %c%s%c é palíndromo", '"', original, '"');
    } else printf("O texto %c%s%c não é palíndromo", '"', original, '"');
}

int main(void){
    char palavra[20];
    char *p;
    p = (char *)malloc(20 * sizeof(char *));
    scanf("%[^\n]s", palavra);
    palindromo(palavra);
    return 0;
}
