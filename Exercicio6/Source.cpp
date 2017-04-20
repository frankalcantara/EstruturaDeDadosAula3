/*
* Criar um programa que possua uma fun��o n�o recursiva, 
* que calcule o fatorial de um n�mero informado pelo usu�rio.
*/

#include <stdio.h>
#include <stdlib.h>

//prot�tipo
int fat(int);

void main() {
	int num = 0, c = 0;

	printf("Informar o numero desejado: ");
	scanf_s("%d", &num);
	//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}

	printf("O fatorial de %d: %d.\n", num, fat(num));
	system("Pause");
}

int fat(int num) {
	int x;

	for (x = (num - 1); x> 1; x--)
		num = num * x;
	return(num);
}

