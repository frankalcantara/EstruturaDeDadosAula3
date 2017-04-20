/*
* Criar um programa que possua uma fun��o que recebe dois n�meros inteiros, informados
* por um usu�rio e retorne o M�nimo M�ltiplo Comum, destes n�meros.
*/

#include <stdio.h>
#include <stdlib.h>

//prot�tipo
int min_mul(int, int);

void main() {
	int n1 = 0, n2 = 0, c = 0;

	printf("Informe o primeiro numero: ");
	scanf_s("%d", &n1);
	//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}
	
	printf("Informe o segundo numero: ");
	scanf_s("%d", &n2);
	//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}

	printf("O Minimo Multiplo Comum: %d\n", min_mul(n1, n2));

	system("Pause");
}

//defini��o
int min_mul(int num1, int num2) {
	int aux = 0;

	if(num1 > num2)
		aux = num1;
	else
		aux = num2;
	
	//vai ficar incrementando o aux at� achar
	//um numero que quando dividido pelos dois numeros informados
	//apresente resto zero
	while (1) {
		if ((aux % num1) == 0)
			if ((aux % num2) == 0)
				return(aux);
			aux++;
	}
}

