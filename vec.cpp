#include "vec.h"
#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

//CONSTRUCTORES
Vector::Vector()
{
	a[0] = 0;
	a[1] = 0;
	a[2] = 0;
}

void Vector::SetVector(double a_, double b_,double c_)
{
	a[0] = a_;
	a[1] = b_;
	a[2] = c_;
}

//SUMA

Vector Vector::operator+(const Vector &op2)
{
	Vector salida;
	salida.a[0] = a[0] + op2.a[0];
	salida.a[1] = a[1] + op2.a[1];
	salida.a[2] = a[2] + op2.a[2];

	return salida;
}
Vector Vector::operator-(const Vector &op4)
{
	Vector salida1;
	salida1.a[0] = a[0] - op4.a[0];
	salida1.a[1] = a[1] - op4.a[1];
	salida1.a[2] = a[2] - op4.a[2];

	return salida1;
}

Vector & Vector::operator=(const Vector &derecho)
{
	 a[0] = derecho.a[0];
	 a[1] = derecho.a[1];
	 a[2] = derecho.a[2];

	 return *this;

}

double Vector::norma ()
{
	return sqrt(pow(a[0],2)+pow(a[1],2)+pow(a[2],2));
}

// CONSTRUCTORES PARA EL RESIDUO
//
// 

Residuo::Residuo()
{

}

void Residuo::SetResiduo (Vector V_, string nombre_,int *atom_)
{
	V = V_;
	atom=atom_;
	nombre = nombre_;
}

int Residuo::DimeAtomo(int i)
{
	return atom[i];
}
