/*
* Criar um programa que possua uma função que receba um número referente 
* a temperatura em graus centígrados e transforme em fahrenheit. 
* Fórmula: C = ( f – 32 ) * (5 / 9).
*/

#include <stdio.h>
#include <stdlib.h>

//prototipos
void centigradoParaFahrenheit(float);

void main() {
	float grau = 0.0;
	int c = 0;

	printf("Informe a temperatura em graus centígrados: ");
	scanf_s("%f", &grau);
	//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}
	
	centigradoParaFahrenheit(grau);
	system("Pause");
}

void centigradoParaFahrenheit(float g) {
	printf("A temperatura em Fahrenheit: %0.2f\n", ((g * 1.8) + 32));
}

