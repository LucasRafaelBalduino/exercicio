// exercicio31.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

//Escrever um algoritmo que lê 5 valores para a, um de cada vez, e conta quantos
//destes valores são negativos, escrevendo esta informação.

void LerNumero() {
	int numero;
	int resultado = 0;
	for (int i = 1; i <= 5; i++) {
		printf_s("Inform o %d valor: \n", i);
		scanf_s("%d", &numero);
		if (numero < 0) {
			resultado ++;
		}
	}
	printf_s("Apenas %d, dos numeros digitados sao negativos", resultado);
}

int main()
{
	LerNumero();
}
