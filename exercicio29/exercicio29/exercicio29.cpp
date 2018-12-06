// exercicio29.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

/*Dados três valores X, Y e Z, verificar se eles podem ser os comprimentos dos lados
de um triângulo, e se forem, verificar se é um triângulo equilátero, isóscele ou
escaleno. Se eles não formarem um triângulo, escrever uma mensagem.
Antes da elaboração do algoritmo, torna-se necessário a revisão de algumas
propriedades e definições.

Propriedade – o comprimento de cada lado de um triângulo é menor do que a soma
dos comprimentos dos outros dois lados.
Definição 1 - chama-se de triângulo equilátero o que tem os comprimentos dos três
lados iguais;
Definição 2 - chama-se de triângulo isóscele o triângulo que tem os comprimentos
de dois lados iguais;
Definição 3 - chama-se triângulo escaleno o triângulo que tem os comprimentos dos
três lados diferentes.*/

int LerLado() {
	int lado;
	printf_s("\nInforme oslados do triangulo: ");
	scanf_s("%d", &lado);

	return lado;
}

void Calculo() {

	int l1 = LerLado();
	int l2 = LerLado();
	int l3 = LerLado();
	int triangulo;


	if ((l1 < (l2 + l3)) && (l2 < (l1 + l3)) && (l3 < (l1 + l2)))
	{
		printf("E um triangulo\n");
		triangulo = 1;
	}
	else
	{
		printf("Nao e um triangulo\n");
		triangulo = 0;
	}

	if (triangulo == 1)
	{
		if ((l1 == l2) && (l2 == l3))
		{
			printf("Equilatero\n");
		}
		else
			if (triangulo == 1)
			{
				if (((l1 == l2) && (l1 || l2 < !l3)) || ((l2 == l3) && (l2 || l3 < !l1)) || ((l3 == l1) && (l1 || l3 < !l2)))
				{
					printf("Isoceles\n");
				}
			}
			else
				if (triangulo == 1)
				{
					if ((l1 < !l2) && (l1 < !l3) && (l2 < !l3))
					{
						printf("\nEscaleno");
					}
				}
	}

}


int main()
{
	Calculo();
}

