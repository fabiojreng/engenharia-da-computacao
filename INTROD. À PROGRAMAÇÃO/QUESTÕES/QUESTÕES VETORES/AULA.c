#include<stdio.h>
#include<locale.h>


int main(){
	setlocale(LC_ALL, "");
	/*
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
	
	int i, j, maior = 0,menor = 0, qtd = 3;
	int mtz[qtd][qtd], linha, coluna;
	
	for(i = 0; i < qtd; i++){	
		for(j = 0; j < qtd; j++){
			printf("Digite o valor na posição %d %d:   ", i,j);
			scanf("%d", &mtz[i][j]);
				
				if(mtz[i][j] == 0){
					maior = mtz[i][j];
					linha = i + 1;
					coluna = j + 1;
				}
				if(mtz[i][j] > maior){
					maior = mtz[i][j];
					linha = i + 1;
					coluna = j + 1;
				}
			}
	}
	
	for(i = 0; i < qtd; i++){
		for(j = 0; j < qtd; j++){
			printf("%d  ", mtz[i][j]);
		}
		printf("\n");
	}
	printf("\n\nO maior é: %d\nA linha é: %d e a coluna é: %d\n", maior, linha, coluna);
	
	
	*/
	
	
	
	
	
	
	return 0;
}
