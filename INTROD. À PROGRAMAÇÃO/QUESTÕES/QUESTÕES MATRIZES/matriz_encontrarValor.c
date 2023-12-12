#include <stdio.h>



int main(){
	
	int i, j, x, l = 0, c = 0,qtd = 3, flag = 0; 
	int mat[qtd][qtd];
	
	for(i = 0; i < qtd; i++){
		for(j = 0; j < qtd; j++)
			scanf("%d", &mat[i][j]);
	}
	printf("Qual valor procura: \n");
	scanf("%d", &x);
	
	for(i = 0; i < qtd; i++){
		for(j = 0; j < qtd; j++){
			if(x == mat[i][j]){
				l = i;
				c = j;
				printf("Valor encontrado: %d\nLinha: %d\nColuna: %d\n", mat[i][j], l, c);
				flag = 1;
			}
		}
	}
		if(flag == 0)
			printf("Valor não encontrado");
	
	
	return 0;
}
