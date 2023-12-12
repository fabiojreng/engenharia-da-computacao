#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	/*
	float nota[4], media;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &nota[0]);
	printf("Digite a segunda nota: ");
	scanf("%f", &nota[1]);
	printf("Digite a terceira nota: ");
	scanf("%f", &nota[2]);
	printf("Digite a quarta nota: ");
	scanf("%f", &nota[3]);
	
	media = (nota[0] + nota[1] + nota[2] + nota[3]) / 4;
	
	printf("\nA média das notas é: %f", media);
	
	
	float notas[5],cont = 0;
	int i;
	
	for(i = 0; i < 5; i++){
		printf("Insira a nota na posição %d:  ", i); // ler 
		scanf("%f", &notas[i]);	
		cont = cont + notas[i]; // aumentar 
	}
	cont = cont / 5;
	printf("A média das notas é igual a %.1f\n", cont);
	
	for(i = 0; i < 5; i++){
		if(notas[i] > cont){
			printf("%f\n", notas[i]);
		}
	}
	
		
	float notas[10], media; 
	int i;
	
	
	for(i = 0; i < 10; i++){
		printf("Insira a nota na posição %d:  ", i);
		scanf("%f", &notas[i]);	
		media = media + notas[i];
	}	
	media = media / 10;
	printf("\nA média das notas é igual a %.1f\n", media);
	for(i = 0; i < 10; i++){
		if(notas[i] > media){
			printf("%f\n", notas[i]);
		}
	}
	
	
	
	int vet[100], i;
	
	for(i = 0; i < 100; i++){
		printf("%d:  ", i);
			if(i % 2 == 0){
				printf("1 PAR\t");
			}else
				printf("0 ÍMPAR\t");
		
	} 
	
	int alg[5], ci = 0, cp = 0, i;
	
	for(i = 0; i < 5; i++){
		printf("Digite o valor: ", i);
		scanf("%d", &alg[i]);
		
		if(alg[i] % 2 == 0){
			cp += 1;
		}else
			ci += 1;
	}
		printf("Pares: %d\n", cp);
		printf("Impares: %d\n", ci);

	
	
	
	int vet[10], i, soma = 0;
	
	for(i = 0; i < 10; i++){
		scanf("%d\n", &vet[i]);
	} 
	while(vet[i] > 0){
		if(vet[i] > 5){
			soma += vet[i];
		}
	}
	
		printf("%d", soma);
	*/
	
	
	
	int vet1[5], vet2[5],vetr[5], i;
	
	for( i = 0; i < 5; i++){
		scanf("%d", &vet1[i]);
	}
	for( i = 0; i < 5; i++){
		scanf("%d", &vet2[i]);
	}
	for (i = 0; i < 5; i++){
		vetr[i] = vet1[i] * vet2[4-i]; 
	}
	for (i = 0; i < 5; i++){
		printf("Resultado = %d", vetr[i]); 
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
