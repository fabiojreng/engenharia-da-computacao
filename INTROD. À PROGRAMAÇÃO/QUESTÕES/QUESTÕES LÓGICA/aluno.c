#include <stdio.h>
#include <locale.h>
#include <string.h>

/*Construa uma estrutura aluno com nome, numero de matrícula e curso. Leia do usuario 
a informacão de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na
tela.*/

typedef struct{
	char nome[20], matricula[30], curso[15];
}ALUNO;

int main(){
	
	setlocale(LC_ALL, "");

	int qtd = 2;
	ALUNO aluno[qtd];
	int i;
	
	for(i = 0; i < qtd; i++){
		printf("%dª pessoa:\n", i+1);
		printf("Digite o nome: \n");
		fgets(aluno[i].nome, sizeof(aluno[i].nome), stdin);
		printf("Digite a matricula: \n");
		fgets(aluno[i].matricula, sizeof(aluno[i].matricula), stdin);
		printf("Digite o curso: \n");
		fgets(aluno[i].curso, sizeof(aluno[i].curso), stdin);
		
		printf("\n");
	}
	
	printf("Dados dos alunos:\n");
	for(i = 0; i < qtd; i++){
		printf("%dª pessoa: \n", i+1);
		printf("Nome: %sMatrícula: %sCurso: %s", aluno[i].nome, aluno[i].matricula, aluno[i].curso);
		printf("\n");
	}
	
	
	return 0;
}
