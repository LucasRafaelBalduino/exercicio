﻿// exercicio19.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
//Crie uma função capaz de multiplicar uma linha de uma matriz por um dado número. Faça o mesmo para uma coluna.



void MultiplicandoLinha() {
	//int numero = LerNumero();

	float valor;
	float valor1;
	int matriz[3][4];
	int j, i;
	printf_s("Informe o valor que sera multiplicado da rpimeira linha");
	scanf_s("%d", valor);
	printf("\nDigite valor para os elementos da matriz\n\n");

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
		{
			printf_s("\nElemento[%d][%d] = ", i, j);
			scanf_s("%d", &matriz[i][j]);
			if (i == j)
			{
				valor = valor * i;

			}
			if (j == i) {
				valor1 = valor1 * j;
			}
		}


}

int main()
{
	MultiplicandoLinha();
}
