#include <stdio.h>
#include <locale.h>

int fat(int a);

int main(){
  setlocale(LC_ALL, "portuguese");

  int a, re;
    
  printf("Insira o primeiro valor:\n");
    scanf("%d", &a);

re = fat(a);

printf("%d", re);

    return 0;
}

int fat(int a){
    if( a == 1){
        return 1;
    }else{
        return a*fat(a-1);
    }
}