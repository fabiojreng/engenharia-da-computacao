#include <stdio.h>
#include <malloc.h>

typedef struct {
	int chave;
} REGISTRO;

typedef struct aux {
	REGISTRO reg;
	struct aux* prox;
} ELEMENTO, *PONT;

typedef struct {
	PONT inicio;
	PONT fim;
} FILA;


void inicializarFila(FILA* fila){
	fila->fim = NULL;
	fila->inicio = NULL;
}

int tamanho(FILA* fila){
	PONT end = fila->inicio;
	int tam = 0;
	while(end != NULL){
		tam++;
		end = end->prox;
	}
	return tam;
}

void imprimirFila(FILA* fila){
	PONT end = fila->inicio;
	printf("Fila: \" ");
	while(end != NULL){
		printf("%d ", end->reg.chave);
		end = end->prox;
	}
	printf(" \"\n");
}

int inserirNaFila(FILA* fila, int ch){
	PONT novo = (PONT)malloc(sizeof(ELEMENTO)); // criar espaco na memoria para o novo elemento
	novo->reg.chave = ch; //
	novo->prox = NULL;
	
	if(fila->fim == NULL) // existe apenas 1 elemento
		fila->inicio = novo;
	else
		fila->fim->prox = novo;
	fila->fim = novo;
	return 1;
}

int excluirDaFila(FILA* fila, REGISTRO* reg) {
	if (fila->inicio == NULL) // fila vazia
		return 0;

	*reg = fila->inicio->reg; // guardo o valor do inicio no end de reg
	PONT apagar = fila->inicio; // apagar recebe o inicio da fila
	fila->inicio = fila->inicio->prox; // o inicio da fila passa apontar para onde prox dela apontava
	free(apagar);

	if (fila->inicio == NULL) // verificar se apos a exclusao ainda existe elementos
		fila->fim = NULL; 
	return 1;
}

void reinicializarFila(FILA* fila){
	PONT end = fila->inicio;
	while(end != NULL){
		PONT apagar = end;
		end = end->prox;
		free(apagar);
	}
	fila->fim = NULL;
	fila->inicio = NULL;
}


int main(){
	
	FILA fila;
	REGISTRO reg;
	
	inicializarFila(&fila);
	
	// inserindo elementos

	inserirNaFila(&fila, 5);

	inserirNaFila(&fila, 9);

	inserirNaFila(&fila, 3);
	
	// imprimir
	imprimirFila(&fila);
	
	// excluir elemento

	
	imprimirFila(&fila);

	
	return 0;
}
