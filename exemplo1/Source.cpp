//exemplo de declara��o e uso de fun��o

#include <stdio.h>
#include <stdlib.h>

//prot�tipo da fun��o
//toda fun��o deve ter um tipo para o retorno
//neste caso a fun��o vai devolver um inteiro
//toda fun��o deve ter um conjunto de argumentos
//neste caso o conjunto de argumentos � um conjunto vazio ()
int menu_teste();

//a fun��o main tamb�m � uma fun��o mas n�o precisa de
//prot�tipo (declara��o). Ela j� est� declarada por padr�o
//e indica ao sistema operacional o ponto onde o programa ir� come�ar.
void main() {
	
	//chamada da fun��o. Uma vez que a fun��o
	//tenha sido declarada no pr�tipo e definida
	//podemos us�-la e a esse uso damos o nome de 
	//chamada da fun��o
	menu_teste();
	
	//voc� poderia, por exemplo, modificar o c�digo para imprimir o 
	//retorno do menu se chamar esta fun��o novamente mas, para n�o
	//confundir, vamos limpar a tela...
	system("cls");
	printf("Chamando menu_teste novamente, a nova escolha do usuario foi: %d\n", menu_teste());
	
	system("Pause");
}

//Defini��o da fun��o
//aqui voc� deve definir o que a fun��o ir� fazer
int menu_teste() {
	int op;

	printf("Digite 1 para Cadastrar: \n");
	printf("Digite 2 para Atualizar: \n");
	printf("Digite 3 para Listar: \n");
	printf("Digite 4 para Imprimir: \n");
	printf("Digite 5 para Sair: \n");
	//recolhe a op��o do usu�rio
	scanf_s("%d", &op);
	//retorna um inteiro. 
	return op;
}

