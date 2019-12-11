#include <iostream>

using namespace std;


class Base
{
	public:
		virtual void NameOf(); //Virtual function
		void InvokingClass(); //Nonvirtual function
};
//Implement the two functions
void  Base::NameOf()
{
	cout<<"Base::NameOf\n";
}

void Base::InvokingClass()
{
	cout<<"Invoked by Base\n";
}

class Derived : public Base
{
	public: 
		void NameOf(); //Virtual function
		void InvokingClass(); //Non virtual function
};

// Implement the two functions
//
void Derived::NameOf()
{
	cout<<"Derived::NameOf\n";
}
void Derived::InvokingClass()
{
	cout<<"Invoked by the Derived\n";
}


