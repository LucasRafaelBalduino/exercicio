﻿// exercicio18.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
//Crie um programa que leia um número entre 2 e 20 e gere uma tela com a seguinte
//configuração:


int main()
{
		int c, x, y;

	printf("\nEntre com um valor de 2 a 20: ");
	scanf_s("%d", &x);

	for (c = 1; c <= x; c++) {
		for (y = 1; y <= c; y++)
			printf("%d", y);
		printf("\n");
	}

	for (c = c - 2; c > 0; c--) {
		for (y = 1; y <= c; y++)
			printf("%d", y);
		printf("\n");
	}

	printf("\n");
	return 0
}
