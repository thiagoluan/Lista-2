//QUEST�O 1 

//declara��o das bibliotecas
#include<stdio.h>
#include<stdlib.h>

int main(){
	//declara��o das vari�veis
	int i, maior, menor, n, s;
	
	//pedindo para o usu�rio digitar o tamanho do vetor
	printf("Digite a quantidades de valores do vetor: ");
	scanf("%d", &n);
	
	//declarando o vetor de forma din�nmica	
	int *v = (int *)malloc(n * sizeof(int));
	
	//la�o de repeti��o para inserir os valores do vetor
	for(i = 0; i < n; i++){
		scanf("%d", &v[i]);
	}
	
	//inicializando as vari�veis "maior" e "menor" com 0
	maior = 0;
	menor = 100;
	
	//la�o de repeti��o para encontrar o maior e o menor valor do vetor
	for(i = 0; i < n; i++){
		if(v[i] > maior){
			maior = v[i];
		}
		if(v[i] < menor){
			menor = v[i];
		}
	}
	
	//exibindo o maior e o menor valor do vetor
	printf("Maior numero e %d e menor numero e %d\n", maior, menor);
	
	//exibindo a soma entre o maior e o menor n�mero do vetor
	printf("A soma  do maior numero e do menor numero e %d", s = maior + menor);
	
	//liberando o vetor
	free(v);
	return 0;
}
