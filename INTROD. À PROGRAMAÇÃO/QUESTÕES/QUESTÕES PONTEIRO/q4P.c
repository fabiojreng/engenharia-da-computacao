#include <stdio.h>

void maiorMenor(int *v, int N, int *max, int *min){
    int i;
    *max = v[0];
    *min = v[0];
    
    for(i = 0; i < N; i++){
        if(*max < *(v + i))
            *max = *(v + i);
        
		if(*min > *(v + i))
            *min = *(v + i);
    }
    //printf("Maior: %d\n", *max);
    //printf("Menor: %d", *min);
}

int main(){
    int i, menor, maior, v[5];
    
	for(i = 0; i < 5; i++){
		scanf("%d", &v[i]);
	}
  
	maiorMenor(&v[0], 5, &maior, &menor);
	printf("Maior: %d\nMenor: %d", maior, menor);
    
	return 0;
}
