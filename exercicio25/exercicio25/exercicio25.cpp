// exercicio25.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

/*Considere a seguinte situação: descontam-se inicialmente 10% do salário bruto do
trabalhador como contribuição à previdência social. Após esse desconto, há um
outro desconto de 5% sobre o valor restante do salário bruto, a título de um
determinado imposto. Faça um algoritmo que leia o salário bruto de um cidadão e
imprima o seu salário líquido.*/

double LerSalario() {
	double salario;
	printf_s("Informe o salario bruto: \n");
	scanf_s("%lf", &salario);

	return salario;
}

void CalculandoSalarioLiquido() {
	double salario = LerSalario();
	double holerite = 0;
	double desconto = 0;
	double desconto5 = 0;
	desconto =  salario * 0.10;

	desconto5 = (salario - desconto) * 0.05;

	holerite = salario - desconto5 - desconto;

	printf_s("O salario liquido e: \n %lf", holerite);
}

int main()
{
	CalculandoSalarioLiquido();
}

