// exercicio22.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

//Escreva um programa que lê uma matriz quadrada 3x3 e apresenta na tela a sua
//matriz transposta.

void PrintMatriz() {
	int mat[3][3];
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("Insira o elemento [%d][%d] das Matriz A\n", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
}

int main()
{
	PrintMatriz();
}
