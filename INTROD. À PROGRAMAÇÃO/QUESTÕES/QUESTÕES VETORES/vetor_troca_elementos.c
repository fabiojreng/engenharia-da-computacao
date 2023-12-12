//Trocar o 1º elemento com o último, o 2º com o penúltimo etc. até o 10º com o 11º e escreva o vetor N assim modificado.
	
	int i,contador,vet[5];
	
	for(i = 1;i < 6;i++){
		printf("Insira um valor: \n");
		scanf("%d",&vet[i]);//Leitura
	}
	
	for(i = 1;i < 6; i++){
		printf("Posição %d:%d\n",i,vet[i]);//Impressão	
	}
	
	for(i = 1;i < 2; i++){
		contador = vet[i];		//guardar o valor do vet na posição [i]
		vet[i] = vet[6-i];		//atualizar o valor do vet na posição [i] para vet na posição [6 - 1]
		vet[6 - i] = contador;		//atribuir o valor do contator(vet[i]) para vet posição [6 - 1]
	}
	for(i = 1; i < 6; i++)
		printf("Troca posicao %d com %d: %d\n",i,6-i,vet[i]);
