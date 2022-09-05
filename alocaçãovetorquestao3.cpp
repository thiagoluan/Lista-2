//Declara�ao das bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//prot�tipo da fun��o
void preenche_ordenado(int n, int *v);

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int n;
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);
	
	//alocando o vetor de forma din�mca
	int *v = (int*)malloc(n * sizeof(int));
	
	//chamada da fun��o
	preenche_ordenado(n, v);
	
	//libera��o da mem�ria
	free(v);
	return 0;
}

//fun��o para preencher os valores do vetor
void preenche_ordenado(int n, int *v){
	
	//declara��o de vari�veis
	int i, j, org;
	
	printf("Digite os elementos do vetor: ");
	printf("\n");
	
	//inserindo os elementos do vetor.
	for(i = 0; i < n; i++){
		
		scanf("%d", &v[i]);
	}
	
	//la�o de repeti��o para organizar o vetor de forma crescente
	for(i = 0; i < n; i++){
		
		//nessa etrutura a vari�vel "j" est� sendo inicializda com 1
		for(j = i + 1; j < n; j++){
			
			//estrutura de decis�o que verifica se o vetor na posi��o "i" � maior que o vetor na posi��o "j"
			if(v[i] > v[j]){
				
				//a vari�vel "org" vai receber o vetor na posi��o "i"
				org = v[i];
				
				//o vetor na posi��o "i" vai receber o vetor na posi��o "j" 
				v[i] = v[j];
				
				//o vetor na posi��o "i" est� recebendo o valor armazenado na vari�vel "org"
				v[j] = org;
			}
		}
	}
	printf("Valores em ordem crescente: \n");
	
	//la�o de repeti��o para exibir o vetor em ordem crescente
	for(i = 0; i < n; i++){
		printf("%d\n", v[i]);
	}
}


