#include <stdio.h>                      // Inclui a biblioteca padrão de entrada/saída

int main(void) {                        // Função principal do programa
    int i;                              // Contador do laço
    int idade;                          // Entrada: idade da pessoa
    float peso;                         // Entrada: peso da pessoa
    char sexo;                          // Entrada: sexo da pessoa ('M' ou 'F')

    int totHomens = 0;                  // Acumulador: quantidade de homens
    int totMulheres = 0;                // Acumulador: quantidade de mulheres
    int somaIdadeHomens = 0;            // Acumulador: soma das idades dos homens
    float somaPesoMulheres = 0.0f;      // Acumulador: soma dos pesos das mulheres

    // Lê os dados de 10 pessoas
    for (i = 1; i <= 10; i++) {         // Laço que executa 10 vezes
        printf("Pessoa %d - idade: ", i);
        scanf("%d", &idade);            // Lê a idade (inteiro)

        printf("Pessoa %d - peso: ", i);
        scanf("%f", &peso);             // Lê o peso (float)

        printf("Pessoa %d - sexo (M/F): ", i);
        scanf(" %c", &sexo);            // Lê o sexo; o espaço ignora o 'Enter' pendente

        if (sexo == 'M' || sexo == 'm') {      // Se for homem…
            totHomens++;                        // incrementa total de homens
            somaIdadeHomens += idade;          // acumula a idade
        } else if (sexo == 'F' || sexo == 'f') { // Se for mulher…
            totMulheres++;                       // incrementa total de mulheres
            somaPesoMulheres += peso;            // acumula o peso
        } else {                                 // Qualquer outra letra é inválida
            printf("Sexo invalido! Use M ou F. Repetindo a entrada desta pessoa.\n");
            i--;                                  // volta uma posição para repetir a leitura
            continue;                             // vai para a próxima iteração do laço
        }
    }

    // Saídas solicitadas
    printf("\nResultados:\n");

    printf("a) Total de homens: %d\n", totHomens);             // item (a)
    printf("b) Total de mulheres: %d\n", totMulheres);         // item (b)

    printf("c) Soma das idades dos homens: %d\n", somaIdadeHomens);   // parte da (c)
    if (totHomens > 0) {                                               // evita divisão por zero
        printf("   Media das idades dos homens: %.2f\n",
               (float)somaIdadeHomens / totHomens);                    // média = soma / quantidade
    } else {
        printf("   Media das idades dos homens: N/A (nenhum homem)\n");
    }

    printf("d) Soma dos pesos das mulheres: %.2f\n", somaPesoMulheres); // parte da (d)
    if (totMulheres > 0) {                                               // evita divisão por zero
        printf("   Media dos pesos das mulheres: %.2f\n",
               somaPesoMulheres / totMulheres);                          // média = soma / quantidade
    } else {
        printf("   Media dos pesos das mulheres: N/A (nenhuma mulher)\n");
    }

    return 0;                        // Encerra o programa com sucesso
}
