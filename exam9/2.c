#include <stdio.h>
#include <stdlib.h>

int main(void){
    int* array = (int*) malloc(10 * sizeof(int));
    int counter = 0;
    while(scanf("%d", &array[counter]) == 1){
        if(counter == 20){
            realloc(array, 10 * sizeof(int));
        }
        counter++;
    }
    int temp;
    for(int i = 0; i < (counter -1); i++){
        for (int j = (i + 1); j < counter; j++){
            if (array[i] > array[j]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;   
            }
        }
    }
    
    for(int i = 0; i < counter; i++){
        printf("%d ", (array[i]));
    }
    return 0;
}

