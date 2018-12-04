// exercicio08.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

//Elabore um algoritmo que dada a idade de um nadador classifica-o em uma das seguintes categorias :

int LerIdade() {
	printf_s("Informe a sua idade: \n");
	int idade;
	scanf_s("%d", &idade);

	return idade;
}

void Classificador() {
	int opcao = LerIdade();
	if (opcao <= 7) {
		printf_s("Infantil A\n");
}
	if (opcao >= 8 & opcao <= 10) {
		printf_s("Infantil B\n");
	}

	if (opcao >= 11 & opcao <= 13) {
		printf_s("Juvinil A\n");
	}

	if (opcao >= 17 & opcao <= 17) {
		printf_s("Jvenil B\n");
	}

	if (opcao > 18) {
		printf_s("Adulto\n");
	}
}

int main()
{
	Classificador();
	system("pause");
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
