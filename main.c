#include <stdio.h>

int main() {
    int valor;

    printf("Quanto voce deseja sacar ?\n");
    scanf("%d", &valor);

    while (valor != 0) {
        int n50, n10, n5, n1;

        n50 = valor / 50;
        valor = valor % 50;

        n10 = valor / 10;
        valor = valor % 10;

        n5 = valor / 5;
        valor = valor % 5;

        n1 = valor / 1;
        valor = valor % 1;

        printf("Notas: B$50=%d B$10=%d B$5=%d B$1=%d\n", n50, n10, n5, n1);

        printf("Digite outro valor (ou zero para sair): ");
        scanf("%d", &valor);
    }

    printf("Programa encerrado\n");
    return 0;
}
