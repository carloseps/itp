#include <stdio.h>

int testaChance(int v1, int v2, int dist){
    if(dist == 0){
        return 0;
    }
}
int main(){
    int v1, v2, dist;
    scanf("%d %d %d", &v1, &v2, &dist);
    if(testaChance(v1, v2, dist)== -1){
        printf("impossivel");
    } else printf("%ds", testaChance(v1, v2, dist));
    return 0;
}