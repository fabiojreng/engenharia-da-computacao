int i,j,valor, linha, coluna, qtd = 2;
	int mtz[qtd][qtd], flag = 0;
	
	for(i = 0; i < qtd; i++){	
		for(j = 0; j < qtd; j++){
			printf("Digite o valor na posição [%d] [%d]:\n", i,j);
			scanf("%d", &mtz[i][j]);
		}
	}
		printf("\n\nQual valor procura?\n");
		scanf("%d", &valor);
	for(i = 0; i < qtd; i++){	
		for(j = 0; j < qtd; j++){
			if(mtz[i][j] == valor){
				linha = i;
				coluna = j;
				printf("Valor encontrado\nLocalização: [%d][%d]\n", linha,coluna);
				flag = 1;			
			}
		}
	}
	
	if(flag == 0)
		printf("Não encontrado!");