//exemplo para determinação se um número é primo ou não

#include <stdio.h>
#include <stdlib.h>
//no protótipo não precisamos dar nomes aos argumentos
//mas temos que declarar seus tipos.
char primo(int);

void main() {
	int num = 0, c = 0;
	printf("Informe um numero para verificar se ele eh primo: ");
	
	scanf_s("%d", &num);
	//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}

	if (primo(num) == 'S')
		printf("Sim o numero %d eh primo\n", num);
	else
		printf("O numero %d nao eh primo\n", num);

	system("Pause");
}

//definições das funções
//função primo recebe um inteiro e devolve um char
char primo(int valor) {
	
	for (int i = 2; i < valor; i++)
		//verificamos se o resto da divisão é igual a zero
		if ((valor % i) == 0)
			return('N');

	return('S');
}
