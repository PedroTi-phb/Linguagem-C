#include <stdio.h>

int main() {
    int num, maior, menor, i = 1;

    // Solicita o primeiro número e assume como maior e menor
    printf("Digite o 1º número: ");
    scanf("%d", &num);

    maior = menor = num;  // Inicializa o maior e o menor com o primeiro número

    // Laço while para ler os outros 9 números
    while(i < 10) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &num);

        // Verifica se o número digitado é maior ou menor que os já conhecidos
        if(num > maior) {
            maior = num;  // Atualiza o maior número
        } else if(num < menor) {
            menor = num;  // Atualiza o menor número
        }

        i++;  // Incrementa o contador
    }

    // Exibe o maior e o menor número
    printf("O maior número é: %d\n", maior);
    printf("O menor número é: %d\n", menor);

    return 0;
}
