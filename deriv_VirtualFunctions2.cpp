#include "deriv_VirtualFunctions2.hpp"



int main()
{
	//Declare an object of type Derived
	Derived aDerived;
	Base aBase;

	//Declare two pointers, one of type Derived * and the 
	//other of type Base *, initialize them to point to aDerived
	//
	Derived *pDerived = &aDerived;
	Base *pBase = &aBase;


	//Call the functions
	//
	pBase->NameOf(); //Call virtual functions
	pBase->InvokingClass(); //Call nonvirtual function
	pDerived->NameOf(); //Call the virtual
	pDerived->InvokingClass(); //Call the nonvirtual function


	return 0;
}

