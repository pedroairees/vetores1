#include <stdio.h>

int main() {
    int valores[5];
    int maior, menor;
    int soma = 0;

    // Ler 5 valores inteiros
    printf("Digite 5 valores inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);

        // Inicializar o maior e o menor com o primeiro valor lido
        if (i == 0) {
            maior = valores[i];
            menor = valores[i];
        }

        // Atualizar o maior e o menor
        if (valores[i] > maior) {
            maior = valores[i];
        }
        if (valores[i] < menor) {
            menor = valores[i];
        }

        soma += valores[i];
    }

    // Calcular a média
    float media = (float)soma / 5;

    // Imprimir os valores lidos, o maior, o menor e a média
    printf("Valores lidos: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Média dos valores: %.2f\n", media);

    return 0;
}
