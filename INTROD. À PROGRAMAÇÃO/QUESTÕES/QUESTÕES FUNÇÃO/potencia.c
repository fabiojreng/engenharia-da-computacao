#include <stdio.h>

int pot(int x, int n){
	
	int potencia = 1;
  	int contador = 0;
  
    while (contador != n) {
    	potencia = potencia * x;
    	contador += 1;
  }
	return potencia;
}

int main() {
  int x,n;  
  
  printf("\nDigite a base: ");
  scanf("%d", &x);
  
  printf("Digite o expoente: ");
  scanf("%d", &n);
  
  if(n == 0 && x > 0)
  	printf("Resultado igual a 1");
  else 
 	 printf("\nO valor de %d elevado a %d:\n%d", x, n, pot(x, n));
  return 0;
}
