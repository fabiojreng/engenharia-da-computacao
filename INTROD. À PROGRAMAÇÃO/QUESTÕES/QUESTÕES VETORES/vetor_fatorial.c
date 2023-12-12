#include <stdio.h>

// Questão 4
	//Algoritmo que leia 4 números inteiros, armazene-os em um vetor A e, em seguida, guarde o resultado fatorial de cada um destes números em um vetor B.
	
	int main(){
	
	int qtd = 3;
	int i, vetA[qtd], vetB[qtd], fat;
	
	for(i = 0; i < qtd; i++){
		printf("Digite o %d� valor: \n", i+1);
		scanf("%d", &vetA[i]);
	}
	for (i = 0; i < qtd; i++) {
    	for (fat = 1; vetA[i] > 1; vetA[i]--) {
           	fat *= vetA[i];
        }
        printf("Fatoria igual %d\n", fat);
    }
	
	/*
  	int qtd = 4;
	int vetA[qtd], vetB[qtd], fat, i;
	
	for(i = 1; i < qtd; i++){
		printf("Digite o %dº valor: ", i);
		scanf("%d", &vetA[i]);	
	}
		for(i = 1; i < qtd; i++){
			fat = 1;
			while(vetA[i] > 1){
				fat *= vetA[i];
				vetA[i] -= 1;
		}
			vetB[i] = fat;
			printf("\nFatorial é = %d",vetB[i]);		
		}
	*/
		
	
	
	return 0;		
	}
	
