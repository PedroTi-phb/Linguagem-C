#include <stdio.h>

int main() {
    int opcao;
    int a, b;
    int resultado;

    do {
        printf("\n=== CALCULADORA ===\n");
        printf("1 - Multiplicar\n");
        printf("2 - Somar\n");
        printf("3 - Subtrair\n");
        printf("4 - Dividir\n");
        printf("5 - Sair\n");
        printf("Escolha uma opcao: ");

        scanf("%d", &opcao);           // <-- LÊ A OPÇÃO (fundamental!)

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro valor: ");
            scanf("%d", &a);
            printf("Digite o segundo valor: ");
            scanf("%d", &b);
        }

        if (opcao == 1) {
            resultado = a * b;
            printf("Resultado: %d\n", resultado);
        } else if (opcao == 2) {
            resultado = a + b;
            printf("Resultado: %d\n", resultado);
        } else if (opcao == 3) {
            resultado = a - b;
            printf("Resultado: %d\n", resultado);
        } else if (opcao == 4) {
            if (b == 0) {
                printf("Erro: divisao por zero!\n");
            } else {
                resultado = a / b;       // divisao inteira
                printf("Resultado: %d\n", resultado);
            }
        } else if (opcao == 5) {
            printf("Encerrando programa\n");  // <-- agora com ';'
        } else {
            printf("Opcao invalida\n");
        }

    } while (opcao != 5);               // para quando o usuario digitar 5

    return 0;
}
