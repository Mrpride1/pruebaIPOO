#include "calculadora.h"

Calculadora::Calculadora(){
	this->suma = 0;
	this->resta = 0;
	this->multiplicacion = 0;
	this->division = 0;
}

Calculadora::~Calculadora(){
	
}

Calculadora::getSuma(double a, double b){
	
	return resiltado = a + b;
}

Calculadora::getResta(double a, double b){
	
	return resultado = a - b;
}

Calculadora::getMultiplicacion(double a, double b){
	
	return resultado = a * b;
}

Calculadora::getdivision(double a, double b){
	
	return resultado = a / b;
}


Calculadora::setsuma(double sumaIn){
	
	this -> suma = sumaIn
}

Calculadora::setResta(double restaIn){
	
	this -> resta = restaIn
}

Calculadora::setMultiplicacion(double multiplicacionIn){
	
	this -> multiplicacion = multiplicacionIn
}

Calculadora::setDivision(double divisionIn){
	
	this -> division = divisionIn
}
