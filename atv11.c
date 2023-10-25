#include <stdio.h>

int main() {
    float vetor[10];
    int qtdNegativos = 0;
    float somaPositivos = 0.0;

    // Preencher o vetor com 10 números reais
    printf("Digite 10 números reais:\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%f", &vetor[i]);

        // Verificar se o número é negativo
        if (vetor[i] < 0) {
            qtdNegativos++;
        } else if (vetor[i] > 0) {
            somaPositivos += vetor[i];
        }
    }

    // Imprimir a quantidade de números negativos
    printf("Quantidade de números negativos: %d\n", qtdNegativos);

    // Imprimir a soma dos números positivos
    printf("Soma dos números positivos: %.2f\n", somaPositivos);

    return 0;
}
