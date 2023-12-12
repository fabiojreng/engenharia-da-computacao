#include <stdio.h>
#include <locale.h>

typedef struct{
	char nome[20], endereço[30], tel[15];
}PESSOA;

int main(){
	
	setlocale(LC_ALL, "");
	
	int qtd = 2;
	PESSOA pessoa[qtd];
	int i, j, res;
	char aux[20];
	
	for(i = 0; i < qtd; i++){
		printf("%dª pessoa:\n\n", i+1);
		printf("Digite o nome: \n");
		fgets(pessoa[i].nome, sizeof(pessoa[i].nome), stdin);
		printf("Digite o endereço: \n");
		fgets(pessoa[i].endereço, sizeof(pessoa[i].endereço), stdin);
		
		printf("Digite o nº de telefone: \n");
		scanf("%s", &pessoa[i].tel);
	    while (getchar() != '\n');
		
		printf("\n\n");
	}
	
	for(i = 0; i < qtd; i++){
		for(j = 0; j < qtd; j++){
			res = strcmp(pessoa[i].nome, pessoa[j].nome);
			if(res < 0){
				strcpy(aux, pessoa[i].nome);
				strcpy(pessoa[i].nome, pessoa[j].nome);
				strcpy(pessoa[j].nome, aux);
			}
		}
	}
		
	for(i = 0; i < qtd; i++)
		printf("%dº nome: %s\n", i+1, pessoa[i].nome);
				

	return 0;
}
