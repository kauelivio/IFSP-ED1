#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

void comparaMatrizes(int *x[9], int *z[9])
{
	bool iguais;
	int verificador = 0;
	
	for(int i=0; i<3; ++i)
	{
		for(int j=0; j<3; ++j)
	    {
			if(x[i][j] == z[i][j] && verificador == 0)
			{
				iguais = true;
			}
			else {
				iguais = false;
				verificador = 1;
			}	
	    }
	}
	
	string resposta = (iguais) ? "As matrizes são iguais!" : "As matrizes são diferentes";
	
	cout << resposta << endl;
}

int main(int argc, char** argv)
{
	int **mat1;
	int **mat2;
	int contador = 0;
	
	//ENTRADA DA MATRIZ 1
	
	cout << "Matriz 1" << endl;
	
	mat1 = new int*[3];
	for(int i=0; i<3; ++i)
	{
		
		mat1[i] = new int[3];
		for(int j=0; j<3; ++j)
	    {
	    	contador++;
	    	
	    	cout << "Digite o " << contador << "º valor: ";
			cin >> mat1[i][j];
	    }
	}
	for(int i=0; i<3; ++i)
	{
	    for(int j=0; j<3; ++j)
	    {
            cout << mat1[i][j] << " | ";
		}
		cout << endl; 
	}	
	
	
	
	//ENTRADA DA MATRIZ 2
	
	contador = 0; //Zerando contador
	
	cout << "Matriz 2" << endl;
	
	mat2 = new int*[3];
	for(int i=0; i<3; ++i)
	{
		
		mat2[i] = new int[3];
		for(int j=0; j<3; ++j)
	    {
	    	contador++;
	    	
	    	cout << "Digite o " << contador << "º valor: ";
			cin >> mat2[i][j];
	    }
	}
	for(int i=0; i<3; ++i)
	{
	    for(int j=0; j<3; ++j)
	    {
            cout << mat2[i][j] << " | ";
		}
		cout << endl; 
	}	
	
	comparaMatrizes(mat1, mat2);
	
	delete[] mat1;
	delete[] mat2;
	
	return 0;
}