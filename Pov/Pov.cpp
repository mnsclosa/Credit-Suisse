// Pov.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//
#include <iostream>

/*
* quantidadePOV: retorna a quantidade de ações a negociar quando uma determinada quantidade for negociada no mercado,
*				 o exemplo é bem simples sem levar em consideração o preço limite para negociar.
* 
* porcentagem : Percentual a negociar quando o total negociado for atingido.
* 
* totalNegociado : total que será ultilizado para o calculo da quantiade
* 
* retorno: retorna o valor do calculo quando atingido o volume de negociação.
* 
*/

double quantidadePOV( double porcentagem,int totalNegociado )
{
	return totalNegociado * porcentagem; /* quantidade de ações que serão negociadas quando o volume for atingido */
}

int main()
{
	double porcentagem = 0.1;  /* 10% do valor em decimal para facilitar o calculo */
	int VolumeNegociado = 1000;   /* volume negociado para o calculo do POV */

	std::cout << "Acoes a negociar quando atingir o volume esperado: " << quantidadePOV( porcentagem,VolumeNegociado ) << std::endl;

	return 0;
}