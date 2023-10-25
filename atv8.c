#include <stdio.h>

int main() {
    int valores[6];

    // Ler 6 valores inteiros
    printf("Digite 6 valores inteiros:\n");
    for (int i = 0; i < 6; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    // Imprimir os valores na ordem inversa
    printf("Valores lidos na ordem inversa:\n");
    for (int i = 5; i >= 0; i--) {
        printf("%d\n", valores[i]);
    }

    return 0;
}
