#include<stdio.h>

int main(){
    int va1,va2;
    printf("Informe um numero: \n");
    scanf("%d", &va1);
    printf("Informe outro: \n");
    scanf("%d", &va2);
    
    
    if( va1 > va2){
        printf(" entao mostre  %d  %d", va1,va2);
            }
            else{
                printf(" mostre %d  %d", va2, va1);
            }
            return 0;
        
}
