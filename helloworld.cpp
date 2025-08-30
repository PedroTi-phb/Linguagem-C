#include <stdio.h>


int main(){

    int num, fat = 1;
    printf("Informe um numero:");
    scanf("%d", &num);

    while(num >= 1){
        fat *= num;
        num--;
    }
    printf("Fatorial: %d", fat);
    return 0;
}
