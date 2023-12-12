#include <stdio.h>

int main(){
	//Multiplicação de Matrizes
	
	int i,j,k, qtd = 2;
	int mtzA[qtd][qtd], mtzB[qtd][qtd], mtzR[2][2] = {0};
	 
	printf("Digite os valores mtzA: \n");
	for(i = 0; i < qtd; i++)
		for(j = 0; j < qtd; j++){
			printf("Linha %d coluna %d\n", i + 1 ,j + 1);
			scanf("%d", &mtzA[i][j]);//Leitura da primeira matriz
		}
	
	printf("\n\nDigite os valores mtzB: \n");
	for(i = 0; i < qtd; i++)
		for(j = 0; j < qtd; j++){
			printf("Linha %d coluna %d\n", i + 1 ,j + 1);
			scanf("%d", &mtzB[i][j]);//Leitura da segunda matriz
		}
	
	for(i = 0; i < qtd; i++){
		for(j = 0; j < qtd; j++){
			for(k = 0; k < qtd; k++){
				mtzR[i][j] += (mtzA[i][k] * mtzB[k][j]);//Multiplicação das matrizes
			}	
		}
	}
	printf("\n\nmtzA: \n");	
	for(i = 0; i < qtd; i++){
		for(j = 0; j < qtd; j++){
				printf("%d ",mtzA[i][j]);//Mostrar a primeira matriz
		} 
		printf("\n");
	}
		printf("\n\nmtzB: \n");	
	for(i = 0; i < qtd; i++){
		for(j = 0; j < qtd; j++){
				printf("%d ",mtzB[i][j]);//Mostrar a segunda matriz
		} 
		printf("\n");
	}
	
	printf("\n\nResultado da multiplicação: \n");
	for(i = 0; i < qtd; i++){
		for(j = 0; j < qtd; j++){
				printf("%d ",mtzR[i][j]);//Mostrar o resultado da multiplicação das matrizes
		} 
		printf("\n");
	}
	
	
	return 0;
}


