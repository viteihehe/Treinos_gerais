#include <stdio.h>
#include <locale.h>

void primo(int a);

int main(){
  setlocale(LC_ALL, "portuguese");

  int a;
    
  printf("Insira o primeiro valor:\n");
    scanf("%d", &a);

primo(a);

    return 0;
}

void primo(int a){
    int cont = 0;
    for(int i = 1; i <= a; i++){
        if(a%i == 0){
            cont++;
        }
    }
    if(cont == 2){
        printf("É primo!");
    }else{
        printf("Não é primo!");
    }
}