// exercicio27.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

/*Suponha que um caixa disponha apenas de notas de 1, 10 e 100 reais.
Considerando que alguém está pagando uma compra, escreva um algoritmo que
mostre o número mínimo de notas que o caixa deve fornecer como troco. Mostre
também: o valor da compra, o valor do troco e a quantidade de cada tipo de nota do
troco. Suponha que o sistema monetário não utilize moedas.*/

int main()
{
    int valor,n100, n10, n1;
printf("Digite o valor a ser sacado: ");
scanf_s("%d", &valor);

n100=valor/100;
n10= (valor%50)/10;n1= (valor%5)/1;

printf ("\nTotal de notas de 100,00: %d", n100);
printf ("\nTotal de notas de  10,00: %d", n10);
printf ("\nTotal de notas de   1,00: %d", n1);

}

