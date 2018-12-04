// exercicio04.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
//Faça um algoritmo que leia as 3 notas de um aluno e calcule a média final deste aluno.Considerar que a média é ponderada e que o peso das notas é : 2, 3 e 5, respectivamente.

float LerNota() {
	float nota;
	printf_s("Digite suas 3 notas por gentileza\n");
	scanf_s("%d", &nota);
	return nota;
}
void Calculo() {
	float nota1 = LerNota();
	float nota2 = LerNota();
	float nota3 = LerNota();
	float resultado;
	 resultado= ((nota1 * 2) + (nota2 * 3) + (nota3 * 5))/10;
	 printf_s("Sua nota e: %f \n", resultado);
}
int main()
{
	Calculo();

}

