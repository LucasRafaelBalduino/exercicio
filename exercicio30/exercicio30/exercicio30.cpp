// exercicio30.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

//Crie um programa que leia um número entre 2 e 20 e gere uma tela com a seguinte
//configuração :

int LerNumero() {
	int numero;
	printf_s("Informe um numero entre 2 e 20");
	scanf_s("%d", &numero);

	return numero;
}

void Tela() {

	int numero = LerNumero();
	int i = 1;
	while (i <= numero) {
		printf_s("%d", i);
		i++;
	}


}

int main()
{
	Tela();
}

