#include <stdio.h>

int main() {
    int vetor[10];
    int contPares = 0;

    // Lê o vetor de 10 posições
    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Conta quantos valores pares o vetor possui
    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0) {
            contPares++;
        }
    }

    printf("O vetor possui %d valores pares.\n", contPares);

    return 0;
}
