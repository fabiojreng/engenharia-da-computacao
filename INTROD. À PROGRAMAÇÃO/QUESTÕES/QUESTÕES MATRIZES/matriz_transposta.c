//Questão 3
	//Crie um algoritmo para calcular a transposta de uma matriz.
	
	int i, j;
	int mtzA[3][2], mtzB[2][3];
	
	for(i = 0; i < 3; i++){	
		for(j = 0; j < 2; j++){
			printf("Digite o valor na posição %d %d:\n", i,j);
			scanf("%d", &mtzA[i][j]);
		}	
	}	
		printf("Matriz:\n");
	for(i = 0; i < 3; i++){	
		for(j = 0; j < 2; j++){
			printf("%d ", mtzA[i][j]);
		}
		printf("\n");	
	}
		printf("Matriz Transposta:\n");
	for(j = 0; j < 2; j++){	
		for(i = 0; i < 3; i++){
			mtzB[j][i] = mtzA[i][j];
			printf("%d ", mtzB[j][i]);
		}
		printf("\n");	
	}