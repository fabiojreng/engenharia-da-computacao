#include <stdio.h>

#define MAX 4
#define INVALIDO -1

typedef int TIPOCHAVE;

typedef struct{
	TIPOCHAVE chave;
}REGISTRO;

typedef struct{
	REGISTRO reg;
	int prox; // necessita apontar para o endereco do proximo elemento
}ELEMENTO;

typedef struct{
	ELEMENTO A[MAX];
	int inicio; // necessita saber o inicio da lista
	int dispo;	// campo para guardar a posicao disponivel
}LISTA;


void inicializarLista(LISTA* l){
	int i;
	l->inicio = INVALIDO;
	l->dispo = 0; // aponta para a primeira posicao da lista
	for(i = 0; i < MAX-1; i++)
		l->A[i].prox = i+1;
	l->A[MAX-1].prox = INVALIDO; //final da lista, nao existe prox (recebendo -1)
} 

int tamanho(LISTA* l){
	int i = l->inicio;
	int tam = 0;
	while(i != INVALIDO){
		tam++;
		i = l->A[i].prox;
	}
	return tam;
}

void imprimirLista(LISTA* l){
	int i = l->inicio;
	printf("Lista: \n");
	while(i != INVALIDO){
		printf("%d %d %d\n", i, l->A[i].reg.chave, l->A[i].prox);
		i = l->A[i].prox;
	}
}

int buscaSequencialOrd(LISTA* l, TIPOCHAVE ch) {
	int i = l->inicio;
	while (i != INVALIDO && l->A[i].reg.chave < ch)
		i = l->A[i].prox;
	if (i != INVALIDO && l->A[i].reg.chave == ch)
		return i;
	else 
		return INVALIDO;
}

// funcao auxiliar para inserir elemento
int obterNo(LISTA* l){
	int resultado = l->dispo;
	if(resultado != INVALIDO)
		l->dispo = l->A[l->dispo].prox;
	return resultado;
}

int inserirElemListaOrd(LISTA* l, REGISTRO reg){
	if(l->dispo == INVALIDO) // se lista estiver cheia nao e possivel inserir
		return 0;
	
	int ant = INVALIDO;
	int i = l->inicio;
	TIPOCHAVE ch = reg.chave;
	
	while(i != INVALIDO && l->A[i].reg.chave < ch){ 
		ant = i; 
		i = l->A[i].prox; 
	}
	if(i != INVALIDO && l->A[i].reg.chave == ch) // caso o elemento ja esteja na lista
		return 0;
		
	i = obterNo(l); // retorna 

	l->A[i].reg = reg;
	if(ant == INVALIDO){
		l->A[i].prox = l->inicio;
		l->inicio = i;
	} else{ 
		l->A[i].prox = l->A[ant].prox;
		l->A[ant].prox = i;			
	}		
	return 1;
}

void devolverNo(LISTA* l, int j) {
	l->A[j].prox = l->dispo;
	l->dispo = j;
}

int excluirElemLista(LISTA* l, TIPOCHAVE ch) {
	int ant = INVALIDO;
	int i = l->inicio;
	
	while (i != INVALIDO && l->A[i].reg.chave<ch) {
		ant = i;
		i = l->A[i].prox;
	}
	if (i == INVALIDO || l->A[i].reg.chave != ch) 
		return 0;
	if (ant == INVALIDO) 
		l->inicio = l->A[i].prox;
	else 
		l->A[ant].prox = l->A[i].prox;
	devolverNo(l,i);
	return 1;
}

void reinicializarLista(LISTA* l){
	inicializarLista(l);
}


int main(){
		
		LISTA lista;
		REGISTRO reg;
		
		inicializarLista(&lista);
		
		// inserindo valores na lista ordenada
		reg.chave = 7;
		inserirElemListaOrd(&lista, reg);
		reg.chave = 3;
		inserirElemListaOrd(&lista, reg);
		
		// buscando elemento na lista
		printf("%d \n", buscaSequencialOrd(&lista, 7));
		
		imprimirLista(&lista);
		
	return 0;
}
