// exercicio34.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

//Escreva um algoritmo que leia 50 valores e encontre o maior e o menor deles.
//Mostre o resultado.

void LerNumero() {

	int numero;
	int maior = 0;
	int menor = 999999;

	for (int i = 1; i <= 50; i++) {
		printf_s("Informe o %d numero ", i);
		scanf_s("%d", &numero);
		if (numero > maior) {
			maior = numero;
		}
		if (numero < menor) {
			menor = numero;
		}
	}
	printf_s("O maior numero foi o numero %d e o menor numero foi %d",maior, menor);
}

int main()
{
	LerNumero();
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
