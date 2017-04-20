/*
* Criar um programa que possua uma função que troque o conteúdo 
* de duas variáveis quaisquer que contenham números inteiros. 
* Ou seja, se a variável ‘A’ contem o valor 7 e a variável ‘B’ contem o valor 3, 
* a função deverá fazer com que ‘A’ fique com 3 e a variável ‘B’ com o valor 7.
*/

#include <stdio.h>
#include <stdlib.h>

//protótipo
void troca(int *, int *);

void main() {
	int a = 0 , b = 0, c = 0;

	printf("Informar o valor da primeira variavel: ");
	scanf_s("%d", &a);
	//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}
	
	printf("Informar o valor da segunda variavel: ");
	scanf_s("%d", &b);
	//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}

	troca(&a, &b);

	printf("Primeira variavel: %d\n", a);
	printf("Segunda variavel: %d\n", b);

	system("Pause");
}

void troca(int *n1, int *n2) {
	int aux;

	aux = *n1;
	*n1 = *n2;
	*n2 = aux;
}


