//Quantidade de nº impar e par do vetor
	
	int qtd = 5, i;
	int vet[qtd], cont_impar = 0, cont_par = 0;
	
	printf("Digite os valores: \n");
	for(i = 0; i < qtd; i++){
		scanf("%d", &vet[i]);
		}

	for(i =0; i < qtd; i++){	
		if(vet[i] % 2 == 0){
			cont_par+=1;
		}else
			cont_impar+=1;
		}
	printf("A quantidade nº par foi: %d\n", cont_par);
	printf("A quantidade nº impar foi: %d\n", cont_impar);
	



// Ler e mostrar números 0 quando impar e 1 quando for par
			
	int qtd = 5, i;
	int vet[qtd];
	
	printf("Digite os valores: \n");
	for(i = 1; i <= qtd; i++){
		scanf("%d", &vet[i]);
		}

	for(i = 1; i <= qtd; i++){	
		if(vet[i] % 2 == 0){
			printf("1\n");
		}else
			printf("0\n");
		}