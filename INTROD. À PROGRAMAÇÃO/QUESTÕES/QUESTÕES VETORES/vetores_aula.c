#include <stdio.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL,"");
	
	//Soma e m�dia das de notas, e mostrar notas acima da m�dia
	
	int qtd = 5, i;
	float notas[qtd],soma[qtd], media = 0,cont;
	
	printf("Digite as notas: \n");
	for(i = 0; i < qtd; i++){
		scanf("%f", &notas[i]);
	}
	for(i = 0; i < qtd; i++){
		soma[qtd] += notas[i];//soma
		media = soma[qtd]/5;//m�dia
	}
		printf("A m�dia final foi de: %.2f\n\n", media);
	for(i = 0; i < qtd; i++){
		if(notas[i] > media){
			cont++;
		}
	}
		printf("A quantidade de notas acima da m�dia foi de: %f", cont);
		
	
	// Ler e mostrar n�meros 0 quando impar e 1 quando for par
			
	int qtd = 5, i;
	int vet[qtd];
	
	printf("Digite os valores: \n");
	for(i = 0; i < qtd; i++){
		scanf("%d", &vet[i]);
		}

	for(i =0; i < qtd; i++){	
		if(vet[i] % 2 == 0){
			printf("1\n");
		}else
			printf("0\n");
		}
	
	//soma de 1 vetor com um  2� vetor
		
	int qtd = 5, i;
	int vet1[qtd], vet2[qtd], vet_soma[qtd];
	
	printf("Digite os valores do vetor 1: \n");
	for(i = 0; i < qtd; i++){
		scanf("%d", &vet1[i]);//Leitura do 1� vetor
		}
	printf("Digite os valores do vetor 2: \n");
	for(i = 0; i < qtd; i++){
		scanf("%d", &vet2[i]);//Leitura do 2� vetor
		}
	for(i = 0; i < qtd; i++){
		vet_soma[i] = vet1[i] + vet2[i];//soma do 1� vetor e o 2� vetor
		}
	printf("Resultado das somas: \n\n");
	for(i = 0; i < qtd; i++){
		printf("%d\t",vet_soma[i]);//Impress�o da soma dos vetores
		}
	
	
	//Quantidade de n� impar e par do vetor
	
	int qtd = 5, i;
	int vet[qtd], cont_impar = 0, cont_par = 0;
	
	printf("Digite os valores: \n");
	for(i = 0; i < qtd; i++){
		scanf("%d", &vet[i]);
		}

	for(i =0; i < qtd; i++){	
		if(vet[i] % 2 == 0){
			cont_par+=1;
		}else
			cont_impar+=1;
		}
	printf("A quantidade n� par foi: %d\n", cont_par);
	printf("A quantidade n� impar foi: %d\n", cont_impar);
	
	
	//Multiplica��o de um vetor pelo inverso do outro
	
	int qtd = 3;
	int vet1[qtd], vet2[qtd], vet_prod[qtd], i;
	
		printf("Vetor 1: \n\n");
	for(i = 0; i < qtd; i++){
		scanf("%d", &vet1[i]);
		}
		printf("Vetor 2: \n\n");
	for(i = 0; i < qtd; i++){
		scanf("%d", &vet2[i]);
		}	
		
	for(i = 0; i < qtd; i++){
		vet_prod[i] = vet1[i] * vet2[2 - i];
		printf("%d ", vet_prod[i]);
	}
	
	return 0;
}
