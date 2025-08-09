#include<stdio.h>
int mais (){
    double raio, perimetro, area, pi = 3.14159;
   

    printf("informe do valor do raio do circulo;");
    scanf("%lf", &raio);
    pi = 3.14159;
    area = pi * raio * raio;  
    
    perimetro = 2 * pi * raio;
    printf("o valor de area é %.2lf e o valor perimentro %.2lf ", area, perimetro);
    return 0;

    
}