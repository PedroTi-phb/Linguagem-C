#include <stdio.h>

int main(void) {
    int i, num, maior, menor, soma = 0;
    float media;

    // Primeiro número (inicializa maior, menor e soma)
    printf("Informe o primeiro numero: ");
    scanf("%d", &num);

    maior = num;
    menor = num;
    soma  = num;

    // Lê os outros 9 números
    for (i = 2; i <= 10; i++) {
        printf("Informe um valor positivo e inteiro: ");
        scanf("%d", &num);

        soma += num;

        if (num > maior) {
            maior = num;
        }
        if (num < menor) {            // < para atualizar o menor
            menor = num;
        }
    }

    media = soma / 10.0f;             // divisão real

    printf("\nO maior numero é %d\n", maior);
    printf("O menor numero é %d\n", menor);
    printf("A media dos numeros informados é %.2f\n", media);

    return 0;
}
