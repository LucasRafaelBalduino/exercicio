// exercicio12.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

/*Faça um algoritmo que calcule a área de um triângulo, considerando a fórmula
Area = . Utilize as variáveis AREA, BASE e ALTURA e os operadores 2
BASE * ALTURA
aritméticos de multiplicação e divisão.*/

void CalculaArea() {
	float base, altura, area;

	printf_s("Digite o valor da base do triangulo: ");
	scanf_s("%f", &base);

	printf_s("\nDigte o valor da altura do triangulo: ");
	scanf_s("%f", &altura);

	area = ((base*altura) / 2);
	printf_s("\nA area do triangulo e: %2.1f\n\n", area);

}

int main()
{
	CalculaArea();
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
