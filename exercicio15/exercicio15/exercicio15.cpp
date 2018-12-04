// exercicio15.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
// Dados um inteiro x e um inteiro não - negativo n, calcular x n
int LerNumero() {
	printf_s("Digite um numero: \n");
	int numero;
	scanf_s("%d", &numero);

	return numero;
}

void Calculo() {
	int numero = LerNumero();
	int potencia = LerNumero();
	int resultado;
	if (potencia > 0) {
		resultado = pow(numero, potencia);
		printf_s("Resultado: %d\n", resultado);
	}
	else {
		printf_s("O potenciado nao pode ser negativo");
	}
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
