// exercicio32.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <string.h>//necessário para strlen
#include <conio.h>

/*A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando
dados sobre o salário e número de filhos. A prefeitura deseja saber:
● a) média do salário da população;
● b) média do número de filhos;
● c) maior salário;
● d) percentual de pessoas com salário até R$100,00.
O final da leitura de dados se dará com a entrada de um salário negativo. (Use o
comando WHILE)*/

#define M 20
struct
{
	char nome[30];
	float salario;
	int idade;
	int num;
	char sexo[2];
}dados[M];
float media_salario() {
	int i;
	float soma = 0;
	for (i = 0; i < M; i++) {
		soma = soma + (dados[i].salario);
	}
	float media;
	media = soma / M;
	return (media);
}
float media_filhos() {
	int i;
	float soma = 0;
	for (i = 0; i < M; i++) {
		soma = soma + (dados[i].num);
	}
	float media;
	media = soma / M;
	return (media);
}
float maior() {
	float maior;
	maior = dados[0].salario;
	int i;
	for (i = 0; i < M; i++) {
		if (dados[i].salario > maior) {
			maior = dados[i].salario;
		}
	}
	return(maior);
}
float percentual() {
	int i;
	int count;
	for (i = 0; i < M; i++) {
		if (dados[i].sexo == 'f' && dados[i].salario > 1000) {
			count++;
		}
	}
	float perc;
	perc = (count * 100) / M;
	return (perc);
}
int main() {
	int i;
	for (i = 0; i < M; i++) {
		printf("Digite o nome\n");
		scanf_s("%s", &dados[i].nome);
		printf("Digite o salario \n");
		scanf_s("%d", &dados[i].salario);
		printf("Digite a idade\n");
		scanf_s("%d", &dados[i].idade);
		printf("Digite o numero de filhos\n");
		scanf_s("%d", &dados[i].num);
		printf("Informe o sexo: \n (m) masculino \n (f) feminino \n");
		scanf_s("%s", &dados[i].sexo);
	}
	printf("A media de salario e: \n %f \n", media_salario());
	printf("A media do numero de filhos e: \n %f \n", media_filhos());
	printf("O maior salario e: \n %f \n", maior());
	printf("O percentual de mulheres com salario superior a R$1000 e: \n %f % \n", percentual());
	system("PAUSE");
	return(0);
}

