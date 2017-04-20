/*
* Criar um programa que contenha a função que retorne se um determinado número é primo. 
* A função recebera como argumento um número informado e retornará a informação desejada.
*/

#include <stdio.h>
#include <stdlib.h>

//protótipos
int primo(int);


void main() {
	int numero = 0, c =0;

	printf("Informe um numero: ");
	scanf_s("%d", &numero);
	//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}
	
	if (primo(numero))
		printf("Sim, o numero eh Primo!!!\n");
	else
		printf("Nao, o numero Nao eh Primo!!!\n");
	
	system("Pause");
}

//definições
int primo(int num) {
	for (int i = 2; i < (num - 1); i++)
		if ((num % 2) == 0)
			return(0);

	//observe que ser for verdadeiro vamos sair da função
	//então não precisamos do else
	return(1);
}

