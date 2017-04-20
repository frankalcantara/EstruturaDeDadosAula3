/*
* Criar um programa que possua uma fun��o que receba um n�mero de 1 a 12 
* e armazene em uma vari�vel passada por refer�ncia o nome do referido m�s.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//prot�tipo
//vamos definir uma fu��o que recebe um array de arrays
//precisamos lembrar que cada string � um array, ent�o Janeiro � um array
//logo, todos os meses estar�o em um arrays de arrays
//sempre que tiver que retornar um string para um array esta � a melhor forma
//usando o operador de atribui��o =
void verif_mes(int, char **);

void main() {
	int num = 0, c = 0 ;
	//um array simples que vai armazenar a string do m�s
	char *mes;

	printf("Informar um numero de 1 a 12: ");
	scanf_s("%d", &num);
	//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}

	//chamamos a fun��o passando o endere�o do ponteiro destino
	verif_mes(num, &mes);
	printf("O numero %d corresponde ao mes: %s \n", num, mes);

	system("Pause");
}

void verif_mes(int num, char **mes) {
	//retiramos 1 por que o array come�a em zero
	switch (num - 1){
		case 0:
			*mes = "Janeiro";
			break;
		case 1:
			*mes = "Fevereiro";
			break;
		case 2:
			*mes = "Marco";
			break;
		case 3:
			*mes = "Abril";
			break;
		case 4:
			*mes = "Maio";
			break;
		case 5:
			*mes = "Junho";
			break;
		case 6:
			*mes = "Jullo";
			break;
		case 7:
			*mes = "Agosto";
			break;
		case 8:
			*mes = "Setembro";
			break;
		case 9:
			*mes = "Outubro";
			break;
		case 10:
			*mes = "Novembro";
			break;
		case 11:
			*mes = "Dezembro";
			break;
		default:
			*mes = "Erro!!!";
			break;
	}
}


