#include <stdio.h>


int main(){
	int d, *pd, **ppd;
	
	scanf("%d", &d);
	pd = &d;
	printf("valor: %d-----------endere�o: %p\n ------------- ponteiro: %p\n", d, &d, &pd);
	ppd = &pd;
	scanf("%d", &**ppd);
	printf("valor: %d-----------endere�o: %p\n------------- ponteiro: %p\n", d, ppd, &ppd);

	printf("\nValor final: %d ------------ endere�o: %p\n", d, &d);
	
	
	return 0;
}
