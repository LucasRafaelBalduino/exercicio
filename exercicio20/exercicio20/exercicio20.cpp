﻿// exercicio20.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

void funcao(int x[3][3], int lin, int col) {
	int i, j;
	for (i = 0; i < lin; i++)
		for (j = 0; j < col; j++)
			if (x[i][j] < 0)
				x[i][j] = -x[i][j];
}
int main() {
	int mat[3][3], i, j;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++) {
			printf("Informe mat[%d][%d]: ", i, j);
			scanf_s("%d", &mat[i][j]);
		}
	printf("Matriz antes\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++)
			printf("%d\t", mat[i][j]);
		printf("\n");
	}
	funcao(mat [3],[3]);
	printf("Matriz depois\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++)
			printf("%d\t", mat[i][j]);
		printf("\n");
	}
	return 0;
}
