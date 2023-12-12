#include <stdio.h>



int main(){

	/*
	int x, *p1;
	float x2, *p2;
	char x3, *p3;
	
	scanf("%d", &x);
	printf("Antes: %d\n", x);
	p1 = &x;
	scanf("%d", &*p1); 
	printf("Depois: %d\n\n", x);
	
	scanf("%f", &x2);
	printf("Antes: %.2f\n", x2);
	p2 = &x2;
	scanf("%f", &*p2); 
	printf("Depois: %.2f\n\n", x2);
	fflush(stdin);
	
	scanf("%c", &x3);
	fflush(stdin);
	printf("Antes: %c\n", x3);
	p3 = &x3;
	scanf("%c", &*p3); 
	//*p3 = 'v';
	printf("Depois: %c", x3);
	*/
	
	
	float vet[5], *p;
	int i;
	
	for(i = 0; i < 5; i++){
		scanf("%f", &vet[i]);
	}
		p = vet;

	for(i = 0; i < 5; i++){
		printf("Vetor: %.2f --------- Endereço:%p\n", vet[i], p++);
		
	}
		
/*
	float vet[4] = {1,2,3,4},*p;
	int i;
	
	p = vet;
	for(i = 0; i < 4; i++){
		printf("Valor: %.2f - Endereço: %p\n", *p, p);
		p++;
	}
	
*/	
	
	return 0;
}







