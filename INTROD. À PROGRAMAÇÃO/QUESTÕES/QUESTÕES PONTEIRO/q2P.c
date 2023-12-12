#include <stdio.h> 

void imprime(int *vetor) {
	int i;
	for(i = 0; i < 5; i++) {
		printf("%d\n", *(vetor++));
		//vetor++;
	} 
}

int main() {
	int vetor[5];
	int i;
	
	for(i = 0; i < 5; i++){
		scanf("%d", &vetor[i]);
	}
	
	imprime(&vetor[0]);

	return 0;
}
