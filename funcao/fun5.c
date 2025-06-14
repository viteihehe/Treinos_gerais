#include <stdio.h>

void print(int v[], int tama);

int main(){

    int v[10], n;

    printf("Insira o tamanho do vetor:\n");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
    printf("Insira o %d elemento do vetor:\n", i+1);
    scanf("%d", &v[i]);}

    print(v, n);

    return 0;
}

void print(int v[], int tama){
    for(int i = 0; i < tama; i++){
        printf("%d ", v[i]);
    }
}