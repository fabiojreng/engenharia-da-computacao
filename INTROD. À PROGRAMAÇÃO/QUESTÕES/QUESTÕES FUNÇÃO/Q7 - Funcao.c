#include <stdio.h>

int fat(int a){//fatorial
	unsigned int fat;
	for(fat = 1; a > 1; a -= 1)
		fat = fat * a;
	return fat;
}

int main(){
	
	int x;
	
	printf("Digite o valor: \n");
	scanf("%d", &x);
	
	printf("Fatorial = %d", fat(x));
	
	return 0;
}


