#include <iostream>
#include <string>

int main ()
{
	std::string name1,address1,phone1;

	//Get the user information
	//
	std::cout<<"User1 what is yout name?\n";
	std::getline(std::cin,name1);
	std::cout<<"Address user1\n";
	std::getline(std::cin,address1);
	std::cout<<"Phone number user1\n";
	std::getline(std::cin,phone1);

	std::cout<<"USER 1 INFO:\n";
	std::cout<<name1<<std::endl;
	std::cout<<address1<<std::endl;
	std::cout<<phone1<<std::endl;


	return 0;
}
