#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

void mostraMaiores(int x[10])
{
	int soma = 0;
	double media = 0;
	int contador = 0;
	int maior_que = 0;
	
	for(int i = 0; i < 10; ++i)
	{
		soma += x[i];
		contador++;
	}
	//PERGUNTAR SIZEOF PRO PROFESSOR
	//media = (double)soma / (sizeof(x)/sizeof(x[0]));
	
	media = (double)soma / (double)contador;
	
	for(int i = 0; i < 10; ++i)
	{
		if(x[i] > media)
		{
			maior_que++;
		}
	}
	
	cout << setprecision(1);
	
	/*cout << soma << endl;
	cout << media << endl;*/
	
	cout << maior_que << " elementos estão acima da media!" << endl;
}

int main(int argc, char** argv)
{
	int array[10];
	
	for(int i = 0; i < 10; ++i)
	{
		cout << "Digite íííí o " << i + 1 << "º valor: ";
		cin >> array[i];
	}
	
	mostraMaiores(array);
	
	return 0;
}