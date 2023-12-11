#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	int chave;
	struct no *primFilho;
	struct no *proxIrmao;
} NO;
typedef NO *PONT;

PONT buscaChave(int ch, PONT raiz){
	if(raiz == NULL) 
		return NULL;
	if(raiz->chave == ch) 
		return raiz;
	PONT aux = buscaChave(ch, raiz->primFilho);
	if(aux) 
		return aux;
	buscaChave(ch, raiz->proxIrmao);
}


PONT criarNovoNo(int ch){
	PONT novo = (PONT)malloc(sizeof(NO));
	novo->primFilho = NULL;
	novo->proxIrmao = NULL;
	novo->chave = ch;
	return novo;
}

PONT inicializa(int ch){
	return criarNovoNo(ch);
}

int insere(PONT raiz, int novaChave, int chavePai){
	PONT pai = buscaChave(chavePai, raiz);
	if(!pai) 
		return 0;
	PONT filho = criarNovoNo(novaChave);
	PONT p = pai->primFilho;
	if(!p) 
		pai->primFilho = filho;
	else{
		while(p->proxIrmao)
			p = p->proxIrmao;
		p->proxIrmao = filho;
	}
	return 1;
}
	
void exibirArvore(PONT raiz){
	if(raiz == NULL) 
		return;
	printf("%d (", raiz->chave);
	PONT p = raiz->primFilho;
	while(p){
		exibirArvore(p);
		p = p->proxIrmao;
	}
	printf(")");
}	
	
int main(){
	
	PONT r = inicializa(8);
	insere(r, 10, 8);
	insere(r, 16, 10);
	
	exibirArvore(r);
	
	
	
	
	return 0;
}


