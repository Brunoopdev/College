#include <stdio.h>

int main(){
	
	int numeros[10];
	
	for(int ind = 0; ind < 10; ind++){
		int valor = numeros[ind] = ind+1;
		printf("%d ", valor);
	}
}
