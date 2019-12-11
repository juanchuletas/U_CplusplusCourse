#include <iostream>




int main ()
{
	int a = 50;


	int *point_toA = &a;
	int firstval,secondval;
	int *mypointer;
	
	mypointer = &firstval;
	*mypointer = 10;
	std::cout<<"First value = "<<firstval<<"\n";
	mypointer = &secondval;
	*mypointer = 25;
	std::cout<<"First value = "<<secondval<<"\n";


	std::cout<<"Pointer to A stores: "<<point_toA<<"\n";
	std::cout<<"Pointer to A points to: "<<*point_toA<<"\n";

	return 0;
}
