// exercicio24.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

//Faça um algoritmo que leia dois valores para as variáveis A e B e efetue a troca dos valores de forma que a variável A passe a possuir o valor da variável B e a variável B passe a possuir o valor da variável A.Apresente os valores trocados.

int LerNumero() {
	int numero;
	printf_s("Informe o valor de A e em seguinda o valor do B: \n");
	scanf_s("%d", &numero);
	return numero;
}

void FazendoTroca() {
	int a = LerNumero();
	int b = LerNumero();
	int c = 0;
	printf_s("O valor A e: %d \n", a);
	printf_s("O valor B e: %d \n", b);

	c = a;
	a = b;
	b = c;
	printf_s("Agora A tem o valor de: %d e B tem o valor de : %d\n", a, b);
}

int main()
{
	FazendoTroca();
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
