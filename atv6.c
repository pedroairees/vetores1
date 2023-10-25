#include <stdio.h>

int main() {
    int vetor[10];

    // Recebe o vetor de 10 posições do usuário
    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Inicializa as variáveis para o maior e o menor elementos
    int maior = vetor[0];
    int menor = vetor[0];

    // Encontra o maior e o menor elemento no vetor
    for (int i = 1; i < 10; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    // Imprime o maior e o menor elemento
    printf("Maior elemento: %d\n", maior);
    printf("Menor elemento: %d\n", menor);

    return 0;
}
