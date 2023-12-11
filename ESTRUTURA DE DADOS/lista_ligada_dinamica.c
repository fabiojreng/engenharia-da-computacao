#include <stdio.h>
#include <malloc.h>


typedef struct{
	int chave;
}REGISTRO;

typedef struct aux{
	REGISTRO reg;
	struct aux* prox; 
}ELEMENTO;

typedef ELEMENTO* PONT;

typedef struct {
	PONT inicio;
}LISTA;

void inicializarLista(LISTA* l){
	l->inicio = NULL;	
	printf("Lista inicializada...\n");
}

void tamanho(LISTA* l){
	PONT end = l->inicio; // endereco do 1 reg 
	int tam = 0;
	while(end != NULL){
		tam++;
		end = end->prox; // end recebe o endereco do prox reg
	}
	printf("Tamanho da lista: %d \n", tam);
}

void exibirLista(LISTA* l){
	PONT end = l->inicio;
	printf("Lista: [ ");
	while(end != NULL){
		printf("%d ", end->reg.chave);
		end = end->prox;
	}
	printf("]\n");
}

PONT buscaSequencial(LISTA* l, int ch){
	PONT pos = l->inicio;
 	while(pos != NULL && pos->reg.chave < ch)
 		pos = pos->prox;
 	if(pos != NULL && pos->reg.chave == ch)
 		return pos;
 	return NULL;
}

PONT buscaSequencialExc(LISTA* l, int ch, PONT* ant){
	*ant = NULL;
	PONT atual = l->inicio;

	while(atual != NULL && atual->reg.chave < ch){
		*ant = atual;
		atual = atual->prox;
	}
	if(atual != NULL && atual->reg.chave == ch)
		return atual;

	return NULL;
}

int inserirOrd(LISTA* l, int ch){
	PONT ant, atual;
	atual = buscaSequencialExc(l, ch, &ant);
	
	if(atual != NULL) // se a chave já existir na lista
		return 0;

	atual = (PONT) malloc(sizeof(ELEMENTO));
	atual->reg.chave = ch;
	
	if(ant == NULL){ // inserindo na 1 posicao
		atual->prox = l->inicio; // fazer o elemento apontar para NULL
		l->inicio = atual; // o inicio apontar para o elemento
	}else{ // ja existe um elemento
		atual->prox = ant->prox; // elemento vai apontar para onde o anterior apontava 
		ant->prox = atual; // anterior aponta para o elemento
	}
	return 1;
}

int excluirElemento(LISTA *l, int ch){
	PONT ant, atual;
		
	atual = buscaSequencialExc(l, ch, &ant);
	
	if(atual == NULL) // lista vazia
		return 0;
	
	if(ant == NULL) // 1 elemento
		l->inicio = atual->prox; // fazer o inicio apontar para NULL
	else 
		ant->prox = atual->prox;

	free(atual);
	return 1;	
}

void reinicializarLista(LISTA *l){
	PONT aux = l->inicio;
	
	while(aux != NULL){
		PONT apagar = aux;
		aux = aux->prox;
		free(apagar);
	}
	l->inicio = NULL;
}

int main(){
	
		LISTA lista;

		inicializarLista(&lista);
		
		inserirOrd(&lista, 2);
		inserirOrd(&lista, 1);
		inserirOrd(&lista, 0);
		inserirOrd(&lista, 9);
		inserirOrd(&lista, 6);
		inserirOrd(&lista, 8);
		
		// buscar elemento
		//printf("%d \n", buscaSequencial(&lista, 8));
		
		//tamanho(&lista);
		exibirLista(&lista);
		
		//reinicializarLista(&lista);
		
		excluirElemento(&lista, 1);
		exibirLista(&lista);

	return 0;
}




