#include<stdio.h>
int main (){
    int num, dezena, aux;
    printf("informe um numero de 3 digitos:");
    scanf("%d", &num);
    aux = num/10;
    dezena = aux % 10;
    printf("Dezena: %d\n", dezena);
    return 0;
}
