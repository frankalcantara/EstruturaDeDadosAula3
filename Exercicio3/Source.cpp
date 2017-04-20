/*
* Criar um programa que contenha uma função que receba os dígitos (somente números) 
* referentes a um determinado CEP. 
* Os dígitos serão informados pelo usuário. 
* A função deverá armazenar em uma variável passada por referência, 
* este mesmo CEP com a formatação (00.000-000).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//O cep formatado terá oito caracteres mas, lembre-se que
//em c todos os strings terminam com o caractere '\0'
//então precisaremos de um caractere a mais
#define COMPRIMENTOCEPFORMATADO 11

//protótipos
void Form_cep(char *);

void main() {
	char cep[COMPRIMENTOCEPFORMATADO] = {' '};

	puts("Informar os numeros do CEP: ");
	//o gets/gets_s é uma forma mais segura de recolher todo o
	//conteúdo de uma linha e não precisamos limpar o buffer de 
	//teclado
	gets_s(cep);
	
	//a variável cep é um array, arrays já são ponteiros.
	//então podemos passar direto para a função
	Form_cep(cep);

	printf("O CEP formatado: %s\n", cep);
	system("Pause");
}

//definição
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



