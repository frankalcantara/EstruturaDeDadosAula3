/*
* Criar um programa que contenha uma fun��o que receba os d�gitos (somente n�meros) 
* referentes a um determinado CEP. 
* Os d�gitos ser�o informados pelo usu�rio. 
* A fun��o dever� armazenar em uma vari�vel passada por refer�ncia, 
* este mesmo CEP com a formata��o (00.000-000).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//O cep formatado ter� oito caracteres mas, lembre-se que
//em c todos os strings terminam com o caractere '\0'
//ent�o precisaremos de um caractere a mais
#define COMPRIMENTOCEPFORMATADO 11

//prot�tipos
void Form_cep(char *);

void main() {
	char cep[COMPRIMENTOCEPFORMATADO] = {' '};

	puts("Informar os numeros do CEP: ");
	//o gets/gets_s � uma forma mais segura de recolher todo o
	//conte�do de uma linha e n�o precisamos limpar o buffer de 
	//teclado
	gets_s(cep);
	
	//a vari�vel cep � um array, arrays j� s�o ponteiros.
	//ent�o podemos passar direto para a fun��o
	Form_cep(cep);

	printf("O CEP formatado: %s\n", cep);
	system("Pause");
}

//defini��o
void Form_cep(char *c) {
	char aux[COMPRIMENTOCEPFORMATADO] = { ' ' };
	//copiamos o array original para um auxiliar
	strcpy_s(aux, c);
	//usamos o auxiliar para formatar o cep e guardar
	//no array original
	for (int i = 0; i < COMPRIMENTOCEPFORMATADO; i++)
	{
		switch (i){
			case 0: c[i] = aux[i];     break;
			case 1:	c[i] = aux[i];     break;
			case 2:	c[i] = '.';		     break;
			case 3:	c[i] = aux[i-1];   break;
			case 4:	c[i] = aux[i-1];   break;
			case 5:	c[i] = aux[i - 1]; break; 
			case 6:	c[i] = '-';	       break;
			case 7:	c[i] = aux[i - 2]; break;
			case 8:	c[i] = aux[i - 2]; break;
			case 9:	c[i] = aux[i - 2]; break;
			case 10:	c[i] = '\0'; break;
		}
	}
}



