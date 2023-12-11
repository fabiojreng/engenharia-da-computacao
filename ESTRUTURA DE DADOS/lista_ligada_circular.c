#include <stdio.h>
#include <malloc.h>

typedef struct{
	int chave;
}REGISTRO; 

typedef struct aux{
	REGISTRO reg;
	struct aux* prox;
}ELEMENTO, *PONT;

typedef struct{
	PONT cabeca;
}LISTA;

void inicializarLista(LISTA *l){
	l->cabeca = (PONT)malloc(sizeof(ELEMENTO)); // criando espaco na memoria para o cabeca
	l->cabeca->prox = l->cabeca; // campo prox do cabeca aponta para o espaco recebido por cabeca
	printf("Lista inicializada...\n");
}

int tamanhoLista(LISTA *l){
	PONT aux = l->cabeca->prox;
	int tam = 0;
	
	while(aux != l->cabeca){
		tam++;
		aux = aux->prox;	
	}
	printf("Tamanho da lista: %d\n", tam);
}

void imprimirLista(LISTA *l){
	PONT aux = l->cabeca->prox;
	printf("Lista: [ ");
	
	while(aux != l->cabeca){
		printf("%d ", aux->reg.chave);
		aux = aux->prox;
	}
	printf("]\n");
}

PONT buscaSequencialOrd(LISTA *l, int ch){
	PONT aux = l->cabeca->prox;
	
	if(aux == l->cabeca){ // verifica se existe algum elemento na lista
		printf("Lista vazia\n");
		return NULL;
	}

	while(aux->reg.chave < ch){ // varre a lista verificando os valores
		aux = aux->prox;
	}
	if(aux != l->cabeca && aux->reg.chave == ch) // se encontrou o valor igual ao buscado retorna a chave
		return aux;
	return NULL;
}

	// retornar o anterior do elemento, se existir ou nao
PONT buscaSequencialAux(LISTA *l, int ch, PONT *ant){
	*ant = l->cabeca;
	PONT atual = l->cabeca->prox;

	while(atual != l->cabeca && atual->reg.chave < ch){
		*ant = atual;
		atual = atual->prox;
	}
	if(atual != l->cabeca && atual->reg.chave == ch)
		return atual; 
	
	return NULL;
}


int inserirElemento(LISTA *l, int ch){
	PONT ant, atual;
	atual = buscaSequencialAux(l, ch, &ant); 
	
	if(atual != NULL) // se a chave inserida ja existir na lista
		return 0;
		
	atual = (PONT) malloc(sizeof(ELEMENTO));
	atual->reg.chave = ch;	
	// pelos elementos da lista circular sempre possuirem um ant, nao precisa de if
	atual->prox = ant->prox;
	ant->prox = atual;
	
	return 1;
}

int exluirElemento(LISTA *l, int ch){
	PONT ant, atual;

	atual = buscaSequencialAux(l, ch, &ant);
	
	if(atual == NULL) // nao existe o elemento na lista
		return 0;
		
	ant->prox = atual->prox; // anterior aponta para onde o atual apontava
	free(atual); 
	
	return 1;
}

void reinicializarLista(LISTA *l){
	PONT aux = l->cabeca->prox;
	
	while(aux != l->cabeca){
		PONT apagar = aux;
		aux = aux->prox;
		free(apagar);
	}
	l->cabeca->prox = l->cabeca;
	printf("Lista reinicializada...\n");
}



int main(){
	
	LISTA lista;
	
	inicializarLista(&lista);
	
	tamanhoLista(&lista);
	
	//imprimirLista(&lista);
	
	
	inserirElemento(&lista, 2);
	inserirElemento(&lista, 1);
	inserirElemento(&lista, 8);
	
		
	imprimirLista(&lista);
	
	exluirElemento(&lista, 2);
		
	imprimirLista(&lista);
	//printf("Endereco: %d \n", buscaSequencialOrd(&lista, 2));
	
	
	//reinicializarLista(&lista);
	//imprimirLista(&lista);


	return 0;
}

