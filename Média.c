#include <stdlib.h>
#include <stdio.h>
int main(void){
    //declaração das variáveis
    float idade1, idade2, media;
    //entrada de dados
    printf("Digite a primeira idade:");
    scanf("%f", &idade1);
    printf("Digite a segunda idade:");
    scanf("%f", &idade2);
    //processamento
    
    media =(idade1 + idade2) / 2;
    //saída
    printf("Media das Idades = %.1f\n",media);
    system("pause"); // pausa da tela somente para Windows
    return 0;//retorno da função main
}
