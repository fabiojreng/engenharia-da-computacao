#include <stdio.h>

int qtd_Digitos(int a){
	
	int cont = 0;
	int i;
	for(i = a; i >= 1; i /= 10){
		cont++;
	}
	return cont;
}

int main(){
	
	int x;
	
	printf("Digite o valor: \n");
	scanf("%d", &x);
	
	printf("Qtd de dígitos =  %d", qtd_Digitos(x));
	
	return 0;
}


