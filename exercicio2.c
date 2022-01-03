/*
2. Escreva um programa que, dada uma matrix 3x3, armazena em cada posição da matriz,
 a soma dos valores da linha e coluna que definem a posição.
Por exemplo, na posição [1][2] você deverá armazenar o valor 1+2 = 3 e assim por diante.
Imprima a matriz na tela.
*/
#include <stdio.h>

int main(int argc, char const *argv[]){
	int linha, coluna, tamanho = 3, matriz[3][3];

	for (linha = 0; linha < tamanho; linha++){
		for(coluna = 0; coluna < tamanho; coluna++){
			matriz[linha][coluna] = linha+coluna;
		}
	}

	for(linha = 0; linha < tamanho; linha++){
		printf("| ");
		for(coluna = 0; coluna < tamanho; coluna++){
			printf("%d ",matriz[linha][coluna]);
		}
		printf("|\n");
	}
	
	return 0;
}