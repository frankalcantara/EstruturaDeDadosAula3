/*
* Criar um programa para cadastrar em uma lista um máximo de 100 pessoas. 
* Este programa terá a possibilidade de a qualquer momento cadastrar novas pessoas, 
* listar as existentes e atualizar algum dado de uma pessoa já cadastrada.
* Este programa deverá gravar nomes com até 30 caracteres, telefones com até 20 caracteres
* e email com até 70 caracteres
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h> //para trabalhar com strings 

#define NUMEROMAXIMODEPESSOAS 100
struct Pessoa {
	char nome[30], telefone[20], email[70];
};

/*	
* Declaramos o vetor de estrutura para armazenar os dados das pessoas como “global”
* deste modo ele não precisa ser passado como parâmetro para as funções, pois
* variáveis globais podem ser acessadas por todas as funções.			
*/
struct Pessoa dados[NUMEROMAXIMODEPESSOAS];

//Protótipos
int menu();
void cadastrar(int *);
void listar(int);
void atualizar(int);


void main() {
	int op, qtd = 0;
	//para que o programa seja executado até o usuário
	//escolher sair
	do{
		op = menu();
		switch (op) {
			case 1:	cadastrar(&qtd); break;
			case 2:	atualizar(qtd); break;
			case 3:	listar(qtd); break;
		}
	} while (op != 4);
}	//fim do mai


//Definições
/*
* a função menu tem por objetivo listar para o usuário as opções do programa
*/
int menu() {
	int op = 0, c = 0;

	//sempre que o menu aparecer vamos limpar a tela
	system("cls");
	printf("Digite 1 para Cadastrar: \n");
	printf("Digite 2 para Atualizar: \n");
	printf("Digite 3 para Listar: \n");
	printf("Digite 4 para Sair: \n");

	scanf_s("%d", &op);
	//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}

	return(op);
}


/*
* Na função cadastrar, a quantidade de pessoas cadastradas é passada por referência,
* deste modo quando a variável “q” é alterada na função, registrando que há um novo
* cadastro, a variável de origem também é alterada. Veja que nesta função realizamos
* acesso ao vetor de dados sem precisar declarar dentro da função, pois este é global
*/
void cadastrar(int *q){
	int c = 0;
	if (*q >= 99){
		printf("Não é possível cadastrar mais pessoas, já esta no limite de 100");
	}else{
		printf("Informe Nome: ");
		scanf_s("%s", dados[*q].nome, sizeof(dados[*q].nome));
		//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
		while ((c = getchar()) != '\n' && c != EOF) {}

		printf("Informe Telefone: ");
		scanf_s("%s", dados[*q].telefone, sizeof(dados[*q].telefone));
		//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
		while ((c = getchar()) != '\n' && c != EOF) {}

		printf("Informe Email: ");
		scanf_s("%s",dados[*q].email, sizeof(dados[*q].email));
		//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
		while ((c = getchar()) != '\n' && c != EOF) {}
		
		//sintaxe correta para incrementar um valor apontado por um ponteiro
		//já que o operador ++ usado em sufixo tem precedência sobre o operador 
		//de dereferenciamento * sem o parenteses vamos incrementar o ponteiro e 
		//depois pegar o valor
		(*q)++;
	}
}

/*
* Para listar os registros cadastrados, basta saber qual é a quantidade e fazer o loop até
* esta quantidade. Aqui é utilizada a passagem de parâmetros por valor, pois não
* necessitamos alterar o valor de origem.
*/
void listar(int q) {
	for (int i = 0; i < q; i++)
		printf("Nome: %s, Telefone : %s, Email : %s.\n", dados[i].nome, dados[i].telefone, dados[i].email);
	
	//depois de listar vamos parar um momento.
	system("Pause");
}

/*
* Para atualizar os dados cadastrais, primeiramente temos que perguntar ao usuário
* o nome de quem ele deseja alterar, na sequencia fazemos uma pesquisa para saber
* se este nome esta na listagem. Nesta busca, quando localizamos, guardamos o
* valor da posição no vetorpara quando solicitarmos os novos dados, armazenarmos
* exatamente na posição localizada.
*/
void atualizar(int q) {
	char nome[30];
	int aux = -1, c = 0;

	printf("Informe o nome da pessoa que deseja atualizar os dados: ");
	scanf_s("%s", &nome, sizeof(nome));
	//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}

	for (int i = 0; i < q; i++)
		// a função strcmp devolve
		// um valor maior que zero se str1 > str2
		// um valor menor que zero se str1 < str2
		// um valor igual a zero se str1 = str2
		if (strcmp(dados[i].nome, nome) == 0){
			aux = i;
			break;	//sai do for
		}

	if (aux == -1){ 
		printf("Nome não localizado."); 
		//sempre com uma pausa
		system("Pause");
	} else {
		printf("Informe Nome: ");
		scanf_s("%s", dados[aux].nome, sizeof(dados[aux].nome));
		//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
		while ((c = getchar()) != '\n' && c != EOF) {}

		printf("Informe Telefone: ");
		scanf_s("%s", dados[aux].telefone, sizeof(dados[aux].telefone));
		//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
		while ((c = getchar()) != '\n' && c != EOF) {}

		printf("Informe Email: ");
		scanf_s("%s", dados[aux].email, sizeof(dados[aux].email));
		//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
		while ((c = getchar()) != '\n' && c != EOF) {}
	}
}
