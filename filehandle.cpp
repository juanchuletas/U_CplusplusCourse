#include <iostream>
#include <fstream>

using namespace std; 

int main ()
{
	
	ofstream input;
	input.open("README.txt",ios::app);
	if(!input)
	{
		cout<<"FILE NOT FOUND\n";
	}
	input<<"HELLO WORLD !!!\n";

	input.close();



	return 0;

}

