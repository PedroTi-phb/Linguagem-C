#include<stdio.h>
int main ( ){
    int a;
    int b;
    int c;
    int x;
    printf("digite o valor de a:\n");
    scanf("%d", &a);
    printf("digite o valor de b:\n");
    scanf("%d", &b);
    printf("digite valor de c:\n");
    scanf("%d", &c);
    x = 2 * ((a - c) / 8) -b * 5;
    printf("o resultado da conta de x %d\n", x);
    return 0;

}