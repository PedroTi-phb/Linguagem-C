#include<stdio.h>
int main(){
    int a, b, soma, divisão, subtração, mutiplicação, resto;
    printf("digite valor A:\n");
    scanf("%d", &a);
    printf("digite o valor B:\n");
    scanf("%d", &b);
    soma = a + b;
    printf("a soma entre %d + %d = %d \n", a, b, soma);
    divisão = a / b;
    printf("sdivisao %d \n", divisão);
    subtração = a - b;
    mutiplicação = a * b;
    resto = a % b;
    printf("a mutiplicação :%d\na subtração %d\nresto é %d\n", mutiplicação,subtração, resto);
    return 0;
}