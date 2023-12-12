#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	/*Faça um programa em c que solicite dois operandos e o tipo de operação aritmética que desejar, conforme opções abaixo:
	1 - Soma
	2 - Subtração
	3 - Multiplicação
	4 - Divisão 
	*/
int main() {	
	setlocale(LC_ALL,"portuguese");
	
	float result,num1, num2;
	int op;
	printf("---------------Operações Básicas---------------\n\n");
	printf("Escolha o primeiro número: \n");
	scanf("%f", &num1);
	printf("Escolha o segundo número: \n");
	scanf("%f", &num2);
	
	printf("---------------Escolha a operação:---------------\n1 - Multiplicação\n2 - Divisão\n3 - Subtração\n4 - Adição\n");
	scanf("%d", &op);
	
	switch(op){
		
		case 1:
			result = num1 * num2;
			printf("\nResultado da Multiplicação = %.2f", result);
			break;
			
		case 2:
			result = (num1 / num2);
			printf("\nResultado da Divisão = %.2f", result);
			break;
		
		case 3:
			result = num1 - num2;
			printf("Resultado da Subtração = %.2f", result);
			break;
		case 4: 
			result = num1 + num2;
			printf("Resultado da Adição = %.2f", result);
			break;
		default:
			printf("\nOperação inválida");
	}
	
			
	return 0;
}
