#include <stdio.h>

int main(){
	
// maior igual ou menor a 10	
	
	
//	int x;
//	printf("Escreva um numero real \n");
//	
//	scanf("%d", &x);
//	
//	if(x > 10){
//		printf("O numero %d e maior que 10", x);
//	}else if( x == 10){
//		printf("O numero %d e igual a 10", x);
//	}else{
//		printf("O numero %d e menor que 10", x);
//	}


//calcula se o primeiro  numero e maior ou menor que o segundo

//int numero1;
//int numero2;
//
//printf("Escreva um numero real qualquer \n");
//scanf("%d", &numero1);
//
//printf("Escreva outro numero real qualquer \n");
//scanf("%d", &numero2);
//
//if(numero1 > numero2){
//	printf("O numero %d e maior que %d", numero1, numero2);
//}else{
//	printf("O numero %d e menor que %d", numero1, numero2);
//}


//calcula notas

//int nota1;
//int nota2;
//int media;
//
//printf("Escreva sua nota da primeira prova (1 a 10) \n");
//scanf("%d", &nota1);
//
//printf("Escreva sua nota da segunda prova (1 a 10) \n");
//scanf("%d", &nota2);
//
//media = (nota1 + nota2) / 2;
//
//printf("o valor da media e %d \n \n", media);
//
//if(media > 6){
//	printf("Aprovado");
//}else{
//	printf("Reprovado");
//}



	// faixa de 10 a 50

//	int num;
//	printf("Escreva um numero entre 1 e 50 \n");
//	scanf("%d", &num);
//	
//	if(num >= 10 && num <= 50){
//		printf("O numero %d esta entre 1 e 50", num);
//	}else{
//		printf("O numero %d esta fora da faixa entre 1 e 50", num);
//	}


	//faltas de aluno
	
	int mediaAluno;
	int faltas;
	int limiteFaltas = 100 * 0.75;
	int faltasEmPorcentagem;
	
	printf("Insina o a media do aluno \n");
	scanf("%d", &mediaAluno);
	
	printf("Insina a porcentagem de faltas do aluno \n");
	scanf("%d", &faltas);
	
	printf("%d \n", limiteFaltas);
	

	
	if(mediaAluno > 6 && faltas <= limiteFaltas){
		printf("Aprovado sua media e de %d e suas faltas sao de %d", mediaAluno, faltas);
	}else{
		printf("Reprovado sua media e de %d e suas faltas sao de %d %", mediaAluno, faltas);
	}
}
