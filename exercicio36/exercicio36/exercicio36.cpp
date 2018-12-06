// exercicio36.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

/*Escrever um algoritmo que leia 20 valores para uma variável n e, para cada um
deles, calcule a tabuada de 1 até n. Mostre a tabuada na forma:*/

int LerNumero() {
	int numero;
	printf_s("Informe um numero");
	scanf_s("%d", &numero);

	return numero;
}

void calculo() {
	int num = 1;
	int n = LerNumero();
	int i, j;


	for (i = 0; i < num; i++) {
		for (j = 1; j <= n; j++) {
			printf_s("%d x %d = %d\n", j, n, j * n);

		}

	}
}

int main()
{
	calculo();
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
