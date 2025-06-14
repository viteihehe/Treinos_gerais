#include <stdio.h>

void contr(int v[]);

int main(){

    int v[5], re;


    for(int i = 0; i < 5; i++){
    printf("Insira o %d elemento do vetor:\n", i+1);
    scanf("%d", &v[i]);}

    contr(v);

    return 0;
}

void contr(int v[]){
    int temp;
    for(int i = 0; i < 4; i++){
      for(int j = i+1; j < 5; j++){
        temp = v[i];
        v[i] = v[j];
        v[j] = temp;

      }
    }
    for(int i = 0; i < 5; i++){
    printf("%d ", v[i]);
    }

}