#include <stdio.h>

int main(void) {
    int i, num, maior, menor, soma = 0;
    float media;

    // Primeiro n�mero (inicializa maior, menor e soma)
    printf("Informe o primeiro numero: ");
    scanf("%d", &num);

    maior = num;
    menor = num;
    soma  = num;

    // L� os outros 9 n�meros
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

    media = soma / 10.0f;             // divis�o real

    printf("\nO maior numero � %d\n", maior);
    printf("O menor numero � %d\n", menor);
    printf("A media dos numeros informados � %.2f\n", media);

    return 0;
}
