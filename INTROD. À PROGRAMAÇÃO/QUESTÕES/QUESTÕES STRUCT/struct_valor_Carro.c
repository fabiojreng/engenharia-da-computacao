#include <stdio.h>
#include <locale.h>

/*
Fac¸a um programa que leia um vetor com os dados de 5 carros: marca (maximo 15 ´
letras), ano e prec¸o. Leia um valor p e mostre as informac¸oes de todos os carros com ˜
prec¸o menor que p. Repita este processo ate que seja lido um valor p = 0.
*/

typedef struct{
	char marca[16];
	int ano;
	float preco;
}carro;


int main(){
	
	setlocale(LC_ALL,"");
	
	int qtd = 2, i, flag;
	carro infor[qtd];
	float valor;
	
	for(i = 0; i < qtd; i++){
		printf("Insira as informações do %dº carro: \n\n", i+1);
		printf("Qual a marca: \n");
		gets(infor[i].marca);
		fflush(stdin);
		printf("Qual o ano: \n");
		scanf("%d", &infor[i].ano);
		printf("Qual o preço do veículo: \n");
		scanf("%f", &infor[i].preco);
		fflush(stdin);
		printf("\n\n");		
		
	}
	
	for(; ;){
		printf("Qual valor pode pagar?\n");
		scanf("%f", &valor);
			system("cls");
			if(valor == 0)
				break;
			flag = 0;
			for(i = 0; i < qtd; i++){
				if(valor > infor[i].preco){
					printf("\nDisponíveis %dº:\n\nMarca: %s\nAno: %d\nPreço: %.3f\n\n",i+1, infor[i].marca, infor[i].ano, infor[i].preco);
					flag = 1;
				}
			}
			if(flag == 0){
				printf("Não encontrado\n\n");					
			}
	}

	
	
	return 0;
}
