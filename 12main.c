#include<stdio.h>
#include<math.h>
int main(){
    double num;
    printf("Informe um numero:");
    scanf("%lf", &num);
    printf("floor: %lf\n", floor(num));
    printf("Ceil: %lf\n", ceil(num));
    printf("Ceil: %lf\n", round(num));
    return 0;
}