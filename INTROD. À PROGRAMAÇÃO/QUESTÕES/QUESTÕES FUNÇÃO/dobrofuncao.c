#include<stdio.h>
#include<locale.h>

int somadobro(int n, int n2){
	int *p,*p2;
	p = &n;
	p2 = & n2;
	
	*p = (2 * n); 
	*p2 = (2 * n2);
	
	return n + n2;
		
}

int main(){
	setlocale(LC_ALL, "");
	int A,B;

	scanf("%d",&A);
	scanf("%d",&B);

	printf("%d",somadobro(A,B));

return 0;
}