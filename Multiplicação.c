#include <stdlib.h>
#include <stdio.h>
 
int main(){
	//declaração das variaveis
	float preco=0, quant=0, total;
	//entrada de dados
	printf("\nDigite o valor do seu produto: ");
	scanf("%f", & preco);
	fflush(stdin);
	printf("\nDigite a quantidade de produtos: ");
	scanf("%f", & quant);
	fflush(stdin);
	//fazendo o calculo
	total= preco*quant;
	//mostrar resultado
	printf("\nMostrar valor a pagar: ");
	printf("\ntotal: %f", total);
	//pausa para visualização
	getchar();
}
