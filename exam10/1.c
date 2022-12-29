#include <stdio.h>
#include <stdlib.h>

unsigned long long converter(unsigned long long num){
    if (num == 0){
        return 0;
    } else return (num % 2 + 10 * converter(num / 2)); // 827364 => 0 + 10 * 0 + 1 + 0 + 0 + 1 + 1 + 1 + 1 
}
int main(void){
    unsigned long long num;
    scanf("%llu\n", &num);
    unsigned long long result;
    result = converter(num);
    printf("%llu", result);
    return 0;
}
