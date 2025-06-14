#include <stdio.h>

int media(int v[]);

int main(){

    int v[5], re;


    for(int i = 0; i < 5; i++){
    printf("Insira o %d elemento do vetor:\n", i+1);
    scanf("%d", &v[i]);}

    re = media(v);

    printf("%d", re);

    return 0;
}

int media(int v[]){
    int me = 0;
    for(int i = 0; i < 5; i++){
        me += v[i];
    }
    return me/5;
}
