// exercicio19.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
//Crie uma função capaz de multiplicar uma linha de uma matriz por um dado número. Faça o mesmo para uma coluna.



void MultiplicandoLinha() {
	//int numero = LerNumero();

	int matriz[3][4];
	int j, i;
	printf("\nDigite valor para os elementos da matriz\n\n");

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
		{
			printf_s("\nElemento[%d][%d] = ", i, j);
			scanf_s("%d", &matriz[i][j]);
		}

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
		{
			printf("\nElemento[%d][%d] = %d\n", i, j, matriz[i][j]);
		}

}

int main()
{
	MultiplicandoLinha();
}
