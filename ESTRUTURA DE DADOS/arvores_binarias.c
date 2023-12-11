#include <stdio.h>
#include <stdlib.h>

typedef enum{esquerdo, direito} LADO;

typedef struct aux{
	int chave;
	struct aux *esq, *dir;
} NO;
typedef NO *PONT;

PONT buscarChave(int ch, PONT raiz){
	if(raiz == NULL) 
		return NULL;
	if(raiz->chave == ch) 
		return raiz;
	PONT aux = buscarChave(ch, raiz->esq);
	if(aux) 
		return aux;
	buscarChave(ch, raiz->dir);
}

PONT criarNovoNo(int ch){
	PONT novoNo = (PONT)malloc(sizeof(NO));
	novoNo->esq = NULL;
	novoNo->dir = NULL;
	novoNo->chave = ch;
	return novoNo;
}

void criarRaiz(PONT *raiz, int chave){
	*raiz = criarNovoNo(chave);
}

int inserirFilho(PONT raiz, int novaChave, int chavePai, LADO lado){
	PONT pai = buscarChave(chavePai, raiz);
	if(!pai) 
		return 0;
	PONT novo = criarNovoNo(novaChave);
	if(lado == esquerdo){
		novo->esq = pai->esq;
		pai->esq = novo;
	}else{
		novo->dir = pai->dir;
		pai->dir = novo;
	}
	return 1;
}

void exibirArvore(PONT raiz){
	if(raiz != NULL){
		printf("%d(", raiz->chave);
		exibirArvore(raiz->esq);
		exibirArvore(raiz->dir);
		printf(")");
	}	
}


int main(){
		
	PONT r;
		
	criarRaiz(&r, 8);
	
	inserirFilho(r, 10, 8, esquerdo);
	inserirFilho(r, 16, 8, direito);
	inserirFilho(r, 12, 10, esquerdo);
	inserirFilho(r, 14, 10, direito);
	
	// mostrar os valores
	exibirArvore(r);	

	
	
	return 0;
}
