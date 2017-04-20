//podemos usar ponteiros como argumentos de uma fun��o

#include <stdio.h>
#include <stdlib.h>

//prot�tipos
//no caso de fun��s com ponteiros como argumentos
//precisamos indicar o tipo do ponteiro no conjunto de argumento
void menu_teste2(int *);

//fun��es para teste
void funcao_cadastrar();
void funcao_atualizar();
void funcao_listar();
void funcao_imprimir();
void funcao_sair();

int main() {
	int num = 0;
	//chamamos a fun��o desejada passando 
	//o ponteiro de uma vari�vel;
	menu_teste2(&num);

	//agora podemos usar o valor armazenado na vari�vel
	//cujo endere�o foi passado para a fun��o
	switch (num){
		case 1:		funcao_cadastrar();	break;
		case 2:		funcao_atualizar();	break;
		case 3:		funcao_listar();		break;
		case 4:		funcao_imprimir();	break;
		case 5:		funcao_sair();	break;
	}
	system("Pause");
}

void menu_teste2(int *op){
	int c = 0;

	printf("Digite 1 para Cadastrar: \n");
	printf("Digite 2 para Atualizar: \n");
	printf("Digite 3 para Listar: \n");
	printf("Digite 4 para Imprimir: \n");
	printf("Digite 5 para Sair: \n");
	
	//o scanf/scanf_s precisa de um ponteiro, por isso sempre usamos o 
	// & que deve ser lido como o endere�o de...
	scanf_s("%d", op);
	//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}
	//essa fun��o n�o precisa devolver nada.
	//usamos o ponteiro para escrever direto na vari�vel apontada por op
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

