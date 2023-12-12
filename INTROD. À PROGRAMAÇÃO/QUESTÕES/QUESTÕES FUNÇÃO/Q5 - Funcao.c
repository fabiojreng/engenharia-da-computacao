#include <stdio.h>

void troca(int a, int b){//trocação
	int aux = a;
	a = b;
	b = aux;
	printf("\nnum1: %d e num2: %d",a,b);	
}

int main(){
	
	int x, y;
	
	printf("Digite o valor: \n");
	scanf("%d", &x);
	
	printf("Digite o valor: \n");
	scanf("%d", &y);
	
	troca(x,y);
	
	return 0;
}



