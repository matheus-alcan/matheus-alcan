#include <stdio.h>
#include <stdlib.h>
 
struct funcionario{
	int id;
	char nome[50];
	char cargo[50];
};
struct cliente{
	int id;
	char nome[50];
	char cidade[50];
};
struct produto{
	int id;
	char nome[50];
	float valor;;
};
int main(){
	struct funcionario funcionarios[5];
	struct cliente clientes[5];
	struct produto produtos[10];
	int i, id=0, n=0, found = 0, o=0;
	float subtotal=0, total=0, pagar=0, tapagar=0, troco=0;
	int resposta;
	printf("Checagem de funcionarios: ");
	for(i=0; i<5; i++){
		printf("\nDigite o ID: ");
		scanf("%d", &funcionarios[i].id);
	    printf("\nDigite o Nome: ");
		scanf("%s", funcionarios[i].nome);
	    printf("\nDigite o Cargo: ");
		scanf("%s", funcionarios[i].cargo);
	}
	printf("Checagem de clientes: ");
	for( i=0; i<5; i++){
		printf("\nDigite o ID: ");
		scanf("%d", &clientes[i].id);
	    printf("\nDigite o Nome: ");
		scanf("%s", clientes[i].nome);
	    printf("\nDigite a Cidade: ");
		scanf("%s", clientes[i].cidade);
	}
	printf("Checagem de produtos: ");
	for( i=0; i<10; i++){
		printf("\nDigite o ID: ");
		scanf("%d", &produtos[i].id);
	    printf("\nDigite o Nome: ");
		scanf("%s", produtos[i].nome);
	    printf("\nDigite o Valor: ");
		scanf("%f", &produtos[i].valor);
	}
	printf("Qual o ID do funcionario q fez a venda? ");
	scanf("%i",&id);
	for(i = 0; i<5; i++){
	if(id = funcionarios[i].id){
		printf("\nId do funcionario: %d", funcionarios[i].id);
	    printf("\nNome do funcionario: %s", funcionarios[i].nome);
	    printf("\nCargo do funcionario: %s", funcionarios[i].cargo);
	    break;
	}	
	if(!found){
		return 0;
	}
	int found = 0;
	}
	printf("\nQual o ID do cliente que fez a compra? ");
	scanf("%i",&id);
	for(i = 0; i<5; i++){
	if(id = clientes[i].id){
		printf("\nId do cliente: %d", clientes[i].id);
	    printf("\nNome do cliente: %s", clientes[i].nome);
	    printf("\nCidade do cliente: %s", clientes[i].cidade);
	    break;
	}
	if(!found){
		return 0;
	}	
	}
	for(i = 0; i<3; i++){
	    printf("\nQual o ID do produto que foi comprado? ");
	    scanf("%i",&id);
	    printf("\nQual a quantidade do produto que foi comprado? ");
	scanf("%i",&n);
	if(id = clientes[i].id){
		printf("\nId do produto: %d", produtos[i].id);
	    printf("\nNome do produto: %s", produtos[i].nome);
	    printf("\nValor do produto: %f", produtos[i].valor);
	    subtotal = n*produtos[i].valor;
	    printf("\nSubtotal do produto: R$.2%f", subtotal);
	    break;
	}
	if(!found){
		return 0;
	}
	total+=	subtotal;
	}

	printf("\nValor total a pagar: R$%.2f", total);
	printf("\nMenu de pagamento: ");
	printf("\n1 - Cartao de debito a vista");
	printf("\n2 - Cartao de credito 12 vezes sem juros");
	printf("\n3 - Pix 12 vezes com 5%% de juros");
	printf("\nInforme a opcao de pagamento: ");
	scanf("%c",&o);
	switch(o){
		case 1:
			pagar = total;
		case 2:
			pagar = total/12;
		case 3:
			pagar = (total/12)*1.05;
	}
	if(!found){
		return 0;
	}
	printf("\nValor a pagar: R$%.2f", pagar);
	printf("\nTotal a pagar: ");
	scanf("%f", tapagar);
	if(pagar < tapagar){
		troco = tapagar - pagar;
	}if(pagar > tapagar){
		return 0;
	}
	printf("\nGostaria de efetuar uma nova compra? [1]-Sim, [2]-Nao");
	scanf("%c",&resposta);
	if(resposta == 1){
		return 0;
	}
	if(resposta == 2){
		getchar();
	}
	getchar;
}