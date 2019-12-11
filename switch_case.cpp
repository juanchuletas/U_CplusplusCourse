#include <iostream>

int main ()
{

	char Item;
	std::cout<<"Options:\n";
	std::cout<<"A,B,C,D\n";

	std::cout<<"Select your choice\n";


	std::cin>>Item;

	switch(Item)
	{
		case 'A':
			std::cout<<"You select A\n";
		break;
		case 'B':
			std::cout<<"You select B\n";
		break;
		default :
			std::cout<<"Idiot\n";
		break;
	}
	
	return 0;




}
