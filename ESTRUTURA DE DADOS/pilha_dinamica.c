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
	PONT topo;	
}PILHA;


void inicicializarPilha(PILHA* p){
	p->topo = NULL;
}

int tamanho(PILHA* p){
	PONT end = p->topo;
	int tam = 0;
	while(end != NULL){
		tam++;
		end = end->prox;
	}
	return tam;
}

void imprimirPilha(PILHA* p){
	PONT end = p->topo;
	printf("Pilha: | ");
	while(end != NULL){
		printf("%d ", end->reg.chave);
		end = end->prox;
	}
	printf("|\n");
}

int estaVazia(PILHA* p){
	if(p->topo == NULL)
		return 1; //true
	return 0; // false
}

int inserirElemPilha(PILHA* p, int ch){
	PONT novo = (PONT)malloc(sizeof(ELEMENTO)); // criando espaco na memoria
	novo->reg.chave = ch; // passando a chave para o elemento
	novo->prox = p->topo; 
	p->topo = novo; 
	return 1;
}

int excluirElemPilha(PILHA* p, REGISTRO* reg){
	if(p->topo == NULL) // pilha vazia
		return 0;
	
	*reg = p->topo->reg;
	PONT apagar = p->topo;
	p->topo = p->topo->prox;
	free(apagar);
	return 1;
}

void reinicializarPilha(PILHA* p){
	PONT apagar;
	PONT posicao = p->topo;
	while(posicao != NULL){
		apagar = posicao;
		posicao = posicao->prox;
	}
	p->topo = NULL;
}


int main(){
	PILHA pilha;
	REGISTRO reg;

	inicicializarPilha(&pilha);

	inserirElemPilha(&pilha, 8);
	inserirElemPilha(&pilha, 2);
	inserirElemPilha(&pilha, 7);
	
	
	imprimirPilha(&pilha);
	
	return 0;
}

