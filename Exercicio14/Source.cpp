/*
* Criar uma função que receba um número em centímetros 
* e imprima o seu correspondente em polegadas
*/

#include <stdio.h>
#include <stdlib.h>

//prototipos
void polegada(float m);

void main() {
	float medida = 0.0;
	int c = 0;

	printf("Informe um número em centimetros: ");
	scanf_s("%f", &medida);
	//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}
	
	polegada(medida);
	system("Pause");
}

//definição
void polegada(float m) {
	//vamos mostrar com	quatro casas decimais
	printf("O correspondente em polegadas: %0.4f\n", m*0.3937);
}
