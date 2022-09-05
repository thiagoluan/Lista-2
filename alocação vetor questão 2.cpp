//QUESTÃO 2

//declaração das bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//função principal
 int main(){
 	setlocale(LC_ALL,"Portuguese");
 	
 	//declaração das variáveis
 	int q, i;
 	
 	//pedindo para o usuário digitar a quantidade de alunos
 	printf("Digite a quantidade de alunos: ");
 	scanf("%d", &q);
 	
 	//declarando o vetor de forma dinâmica
	float *nota = (float *)malloc(q * sizeof(float));
	
	//se entrar nessa estrutura o vetor não foi alocado corretamente
	if(nota == NULL){
		printf("memória indísponivel.");
	}
	
	//inicializando as variáveis "m" e "soma" com 0
	float m = 0;
	float soma = 0;
	
	printf("Digite as notas:\n\n ");
	
	//laço de repetição para receber as notas dos alunos e somar
	for(i = 0; i < q; i++){
		printf("Nota do %d° aluno: ", i + 1);
		scanf("%f", &nota[i]);
		printf("\n");
		soma = soma + nota[i];
	}
	
	//calculando a média das notas	
	m = soma / q;
	
	//exibindo a média das notas
	printf("A média das notas é igual a %.2f", m);
	
	//liberando o vetor
	free(nota);
	return(0);	
 }
