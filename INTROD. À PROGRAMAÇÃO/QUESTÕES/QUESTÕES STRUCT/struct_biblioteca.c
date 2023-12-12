#include <stdio.h>
#include <locale.h>
#include <string.h>

/*Fa�a um programa que leia um vetor com dados de 5 livros: t�tulo (m�ximo
30 letras), autor (m�ximo 15 letras) e ano. Procure um livro por t�tulo,
perguntando ao usu�rio qual t�tulo deseja buscar. Mostre os dados de
todos os livros encontrados.*/

typedef struct{
	char titulo[30], autor[15];
	int ano;
}biblioteca;

int main(){
	setlocale(LC_ALL,"");
	
	int i, qtd = 3;
	char aux[30];
	biblioteca livro[qtd];
	
		printf("Biblioteca: \n\n");
	for(i = 0; i < qtd; i++){
		
		printf("Digite o t�tulo do %d livro: \n", i+1);
		gets(livro[i].titulo);
		printf("Digite o autor do %d livro: \n", i+1);
		gets(livro[i].autor);
		printf("Digite o ano do %d l�vro: \n", i+1);
		scanf("%d", &livro[i].ano);
		fflush(stdin);
		printf("\n\n");
	}
		printf("Qual livro busca?\nDigite o t�tulo...\n");
		scanf("%s", &aux);
	for(i = 0; i < qtd; i++){
		if(strcmp(livro[i].titulo, aux) == 0){
			printf("\n\nLivro encontrado: \n\n");
			printf("Livro: %s\nAutor: %s\nAno: %d\n\n", livro[i].titulo,livro[i].autor, livro[i].ano);
		return 0;
		}
	}

	for(i = 0; i < qtd; i++){
		printf("\n\nLivros Dispon�veis: \n\n");
		if(strcmp(livro[i].titulo, aux) != 0){
			printf("\n\nN�o h� este livro na biblioteca\nOutros livros encontrados: \n\n");
			printf("Livro: %s\nAutor: %s\nAno: %d\n\n", livro[i].titulo,livro[i].autor, livro[i].ano);		
		}
	}
	
	
	
	
	return 0;
	
}

