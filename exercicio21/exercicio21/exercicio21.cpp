﻿// exercicio21.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

//Dados n e uma seqüência de n números inteiros, determinar a soma dos números pares.

void SomaPar() {
	int soma = 0;
	printf_s("Informe um numero inteiro:\n ");
	int numero;
	scanf_s("%d", &numero);

	for (int i = 0; i < numero; i++) {
		if (i % 2 == 0) {
			soma = soma + i;
			printf_s("E um numero par: %d\n", soma);
		}
	}
	soma = soma + numero;
	printf_s(" a soma dos valores pares sao: %d \n", soma);
}

int main()
{
	SomaPar();
}
