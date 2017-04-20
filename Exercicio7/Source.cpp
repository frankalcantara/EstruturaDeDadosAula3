/*
* Criar um programa que possua uma função que receba um número de 1 a 12 
* e armazene em uma variável passada por referência o nome do referido mês.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//protótipo
//vamos definir uma fução que recebe um array de arrays
//precisamos lembrar que cada string é um array, então Janeiro é um array
//logo, todos os meses estarão em um arrays de arrays
//sempre que tiver que retornar um string para um array esta é a melhor forma
//usando o operador de atribuição =
void verif_mes(int, char **);

void main() {
	int num = 0, c = 0 ;
	//um array simples que vai armazenar a string do mês
	char *mes;

	printf("Informar um numero de 1 a 12: ");
	scanf_s("%d", &num);
	//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}

	//chamamos a função passando o endereço do ponteiro destino
	verif_mes(num, &mes);
	printf("O numero %d corresponde ao mes: %s \n", num, mes);

	system("Pause");
}

void verif_mes(int num, char **mes) {
	//retiramos 1 por que o array começa em zero
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


