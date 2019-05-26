#include <iostream>
#include <math.h>
using namespace std;
int factorial(int &n);
double exponencial(double &a, int &n);
void dibuja(int &n);
int factorial(int &n) {
	int facto=1;
	for (int i = 1;i <= n;i++) {
		facto *= i;
	}
	return facto;
}
double exponencial(double &a, int &n) {
	double expo = 0;
	double fexpo;
	for (int i = 1;i <= n;i++) {
		expo += (pow(a, i)) / factorial(i);
	}
	fexpo = expo + 1;
	return fexpo;
}
void dibuja(int &n) {
	for (int j = 1; j <= n; ++j) {
		for (int i = 1; i <= n - j; ++i)
			cout << "  ";
		for (int i = 1; i <= 2 * j - 1; ++i)
			cout << " " << i;
		cout << endl;
	}

	for (int j = n - 2; j >= 0; --j) {
		for (int i = 1; i <= n - j - 1; ++i)
			cout << "  ";
		for (int i = 1; i <= 2 * j + 1; ++i)
			cout << " " << i;
		cout << endl;
	}
}

int main() {
	setlocale(LC_CTYPE, "Spanish");
	int opcion;
	int n;
	double a;
	int k;
	while (1)
	{
		cout << "\t\tMENU PRINCIPAL\n1) Determinar el factorial de un número\n2) Calcular el valor de e^a\n3) Imprime rombo\n4) Fin\n";
		cin >> opcion;
		switch (opcion) {
		case 1: {
			do
			{
				cout << "Ingrese el número: ";
				cin >> n;
			} while (n < 1);
			cout << factorial(n) << endl;
			break;
		}
		case 2: {
			do
			{
				cout << "Ingrese a: ";
				cin >> a;
			} while (a < 0);
			do
			{
				cout << "Ingrese k: ";
				cin >> k;
			} while (k < 0 || k>20);
			cout << exponencial(a, k) << endl;

			break;
		}
		case 3: {
			do
			{
				cout << "Ingrese un número: ";
				cin >> n;
			} while (n < 1 || n>11);
			dibuja(n);
			break;
		}
		case 4: {
			cout << "Este programa se cerrará" << endl;
			_sleep(1000);
			exit(0);
		}
		default:
			cout << "Ingrese una opción correcta" << endl << endl;
			break;
		}
	}
	system("pause");
}