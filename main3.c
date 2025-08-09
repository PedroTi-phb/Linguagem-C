#include<stdio.h>
int main(){
    int idade;
    int anos;
    anos = 365;
    printf("infome a sua idade :");
    scanf("%d", & idade);
    int resulto = idade * anos ;
    printf("voce ja viviu em dias %d", resulto);
    return 0;
    
}