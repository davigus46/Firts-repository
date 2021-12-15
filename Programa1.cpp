/*
 *Dev: Davi Gustavo Fernandes de Souza Oliveira
 *Data: 30/11/2021
 *Função: Programa 1: Uma escola deseja saber se existem alunos cursando, simultaneamente, as disciplinas Lógica e Linguagem de Programação. Coloque os números das matriculas dos alunos que cursam Lógica em um vetor, no máximo quinze alunos. Coloque os números das matriculas dos alunos que cursam Linguagem de Programação em outro vetor, no máximo dez alunos. Mostre o número das matriculas que aparecem nos dois vetores.
*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int vet1[15], vet2[10], i, j;
	
	printf("========================================\n");
	printf("Lógica:\n");
	printf("----------------------------------------\n");
	for(i=0; i<15; i++){
		printf("Digite o número de matrícula: ");
		scanf("%i", &vet1[i]);
	}
	
	printf("\n========================================\n");
	printf("Linguagem de Programação:\n");
	printf("----------------------------------------\n");
	for(i=0; i<10; i++){
		printf("Digite o número de matrícula: ");
		scanf("%i", &vet2[i]);
	}
	
	printf("\n========================================\n");
	printf("Alunos matriculados nos dois cursos:\n");
	printf("----------------------------------------");
	for(i=0; i<15; i++){
		for(j=0; j<10; j++){
			if(vet1[i]==vet2[j]){
				printf("\n%i", vet1[i]);
			}
		}
	}
}
