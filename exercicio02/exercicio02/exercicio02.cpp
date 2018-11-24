// exercicio02.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

int LerNumero(){
	printf_s("Escreva um algoritmo que leia tres numeros inteiros e positivos (A, B, C) e calcule a seguinte expressao R=(A+B)^2 ,S=(B+C)^2 ,D= R+S/2 : \n");
	int numero;
	scanf_s("%i", &numero);
	return numero;

}

float Calculo(float a, float b, float c) {
	float r;
	float s;
	float d;
	r = (a + b) * 2;
	s = (b + c) * 2;
	d = (r + s) / 2;
	return d;
}

int main()
{
	int PrimeiroNumero = LerNumero();
	int SegundoNumero = LerNumero();
	int TerceiroNumero = LerNumero();
	float Resultado = Calculo(PrimeiroNumero, SegundoNumero, TerceiroNumero);
	printf_s("O resultado e: %f \n", Resultado);
	system("pause");
}
