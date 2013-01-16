#include <iostream>

using namespace std;

int valor1;
int valor2;

int main () 
{
	cout << "Inserte 2 numeros:" << endl;
	cin >> valor1;
	cin >> valor2;
	cout << "Numeros ordenados de mayor a menor" << endl;

	if (valor2 > valor1) {
		int aux = valor1;
		valor1 = valor2;
		valor2 = aux;
	}

	cout << "valor1: " << valor1 << endl;
	cout << "valor2: " << valor2 << endl;

	return 0;
}
