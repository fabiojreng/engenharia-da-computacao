//Atividade - Fábio da S. Eloi Júnior//

#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL,"portuguese");
	
	//Questão 1//
	float c, F;
	
	printf("Digite os graus em Celcius: ");
	scanf("%f",& c);
	F = (9*c+160)/5;
	printf("Resultado em Fahrenheit: %.1fF\n\n",F);
	
	//Questão 2//
	float valor, result2,taxa,tempo;

	printf("Digite o valor: ");
	scanf("%f",&valor);
	printf("Digite a taxa: ");
	scanf("%f",&taxa);
	printf("Digite o tempo: ");
	scanf("%f",&tempo);
	result2 = valor + (valor *(taxa/100)*tempo);
	printf("Sua prestacao: %.2f\n\n",result2);
	
	//Questão 3//
	int result3,hr;
	
	printf("Digite um horário, em horas: ");
	scanf("%d",&hr);
	result3 = 60 * hr;
	printf("Se passaram: %d minutos\n\n",result3);
	
	//Questão 4//
	int kg,g;
	float result4,g2,gordura;
	gordura = 0.12;
	
	printf("Digite um peso, em Kg: ");
	scanf("%d",&kg);
	result4 = 1000 * kg; 
	printf("Conversão de Kg para g: %.2f g\n",result4);
    result4 = (gordura*result4) + result4;
	printf("Novo peso, caso engordar: %.2f g\n\n",result4);
	
	//Questão 5//
	int a,b;
	float  quadDif,difQuad;
	
	printf("Digite um valor para a: ");
	scanf("%d",&a);
	printf("Digite um valor para b: ");
	scanf("%d",&b);
	quadDif = ((a*a) - (b*b));
	difQuad = ((a-b) * (a-b));
	printf("Quadrado da diferença = %.2f\nDiferença dos quadrados = %.2f\n\n", quadDif,difQuad);
	
	//Questão 6//
	int numero,sucessor;
	
	printf("Digite um número: ");
	scanf("%d",&numero);
	sucessor = (numero + 1)%61;
	printf("Seu sucessor = %d\n",sucessor);
	
	return 0;
}
