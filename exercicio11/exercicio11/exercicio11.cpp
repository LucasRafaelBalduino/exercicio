// exercicio11.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

/*Faça um algoritmo para calcular a área de uma circunferência, considerando a
fórmula AREA = π * RAIO
2
. Utilize as variáveis AREA e RAIO, a constante π (pi =

3.14159) e os operadores aritméticos de multiplicação.*/

void Calculo() {
	float  area;
	float raio;
	float pi = 3.14159;
	printf_s("Digite o raio:\n");
	scanf_s("%f", &raio);
	area = pi * (pow(raio, 2));
	printf_s("A area da circunferencia e: %.2f", area);
}

int main()
{
	Calculo();
}
