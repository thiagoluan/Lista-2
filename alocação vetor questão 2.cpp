//QUEST�O 2

//declara��o das bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//fun��o principal
 int main(){
 	setlocale(LC_ALL,"Portuguese");
 	
 	//declara��o das vari�veis
 	int q, i;
 	
 	//pedindo para o usu�rio digitar a quantidade de alunos
 	printf("Digite a quantidade de alunos: ");
 	scanf("%d", &q);
 	
 	//declarando o vetor de forma din�mica
	float *nota = (float *)malloc(q * sizeof(float));
	
	//se entrar nessa estrutura o vetor n�o foi alocado corretamente
	if(nota == NULL){
		printf("mem�ria ind�sponivel.");
	}
	
	//inicializando as vari�veis "m" e "soma" com 0
	float m = 0;
	float soma = 0;
	
	printf("Digite as notas:\n\n ");
	
	//la�o de repeti��o para receber as notas dos alunos e somar
	for(i = 0; i < q; i++){
		printf("Nota do %d� aluno: ", i + 1);
		scanf("%f", &nota[i]);
		printf("\n");
		soma = soma + nota[i];
	}
	
	//calculando a m�dia das notas	
	m = soma / q;
	
	//exibindo a m�dia das notas
	printf("A m�dia das notas � igual a %.2f", m);
	
	//liberando o vetor
	free(nota);
	return(0);	
 }
