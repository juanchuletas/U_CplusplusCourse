#ifndef VEC_H
#define VEC_H

#include <iostream>
#include <cmath>
#include <stdio.h>

#include<string.h>
using namespace std;

class Vector
{
	friend class Residuo;
	public:
	Vector(); //CONSTRUCTOR
	~Vector(); //DESTRUCTOR //FREE MEM
	void SetVector (double a_,double b_, double c_); //inicializador
	Vector operator+(const Vector &);
	Vector operator-(const Vector &);
	Vector &operator=(const Vector &);
	double norma (); //norma

	private:
	double a[3];
};


class Residuo: public Vector
{
	friend class Vector;
	public: 
	Residuo ();
	void SetResiduo (Vector V_, string nombre,int * atom);
	int DimeAtomo (int i);
	private:
	Vector V;
	int *atom;
	string nombre;
};

#endif
