﻿// exercicio30.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

//Crie um programa que leia um número entre 2 e 20 e gere uma tela com a seguinte
//configuração :

int LerNumero() {
	int numero;
	printf_s("Informe um numero entre 2 e 20\n");
	scanf_s("%d", &numero);

	return numero;
}

void Tela() {

	int numero = LerNumero();
	int i = 1;

	for (int i = 0; i <= numero; i++) {
			for (int j = 0; j <= i; j++) {
				if (j < i) {
					printf_s("x", j, i);
				}
				else {
					printf_s("%d %d\n", j, i );
				}

			}
	}
}

int main()
{
	Tela();
}

