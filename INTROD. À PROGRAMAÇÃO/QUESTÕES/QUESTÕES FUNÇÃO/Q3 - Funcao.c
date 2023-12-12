#include <stdio.h>


int mult(int a){
	if(a < 0)
		a = a * (-1);
		return a;
}

int main(){
	int a;
	
	scanf("%d", & a);
	printf("Resultado: %d", mult(a));
	
	return 0;
}
