#include<stdio.h>
#include<locale.h>
/*
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

int mult(int a, int b, int c){
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
	
	printf("Resultado: %d", mult(a,b,c));
	
	return 0;
}
*/
int comp (int a){//compara��o
	if(a%2==0)
		return 1;
	else 
		return 0;
	}
}
void troca(int a, int b){//troca��o
	int aux = a;
	a = b;
	b = aux;
	printf("\nnum1: %d e num2: %d",a,b);	
}
int mais(int a, int b){//soma
	return a + b; 
}
int menos(int a, int b){//subtra��o
	return a - b; 
}
int prod(int a, int b){//multiplica��o
	return a * b; 
}
int div(int a, int b){//divis�o
	return a / b; 
}
float vet(float vet1,float vet2,float vet3){//menor do vetor
	float menor = vet1;
	if(menor>vet2){
		menor = vet2;
	}
	if(menor>vet3){
		menor = vet3;
	}
	return menor;
}
int fat(int a){//fatorial
	unsigned int fat;
	for(fat = 1; a > 1; a -= 1)
		fat = fat * a;
	return fat;
}
int main (){
	int num1,num2,t,i;
	float num3[3];
	printf("\nDigite num1: ");
	scanf("%d",&num1);//atribui��o de num1
	printf("%d",comp(num1));//fun��o compara��o
	
	printf("\nDigite num2: ");
	scanf("%d",&num2);//atribui��o
	troca(num1,num2);//fun��o de troca
	
	printf("\n\n1 - +\n2 - -\n3 - *\n4 - /\n\n");
	scanf("%d", &t);
	
	switch(t){
		case 1:
			printf("\nA soma dos valores: %d",mais(num1,num2));//fun��o soma
			break;
		case 2:
			printf("\nA subtra��o dos valores: %d",menos(num1,num2));//fun��o subetra��o
			break;
		case 3:
			printf("\nA multiplica��o dos valores: %d",prod(num1,num2));//fun��o multiplica��o
			break;
		case 4:
			printf("\nA divis�o dos valores: %d",div(num1,num2));//fun��o divis�o
			break;
		default: printf("\nOp��o inv�lido");
	}
	printf("\n\nO produto fatorial de num1 = %d",fat(num1));//fun��o fatorial
	for(i=0;i<3;i++){
		printf("\nDigite num3: ");
		scanf("%f",&num3[i]);
	}
	printf("\n\nO menor valor eh %.1f",vet(num3[0],num3[1],num3[2]));//fun��o menor do vetor
	return 0;
}
