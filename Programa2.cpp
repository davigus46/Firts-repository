/*
 *Dev: Davi Gustavo Fernandes de SOuza Oliveira
 *Data: 02/12/2021
 *Função: Programa 2: Preencha um vetor de 10 valores inteiros aleatórios e escreva de forma ordenada.
*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int vet[10], vetord[10], i, j, aux;
	
	for(i=0; i<10; i++){
		printf("Digite o %iº valor inteiro: ", i+1);
		scanf("%i", &vet[i]);
		vetord[i] = vet[i];
	}
	
	for(i=0; i<10; i++){
		for(j=i+1; j<10; j++){
			if(vetord[i] > vetord[j]){
				aux = vetord[i];
				vetord[i] = vetord [j];
				vetord[j] = aux;
			}
		}
	}
	
	printf("\n========================================\n");
	printf("Ordem Digitada:\n");
	printf("----------------------------------------");
	for(i=0; i<10; i++){
		printf("\n%i", vet[i]);
	}
	
	printf("\n\n========================================\n");
	printf("Ordem Crescente:\n");
	printf("----------------------------------------");
	for(i=0; i<10; i++){
		printf("\n%i", vetord[i]);
	}
}
