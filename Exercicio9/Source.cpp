/*
* Criar uma função e o seu programa de testes. Esta função deverá receber
* uma palavra e informar se esta palavra representa um palíndromo ou não. 
* lembrando que palíndromos são palavras que podems ser lidas em qualquer sentido.
* por exemplo:  abba é um palíndromo; ccdd também é; mas abc não é. 
*/

//vamos resolver este problema fazfimo todas as funções necessárias
//ou seja, sem usar a biblioteca palavra.h
#include <stdio.h>
#include <stdlib.h>

//protótipos
int EPalindrome(char*);
void copiarPalavra(char*, char*);
void reverterPalavra(char*);
int comprimentoPalavra(char*);
int compararPalavra(char*, char*);

int main() {

	char palavra[20];
	int resultado;
	 
	printf("Digite uma palavra: ");
	gets_s(palavra);

	resultado = EPalindrome(palavra);

	if (resultado)
		printf("\"%s\" Eh um palindrome.\n", palavra);
	else
		printf("\"%s\" Nao eh um palindrome.\n", palavra);

	system("Pause");
	return 0;
}

int EPalindrome(char *palavra) {
	int verifica = 0, comprimento =0;
	char *invertido;

	comprimento = comprimentoPalavra(palavra);
	//alocando a memória para o string
	invertido = (char*) malloc(comprimento + 1);

	copiarPalavra(invertido, palavra);
	reverterPalavra(invertido);

	verifica = compararPalavra(palavra, invertido);

	//liberando a memória utilizada
	free(invertido);

	if (!verifica) 
		return 1;
	else
		return 0;
}
/*
* calcula o comprimento de uma string
* PARAM ponteiro de caracteres
* RETURN Inteiro
*/
int comprimentoPalavra(char *palavra) {
	int comprimento = 0;

	//vai percorrer todo o string caracter por caracter
	//lembre que cada caracter é, na memória um número (ascii)
	//e o último caracter de uma string em C é zero
	//no zero o while será falso.
	while (*palavra){
		comprimento++;//está incrementando um valor
		palavra++;//está incrementando um endereço (ponteiro)
	}

	return comprimento;
}

void copiarPalavra(char *destino, char *origem) {
	//vai percorrer todo o string caracter por caracter
	//lembre que cada caracter é, na memória um número (ascii)
	//e o último caracter de uma string em C é zero
	//no zero o while será falso.
	while (*origem)
	{
		*destino = *origem;
		origem++;		//está incrementando um endereço (ponteiro)
		destino++;	//está incrementando um endereço (ponteiro)
	}
	*destino = '\0'; //finalizou a string copiada colocando o zero no final
}

void reverterPalavra(char *palavra) {
	int comprimento = 0;
	char *comeco, *fim, temp;

	comprimento = comprimentoPalavra(palavra);

	//cria dois strings iguais para que eles 
	//tenham o mesmo comprimento e, mais importante
	//estejam apontando para o mesmo endereço na memória
	//então vamos inverter sem usar memória extra
	//apenas correndo os ponteiros
	comeco = palavra;
	fim = palavra;

	//vamos colocar o ponteiro de fim no último caraceter
	//válido, ou seja, antes do zero que encerra a string
	for (int i = 0; i < (comprimento - 1); i++)
		fim++;

	//agora vamos inverter contado os strings em sentido oposto
	for (int i = 0; i < (comprimento / 2); i++){
		//na primeira passagem, começo tem toda a string e
		//fim tem apenas a última letra válida
		//temp recebe esta letra
		temp = *fim;
		//fim vai receber a primeira letra de começo
		*fim = *comeco;
		//a primeira letra de começo receber a ultima letra válida
		*comeco = temp;

		comeco++;	//incrementa o ponteiro de começo 
		fim--;	//decrementa o ponteiro de fim
	}
}

int compararPalavra(char *primeira, char *segunda) {
	while (*primeira == *segunda)
	{
		if (*primeira == '\0' || *segunda == '\0')
			break;

		primeira++;
		segunda++;
	}
	if (*primeira == '\0' && *segunda == '\0')
		return 0;
	else
		return -1;
}