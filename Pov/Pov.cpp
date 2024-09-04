// Pov.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//
#include <iostream>

double funcaoRetornaQuantidade( double porcentagem,int totalNegociado )
{
	int volumeEsperado = 1000;  // Volume total esperado no mercado

	// Calcula o número total de ações que o cliente deve ter negociado até o final
	porcentagem *= 10;
	double acoesEsperadas = porcentagem * volumeEsperado;

	// Calcula o número de ações que ainda precisam ser negociadas
	double acoes_a_negociar = acoesEsperadas - ( totalNegociado * porcentagem );

	return acoes_a_negociar;
}

int main()
{
	double porcentagem = 0.1;  // 10% em formato decimal
	int totalNegociado = 800;   // Total negociado no mercado

	double acoes_a_negociar = funcaoRetornaQuantidade( porcentagem,totalNegociado );

	std::cout << "Ações a negociar para atingir o volume esperado: " << acoes_a_negociar << std::endl;

	return 0;
}