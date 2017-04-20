/*
* Construa um algoritmo que possua uma fun��o que indique se um n�mero 
* est� na s�rie de Fibonacci, a partir de um n�mero fornecido pelo usu�rio,
* desde que a posi��o desejada seja menor ou igual a 15. 
* Informar se o n�mero n�o pertence a s�rie de Fibonacci. 
* A S�rie de Fibonacci � dada por: 1, 1, 2, 3, 5, 8, 13, 
* onde cada n�mero da s�rie � o resultado da soma dos dois anteriores.
* 
*/

#include <stdio.h>
#include <stdlib.h>

//prot�tipos
int fibo(int);

void main() {
	int numero = 0 , pos = 0, c = 0;
	//para testes a s�rie de fibonacci �: 
	//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, ...

	printf("Informar um n�mero para verifica se esta na s�rie de Fibonacci: ");
	scanf_s("%d", &numero);
	//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}

	pos = fibo(numero);
	if (pos > 0)
		printf("Sim, esta na serie de Fibonacci na posicao: %d\n", pos);
	else
		printf("Nao esta na serie de Fibonacci\n");
	
	system("Pause");
} //fim do main

int fibo(int num) {
	int x = 3, n1 = 1, n2 = 2, aux;
	//para testar o limite
	if (num >15){
		printf("Este numero eh maior que 15.\n");
		system("Pause");
		exit(0);
	}

	if (num == 1)
		return(1);

	while (num >= n2)
	{
		if (num == n2)
			return(x);
		x++;
		aux = n1 + n2;
		n1 = n2;
		n2 = aux;
	}
	return(0);
}


