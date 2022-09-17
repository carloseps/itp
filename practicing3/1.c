#include <stdio.h>

int calcularMDC(int x, int y){
    int resto;
    if(y == 0){
        return x;
    } else {
        while (y != 0){
            resto = x%y;
            x = y;
            y = resto;
        }
        return x;
    }
}
int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    printf("MDC(%d , %d) = %d", x, y, calcularMDC(x, y));
    return 0;
}