#include <stdio.h>

int main() {
    int valores[6];
    int paresLidos = 0;

    // Ler 6 valores inteiros pares
    printf("Digite 6 valores inteiros pares:\n");
    for (int i = 0; i < 6; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);

        // Verificar se o valor é par
        if (valores[i] % 2 == 0) {
            paresLidos++;
        } else {
            printf("Este valor não é par. Tente novamente.\n");
            i--;
        }
    }

    if (paresLidos < 6) {
        printf("Você não digitou 6 valores inteiros pares.\n");
        return 1;
    }

    // Imprimir os valores na ordem inversa
    printf("Valores lidos na ordem inversa:\n");
    for (int i = 5; i >= 0; i--) {
        printf("%d\n", valores[i]);
    }

    return 0;
}
