#include <iostream>
#include <calculadora.h>

using namespace std;

int main(double a, double b,){
	
	Calculadora calcu;
	
	cout << "ingrese A: " << endl;
	cin >> a;
	cout << "ingrese B: " << endl;
	cin >> b;
	cout << "ingrese la operacion que desea realizar" << endl;
	
	string operacion;
	
	if(operacion == suma){
		cout << calcu.getSuma() << endl;
		
	}else if(operacion == resta){
		cout << calcu.getResta() << endl;
		
	}else if(operacion == multiplicacion){
		cout << calcu.getMultiplicacion() << endl;
		
	}else if(operacion == division){
		cout << calcu.getdivision() << endl;
		
	}
	return 0;
	
}
