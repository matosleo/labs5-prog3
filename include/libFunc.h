/**
 * @file    libFunc.h
 * @brief   Implementação das funções para calcular e exibir numeros primos
 * @author  Leonardo dos Santos Matos (matos_leo95@live.com)
 * @since   25/05/2018
 * @date    26/05/2018
 * @sa 		https://github.com/matosleo/labs5-prog3
 */

#ifndef LIB_FUNC_H
#define LIB_FUNC_H

#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;


class verificaPrimo
{
	public:
		verificaPrimo() {}
		
		bool operator()(int n) const 
		{
			for(int i = 2; i <= n / 2; i++)
			{
			    if(n % i == 0)
			    	return false;
			}
			return true;
		}
};

/**
 * @brief	Função que exibe todos os numeros primos de 1 a um numero recebido como parametro
 * @detail	Preenche-se um vector com numeros de 1 a um numero passado como parametro. Após isso,
 declara um iterator numeroAtual como o primeiro elemento do vector. Executa-se um loop e com o find_if e o
 functor verificaPrimo encontra-se a primeira ocorrecia de um numero primo num dado range de valores no vector.
 numeroAtual recebe esse valor e o imprimo na tela. Numero atual é incrementado e o range de valores diminui para o find_if encontrar
 a próxima ocorrencia.
 * @params	tamanho int o vector será preenchido de 1 a até tamanho.
 */
void exibir_primos(int tamanho)
{
	vector<int> listaNumeros(tamanho);
	iota(listaNumeros.begin(), listaNumeros.end(), 1);
	auto numeroAtual = listaNumeros.begin();

	while(numeroAtual < end(listaNumeros))
	{
		numeroAtual = find_if(numeroAtual, listaNumeros.end(), verificaPrimo());
		if(numeroAtual < listaNumeros.end())
		{
			cout << *numeroAtual << " ";
		}
		numeroAtual++;
	}
}


#endif