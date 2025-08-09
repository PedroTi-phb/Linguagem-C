#include<stdio.h>
main(){
    int v1, v2, v3;
    printf("informe um numero :");
    scanf("%d", &v1);
    printf("informe um numero :");
    scanf("%d", &v2);
    printf("informe um numero :");
    scanf("%d", &v3);
    int media = ( v1 + v2 + v3) / 2;
    printf("resultado da media das notas:  %d", media);
    return 0;
  
}