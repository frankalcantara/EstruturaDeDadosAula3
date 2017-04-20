//exemplo de recursividade com a função fatorial

#include <stdio.h>
#include <stdlib.h>

//protótipos
int Fat(int);

void main(){
	int num = 0, res = 0, c = 0;

	printf("Digite um numero para determinar o fatorial: ");
	scanf_s("%d", &num);
	//sempre limpe o buffer de teclado depois de usar o scanf/scanf_s
	while ((c = getchar()) != '\n' && c != EOF) {}
	
	res = Fat(num);
	printf("\n\n O Fatorial de %d: %d\n", num, res);
	system("Pause");
}

//definições
int Fat(int x) {
	int y;
	if (x == 1)
		y = 1;
	else
		y = Fat(x - 1) * x;

	return(y);
}
