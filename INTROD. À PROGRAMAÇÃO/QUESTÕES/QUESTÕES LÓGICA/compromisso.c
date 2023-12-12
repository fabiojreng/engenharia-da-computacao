#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que seja uma agenda de compromissos e:
Crie e leia um vetor de 2 estruturas de dados com: compromisso (maximo 60 letras)
e data. A data deve ser outra estrutura de dados contendo dia, mes e ano.
Leia dois inteiros M e A e mostre todos os compromissos do mes M do ano A.
Repita o procedimento ate ler M = 0.
*/

typedef struct{
	int dia, mes, ano;
}DATA;

typedef struct{
	char compromisso[61];
	DATA data;
}COMPROMISSO;


int main(){
	
	int qtd = 2, i;
	COMPROMISSO compromisso[qtd];
	int M, A;
	
	for(i = 0; i < qtd; i++){
		printf("Digite o compromisso da %dª pessoa:\n", i+1);
		fgets(compromisso[i].compromisso, sizeof(compromisso[i].compromisso), stdin);
		printf("Data do compromisso %d:dd mm aa\n", i+1);
		scanf("%d %d %d", &compromisso[i].data.dia, &compromisso[i].data.mes, &compromisso[i].data.ano);
		while (getchar() != '\n');
		printf("\n");
	}
	
    do {
        printf("\nDigite o mes e o ano (ou M = 0 para sair): ");
        scanf("%d %d", &M, &A);

        if (M == 0 && M < 0 && M > 12) {
			printf("Mês inválido");
            break;
        }
        
        printf("\n-----------Compromissos para o mes %d do ano %d:-----------\n\n", M, A);
        for (i = 0; i < qtd; i++) {
            if (compromisso[i].data.mes == M && compromisso[i].data.ano == A) {
                printf("Compromisso: %s", compromisso[i].compromisso);
                printf("Data: %d/%d/%d", compromisso[i].data.dia, compromisso[i].data.mes, compromisso[i].data.ano);
                printf("\n");
            }
        }
    } while (M != 0);
	
	return 0;
}