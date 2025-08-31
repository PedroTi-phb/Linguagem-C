#include <stdio.h>
#include <math.h>

int main(){
    int i;
    double a, b, c, media;

    printf("Informe valor de i \n");
    scanf("%d", &i);

    printf("informe valor de A,B e C \n");
    scanf("%lf %lf %lf", &a, &b, &c);

    if(i % 2 == 0){
        media = (a + b +c) / 3;
        printf("O valor de i sendo par, geramos uma conta de media aritimetica com os valores a,b,c\n o resultado é: %.2lf ", media);
    }
    else if (i > 10){
        media = (a*2 + b*3 + c*4)/9;
        printf("o i sendo maior q 10, temos uma media ponderada dos valores, resultado : %.2lf", media);
    }
    else{
        printf(" i é impar, ou igual ou menos q 10 entao nao tem resultado\n ");
    }
    return 0;
}
