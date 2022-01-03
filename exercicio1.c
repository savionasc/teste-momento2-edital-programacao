/*
1. Faça um programa que preencha um vetor com 6 valores distintos digitados pelo usuário.
Em seguida, exiba o maior e o menor valor do vetor, indicando em qual posição eles se encontram.
Depois, imprima os itens no vetor em ordem crescente.
*/
#include <stdio.h>

int main(int argc, char const *argv[]){
   int numeros = 6, maior = 0, menor = 0;
   int i, j, temp, vetor[numeros];

   for(i = 0; i < numeros; i++){
      printf("Digite um valor inteiro para ser colocado no vetor:\n");
      scanf("%d", &vetor[i]);
      if(vetor[i] < vetor[menor]){
         menor = i;
      }

      if(vetor[i] > vetor[maior]){
         maior = i;
      }
   }

   printf("Maior número digitado é o %d na posição [%d] do vetor.\n", vetor[maior], maior);
   printf("Menor número digitado é o %d na posição [%d] do vetor.\n", vetor[menor], menor);

   for(i = 1; i < numeros; i++){
      temp = vetor[i];
      for(j = i-1; j >= 0 && temp < vetor[j]; j--){
         vetor[j+1] = vetor[j];
      }
      vetor[j+1] = temp;
   }

   printf("Itens no vetor em ordem crescente:\n");
   for(i = 0; i < numeros; i++){
      printf("%d ", vetor[i]);
   }
   printf("\n");
   return 0;
}
