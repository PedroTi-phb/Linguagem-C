#include <stdio.h>                      // Inclui a biblioteca padr�o de entrada/sa�da

int main(void) {                        // Fun��o principal do programa
    int i;                              // Contador do la�o
    int idade;                          // Entrada: idade da pessoa
    float peso;                         // Entrada: peso da pessoa
    char sexo;                          // Entrada: sexo da pessoa ('M' ou 'F')

    int totHomens = 0;                  // Acumulador: quantidade de homens
    int totMulheres = 0;                // Acumulador: quantidade de mulheres
    int somaIdadeHomens = 0;            // Acumulador: soma das idades dos homens
    float somaPesoMulheres = 0.0f;      // Acumulador: soma dos pesos das mulheres

    // L� os dados de 10 pessoas
    for (i = 1; i <= 10; i++) {         // La�o que executa 10 vezes
        printf("Pessoa %d - idade: ", i);
        scanf("%d", &idade);            // L� a idade (inteiro)

        printf("Pessoa %d - peso: ", i);
        scanf("%f", &peso);             // L� o peso (float)

        printf("Pessoa %d - sexo (M/F): ", i);
        scanf(" %c", &sexo);            // L� o sexo; o espa�o ignora o 'Enter' pendente

        if (sexo == 'M' || sexo == 'm') {      // Se for homem�
            totHomens++;                        // incrementa total de homens
            somaIdadeHomens += idade;          // acumula a idade
        } else if (sexo == 'F' || sexo == 'f') { // Se for mulher�
            totMulheres++;                       // incrementa total de mulheres
            somaPesoMulheres += peso;            // acumula o peso
        } else {                                 // Qualquer outra letra � inv�lida
            printf("Sexo invalido! Use M ou F. Repetindo a entrada desta pessoa.\n");
            i--;                                  // volta uma posi��o para repetir a leitura
            continue;                             // vai para a pr�xima itera��o do la�o
        }
    }

    // Sa�das solicitadas
    printf("\nResultados:\n");

    printf("a) Total de homens: %d\n", totHomens);             // item (a)
    printf("b) Total de mulheres: %d\n", totMulheres);         // item (b)

    printf("c) Soma das idades dos homens: %d\n", somaIdadeHomens);   // parte da (c)
    if (totHomens > 0) {                                               // evita divis�o por zero
        printf("   Media das idades dos homens: %.2f\n",
               (float)somaIdadeHomens / totHomens);                    // m�dia = soma / quantidade
    } else {
        printf("   Media das idades dos homens: N/A (nenhum homem)\n");
    }

    printf("d) Soma dos pesos das mulheres: %.2f\n", somaPesoMulheres); // parte da (d)
    if (totMulheres > 0) {                                               // evita divis�o por zero
        printf("   Media dos pesos das mulheres: %.2f\n",
               somaPesoMulheres / totMulheres);                          // m�dia = soma / quantidade
    } else {
        printf("   Media dos pesos das mulheres: N/A (nenhuma mulher)\n");
    }

    return 0;                        // Encerra o programa com sucesso
}
