#include <stdio.h>
#include <locale.h>

/*Criar um algoritmo que possa armazenar as alturas e peso de dez atletas de cinco
delegações que participarão dos jogos de ver�o em uma matriz 10x2. Imprimir a maior
altura de cada delegação. Em seguida, guardar o IMC (índice de massa corpórea) de cada
atleta em um vetor de 10 elementos.*/

int main(){
	
	setlocale(LC_ALL,"");
	
	int i, j, k;
	int qtd_alunos = 5, qtd_peso_altura = 2, qtd_delega = 2;
	float a[qtd_alunos][qtd_peso_altura][qtd_delega];	
	float imc[qtd_alunos][qtd_delega];
	
	for(k = 0;k < qtd_delega; k++)
		for(i=0;i < qtd_alunos; i++){
			printf("Digite a altura do %dº atleta da delegação %d: \n", i+1, k+1);
			scanf("%f", &a[i][0][k]); //Altura
			printf("Digite o peso do %dº atleta da delegação %d: \n", i+1, k+1);
			scanf("%f", &a[i][1][k]); //Peso
		}
	
	float altura = 0;
	float peso = 0;
	
	for(k = 0; k < qtd_delega; k++){
		for(i = 0; i < qtd_alunos; i++){
			imc[i][k] = a[i][1][k] / (a[i][0][k] * a[i][0][k]);
			if(a[i][0][k] > altura)
				altura = a[i][0][k];
			if(a[i][1][k] > peso)
				peso = a[i][1][k];
		}
		printf("Maior altura da delegacao %d eh %.2f\n", k+1, altura);
		printf("Maior peso da delegacao %d eh %.2f\n\n", k+1, peso);
		
		altura = 0;
		peso = 0;
	}	
	
	return 0;
}
