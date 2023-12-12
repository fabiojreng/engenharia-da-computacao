#include <stdio.h>
#include <locale.h>

/*
Fac¸a um programa que realize a leitura dos seguintes dados relativos a um conjunto de
alunos: Matricula, Nome, Codigo da Disciplina, Nota1 e Nota2. Considere uma turma de ´
ate 10 alunos. Ap ´ os ler todos os dados digitados, e depois de armazen ´ a-los em um vetor ´
de estrutura, exibir na tela a listagem final dos alunos com as suas respectivas medias ´
finais (use uma media ponderada: Nota1 com peso=1.0 e Nota2 com peso=2.0).
*/

typedef struct{
	char matricula[20], nome[30], codigo_Disciplina[15];
	float nota1, nota2, media_aluno;
}escola;


int main(){
	
	setlocale(LC_ALL,"");
	int qtd = 2, i;
	escola alunos[qtd];
	float media;
	
	
	for(i = 0; i < qtd; i++){
		printf("%dº aluno: \n\n", i+1);
		printf("Digite o nome: \n");
		gets(alunos[i].nome);
		printf("Digite a matrícula: \n");
		gets(alunos[i].matricula);
		printf("Digite o código da disciplina: \n");
		gets(alunos[i].codigo_Disciplina);
		fflush(stdin);
		printf("Digite a 1ª nota: \n");
		scanf("%f", &alunos[i].nota1);
		fflush(stdin);
		printf("Digite a 2ª nota: \n");
		scanf("%f", &alunos[i].nota2);
		fflush(stdin);	
		alunos[i].media_aluno = (alunos[i].nota1 + (alunos[i].nota2 *2))/ 3;
		printf("\n\n");	
	}
	
	for(i = 0; i < qtd; i++){
		printf("Resultado %dº aluno: \n\n", i+1);
		printf("Nome: %s\nMatrícula: %s\nCódigo da Disciplina: %s\n", alunos[i].nome, alunos[i].matricula, alunos[i].codigo_Disciplina);
		printf("Média: %.2f\n\n", alunos[i].media_aluno);
		
	}
	
	
	return 0;
}

