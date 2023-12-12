#include <stdio.h>
#include <locale.h>
int main(){

	setlocale(LC_ALL, "");
	
	//Questão 1
	//Faça um algoritmo para somar duas matrizes.
	
	int i,j, qtd = 2, soma[qtd][qtd];
	int mtz1[qtd][qtd],mtz2[qtd][qtd];
	
	for(i = 0; i < qtd; i++){	
		for(j = 0; j < qtd; j++){
			printf("Digite o valor na posi��o %d %d da matriz 1:\n", i,j);
			scanf("%d", &mtz1[i][j]);
		}
	}
	for(i = 0; i < qtd; i++){	
		for(j = 0; j < qtd; j++){
			printf("Digite o valor na posi��o %d %d da matriz 2: \n", i,j);
			scanf("%d", &mtz2[i][j]);
		}
		
	printf("\nResultado:\n");
		for(i = 0; i < qtd; i++){	
			for(j = 0; j < qtd; j++){
			printf("%d  ", mtz1[i][j] + mtz2[i][j]);
		}
			printf("\n");
	}
	
	
	//Questão 2
	/*Elabore um algoritmo que, dada uma matriz A, calcule uma matriz B que � o triplo da
primeira matriz.*/
	
	int i, j;
	int mtzA[i][j], mtzB[i][j];
	
	for(i = 0; i < 3; i++){	
		for(j = 0; j < 2; j++){
			printf("Digite o valor na posi��o %d %d:\n", i,j);
			scanf("%d", &mtzA[i][j]);
			mtzB[i][j] = 3 * mtzA[i][j];
		}	
	}
	for(i = 0; i < 3; i++){	
		for(j = 0; j < 2; j++){
			printf("%d ", mtzB[i][j]);
		}
		printf("\n");	
	}
	
	//Questão 3
	//Crie um algoritmo para calcular a transposta de uma matriz.
	
	int i, j;
	int mtzA[3][2], mtzB[2][3];
	
	for(i = 0; i < 3; i++){	
		for(j = 0; j < 2; j++){
			printf("Digite o valor na posi��o %d %d:\n", i,j);
			scanf("%d", &mtzA[i][j]);
		}	
	}	
		printf("Matriz:\n");
	for(i = 0; i < 3; i++){	
		for(j = 0; j < 2; j++){
			printf("%d ", mtzA[i][j]);
		}
		printf("\n");	
	}
		printf("Matriz Transposta:\n");
	for(j = 0; j < 2; j++){	
		for(i = 0; i < 3; i++){
			mtzB[j][i] = mtzA[i][j];
			printf("%d ", mtzB[j][i]);
		}
		printf("\n");	
	}
	
	/*	
	//Questão 4
	/*Faça um algoritmo que leia uma matriz mat 2 x 3 e imprima na tela a soma de todos os
elementos da matriz mat.*/
	
	int i, j;
	int mtz[2][3], soma = 0;
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 3; j++){
			printf("Digite o valor na posição %d %d\n", i,j);
			scanf("%d", &mtz[i][j]);
		}	
	}
	for(i = 0; i < 2; i++){	
		for(j = 0; j < 3; j++){
			soma += mtz[i][j];//Soma guarda o resultado da soma de todos os elemntos da matriz.
			printf("%d ", mtz[i][j]);
		}
		printf("\n");	
	}
	printf("\nSoma igual a %d", soma);
	
	
	
	//Questão 5	
	/*Escreva um algoritmo que leia uma matriz mat 4 x 4, e imprima na tela a soma dos
elementos abaixo da diagonal principal da matriz mat.*/
	
	
	int i,j, qtd = 3;
	int mtz1[qtd][qtd];
	
	for(i = 0; i < qtd; i++){	
		for(j = 0; j < qtd; j++){
			printf("Digite o valor na posi��o %d %d da matriz 1:\n", i,j);
			scanf("%d", &mtz1[i][j]);
			
		}
	}
	printf("\nResultado Matriz:\n");
		for(i = 0; i < qtd; i++){	
			for(j = 0; j < qtd; j++){
			printf("%d  ", mtz1[i][j]);
		}
			printf("\n");
	}
	printf("\n\nResultado Diagonal Principal:\n");
	for(i = 0; i < qtd; i++){	
			for(j = 0; j < qtd; j++){
			if(i == j)
				printf("%d ", mtz1[i][j] );
		}
	}
	printf("\n\nResultado dos valores abaixo da Diagonal Principal:\n");
	for(i = 0; i < qtd; i ++)
		for(j = 0; j < qtd; j++){
			if(i > j)
				printf("%d ", mtz1[i][j]);
		}
	
		
	
		//Questão 6
	//Faça um algoritmo que lê uma matriz M (5x5) e calcule as somas:
	
	int i,j, qtd = 5;
	int mtzA[qtd][qtd], soma;
	
	//Leitura da matriz
	for(i = 0; i < qtd; i++){
		for(j = 0; j < qtd; j++){
			printf("Digite o valor na posi��o %d %d\n", i,j);
			scanf("%d", &mtzA[i][j]);	
		}
	}
	for(i = 0; i < qtd; i++){
		for(j = 0; j < qtd; j++){
			printf("%d ", mtzA[i][j]);
		}
		printf("\n");
	}
	
	//Soma da linha 4:
	for(i = 0; i < qtd; i++){
		for(j = 0; j < qtd; j++){
			if(i == 3)
				soma += mtzA[i][j];
		}
	}
		printf("Soma da linha 4: %d\n",soma);
		soma = 0;
	
	//Soma da coluna 2:
	for(i = 0; i < qtd; i++){
		for(j = 0; j < qtd; j++){
			if(j == 1)
				soma += mtzA[i][j];
		}
	}
		printf("Soma da coluna 2: %d\n",soma);
		soma = 0;
	
	//Diagonal Principal:
	for(i = 0; i < qtd; i++){
		for(j = 0; j < qtd; j++){
			if(i == j)
			soma += mtzA[i][j]; 
		}
	}
		printf("Soma da diagonal Principal: %d\n",soma);
		soma = 0;
	
	//Diagonal Secundária
	for(i = 0; i < qtd; i++){
		for(j = 0; j < qtd; j++){
			if(i + j == qtd - 1)
			soma += mtzA[i][j]; 
		}
	}
		printf("Soma da diagonal secund�ria: %d\n",soma);	
		soma = 0;
	
	//Soma de todos os elementos:
	for(i = 0; i < qtd; i++){
		for(j = 0; j < qtd; j++){
			soma += mtzA[i][j]; 
		}
	}
		printf("Soma da dos elementos: %d\n",soma);	
	
	
	//Questão 7
	/*Criar um algoritmo que possa armazenar as alturas e peso de dez atletas de cinco
delegações que participarão dos jogos de ver�o em uma matriz 10x2. Imprimir a maior
altura de cada delegação. Em seguida, guardar o IMC (índice de massa corpórea) de cada
atleta em um vetor de 10 elementos.*/
	
		
	int i,j,k;
	float a[10][2][5];
	float imc[10][5];
	
	for(k=0;k<5;k++)
		for(i=0;i<10;i++){
			scanf("%f", &a[i][0][k]); //Altura
			scanf("%f", &a[i][1][k]); //Peso
		}	
	
	float max = 0;
	float peso = 0;
	for(k=0;k<5;k++){
		for(i=0;i<10;i++){
			imc[i][k] = a[i][1][k] / (a[i][0][k] * a[i][0][k]);
			if(a[i][0][k] > max)
				max = a[i][0][k];
			if(a[i][1][k] > peso)
				peso = a[i][1][k];
		}
		printf("Maior altura da delegacao %d eh %.2f\n", k, max);
		printf("Maior peso da delegacao %d eh %.2f\n\n", k, peso);
		
		peso = 0;
		max = 0;
	}	
			
	//Questão 8
	/*Elabore um algoritmo que leia duas matrizes, A e B, do tipo (3x3) e calcule em uma matriz
R sua multiplicação, ou seja, R = A * B.*/	
	
	int i,j, qtd = 3;
	int mtzA[qtd][qtd], mtzB[qtd][qtd], mult[qtd][qtd];
	
	for(i = 0; i < qtd; i++){
		for(j = 0; j < qtd; j++){
			printf("Digite o valor na posi��o %d %d\n", i,j);
			scanf("%d", &mtzA[i][j]);	
			printf("Digite o valor na posi��o %d %d\n", i,j);
			scanf("%d", &mtzB[i][j]);
		}
	}
		printf("\nResultado da multiplicação das matrizes:\n");
	for(i = 0; i < qtd; i++){
		for(j = 0; j < qtd; j++){
			for(k = 0; k < qtd; k++){
				mult[i][j] += mtzA[i][k] * mtzB[k][j];
			}
		}
	}
	for(i = 0; i < qtd; i++)
		for(j = 0; j < qtd; j++){
			printf("%d ", mult[i][j]);
		}
		printf("\n");
	
	//Questão 9
	/*Criar um algoritmo que leia uma matriz A (NxN), com N < 10, e verifique (informe) se tal
matriz é ou não simétrica (AT = A, ou seja, a transposta é igual a ela mesma).*/

	
int i,j, qtd = 2;
	int mtzA[qtd][qtd], mtzT[qtd][qtd];
	
	for(i = 0; i < qtd; i++){
		for(j = 0; j < qtd; j++){
			printf("Digite o valor na posição %d %d:\n", i,j);
			scanf("%d", &mtzA[i][j]);
		}	
	}	
		printf("Matriz:\n");
	for(i = 0; i < qtd; i++){	
		for(j = 0; j < qtd; j++){
			printf("%d ", mtzA[i][j]);
		}
		printf("\n");	
	}
		printf("Matriz Transposta:\n");
	for(j = 0; j < qtd; j++){	
		for(i = 0; i < qtd; i++){
			if(mtzT[j][i] == mtzA[i][j]){
			printf("A matriz é simétrica\n");
			printf("%d ", mtzT[j][i]);
		}	else
			printf("A matriz não é simétrica\n");	
	}
		printf("\n");	
	}	 
	

	
	return 0;
}


	
	
