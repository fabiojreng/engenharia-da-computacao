#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
	setlocale(LC_ALL,"portuguese");
	

	// Questão 1
	
	int qtd = 3, vet_soma[qtd], vet_inve[qtd], soma, produto, ma, me;
	int vet1[qtd], vet2[qtd],vet3[qtd], i = 0;
	
	//Leitura de um vetor
	for(i = 0; i < qtd; i++){
		printf("Insira o valor: ");
		scanf("%d", &vet1[i]);			
	}
	printf("Vetor 1:\n");
	for(i = 0; i < qtd; i++){
		printf("%d\n", vet1[i]);
	}
	
	//Cópia do conteúdo de um vetor em um segundo vetor
	printf("\nVetor 2 - Cópia:\n");
	for(i = 0; i < qtd; i++){
		vet2[i] = vet1[i];
		printf("%d\n", vet2[i]);
	}
	
	//Inversão do conteúdo de um vetor em um segundo vetor	
	printf("\nInverso do Vetor: \n");
	for(i = 0;i < qtd ;i++){
		vet_inve[i] = vet1[2 - i];
		printf("%d\n",vet_inve[i]);
	}
	
	//Soma de dois vetores
	printf("Soma dos vetores:");
		for(i = 0; i < qtd; i++){
				printf("\nDigite o Primeiro Vetor:");
				scanf("%d", &vet1[i]);
				printf("\nDigite o Segundo Vetor:");		
				scanf("%d", &vet2[i]);
			vet_soma[i] = vet1[i] + vet2[i];
			printf("Soma igual %d\n", vet_soma[i]);
		}
		
	//A soma de todos os elementos de um vetor
	for(i=0;i < qtd;i++){
		soma = soma + vet1[i];
	}
	printf("\nSoma do Vetor 1: %d",soma);
	
	//O produto de todos os elementos de um vetor
	for(i = 0; i < qtd; i++){
		produto *= vet1[i];
	}
	printf("\nProduto do Vetor 1: %d", produto);
	
	//0 o conteúdo das posições ímpares, e por 1, o conteúdo das posições pares de um vetor
	printf("\nImpar - 0\nPar - 1\n\n");
	for(i = 0;i< qtd; i++){
		if(vet1[i] % 2 != 0){
			vet3[i] = 0;
		}else 
			if(vet1[i] % 2 == 0){
				vet3[i] = 1;
		}
		printf("%d\n",vet3[i]);
	}
		//O maior e o menor valor
	for(i=0;i < qtd;i++){
		if(i == 1){
			ma = vet1[i];
			me = vet1[i];
		}
      	if(vet1[i] > ma){
        	ma = vet1[i];
      	}
      	else 
		  if(vet1[i] < me){
            me = vet1[i];
        }
	}
    printf("\nO maior valor é = %d", ma);
    printf("\nO menor valor é = %d", me);
    
		
	// Questão 2
	//Trocar o 1º elemento com o último, o 2º com o penúltimo etc. até o 10º com o 11º e escreva o vetor N assim modificado.
	
	int i,contador,vet[5];
	
	for(i = 1;i < 6;i++){
		printf("Insira um valor: ");
		scanf("%d",&vet[i]);
	}
	
	for(i = 1;i < 6; i++){
		printf("\nPosição %d:%d\n\n",i,vet[i]);	
	}
	
	for(i = 1;i < 3; i++){
		contador = vet[i];
		vet[i] = vet[6-i];
		vet[6 - i] = contador;
	}
	for(i = 1; i < 21; i++)
		printf("Troca posicao %d com %d: %d\n",i,6-i,vet[i]);
	
	
	//Questão 3
	//dados dois vetores inteiro de 7 posições, efetue as respectivas operações indicadas por outro vetor de 7 posições de caracteres tamb�m fornecido pelo 
//usuário, contendo as quatro operações aritm�ticas em qualquer combinação e armazenando os resultados em um terceiro vetor
	
	
 	int i, qtd = 7;
	int vet1[qtd],vet2[qtd],vet3[qtd];
	char op[qtd];
	
	for(i = 1;i < qtd; i++){
		printf("Digite um vetor: ");
		scanf("%d", &vet1[i]);
		printf("Digite outro vetor: ");
		scanf("%d",&vet2[i]);
		printf("\nEscolha uma operação: (+) (-) (*) (/)\n");
		scanf(" %c",&op[i]);
		switch (op[i]){
			
			case '+':
				vet3[i] = vet1[i] + vet2[i];
				printf("A soma %d + %d, na posição %d, é = %d\n\n",vet1[i],vet2[i],i,vet3[i]);
				break;
			case '-':
				vet3[i] = vet1[i] - vet2[i];
				printf("A subtração %d - %d, na posição %d, é = %d\n\n",vet1[i],vet2[i],i,vet3[i]);
				break;
			case '*':
				vet3[i] = vet1[i] * vet2[i];
				printf("A multiplicação %d * %d, na posição %d, é = %d\n\n",vet1[i],vet2[i],i,vet3[i]);
				break;
			case '/':
				vet3[i] = vet1[i] / vet2[i];
				printf("A divisão %d / %d, na posição %d, é = %d\n\n",vet1[i],vet2[i],i,vet3[i]);
				break;
				}
		}			
			printf("\nValores do vetor 1: ");
				for(i = 1; i < qtd; i++){
					printf("%d ",vet1[i]);
					}
					printf("\n");
			printf("\n\nValores do vetor 2: ");
				for(i = 1; i < qtd; i++){
					printf("%d ",vet2[i]);
					}
					printf("\n");
			printf("\n\nResultados: ");
				for(i = 1; i < qtd; i++){
					printf("%d ",vet3[i]);
					}
					printf("\n");
			printf("\n\noperações: ");
				for(i = 1;i <= qtd;i++){
					printf("%c ",op[i]);
					}
					printf("\n");	

		
	// Questão 4
	//Algoritmo que leia 4 números inteiros, armazene-os em um vetor A e, em seguida, guarde o resultado fatorial de cada um destes números em um vetor B.
	
	int qtd = 3;
	int i, vetA[qtd], vetB[qtd];
	
	for(i = 0; i < qtd; i++){
		printf("Digite o %d� valor: \n", i+1);
		scanf("%d", &vetA[i]);
	}
	for (i = 0; i < qtd; i++) {
        for (vetB[i] = 1; vetA[i] > 1; vetA[i]--) {
           		 vetB[i] *= vetA[i];
        }
        printf("Fatoria igual %d\n", vetB[i]);
    }
	
	//////////////// OU //////////////
	
  	int qtd = 4;
	int vetA[qtd], vetB[qtd], fat, i;
	
	for(i = 1; i < qtd; i++){
		printf("Digite o %d� valor: ", i);
		scanf("%d", &vetA[i]);	
	}
		for(i = 1; i < qtd; i++){
			fat = 1;
			while(vetA[i] > 1){
				fat *= vetA[i];
				vetA[i] -= 1;
		}
			vetB[i] = fat;
			printf("\nFatorial é = %d",vetB[i]);
		}
	
	
	
	
	return 0;
}
