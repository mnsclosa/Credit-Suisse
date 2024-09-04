// Impar.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

/*
*  impar: função que verifica se um número é impar ou não.
* 
*  numero: valor a ser verificado.
* 
* retorno: se true é impar caso contrário é par.
* 
*/

bool impar( int numero )
{
    if( numero % 2 )
        return true;
    else
        return false;
}

int main()
{
    int n;
    std::cout << "Digite o numero: ";
    std::cin >> n;

    /* usei o switch para ficar mais didatico. Poderia usar o if resumido ou varias outras possibilidades.
    (impar(n) == true ? std::cout << "O numero " << n << " e " << "Impar" << std::endl : std::cout << "O numero " << n << " e " << "Par" << std::endl;) */
    switch( impar( n ) )
    {
        case true:
            std::cout << "O numero " << n << " e " << "Impar" << std::endl;
        break;
        default:
            std::cout << "O numero " << n << " e " << "Par" << std::endl;
        break;

    }
}
