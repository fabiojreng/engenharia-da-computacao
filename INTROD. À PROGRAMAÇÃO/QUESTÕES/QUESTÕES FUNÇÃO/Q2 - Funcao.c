#include <stdio.h>

int maior(int a, int b, int c){
	int max = a;
	if(max < b)
		max = b;
	if(max < c)
		max = c;
	return max;
}

int main(){
	int a,b,c;
	
	scanf("%d", & a);
	scanf("%d", & b);
	scanf("%d", & c);
	
	printf("Maior: %d", maior(a,b,c));
	
	return 0;
}
