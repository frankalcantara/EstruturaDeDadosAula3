/*
* Criar um programa que contenha uma função que retorne se um determinado número é par ou impar. 
* A função recebera como argumento um número informado e retornará a informação.
*/

#include <stdio.h>
#include <stdlib.h>

//protótipo
int par(int);

void main() {
	int numero = 0, c = 0;

	printf("Informar um número: ");
	scanf_s("%d", &numero);
	//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}

	if (par(numero))
		printf("O numero eh Par!!!\n");
	else
		printf("O numero eh Impar!!!\n");
	
	system("Pause");
}//fim do main

//definição
int par(int num) {
	if ((num % 2) == 0)
		return(1);
	else
		return(0);
}

