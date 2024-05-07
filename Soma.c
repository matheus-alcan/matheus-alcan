#include <stdlib.h>
#include <stdio.h>
void main(){
    // definir variáveis
    int preco1=0, preco2=0, preco3=0, total=0;
    printf("\nInformar o valor do produto: ");
    scanf("%i", &preco1);
    fflush(stdin);
    printf("\nInformar o valor do produto: ");
    scanf("%i", &preco2);
    fflush(stdin);
    printf("\nInformar o valor do produto: ");
    scanf("%i", &preco3);
    fflush(stdin);
    //fazendo o cálculo
    total = preco1 + preco2 + preco3;
    //mostrar resultado
    printf("\n\nMosttrando Dados\n");
    printf("\npreco1: %i", preco1);
    printf("\npreco2: %i", preco2);
    printf("\npreco3: %i", preco3);
    printf("\ntotal: %i", total);
    //pausa para visualização
    getchar();
}
