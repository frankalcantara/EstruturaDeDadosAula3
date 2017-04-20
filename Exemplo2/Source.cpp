//exemplo de função retornando um valor

#include <stdio.h>
#include <stdlib.h>

//protótipos
int menu_teste();
//funções para teste
void funcao_cadastrar();
void funcao_atualizar();
void funcao_listar();
void funcao_imprimir();
void funcao_sair();

void main() {
	switch (menu_teste()){
		case 1:	funcao_cadastrar();	break;
		case 2:	funcao_atualizar();	break;
		case 3:	funcao_listar();		break;
		case 4:	funcao_imprimir();	break;
		case 5:	funcao_sair();		  break;
	}

	system("Pause");
}
//definições das funções
int menu_teste() {
	int op = 0, c = 0;

	printf("Digite 1 para Cadastrar: \n");
	printf("Digite 2 para Atualizar: \n");
	printf("Digite 3 para Listar: \n");
	printf("Digite 4 para Imprimir: \n");
	printf("Digite 5 para Sair: \n");
	scanf_s("%d", &op);
	//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}

	return(op);
}

void funcao_cadastrar() {
	printf("\nAqui deve ficar a funcao cadastrar...\n");
}
void funcao_atualizar() {
	printf("\nAqui deve ficar a funcao atualizar...\n");
}
void funcao_listar() {
	printf("\nAqui deve ficar a funcao listar...\n");
}
void funcao_imprimir() {
	printf("\nAqui deve ficar a funcao imprimir...\n");
}
void funcao_sair() {
	//apenas para encerrar o programa
	exit(0);
}
