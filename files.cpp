#include <iostream>
#include <fstream>

using namespace std; 


int main ()
{

	ifstream  file;
	file.open("archivo.txt",ios::in);
	if(file) cout<<"FOUND"<<endl;
	if(!file) cout<<"NOT FOUND"<<endl;


	file.close();

	return 0;
}
