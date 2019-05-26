#include<iostream>
#include<math.h>
using namespace std;
void sumaComplejos(int &real1, int &real2, int &ima1, int &ima2, int &sumaReal, int &sumaIma) {
	sumaReal = real1 + real2;
	sumaIma = ima1 + ima2;
}
void restaComplejos(int &real1, int &real2, int &ima1, int &ima2, int &restaReal, int &restaIma) {
	restaReal = real1 - real2;
	restaIma = ima1 - ima2;
}
int main() {
	setlocale(LC_CTYPE, "Spanish");
	char opcion;
	int real1, real2, ima1, ima2, sumaReal, sumaIma, restaReal, restaIma;
	while (1)
	{
		cout << "\t\tMENU\n\t\t====\n";
		cout << "A. Sumar 2 N�meros Complejos.\n";
		cout << "B. Restar 2 N�meros Complejos.\n";
		cout << "X. Salir del Programa\n";
		cout << "Ingrese la opci�n elegida: ";
		cin >> opcion;
		opcion = toupper(opcion);
		switch (opcion) {
		case 'A': {
			cout << "N�mero 1" << endl;
			cout << "Parte Real: ";
			cin >> real1;
			cout << "Parte Imaginaria: ";
			cin >> ima1;
			cout << endl;
			cout << "N�mero 2" << endl;
			cout << "Parte Real: ";
			cin >> real2;
			cout << "Parte Imaginaria: ";
			cin >> ima2;
			cout << endl;
			sumaComplejos(real1, real2, ima1, ima2, sumaReal, sumaIma);
			cout << "(" << real1 << "+" << ima1 << "i)+(" << real2 << "+" << ima2 << "i)=(" << sumaReal << "+" << sumaIma << "i)" << endl;
			break;
		}
		case 'B': {
			cout << "N�mero 1" << endl;
			cout << "Parte Real: ";
			cin >> real1;
			cout << "Parte Imaginaria: ";
			cin >> ima1;
			cout << endl;
			cout << "N�mero 2" << endl;
			cout << "Parte Real: ";
			cin >> real2;
			cout << "Parte Imaginaria: ";
			cin >> ima2;
			cout << endl;
			restaComplejos(real1, real2, ima1, ima2, restaReal, restaIma);
			cout << "(" << real1 << "+" << ima1 << "i)-(" << real2 << "+" << ima2 << "i)=(" << restaReal << "+" << restaIma << "i)" << endl;
			break;
		}
		case 'X':
			cout << "Este programa se cerrar�. Adi�s!!";
			_sleep(1000);
			exit(0);
		default:
			cout << "La opci�n elegida es incorrecta" << endl << endl;
			break;
		}
	}
	system("pause");
}