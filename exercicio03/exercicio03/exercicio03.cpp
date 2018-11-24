// exercicio03.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

int LerIdadeDia() {
	printf_s("Faca um algoritmo que leia a idade de uma pessoa expressa em dias e mostre-a expressa em anos, meses e dias.\n");
	int idade;
	scanf_s("%i", &idade);
	return idade;
}

int CalculoMes(int dia) {
	int mes;
    mes = dia / 12;
	return mes;
}

int CalculoAno(int dia) {
	int ano;
	ano = dia / 365;
	return ano;
}
int main()
{
	int Dias = LerIdadeDia();
	int ResultadoMes = CalculoMes(Dias);
	int ResultadoAno = CalculoAno(Dias);
	printf_s("Voce tem %d meses, %d dias, %d anos. \n", ResultadoMes, Dias, ResultadoAno);
	system("pause");
}

