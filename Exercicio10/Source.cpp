/*
* Criar uma função que receba 3 valores e informe qual é o maior.
*/

#include <stdio.h>
#include <stdlib.h>

//protótipo
int maior(int, int, int);

void main() {
	int num1 = 0, num2 = 0 , num3 = 0, c = 0;
	printf("Digite o primeiro numero: ");
	scanf_s("%d", &num1);
	//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}

	printf("Digite o segundo numero: ");
	scanf_s("%d", &num2);
	//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}

	printf("Digite o terceiro numero: ");
	scanf_s("%d", &num3);
	//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}

	printf("O maior valor: %d\n", maior(num1, num2, num3));
	system("Pause");
}	//fim do main

//definições
int maior(int num1, int num2, int num3) {
	if ((num1 >= num2) && (num1 >= num3))
		return(num1);
	else if((num2 >= num1) && (num2 >= num3))
		return(num2);
	else
		return(num3);
}

