/*
 *Dev: Davi Gustavo Fernandes de Souza Oliveira
 *Data: 30/11/2021
 *Fun��o: Programa 1: Uma escola deseja saber se existem alunos cursando, simultaneamente, as disciplinas L�gica e Linguagem de Programa��o. Coloque os n�meros das matriculas dos alunos que cursam L�gica em um vetor, no m�ximo quinze alunos. Coloque os n�meros das matriculas dos alunos que cursam Linguagem de Programa��o em outro vetor, no m�ximo dez alunos. Mostre o n�mero das matriculas que aparecem nos dois vetores.
*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int vet1[15], vet2[10], i, j;
	
	printf("========================================\n");
	printf("L�gica:\n");
	printf("----------------------------------------\n");
	for(i=0; i<15; i++){
		printf("Digite o n�mero de matr�cula: ");
		scanf("%i", &vet1[i]);
	}
	
	printf("\n========================================\n");
	printf("Linguagem de Programa��o:\n");
	printf("----------------------------------------\n");
	for(i=0; i<10; i++){
		printf("Digite o n�mero de matr�cula: ");
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
