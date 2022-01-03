/*
3. Escreva um programa que lê 2 matrizes A e B, cada uma com 3 linhas e 2 colunas.
Construir uma matriz C de mesma dimensão (3x2) onde C é formada pela soma dos elementos da matriz A
 com os elementos da matriz B (exemplo: C[1][1] = A[1][1] + B[1][1]).
Apresentar ao final as 3 matrizes (A, B e C).
*/
#include <stdio.h>

void imprimir(int matriz[3][2]){
	int linha, coluna;
	for(linha = 0; linha < 3; linha++){
		printf("| ");
		for(coluna = 0; coluna < 2; coluna++){
			printf("%d ", matriz[linha][coluna]);
		}
		printf("|\n");
	}
}

int main(int argc, char const *argv[]){
	int linha, coluna, matrizA[3][2], matrizB[3][2], matrizC[3][2];

	printf("Preenchendo as matrizes:\n");

	for(linha = 0; linha < 3; linha++){
		for(coluna = 0; coluna < 2; coluna++){
			printf("Para preencher na Matriz A a posição [%d][%d], digite um valor: \n",linha,coluna);
			scanf("%d",&matrizA[linha][coluna]);
			printf("Para preencher na Matriz B a posição [%d][%d], digite um valor: \n",linha,coluna);
			scanf("%d",&matrizB[linha][coluna]);

			matrizC[linha][coluna] = (matrizA[linha][coluna])+(matrizB[linha][coluna]);
		}
	}

	printf("Mostrando as matrizes:\nMatriz A:\n");
	imprimir(matrizA);

	printf("Matriz B:\n");
	imprimir(matrizB);
	
	printf("Matriz C:\n");
	imprimir(matrizC);

	return 0;
}