#include <stdio.h> 

int negativo(float *vet, int N){
	int i, cont = 0;
	
	for (i = 0; i < N; i++){
		if(vet[i] < 0)
			cont++;
	}
	return cont;
}
	
int main(){
	
	int N = 5, i;
	float func[N];
	
	for(i = 0; i < N; i++){
		scanf("%f", &func[i]);
	}
	
	printf("%d", negativo(func,N));
	
	return 0;
}
