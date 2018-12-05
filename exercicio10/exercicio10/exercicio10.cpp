// exercicio10.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
//Um vendedor necessita de um algoritmo que calcule o preço total devido por um
//cliente.O algoritmo deve receber o código de um produto e a quantidade comprada
//e calcular o preço total, usando a tabela abaixo :
int main()
{
	int quantidade = 0;
	float resultado = 0;
	int produto;

	do {
		printf_s("Quantidade:\n");
		scanf_s("%d", &quantidade);
		printf_s("Selecione um produto\n");
		printf_s("[1001] R$:5,32\n");
		printf_s("[1324] R$:6,45\n");
		printf_s("[6548] R$:2,37\n");
		printf_s("[987] R$:5,32\n");
		printf_s("[7623] R$:6,45\n");
		printf_s("[-1] Sair\n");
		printf_s("Produto:\n");
		scanf_s("%d", &produto);


		switch (produto) {
		case 1001:
			resultado = resultado + (quantidade * 5.32);
			break;
		case 1324:
			resultado = resultado + (quantidade * 6.45);
		case 6548:
			resultado = resultado + (quantidade * 2.37);
			break;
		case 987:
			resultado = resultado + (quantidade * 5.32);
			break;
		case 7623:
			resultado = resultado + (quantidade * 6.45);
			break;
		default:
			printf_s("Exit.\n");
			break;
		}

	} while (produto != -1 || quantidade != 0);
	printf_s("Valor a pagar: %f\n", resultado);
	return 0;
}