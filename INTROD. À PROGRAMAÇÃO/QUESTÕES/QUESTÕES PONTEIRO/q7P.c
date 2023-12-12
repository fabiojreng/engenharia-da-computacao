#include <stdio.h>

int soma(int *x, int *y){
	
	*x += *x;
	*y += *y;
	
	return (*x + *y);
}

int main(){
	
	int a, b;
	
	scanf("%d", &a);
	scanf("%d", &b);
	
	printf("Soma do dobro: %d", soma(&a, &b));
	
	return 0;
}
