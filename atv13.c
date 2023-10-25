#include <stdio.h>

int main() {
    int valores[5];
    int maior, menor;
    int posMaior, posMenor;

    // Ler 5 valores inteiros
    printf("Digite 5 valores inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);

        // Inicializar o maior e o menor com o primeiro valor lido
        if (i == 0) {
            maior = valores[i];
            menor = valores[i];
            posMaior = i;
            posMenor = i;
        }

        // Atualizar o maior e o menor
        if (valores[i] > maior) {
            maior = valores[i];
            posMaior = i;
        }
        if (valores[i] < menor) {
            menor = valores[i];
            posMenor = i;
        }
    }

    // Imprimir a posição do maior e do menor valor
    printf("A posição do maior valor (%d) é: %d\n", maior, posMaior);
    printf("A posição do menor valor (%d) é: %d\n", menor, posMenor);

    return 0;
}
