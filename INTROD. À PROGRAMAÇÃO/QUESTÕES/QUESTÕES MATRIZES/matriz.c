#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	
	int i,j;
	int mtz[3][3];
	
	for(i = 0; i < 3; i++){	
		for(j = 0; j < 3; j++){
			printf("Digite o valor na posi��o %d %d:\n", i,j);
			scanf("%d", &mtz[i][j]);
		}
	}
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("%d ", mtz[i][j]);
		}
		printf("\n");
	}
	
	
	
	int i,j,cont, qtd = 4;
	int mtz[qtd][qtd];
	
	for(i = 0; i < qtd; i++){	
		for(j = 0; j < qtd; j++){
			printf("Digite o valor na posi��o %d %d:\n", i,j);
			scanf("%d", &mtz[i][j]);
		}
	}
	
	for(i = 0; i < qtd; i++){
		for(j = 0; j < qtd; j++){
			if(mtz[i][j] > 10){
			printf("Valores maiores que 10:\n") 
			printf("%d\n", mtz[i][j]);
			}
		}
	}
	
	int i,j,cont, qtd = 5;
	int mtz[qtd][qtd];
	
	for(i = 0; i < qtd; i++){	
		for(j = 0; j < qtd; j++){
			if(i == j){
				mtz[i][j] = 1;
			}
			else
				mtz[i][j] = 0;
		}
	}
	for(i = 0; i < qtd; i++){
		for(j = 0; j < qtd; j++){
			printf("%d ", mtz[i][j]);
		}
		printf("\n");
	}
	
	
	int i,j,x, xl, xc, qtd = 2;
	int mtz[qtd][qtd], flag = 0;
	
	for(i = 0; i < qtd; i++){	
		for(j = 0; j < qtd; j++){
			printf("Digite o valor na posi��o [%d] [%d]:\n", i,j);
			scanf("%d", &mtz[i][j]);
		}
	}
		printf("\n\nQual valor procura?");
		scanf("%d", &x);
	for(i = 0; i < qtd; i++){	
		for(j = 0; j < qtd; j++){
			if(mtz[i][j] == x){
				xl = i;
				xc = j;
				flag = 1;			
			}
		}
	}
	
	if(flag)
		printf("Localiza��o: [%d][%d]\n", xl,xc);
	else
		printf("N�o encontrado!");
	
	return 0;
}
