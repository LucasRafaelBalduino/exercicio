// exercicio16.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
#include <string.h>
/*
Faça uma função que retorne a posição de um dado caracter dentro de uma string.
*/

int main() {
	const char* str = "Alg II";
	int busca = 'n';
	int posicao = strchr(str, busca) - str;
	printf("%d\n", posicao);
}
