//Questão 6
	//Faça um algoritmo que lê uma matriz M (5x5) e calcule as somas:
	
	int i,j, qtd = 5;
	int mtzA[qtd][qtd], soma = 0;
	
	//Leitura da matriz
	for(i = 0; i < qtd; i++){
		for(j = 0; j < qtd; j++){
			printf("Digite o valor na posição %d %d\n", i,j);
			scanf("%d", &mtzA[i][j]);	
		}
	}
	//Mostrando a matriz
	for(i = 0; i < qtd; i++){
		for(j = 0; j < qtd; j++){
			printf("%d ", mtzA[i][j]);
		}
		printf("\n");
	}
	
	//Soma da linha 4:
	for(i = 0; i < qtd; i++){
		for(j = 0; j < qtd; j++){
			if(i == 3)
				soma += mtzA[i][j];
		}
	}
		printf("Soma da linha 4: %d\n",soma);
		soma = 0;
	
	//Soma da coluna 2:
	for(i = 0; i < qtd; i++){
		for(j = 0; j < qtd; j++){
			if(j == 1)
				soma += mtzA[i][j];
		}
	}
		printf("Soma da coluna 2: %d\n",soma);
		soma = 0;
	
	//Diagonal Principal:
	for(i = 0; i < qtd; i++){
		for(j = 0; j < qtd; j++){
			if(i == j)
			soma += mtzA[i][j]; 
		}
	}
		printf("Soma da diagonal Principal: %d\n",soma);
		soma = 0;
	
	//Diagonal Secundária
	for(i = 0; i < qtd; i++){
		for(j = 0; j < qtd; j++){
			if(i + j == qtd - 1)
			soma += mtzA[i][j]; 
		}
	}
		printf("Soma da diagonal secundária: %d\n",soma);	
		soma = 0;
	
	//Soma de todos os elementos:
	for(i = 0; i < qtd; i++){
		for(j = 0; j < qtd; j++){
			soma += mtzA[i][j]; 
		}
	}
		printf("Soma da dos elementos: %d\n",soma);	
	
	