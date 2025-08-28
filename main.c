#include <stdio.h>
#include <stdlib.h>

int main()
{
 char conceito;
 printf("informe de A a D do conceito \n");
 scanf("%c", &conceito);
 switch (conceito){
     case 'A': {
         printf(" A = Excelente");
           break;}
     case 'B':{
        printf(" B =  Bom");
          break;}
          case 'C':{
        printf(" C =  Regular");
          break;}
          case 'D':{
        printf(" D =  Reprovado");
          break;}

          default : {
           printf("nao informe letra certa");
          }

 }
  return 0 ;


}
