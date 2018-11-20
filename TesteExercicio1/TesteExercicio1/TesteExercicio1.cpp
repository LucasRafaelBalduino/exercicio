// TesteExercicio1.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>


	int main()
	{
		float x1, x2, y1, y2;
		float distancia;
		printf_s("Digite os dados de entrada dois pontos quaisquer, P(x1,y1), P(x2,y2)\n");

		printf_s("Digite o valor de x1\n");
		scanf_s("%f", &x1);

		printf_s("Digite o valor de y1\n");
		scanf_s("%f", &y1);

		printf_s("Digite o valor de x2\n");
		scanf_s("%f", &x2);

		printf_s("Digite o valor de y2\n");
		scanf_s("%f", &y2);

		distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)); /* Distancia entre dois pontos*/
		printf_s("A distancia entre os dois pontos e: %f\n", distancia);
		system("pause");
	}

