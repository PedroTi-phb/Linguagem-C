#include<stdio.h>
#include<math.h>
int main(){
    double va1, qua, cub;
    printf("Informe um Numero :");
    scanf("%lf", &va1);
   
   qua = 2;
   cub = 3;
   qua = pow ( va1, qua);
   cub = pow (va1, cub);
  
   printf("o resultado do quadrado é %.2lf\n o resultado ao cubo é %.2lf", qua, cub);
   return 0;
}