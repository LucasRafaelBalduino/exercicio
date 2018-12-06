// exercicio28.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

/*A revendedora de carros Pica-Pau Ltda. paga aos seus funcionários vendedores
dois salários mínimos fixos, mais uma comissão fixa de R$ 50,00 por carro vendido e
mais 5% do valor das vendas. Faça um algoritmo que determine o salário total de
um vendedor.*/

int CarrosVendido() {
	int venda;
	printf_s("Informe quantos carros ele vendeu\n");
	scanf_s("%d", &venda);

	return venda;
}
float Valor_venda() {
	float vendas;
	printf_s("Informe o valor total das vendas\n");
	scanf_s("%f", &vendas);

	return vendas;
}

void Salario() {
	/*char vendedor[35];
	printf_s("Informe o nome do vendedor");
	scanf_s("%s", &vendedor);*/

	int venda = CarrosVendido();
	float salario_fixo = 2000.00;
	float total_vendas = Valor_venda();
	double holerite = 0;

	holerite = (venda * 50) + (total_vendas * 0.05) + salario_fixo;

	printf_s(" Salario no total de: R$ %f\n", holerite);

}

int main()
{
	Salario();
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
