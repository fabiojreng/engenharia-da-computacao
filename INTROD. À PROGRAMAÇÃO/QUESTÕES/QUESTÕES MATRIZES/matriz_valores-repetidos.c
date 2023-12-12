#include <stdio.h>

/*
Ler um vetor B de 10 elementos (considere que podem existir
elementos repetidos). A seguir copie para um vetor C apenas os
elementos de B que não se repetem. Após o término da cópia
escrever o vetor C.
*/

int main(){
	
	int qtd = 5, i, j;
	int vetb[qtd], vetc[qtd];
	
	for(i = 0; i < qtd; i++){
		scanf("%d", &vetb[i]);
	}
	
	for(i = 0; i < qtd; i++){
		for(j = 0; j < qtd; j++){
			if(vetb[i] != vetb[j])
				vetc[i] = vetb[i];
		}
	}
	
	for(i = 0; i < qtd; i++){
		printf("%d ", vetc[i]);
	}
	
	return 0;
}


