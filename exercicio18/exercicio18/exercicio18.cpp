// exercicio18.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
//Crie um programa que leia um número entre 2 e 20 e gere uma tela com a seguinte
//configuração:

int LerNumero() {
	int numero;
	printf_s("Informe o numero\n");
	scanf_s("%d", &numero);

	return numero;
}

void PrintTela() {
	int x = LerNumero();
	int n = 0;

	for (int i = 1; i <= x; i++) {

		n = n + 1; 

			printf("\n");

      for (int y = 1; y <= n; y++) {

	   printf("%d", y);
       

	  }

	}


}

int main()
{
	PrintTela();
}
