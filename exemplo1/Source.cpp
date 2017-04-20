//exemplo de declaração e uso de função

#include <stdio.h>
#include <stdlib.h>

//protótipo da função
//toda função deve ter um tipo para o retorno
//neste caso a função vai devolver um inteiro
//toda função deve ter um conjunto de argumentos
//neste caso o conjunto de argumentos é um conjunto vazio ()
int menu_teste();

//a função main também é uma função mas não precisa de
//protótipo (declaração). Ela já está declarada por padrão
//e indica ao sistema operacional o ponto onde o programa irá começar.
void main() {
	
	//chamada da função. Uma vez que a função
	//tenha sido declarada no prótipo e definida
	//podemos usá-la e a esse uso damos o nome de 
	//chamada da função
	menu_teste();
	
	//você poderia, por exemplo, modificar o código para imprimir o 
	//retorno do menu se chamar esta função novamente mas, para não
	//confundir, vamos limpar a tela...
	system("cls");
	printf("Chamando menu_teste novamente, a nova escolha do usuario foi: %d\n", menu_teste());
	
	system("Pause");
}

//Definição da função
//aqui você deve definir o que a função irá fazer
int menu_teste() {
	int op;

	printf("Digite 1 para Cadastrar: \n");
	printf("Digite 2 para Atualizar: \n");
	printf("Digite 3 para Listar: \n");
	printf("Digite 4 para Imprimir: \n");
	printf("Digite 5 para Sair: \n");
	//recolhe a opção do usuário
	scanf_s("%d", &op);
	//retorna um inteiro. 
	return op;
}

