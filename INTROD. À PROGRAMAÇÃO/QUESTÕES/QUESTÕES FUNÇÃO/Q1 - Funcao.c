#include <stdio.h>


int mult(int a, int b, int c){
	return a*b*c;
}

int main(){
	int a,b,c;
	
	scanf("%d", & a);
	scanf("%d", & b);
	scanf("%d", & c);
	
	printf("Resultado: %d", mult(a,b,c));
	
	return 0;
}
