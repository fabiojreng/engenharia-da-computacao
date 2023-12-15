#include <stdio.h> 

void preencheVetor(char *vetor, char valor) {
	int i = 0;
	
	while(i < 5){
		*vetor = valor;
		vetor++;
		i++;
		//valor++;
	} 
}

void imprimeVetor(char *vetor) {
	int i;
	for (i = 0; i < 5; i++) 
		printf("\n[%d]: %c", (i+1), *(vetor++));
}

int main() {
	
	char vetor[5], elemento;
	
	scanf("%c", &elemento);
	
	preencheVetor(&vetor[0], elemento);//Primeira função - cada endereço do vetor terá o conteúdo modificado 
	imprimeVetor(vetor);//Segunda função - imprimir os valores das alterações
	
	
	return 0;
}
