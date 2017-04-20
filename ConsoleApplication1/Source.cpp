/*
* Fazer um programa que possua uma fun��o que imprima 
* por extenso um n�mero fornecido pelo usu�rio entre 1 e 100.
*/

#include <stdio.h>
#include <stdlib.h>

//prototipos
void imprimir(int num);

void main() {
	int num = 0, c = 0;
	
	printf("Informe um n�mero inteiro de um a 99: ");
	scanf_s("%d", &num);
	//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}

	imprimir(num);
	system("Pause");
}

//defini��o
void imprimir(int num) {
	int u = 0, d = 0;

	char menoresQueVinte[20][10] = { "zero", "um", "dois", "tr�s", "quatro", "cinco", "seis", "sete", "oito", "nove", "dez", "onze", "doze", "treze", "catorze", "quinze", "dezesseis", "dezessete", "dezoito", "dezenove" };
	char dezenas[10][12] = { "", "dez", "vinte", "trinta", "quarenta", "cinquenta", "sessenta", "setenta", "oitenta", "noventa" };

	if (num < 20){
		printf("%s\n", menoresQueVinte[num]);
	} else {
		d = (int) (num / 10);
		u = (int) (num % 10);
		printf("%s e %s \n", dezenas[d], menoresQueVinte[u]);
	}
}

