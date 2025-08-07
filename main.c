//somar e tirar a media de dois valores
#include<stdio.h>
#include<stdlib.h>
int main() {
    double val1;
    double val2;
    printf("informe primeiro numero\n");
    scanf("%lf", &val1);
    printf("informe segundo numero\n");
    scanf("%lf", &val2);
    double media = (val1+val2)/2;
    printf("o resultado da media dos valores: %.2lf\n ", media);
    return 0;
}