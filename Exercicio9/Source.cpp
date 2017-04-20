/*
* Criar uma fun��o e o seu programa de testes. Esta fun��o dever� receber
* uma palavra e informar se esta palavra representa um pal�ndromo ou n�o. 
* lembrando que pal�ndromos s�o palavras que podems ser lidas em qualquer sentido.
* por exemplo:  abba � um pal�ndromo; ccdd tamb�m �; mas abc n�o �. 
*/

//vamos resolver este problema fazfimo todas as fun��es necess�rias
//ou seja, sem usar a biblioteca palavra.h
#include <stdio.h>
#include <stdlib.h>

//prot�tipos
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
	//alocando a mem�ria para o string
	invertido = (char*) malloc(comprimento + 1);

	copiarPalavra(invertido, palavra);
	reverterPalavra(invertido);

	verifica = compararPalavra(palavra, invertido);

	//liberando a mem�ria utilizada
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
	//lembre que cada caracter �, na mem�ria um n�mero (ascii)
	//e o �ltimo caracter de uma string em C � zero
	//no zero o while ser� falso.
	while (*palavra){
		comprimento++;//est� incrementando um valor
		palavra++;//est� incrementando um endere�o (ponteiro)
	}

	return comprimento;
}

void copiarPalavra(char *destino, char *origem) {
	//vai percorrer todo o string caracter por caracter
	//lembre que cada caracter �, na mem�ria um n�mero (ascii)
	//e o �ltimo caracter de uma string em C � zero
	//no zero o while ser� falso.
	while (*origem)
	{
		*destino = *origem;
		origem++;		//est� incrementando um endere�o (ponteiro)
		destino++;	//est� incrementando um endere�o (ponteiro)
	}
	*destino = '\0'; //finalizou a string copiada colocando o zero no final
}

void reverterPalavra(char *palavra) {
	int comprimento = 0;
	char *comeco, *fim, temp;

	comprimento = comprimentoPalavra(palavra);

	//cria dois strings iguais para que eles 
	//tenham o mesmo comprimento e, mais importante
	//estejam apontando para o mesmo endere�o na mem�ria
	//ent�o vamos inverter sem usar mem�ria extra
	//apenas correndo os ponteiros
	comeco = palavra;
	fim = palavra;

	//vamos colocar o ponteiro de fim no �ltimo caraceter
	//v�lido, ou seja, antes do zero que encerra a string
	for (int i = 0; i < (comprimento - 1); i++)
		fim++;

	//agora vamos inverter contado os strings em sentido oposto
	for (int i = 0; i < (comprimento / 2); i++){
		//na primeira passagem, come�o tem toda a string e
		//fim tem apenas a �ltima letra v�lida
		//temp recebe esta letra
		temp = *fim;
		//fim vai receber a primeira letra de come�o
		*fim = *comeco;
		//a primeira letra de come�o receber a ultima letra v�lida
		*comeco = temp;

		comeco++;	//incrementa o ponteiro de come�o 
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