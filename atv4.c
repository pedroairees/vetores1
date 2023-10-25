#include <stdio.h>

int main(){
	int vetor[8];
	int x, y;

	//lê o vetor de 8 posições 
	printf("Digite 8 valores inteiros:\n");
	for(int i = 0; i < 8; i++){
		printf("Posicao %d: ", i);
		scanf("%d", &vetor[i]);
		fflush(stdin);
	}

	//lê os valores de X e Y
	printf("Digite o valor de X: ");
	scanf("%d", &x);
	printf("Digite o valor de Y: ");
	scanf("%d", &y);

	//verifica se X e Y estão dentro do intervalo valido (0a7)
	if(x >= 0 && x < 8 && y >= 0 && y < 8){
		//calcula e soma dos valores nas posições x e y
		int soma = vetor[x] + vetor[y];
		printf("A soma dos valores nas posicoes %d e %d e: %d\n", x, y, soma);
	} else{
		printf("Valores de x e y estao fora do intervalo valido (0 a 7).\n");
	}
}