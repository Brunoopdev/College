#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
//	int tentativa = 1;
//	int numero;
//	int numeroMaximo;
//	
//	while(tentativa <= 5){
//		scanf("%d", &numero);
//		if(numero > numeroMaximo){
//			numeroMaximo = numero;
//		}
//		tentativa++;
//	}
//	
//	printf("Maior valor %d", numeroMaximo);


//	int nota;
//	int notas;
//	int tentativa = 1;
//	int media;
//	
//	while(tentativa <= 33){
//		printf("Escreva uma nota de 1 a 10: ");
//		scanf("%d", &nota);
//		notas += nota;
//		tentativa ++;	
//	}
//	
//	media = notas / 33;
//	printf("A media dos alunos é: %d", media);

int torcedoresPalmeiras;
int torcedoresCorinthians;
int torcedoresSaoPaulo;
int torcedoresSantos;

int palmeiras = 1;
int corinthians = 2;
int saoPaulo = 3;
int santos = 4;

printf("Para qual time você torce? \n");

int escolha;

scanf("%d", &escolha);

if(escolha == palmeiras){
	torcedoresPalmeiras ++;
}else if(escolha == corinthians){
	torcedoresCorinthians ++;
}else if(escolha == saoPaulo){
	torcedoresSaoPaulo ++;
}else if(escolha == santos){
	torcedoresSantos ++;
}

printf("Na empresa %d pessoas torcem para o Palmeiras \n", torcedoresPalmeiras);
printf("Na empresa %d pessoas torcem para o Corithians \n", torcedoresCorinthians);
printf("Na empresa %d pessoas torcem para o São Paulo \n", torcedoresSaoPaulo);
printf("Na empresa %d pessoas torcem para o Santos \n", torcedoresSantos);
}
