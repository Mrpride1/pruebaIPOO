/*
 * autor: Juan Adrada
 * Codigo: 1663930
 * plan: 3743
 * descripción: clase Calculadora
*/

#ifndef CALCULADORA_H
#DEFINE CALCULADORA_H

#include <istream>

using namespace std;
 
 class Calculadora{

		private:
				double suma;
				double resta;
				double multiplicacion;
				double division;
				
		public:
				Calculadora();
				~Calculadora();
				
				double getSuma;
				double getresta;
				double getMultiplicacion;
				double getdivision;
				
				void setSuma(double sumaIn);
				void setResta(double restaIn);
				void setmultiplicacion(double multiplicacionIn);
				void setdivision(double divisionIn);
				

};
#endif
