/**
 * @file    main.h
 * @brief   Função principal main
 * @author  Leonardo dos Santos Matos (matos_leo95@live.com)
 * @since   25/05/2018
 * @date    26/05/2018
 * @sa 		https://github.com/matosleo/labs5-prog3
 */

#include "libFunc.h"

using namespace std;

int main(int argc, char const *argv[])
{

	int num = stoi(argv[1]);

	if(num <= 0)
	{
		cout << "ERRO! Entrada de dados inválida. O Programa será encerrado!" << endl;
	}
	else
	{
		cout << "Numeros primos [1-" << num << "]: ";

		exibir_primos(num);

		cout << endl;
	}


	return 0;
}