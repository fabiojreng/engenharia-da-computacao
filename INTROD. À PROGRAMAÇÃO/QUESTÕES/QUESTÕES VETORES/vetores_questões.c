#include <stdio.h>
#include <locale.h>


int main(){
	
	int qtd = 5, i,j;
	int vet[qtd], flag = 0;
	
	for(i = 0; i < qtd; i++){
		scanf("%d", &vet[i]);	
		for(j = 0; j < i; j++){
			if(vet[i] == vet[j]){
				printf("Numero repetido, insira outro: \n");
				flag++;
			}
			while(flag != 0){
				scanf("%d", &vet[i]);
				if(vet[i] != vet[j])
					flag = 0;
			}
		}
	}
	
	for(i = 0; i < qtd; i++)
		printf("%d ", vet[i]);
	

	
	// FATORIAL //
	int fat, n;
	
	scanf("%d", &n);
	
	for(fat = 1; n > 1; n--){
		fat *= n;
	}
	printf("Fatorial = %d", fat);


	return 0;
}

