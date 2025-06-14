#include <stdio.h>
#include <locale.h>

float area(float a, float b);

int main(){
  float b, a, re;

printf("Insira a base:\n");
scanf("%f", &b);

printf("Insira a altura:\n");
scanf("%f", &a);

re = area(a, b);

printf("A área é %.2f", re);

    return 0;
}

float area(float a, float b){
    return (a*b)/2;
}