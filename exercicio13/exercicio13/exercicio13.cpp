// exercicio13.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

//Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares.

int LerNumero() {
	printf_s("Informe um numero\n");
	int numero;
	scanf_s("%d", &numero);
	return numero;
}

void ImprimirNumero() {
	int n = LerNumero();
	for (int i = 0; i < n; i++)
		printf_s(" %d ", i * 2 + 1);

}

int main()
{
	ImprimirNumero();
	system("pause");
}
