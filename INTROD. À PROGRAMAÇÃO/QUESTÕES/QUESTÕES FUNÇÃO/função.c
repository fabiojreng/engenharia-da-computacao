#include <stdio.h>

int menor(int i, int j){
	if(i > j)
		return j;
	else
		return i;
}

float medias(float n1, float n2, float n3, char op){
    if (op == 'A')
        return (n1 + n2 + n3) / 3;
    else if (op == 'P')
        return (n1*5 + n2*3 + n3*2) / 10;
    else if(op == 'H')
    	return 3 / (1/n1 + 1/n2 + 1/n3);
    
}

int impar_par(int i){
	if(i % 2 == 0)
		return 1;
	else
		return 0;
}

int media(int i, int j, int k){
	return (i + j + k) / 3;
}

int valor(int i){
	if(i > 0)
		return 1;
	else if(i < 0)
		return -1;
	else
		return 0;
		
}

int vogal(char a){
	if(a == 'a'||a == 'e'||a == 'i'||a == 'o'||a == 'u')
		return 1;
	else 
		return 0;
}


int main(){
	
	float a, b, c;
	char op;
		
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	fflush(stdin);
	scanf("%c", &op);
	
	printf("\n%.2f", medias(a, b,c, op));
	
	
	return 0;
}




