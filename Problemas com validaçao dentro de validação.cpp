#include <stdio.h>

int main(){
	
char sim[] = "s";
char nao[] = "n";
float valorTotal;
int jurosMensais = 10;

char resposta;
printf("Escreva 's' para sim e 'n' para nao \n");
scanf("%c", & resposta);



if(resposta == sim[0]){
	printf("Pode parcelar em ate 3 vezes sem juros \ndigite o valor da compra a ser parcelado \n");
	
	scanf("%f", &valorTotal);
	float valorParcelas = valorTotal / 3;
	printf("O valor das parcelas ficou em %f mensais", valorParcelas);
	
}else if(resposta == nao[0]){
	printf("Voce pode parcelar em ate 3 vezes, porem com juros \n deseja realizar a compra?");
	char escolha;
	scanf("%c", &escolha);
	
		if(escolha == sim[0]){
			printf("Digite o valor total da compra: \n");
			scanf("%f", valorTotal);
			
			float valorParcelasJuros = (valorTotal / 3) + (jurosMensais * 3);
	
			printf("O valor da parcela ficou em %f mensais", valorParcelasJuros);
		}
	
	
}else{
	printf("Escreva um caracter valido");
}
}
