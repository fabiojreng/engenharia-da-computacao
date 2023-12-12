#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");

	int vet[5], i, j, aux;
	
	for(i = 0; i < 5; i++){
		printf("Digite o %dº valor: \n", i+1);
		scanf("%d", &vet[i]);
	}
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			if(vet[i] < vet[j]){
				aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
		}
	}	
	for(i = 0; i < 5; i++)
		printf("%d ", vet[i]);
	
	return 0;
}

