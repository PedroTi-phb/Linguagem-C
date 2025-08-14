#include<stdio.h>
int main(){
    char v1, v2;
    printf("informe o primeiro caracter:\n");
    scanf("%c", &v1);
    printf("informe o segundo caractere:\n");
    scanf(" %c", &v2);
    printf("%c %c \n", v1,v2);
    return 0;

}