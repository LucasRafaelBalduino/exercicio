// exercicio26.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

//Escreva um algoritmo que determine o número de dias que uma pessoa já viveu. Considere que um mês tenha 30 dias.

int LerIdade() {
	int idade;
	printf_s("Informe sua idade: ");
	scanf_s("%d", &idade);
	return idade;
}

void CalculandoDias() {
	int idade = LerIdade();
	int resultado = 0;
	resultado = idade * 360;

	printf_s("Se voce tem %d anos, voce ja viveu %d dias.\n", idade, resultado);
}

int main()
{
	CalculandoDias();
}
