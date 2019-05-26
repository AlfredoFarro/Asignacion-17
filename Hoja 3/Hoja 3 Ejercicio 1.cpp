#include<iostream>
#include<math.h>
using namespace std;
int factorial(int n) {
	int facto = 1;
	for (int i = 1; i <= n; i++)
	{
		facto *= i;
	}
	return facto;
}
void SenoX(int &n, double&x, double&senox) {
	for (int i = 0; i < n; i++)
	{
		senox += (pow(-1, i))*((pow(x, 2 * i + 1)) / factorial(2 * i + 1));
	}
}
void Digito(int &numero,int &n,int &b) {
	b = numero / pow(10, n);
	b = b % 10;
	if (b < 0) {
		b = b * (-1);
	}
	else if (b==0)
	{
		b = -1;
	}
}
int main() {
	setlocale(LC_CTYPE, "Spanish");
	int n;
	double x, senox;
	int n1, num, b;
	int opcion;
	while (1)
	{
		cout << "Menú de opciones" << endl;
		cout << "1. Calcular el seno" << endl;
		cout << "2. Hallar el enésimo dígito" << endl;
		cout << "3. Fin" << endl;
		cout << "Ingrese opción: ";
		cin >> opcion;
		switch (opcion) {
		case 1: {
			do
			{
				cout << "Ingrese n: ";
				cin >> n;
			} while (n<1);
			do
			{
				cout << "Ingrese x: ";
				cin >> x;
			} while (x<=0);
			SenoX(n, x, senox);
			cout << "El seno es: " << senox << endl << endl;
			break;
		}
		case 2: {
			do
			{
				cout << "Ingrese el valor de N: ";
				cin >> n1;
			} while (n1<0);
			cout << "Ingrese el número: ";
			cin >> num;
			
			Digito(num,n1,b);
			cout << "El n-ésimo dígito es: " << b << endl << endl;
			break;
		}
		case 3: 
			cout << "Este programa se cerrará. Adiós!!";
			_sleep(1000);
			exit(0);
		default: 
			cout << "La opción elegida no existe" << endl << endl;
			break;
		}
	}
	
	system("pause");
}