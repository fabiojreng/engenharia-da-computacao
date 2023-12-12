	int i,j, qtd = 3;
	int mtz1[qtd][qtd];
	
	for(i = 0; i < qtd; i++){	
		for(j = 0; j < qtd; j++){
			printf("Digite o valor na posição %d %d da matriz 1:\n", i,j);
			scanf("%d", &mtz1[i][j]);
			
		}
	}
	printf("\nResultado Matriz:\n");
		for(i = 0; i < qtd; i++){	
			for(j = 0; j < qtd; j++){
			printf("%d  ", mtz1[i][j]);
		}
			printf("\n");
	}
	printf("\n\nResultado Diagonal Principal:\n");
	for(i = 0; i < qtd; i++){	
			for(j = 0; j < qtd; j++){
			if(i == j)
				printf("%d ", mtz1[i][j] );
		}
	}
	printf("\n\nResultado dos valores abaixo da Diagonal Principal:\n");
	for(i = 0; i < qtd; i ++)
		for(j = 0; j < qtd; j++){
			if(i > j)
				printf("%d ", mtz1[i][j]);
		}
	printf("\n\nResultado dos valores acima da Diagonal Principal:\n");
	for(i = 0; i < qtd; i ++)
		for(j = 0; j < qtd; j++){
			if(i < j)
				printf("%d ", mtz1[i][j]);
		}