// exercicio5.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

float LerValorVeiculo() {
	//printf_s("O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e dos impostos(aplicados ao custo de fabrica). Supondo que a percentagem do distribuidor seja de 28 % e os impostos de 45 % , escrever um algoritmo que leia o custo de fabrica de um carro e escreva o custo ao consumidor.");
	printf_s("Informe o custo de fabrica do veiculo\n");
	float valor_veiculo;
	scanf_s("%f", &valor_veiculo);
	
	return valor_veiculo;
}

float CalculoImposto(float custo) {
	float custo_consumidor;
	float porcent_distribuidor;

	porcent_distribuidor = (custo * 0.28) + custo;
	custo_consumidor = (porcent_distribuidor * 0.45) + porcent_distribuidor;
	return custo_consumidor;
}

int main()
{
   
	float Valor = LerValorVeiculo();
	float Calculo = CalculoImposto(Valor);

	printf_s("O preco final do veiculo para e: %f \n",	Calculo);
	system("pause");

}


