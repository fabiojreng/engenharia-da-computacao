#include <stdio.h>
#include <locale.h>

/*
Fac¸a um programa que leia os dados de 10 alunos (Nome, matricula, Media Final), arma- ´
zenando em um vetor. Uma vez lidos os dados, divida estes dados em 2 novos vetores,
o vetor dos aprovados e o vetor dos reprovados, considerando a media m ´ ´inima para a
aprovac¸ao como sendo 5.0. Exibir na tela os dados do vetor de aprovados, seguido dos ˜
dados do vetor de reprovados.
*/


typedef struct{
	char nome[30], matricula[20];
	float nota1, nota2, media_final;
}notas;


int main(){
	
	setlocale(LC_ALL,"");
	
	int qtd = 2, i;
	notas alunos[qtd];
	
		for(i = 0; i < qtd; i++){
		printf("%dº aluno: \n\n", i+1);
		printf("Digite o nome: \n");
		gets(alunos[i].nome);
		printf("Digite a matrícula: \n");
		gets(alunos[i].matricula);
		printf("Digite a 1ª nota: \n");
		scanf("%f", &alunos[i].nota1);
		fflush(stdin);
		printf("Digite a 2ª nota: \n");
		scanf("%f", &alunos[i].nota2);
		fflush(stdin);	
		alunos[i].media_final = (alunos[i].nota1 + alunos[i].nota2)/ 2;
		printf("\n\n");	
	}
	
	for( i = 0; i < qtd; i++){
		if(alunos[i].media_final >= 5){
			printf("ALUNO %d APROVADO!!!\n\n", i+1);
			printf("Nome: %s\nMatrícula: %s\nMédia: %.2f\n\n", alunos[i].nome, alunos[i].matricula, alunos[i].media_final);
		}
		else{
			printf("ALUNO %d REPROVADO!!!\n\n", i+1);
			printf("Nome: %s\nMatrícula: %s\nMédia: %.2f\n\n", alunos[i].nome, alunos[i].matricula, alunos[i].media_final);
		}
			
	}
	
	
	return 0;
}


