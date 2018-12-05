// exercicio23.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

//Faça um algoritmo que calcule a quantidade de litros de combustível gasta em uma
//viagem, utilizando um automóvel que faz 12Km por litro.Para obter o cálculo, o
//usuário deve fornecer o tempo gasto na viagem e a velocidade média durante ela.
//Desta forma, será possível obter a distância percorrida com a fórmula DISTANCIA =
//TEMPO * VELOCIDADE.Tendo o valor da distância, basta calcular a quantidade de
//litros de combustível utilizada na viagem com a fórmula : LITROS_USADOS =
//DISTANCIA / 12. O programa deve apresentar os valores da velocidade média,
//tempo gasto na viagem, a distância percorrida e a quantidade de litros utilizada na
//viagem.
int LerTempoViagem() {
	int tempo = 0;
	printf_s("Informe o tempo gasto na viagem\n");
	scanf_s("%d", &tempo);

	return tempo;
}

int LerVelocidadeViagem() {

	int velocidade = 0;
	printf_s("Informe a velocidade media durante a viagem\n");
	scanf_s("%d", &velocidade);

	return velocidade;
}

void Calculo() {
	int tempo = LerTempoViagem();
	int velocidade = LerVelocidadeViagem();
	int distancia = 0;
	float litros_usado;
	distancia = tempo * velocidade;
	litros_usado = distancia / 12;
	printf_s(" Velocidade media: %d \n tempo percorrido: %d \n distancia: %d \n quantidade de litros utilizado: %f \n", velocidade, tempo, distancia, litros_usado);
}
int main()
{
	Calculo();
}

