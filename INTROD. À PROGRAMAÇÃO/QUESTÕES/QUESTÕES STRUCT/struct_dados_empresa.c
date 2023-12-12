#include <stdio.h>
#include <locale.h>

/*Faca um programa que armazene em um registro de dados (estrutura composta) os dados de um funcionario de uma empresa, compostos de: Nome, Idade, Sexo (M/F), CPF, ´
Data de Nascimento, Codigo do Setor onde trabalha (0-99), Cargo que ocupa (string de ate 30 caracteres) e Sal ´ ario. Os dados devem ser digitados pelo usu ´ ario, armazenados ´
na estrutura e exibidos na tela.*/

typedef struct {
	char cargo[30],codigo_setor;
	float salario;
}dados_empresa;

typedef struct{
	char nome[30], sexo[5], CPF[15];
	int idade, data_nas;
	dados_empresa d;
}funcionario;

int main(){
	setlocale(LC_ALL,"");
	
	funcionario dados;
	
	printf("Dados pessoais: \n\n");
	printf("Digite seu nome: \n");
	gets(dados.nome);
	printf("Digite sua idade: \n");
	scanf("%d", &dados.idade);
	printf("Digite seu sexo: 'M' ou 'F' \n");
	scanf("%s", &dados.sexo);
	printf("Digite seu CPF: \n");
	scanf("%s", &dados.CPF);
	printf("Digite sua data de nascimento no formato dd mm aa: \n");
	scanf("%d", &dados.data_nas);
	fflush(stdin);
	
	printf("\nDados da Empresa: \n\n");
	printf("Digite o código do seu setor: \n");
	scanf("%s", &dados.d.codigo_setor);
	fflush(stdin);
	printf("Digite seu cargo: \n");
	gets(dados.d.cargo);
	printf("Digite o seu salário: \n");
	scanf("%f", &dados.d.salario);
	
		
	printf("\n\nDados Pessoais: \n\n");
	
	printf("Nome: %s\n", dados.nome);
	printf("Idade: %d\n", dados.idade);
	printf("Sexo: %s\n", dados.sexo);
	printf("CPF: %s\n", dados.CPF);
	printf("Data de Nascimento: %d\n", dados.data_nas);
	
	printf("\n\nDados na Empresa: \n\n");
	printf("Código do setor: %s\n", dados.d.codigo_setor);
	printf("Cargo: %s\n", dados.d.cargo);
	printf("Salário: %.2f\n", dados.d.salario);
	
	
	return 0;
	
}
