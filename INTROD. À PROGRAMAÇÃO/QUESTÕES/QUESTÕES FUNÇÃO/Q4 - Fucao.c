#include <stdio.h>

int comp (int a){//comparação
	if(a % 2 == 0)
		return 1;
	else 
		return 0;
	
}

int main(){
	
	int x;
	
	printf("Digite o valor: \n");
	scanf("%d", &x);
	
	printf("%d", comp(x));
	
	return 0;
}

