#include<stdio.h>
int main(){

    double valor;
    double porc;
    printf("informe um numero:");
    scanf("%lf", &valor);
    porc = valor * 0.04;
    printf("resultado de 4 porcento do valor: %.2lf", porc);
    return 0;
}
