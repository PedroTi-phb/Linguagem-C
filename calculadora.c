#include <stdio.h>

int main(){
   int A, B;
   int opcoes;

   printf(" Informe dois numeros para valores A e B:\n");
   scanf("%d %d", &A, &B);

   printf("Agora um menu esta aparecendo, escolha uma das opçoes\n");
   printf("\t 1-Soma de dois numeros\n");
   printf("\t 2-Diferença entre dois numeros\n");
   printf("\t 3-Produto entre dois numeros\n");
   printf("\t4-Divisao entre dois numeros\n");
   scanf("%d", &opcoes);

   switch (opcoes){
       case 1:
        printf("Resultado da soma %d \n", A + B);
           break;
       case 2:
        printf("Resultado da diferenca %d\n", A - B);
        break;
       case 3:
        printf("O produto eh %d", A * B);
       case 4:
        printf("A divisao eh %d",(float) A / B);

       default:
        printf("nao deu certo");
   }


return 0;
}
