#include <stdio.h>
#include <string.h>

int str(char x[], char y[]){
	
	if(strcmp(x,y) == 0)
		return 1; //n da str igual
	else
		return 0; //n da str diferente
}

int main(){
	
	char a[20], b[20];
	
	scanf("%s", &a);
	scanf("%s", &a);
	
	printf("%d", str(a, b));
	
	return 0;
}

