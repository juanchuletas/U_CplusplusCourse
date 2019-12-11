#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;



int main ()
{
	int n=10;
	int a,b,c;
	ifstream in_file; 

	in_file.open("SALIDA.DAT",ios::in);
	if(in_file) cout<<"FILE FOUND AND CREATE"<<endl;
	if(!in_file) cout<<"FILE NOT FOUND"<<endl;

	while(in_file>>a>>b>>c){
		cout<<a<<" "<<b<<" "<<c<<" "<<endl;
	}

	

	in_file.close();


	return 0;


}
