#include <stdio.h>


int main(){
	int d, *pd, **ppd;
	
	scanf("%d", &d);
	pd = &d;
	printf("valor: %d-----------endereço: %p\n ------------- ponteiro: %p\n", d, &d, &pd);
	ppd = &pd;
	scanf("%d", &**ppd);
	printf("valor: %d-----------endereço: %p\n------------- ponteiro: %p\n", d, ppd, &ppd);

	printf("\nValor final: %d ------------ endereço: %p\n", d, &d);
	
	
	return 0;
}
