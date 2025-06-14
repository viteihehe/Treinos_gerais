#include <stdio.h>

int compara(int a, int b);

int main(){
  int a, b, re;

  printf("Insira o primeiro valor:\n");
  scanf("%d", &a);

    printf("Insira o segundo valor:\n");
  scanf("%d", &b);
  
    re = compara(a, b);
    printf("O maior é: %d", re);

    return 0;
}

int compara(int a, int b){
    if(a > b){
      return a;
    }else{
        return b;
    }
}