// fobonacci.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

/*
* fibonacci : função para encontrar o valor numérico em uma determinada posição fibonacci.
* Em termos matemáticos, a sequência é definida pela fórmula Fn = fn-1 + Fn-2 repetidas vezes até encontrar o valor
* 
* valor: posição a ser pesquizada.
* 
* retorno : O número fibonacci na posição escolhida.
* 
*/
int fibonacci( int valor )
{
    int ret = 0;
    switch( valor )
    {
        case 0:
            ret = 0;
        break;
        case 1:
            ret = 1;
        break;
        default:
            ret = fibonacci( valor - 1 ) + fibonacci( valor - 2 ); /* faço a recursividade, apesar de não gostar deste tipo de chamada
                                                                      por onerar muito o processador e a stack, funciona bem para posições
                                                                      mais baixas. */
            break;
    }
    return ret;
}

int main()
{
    int n;
    std::cout << "Digite a posicao do numero Fibonacci correspondente: ";
    std::cin >> n;
    std::cout << "O numero de Fibonacci na posicao " << n << " e " << fibonacci( n ) << std::endl;

    return 0;
}
