#include <stdio.h>

int main(){
	//aqui eu declarei as var dos vetores
	double conjuntoOriginal[10];
	double conjuntoQuadrado[10];


	//aqui vou ler os conjuntos de numeros reais
	printf("Digite 10 numeros reais:\n");
	for(int i = 0; i < 10; i++){
		printf("Elemento %d: ", i + 1);
		scanf("%lf", &conjuntoOriginal[i]);
		fflush(stdin); //limpa o buffer de entrada
	}

	//calcular o quadrado e aramazenar na var de quadrado
	for(int i = 0; i < 10; i++){
		conjuntoQuadrado[i] = conjuntoOriginal[i] * conjuntoOriginal[i];
	}

	printf("Conjunto Original:\n");
	for(int i = 0; i < 10; i++){
		printf("%.2lf ", conjuntoOriginal[i]);
	}

	printf("\nConjunto Quadrado:\n");
	for(int i = 0; i < 10; i++){
		printf("%.2lf ", conjuntoQuadrado[i]);
	}
	return 0;
}