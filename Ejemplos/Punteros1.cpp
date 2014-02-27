
#include <iostream>

using namespace std;

int main () 
{
	int a = 10;
	int * p1 = NULL;
	int * p2 = NULL;

	p1 = &a; // p1 contiene la direccion de memoria de a

	cout << p1 << " - " << &a << endl; // Imprime la dirección de memoria de a
	cout << &p1 << endl; // Imprime la dirección de memoria de p1 
	cout << *p1 << endl; // Imprime el valor de a '10'

	p2 = p1; // p2 contiene la misma direccion de memoria que p1

	cout << p2 << " - " << &a << endl; // Imprime la dirección de memoria de a
	cout << &p2 << endl; // Imprime la dirección de memoria de p2 
	cout << *p2 << endl; // Imprime el valor de a '10'

	*p2 = 20; // El valor de la variable que apunta p2 'a' cambia a 20

	cout << *p2 << endl; // Imprime el valor de la variable que apunta p2 
	cout << a << endl; // Imprime el valor de a

	return 0;
}
