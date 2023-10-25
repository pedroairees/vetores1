#include <stdio.h>

int main() {
    int totalAlunos = 15;
    float notas[totalAlunos];
    float somaNotas = 0.0;

    // Ler as notas dos 15 alunos
    printf("Digite as notas dos %d alunos:\n", totalAlunos);
    for (int i = 0; i < totalAlunos; i++) {
        printf("Aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        somaNotas += notas[i];
    }

    // Calcular a média geral
    float mediaGeral = somaNotas / totalAlunos;

    // Imprimir a média geral
    printf("A média geral das notas é: %.2f\n", mediaGeral);

    return 0;
}
