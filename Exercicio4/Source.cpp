/*
* Construa um algoritmo que possua uma função que indique se um número 
* está na série de Fibonacci, a partir de um número fornecido pelo usuário,
* desde que a posição desejada seja menor ou igual a 15. 
* Informar se o número não pertence a série de Fibonacci. 
* A Série de Fibonacci é dada por: 1, 1, 2, 3, 5, 8, 13, 
* onde cada número da série é o resultado da soma dos dois anteriores.
* 
*/

#include <stdio.h>
#include <stdlib.h>

//protótipos
int fibo(int);

void main() {
	int numero = 0 , pos = 0, c = 0;
	//para testes a série de fibonacci é: 
	//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, ...

	printf("Informar um número para verifica se esta na série de Fibonacci: ");
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


