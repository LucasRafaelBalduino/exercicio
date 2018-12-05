// exercicio09.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

//Um usuário deseja um algoritmo onde possa escolher que tipo de média deseja calcular a partir de 3 notas.Faça um algoritmo que leia as notas, a opção escolhida pelo usuário e calcule a média.
//1 -aritmética 2 - ponderada(3, 3, 4) 3 - harmônica

float LerNota() {
	printf_s("Informe suas 3 notas: \n");
	float nota;
	scanf_s("%f", &nota);
	return nota;
}

void TipoAritmetica() {
	float nota1 = LerNota();
	float nota2 = LerNota();
	float nota3 = LerNota();
	float media;
	media = ((nota1 + nota2 + nota3)/3);
	printf_s("Sua media Aritmedia e: %f \n", media);
	
}

void TipoPonderada() {
	float nota1 = LerNota();
	float nota2 = LerNota();
	float nota3 = LerNota();
	float media;
	media = ((nota1 * 3) + (nota2 * 3) + (nota3 * 4));
	printf_s("Sua media Ponderada e: %f \n", media);

}

void TipoHarmonica() {
	float nota1 = LerNota();
	float nota2 = LerNota();
	float nota3 = LerNota();
	float media;
	media = 3 / (1 / nota1 + 1 / nota2 + 1 / nota3);
	printf_s("Sua media Harmonica e: %f\n", media);

}

int main()
{
	int opcao;
	do {
		printf_s("Seleciona a opcao \n\n");
		printf_s("[1] Aritmetica: \n");
		printf_s("[2] Ponderada: \n");
		printf_s("[3] Harmonica: \n");
		printf_s("[4] Sair: \n");
		printf_s("Opcao: \n");
		scanf_s("%d", &opcao);
		switch (opcao)
		{
			case 1:
				TipoAritmetica();
				break;
			case 2:
				TipoPonderada();
				break;
			case 3:
				TipoHarmonica();
				break;
		default:
			printf_s("Opcao invalida.");
			break;
		}
	} while (opcao != 4);
	return 0;
}

