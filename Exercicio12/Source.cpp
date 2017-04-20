/*
* Criar um programa que possua uma fun��o para imprimir a tabuada de um n�mero informado pelo usu�rio.
*/

#include <stdio.h>
#include <stdlib.h>

//prototipos
void tabuada(int n);

void main() {
	int numero = 0, c = 0;

	printf("Informar n�mero para imprimir a tabuada: ");
	scanf_s("%d", &numero);
	//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}

	tabuada(numero);
	system("Pause");
}

//defini��es
void tabuada(int n) {
	int x;
	if ((n > 0) && (n<11))
	{
		for (x = 1; x < 11; x++)
			printf("%d\tx\t%d\t=\t%d\n", x, n, (x*n));
	} else
		printf("N�o h� tabuada para o �mero informado.");
	printf("\n");
}
