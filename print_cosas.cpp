#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;



int main ()
{
	int n=3;
	ofstream out_file; 

	out_file.open("SALIDA.DAT",ios::trunc);
	if(out_file) cout<<"FILE FOUND AND CREATE"<<endl;
	if(!out_file) cout<<"FILE NOT FOUND"<<endl;

	for(int i=1; i<=n; i++)
	{
		out_file<<i<<1<<" "<<i<<2<<" "<<i<<3<<endl;
	}
	out_file.close();


	return 0;


}
