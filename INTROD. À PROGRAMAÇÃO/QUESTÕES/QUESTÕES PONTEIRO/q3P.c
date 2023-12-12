#include <stdio.h>

int vet(float *vetor, int qtd){
	
	int i;
	int neg = 0;
	
	for(i = 0; i < qtd; i++){
		if(*(vetor++) < 0)
			neg++;
	}
	return neg;
}

int main(){
	
	int i, qtd;
	float vetor[qtd];
	
	printf("Tamanho do vetor: \n");
	scanf("%d", &qtd);
	
	for(i = 0; i < qtd; i++){
		scanf("%f", &vetor[i]);
	}
	
	printf("Quantidade de negativos = %d", vet(&vetor[0], qtd));
	
	
	return 0;
}



