// Pov.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//
#include <iostream>

/*
* funcaoRetornaQuantidade: retorna a quantidade de ações a negociar quando uma determinada quantidade for negociada no mercado,
*						   respeitando sempre o multiplo de um lote.
*						   o exemplo é bem simples sem levar em consideração o preço limite para negociar e outras variaveis.
* 
* porcentagem : Porcentual a negociar quando o total negociado no mercado for atingido.
* 
* totalNegociado : total que será ultilizado para o calculo da quantidade
* 
* retorno: o valor do calculo quando atingido o volume de negociação sempre no tamanho de um lote minimo em caso de fracionado.
* 
*/

double funcaoRetornaQuantidade( double porcentagem,int totalNegociado )
{
	int resto = 0;
	int valoraNegociar = totalNegociado * porcentagem; /* quantidade de ações que serão negociadas quando o volume for atingido */

	resto = (int)valoraNegociar % 100; /* especifico o tamanho de um lote */

	/* garanto a negociação sempre de um lote multiplo de 100 ações */
	if( resto )
	{
		/* garanto um lote inteiro */
		valoraNegociar += ( 100.0 - (double)resto );
	}
	
	return (double)valoraNegociar;
}

int main()
{
	double porcentagem = 0.10;  /* 10% do valor em decimal para facilitar o calculo */
	int VolumeNegociado = 1000;   /* volume negociado para o calculo do POV */

	std::cout << "Acoes a negociar quando atingir o volume esperado: " << funcaoRetornaQuantidade( porcentagem,VolumeNegociado ) << std::endl;

	return 0;
}