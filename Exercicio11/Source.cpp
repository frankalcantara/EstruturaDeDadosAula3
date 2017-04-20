/*
* Criar um programa que possua uma função recursiva para 
* imprimir uma progressão geométrica definida pelo usuário. 
* O usuário deve informar qual o valor inicial e o valor da progressão.
*/

#include <stdio.h>
#include <stdlib.h>

//prototipos
void progres(int v, int p, int limi);


void main() {
	int valor = 0, prog = 0, c = 0;

	printf("Informar o valor inicial: ");
	scanf_s("%d", &valor);
	//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}

	printf("Informar a progressão geometrica: ");
	scanf_s("%d", &prog);
	//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}

	progres(valor, prog, 10);
	printf("\n");
	system("Pause");
}

//definições
void progres(int v, int p, int limi) {
	if (limi > 0)
	{
		printf("%d - ", v);
		progres(v*p, p, limi - 1);
	}
}
