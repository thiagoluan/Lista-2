//Declaraçao das bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//protótipo da função
void preenche_ordenado(int n, int *v);

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int n;
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);
	
	//alocando o vetor de forma dinâmca
	int *v = (int*)malloc(n * sizeof(int));
	
	//chamada da função
	preenche_ordenado(n, v);
	
	//liberação da memória
	free(v);
	return 0;
}

//função para preencher os valores do vetor
void preenche_ordenado(int n, int *v){
	
	//declaração de variáveis
	int i, j, org;
	
	printf("Digite os elementos do vetor: ");
	printf("\n");
	
	//inserindo os elementos do vetor.
	for(i = 0; i < n; i++){
		
		scanf("%d", &v[i]);
	}
	
	//laço de repetição para organizar o vetor de forma crescente
	for(i = 0; i < n; i++){
		
		//nessa etrutura a variável "j" está sendo inicializda com 1
		for(j = i + 1; j < n; j++){
			
			//estrutura de decisão que verifica se o vetor na posição "i" é maior que o vetor na posição "j"
			if(v[i] > v[j]){
				
				//a variável "org" vai receber o vetor na posição "i"
				org = v[i];
				
				//o vetor na posição "i" vai receber o vetor na posição "j" 
				v[i] = v[j];
				
				//o vetor na posição "i" está recebendo o valor armazenado na variável "org"
				v[j] = org;
			}
		}
	}
	printf("Valores em ordem crescente: \n");
	
	//laço de repetição para exibir o vetor em ordem crescente
	for(i = 0; i < n; i++){
		printf("%d\n", v[i]);
	}
}


