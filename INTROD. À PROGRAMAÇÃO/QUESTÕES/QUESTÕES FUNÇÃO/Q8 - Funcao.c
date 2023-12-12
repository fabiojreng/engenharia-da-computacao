#include <stdio.h>

float vet(float vetor[], int qtd){
	
	int i;
	float menor = 0.0;
	
	for(i = 0; i < qtd; i++){
		if(i == 0);
			menor = vetor[i];
			
		if(vetor[i] < menor)
			menor = vetor[i];
	}
	return menor;
}

int main(){
	
	int i, qtd = 5;
	float vetor[qtd];
	
	for(i = 0; i < qtd; i++){
		scanf("%f", &vetor[i]);
	}
	
	printf("%f", vet(vetor, 5));
	
	
	return 0;
}



