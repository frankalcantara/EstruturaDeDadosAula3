/*
* Criar um programa que contenha uma fun��o que retorne se um determinado n�mero � par ou impar. 
* A fun��o recebera como argumento um n�mero informado e retornar� a informa��o.
*/

#include <stdio.h>
#include <stdlib.h>

//prot�tipo
int par(int);

void main() {
	int numero = 0, c = 0;

	printf("Informar um n�mero: ");
	scanf_s("%d", &numero);
	//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}

	if (par(numero))
		printf("O numero eh Par!!!\n");
	else
		printf("O numero eh Impar!!!\n");
	
	system("Pause");
}//fim do main

//defini��o
int par(int num) {
	if ((num % 2) == 0)
		return(1);
	else
		return(0);
}

