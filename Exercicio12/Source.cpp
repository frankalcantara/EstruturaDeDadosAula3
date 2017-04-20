/*
* Criar um programa que possua uma função para imprimir a tabuada de um número informado pelo usuário.
*/

#include <stdio.h>
#include <stdlib.h>

//prototipos
void tabuada(int n);

void main() {
	int numero = 0, c = 0;

	printf("Informar número para imprimir a tabuada: ");
	scanf_s("%d", &numero);
	//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}

	tabuada(numero);
	system("Pause");
}

//definições
void tabuada(int n) {
	int x;
	if ((n > 0) && (n<11))
	{
		for (x = 1; x < 11; x++)
			printf("%d\tx\t%d\t=\t%d\n", x, n, (x*n));
	} else
		printf("Não há tabuada para o úmero informado.");
	printf("\n");
}
