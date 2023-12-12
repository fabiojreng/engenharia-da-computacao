#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void copia_Tamanho(char *str){
	
	int tam = 0;
	tam = strlen(str);
	printf("Tamanho = %d\n", tam);
	
	char nome[10];
	strcpy(nome,str);
	printf("Copia: %s", nome);
	
}

int main(){
	char vet[10];
	scanf("%s",&vet);
	
	copia_Tamanho(&vet[0]);
	
	return 0;
}
