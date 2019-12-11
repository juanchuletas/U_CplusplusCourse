#include <iostream>
#include <fstream>

using namespace std; 


int main ()
{

	int a = 1000;
	ofstream  salida;
	salida.open("archivo.txt",ios::trunc);
	if(salida) cout<<"CREATE"<<endl;
	if(!salida) cout<<"NOT FOUND"<<endl;
	salida<<"ONE STRING PLUS THE NUMBER"<<a<<endl;


	salida.close();

	return 0;
}
