#include <stdio.h>

int main() {
    int vetor[10];
    int maior, posicao;

    // Ler 10 números inteiros e armazená-los no vetor
    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);

        // Inicializar o maior elemento e a posição do primeiro elemento lido
        if (i == 0 || vetor[i] > maior) {
            maior = vetor[i];
            posicao = i;
        }
    }

    // Imprimir o vetor
    printf("Vetor: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Imprimir o maior elemento e sua posição
    printf("Maior elemento: %d\n", maior);
    printf("Posição do maior elemento: %d\n", posicao);

    return 0;
}
