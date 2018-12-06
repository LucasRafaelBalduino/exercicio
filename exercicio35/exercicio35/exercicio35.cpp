// exercicio35.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

/*Foi realizada uma pesquisa de algumas características físicas da população de uma
certa região, a qual coletou os seguintes dados referentes a cada habitante para
serem analisados:
- idade
- sexo (masculino e feminino)
- cor dos olhos (1 - azuis, 2 - verdes ou 3 - castanhos)
- cor dos cabelos (1 - louros, 2 - castanhos, 3 - pretos)
Faça um algoritmo que determine e escreva:
- a maior idade dos habitantes

- a quantidade de indivíduos do sexo feminino cuja idade está entre 18 e 35 anos

inclusive e que tenham olhos verdes e cabelos louros.
O final do conjunto de habitantes é reconhecido pelo valor -1 entrada como idade.*/

int main(void)
{
	int sexo, idade, cor_olhos, cor_cabelos;
	int maior_idade = 0, quant_fem = 0;
	int FLAG = 0; // variável de controle para mostrar ou não os dados no final da execução: 0 = não mostrar, 1 = mostrar

	for (int i = 0; ; i++) {

		printf("Idade: ");
		scanf_s("%i", &idade);
		if (idade < 0) // NÃO EXISTE idade negativa, então... se menor que 0, interrompe o loop e vai para a parte de exibição dos dados 
			break;

		if (!i) // isso é o mesmo que: if (i == 0) {...}
				// SE "i" estiver valendo 0, significa que é a primeira passagem pelo loop. Logo, sendo a primeira idade lida ela consequentemente será a maior...
			maior_idade = idade;
		else if (idade > maior_idade) // se não for a primeira passagem no loop... 
			maior_idade = idade; //... checa se a idade atual é maior que a armazenada na variavel 'maior_idade'. Se for, a idade é substituida.

		// leitura dos dados restantes...
		printf("Sexo [1- Masculino, 2- Feminino]: ");
		scanf_s("%i", &sexo);
		printf("Cor dos Olhos [1- Azuis, 2- Verdes, 3- Castanhos]: ");
		scanf_s("%i", &cor_olhos);
		printf("Cor dos Cabelos [1- Louros, 2- Castanhos, 3- Pretos]: ");
		scanf_s("%i", &cor_cabelos);


		if (sexo == 2) // se for feminino E... 
			if ((idade >= 18) && (idade <= 35)) // se a idade estiver entre 18 e 35, E...
				if (cor_olhos == 2) // se a cor dos olhos forem verdes...
					if (cor_cabelos == 1) // se a cor dos cabelos forem louros...
						quant_fem++; // media_fem = media_fem + 1;

		FLAG = 1; // mudamos para 1, há dados para serem apresentados...					                
	}

	if (!FLAG) // if (FLAG == 0)
		printf("Nao ha dados a serem apresentados!");
	else {
		printf("Maior Idade: %i\nQuantidade (Feminino, 18~35, Olhos Verdes, Cabelos Louros): %i",
			maior_idade, quant_fem);
	}
	return 0;
}
