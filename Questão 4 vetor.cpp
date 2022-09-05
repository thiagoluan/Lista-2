// QUESTÃO 4

#include<stdio.h> //biblioteca
#include<stdlib.h> //biblioteca
#include<locale.h> //biblioteca

#define macro RAND_MAX 	//definição de uma variavel fixa para os numeros aleatorios

int main(void){		
	int j;						
	double num, *vetor;
	setlocale(LC_ALL, "Portuguese");


	printf("\Digite o numero dos vetores: ");	//solicita ao usuário o num de vetores
	scanf("%f", &num);					
	
	vetor=(double*) malloc(num*sizeof(double));		//abrir o espaÃ§o da memoria com uso do malloc
	
	printf("Intervalo da rand = [0,%d] \n", RAND_MAX);	//informando o intervalo de rand
	
	for(j=1; j<=10; j++){ // laço de repetição que passa pelos num de reptição de 10 fixos
		printf("Numero %d = %d \n", j, rand());	 // numeros aleatorios
	}
	
    for(j=1; j<=num; j++){ //  laço de repetição que  repete aleatoriamente os numeros dos usuarios 
        printf("Numero %d = %d \n", j, rand());     // exibe os numeros aleatorios 
	free(vetor);	// libera o espaço da memoria
	return 0;	

}
}
