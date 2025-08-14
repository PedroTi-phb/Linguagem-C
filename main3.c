#include <stdio.h>
int main(){
    int valor;
    float mutiplicaçao;
    printf("informe seu salario:");
    scanf("%4d", &valor);
    mutiplicaçao = valor * 1.01;
    printf("o valor reajustado do seu salario em :%4lf", mutiplicaçao);
    return 0;
}