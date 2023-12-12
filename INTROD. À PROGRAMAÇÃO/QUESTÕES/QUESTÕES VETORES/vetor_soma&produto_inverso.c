//Calcular a soma e média das notas, e mostrar as notas acima da média
	
	int qtd = 5, i;
	float notas[qtd],soma[qtd], media = 0,cont;
	
	printf("Digite as notas: \n");
	for(i = 0; i < qtd; i++){
		scanf("%f", &notas[i]);
	}
	for(i = 0; i < qtd; i++){
		soma[qtd] += notas[i];       //soma
		media = soma[qtd]/5;        //média
	}
		printf("A média final foi de: %.2f\n\n", media);
	
	for(i = 0; i < qtd; i++){
		if(notas[i] > media){
			cont++;
		}
	}
		printf("A quantidade de notas acima da média foi de: %f", cont);



//Multiplicação de um vetor pelo inverso do outro
	
	int qtd = 3;
	int vet1[qtd], vet2[qtd], vet_prod[qtd], i;
	
		printf("Vetor 1: \n\n");
	for(i = 0; i < qtd; i++){
		scanf("%d", &vet1[i]);
		}
		printf("Vetor 2: \n\n");
	for(i = 0; i < qtd; i++){
		scanf("%d", &vet2[i]);
		}	
		
	for(i = 0; i < qtd; i++){
		vet_prod[i] = vet1[i] * vet2[2 - i];
		printf("%d ", vet_prod[i]);
	}