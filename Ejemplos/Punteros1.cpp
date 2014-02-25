
#include <iostream>

using namespace std;

int main () 
{
	int a = 10;
	int * p1;
	int * p2;

	p1 = &a; // p1 contiene la direccion de memoria de a

	cout << p1 << " - " << &a << endl; // Imprime la dirección de memoria de a
	cout << &p1 << endl; // Imprime la dirección de memoria de p1 
	cout << *p1 << endl; // Imprime el valor de a '10'

	p2 = p1;

	cout << p2 << " - " << &a << endl; // Imprime la dirección de memoria de a
	cout << &p2 << endl; // Imprime la dirección de memoria de p2 
	cout << *p2 << endl; // Imprime el valor de a '10'

	return 0;
}