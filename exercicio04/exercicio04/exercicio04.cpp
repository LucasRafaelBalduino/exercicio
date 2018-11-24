// exercicio04.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

int LerNota() {
	int nota;
	printf_s("Digite suas 3 notas por gentileza\n");
	scanf_s("%d", &nota);
	return nota;
}
float Calculo(float nota1, float nota2, float nota3) {
	float resultado;
	 resultado= (((nota1 * 2) + (nota2 * 3) + (nota3 * 5))/10);

	return resultado;
}
int main()
{
	printf_s("Faca um algoritmo que leia as 3 notas de um aluno e calcule a media final deste aluno.Considerar que a media e ponderada e que o peso das notas e : 2, 3 e 5, respectivamente.\n");
	int Nota1 = LerNota();
	int Nota2 = LerNota();
	int Nota3 = LerNota();
 	float Media = Calculo( Nota1, Nota2, Nota3);

	printf_s("A media ponderada das notas:  f% \n", Media);

}

