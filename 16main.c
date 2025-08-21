#include<stdio.h>

int main(){

    int num; 
    printf("Informe um numero:");
    scanf("%d", &num);

if (num % 2 == 0){
    printf("Numero par!");

}
if(num % 2 != 0){
    printf("Numero Impar!");
}
return 0;


}