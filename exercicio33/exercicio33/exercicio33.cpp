// exercicio33.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

/*Chico tem 1, 50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1, 10 metro e
cresce 3 centímetros por ano.Construa um algoritmo que calcule e imprima quantos
anos serão necessários para que Zé seja maior que Chico.*/

void Calculo() {
	float ze = 1.10;
	float chico = 1.50;
	int ano = 0;

	while (ze < chico)

	{
		ze = ze + 0.03;

		chico = chico + 0.02;

		ano = ano + 1;

	}

	printf("Sera necessarios %d para que Ze seja maior que Chico. \n", ano);

	printf("Chico tera %f de altura e Ze %f de altura\n", chico,ze);
}

int main()
{
	Calculo();
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
