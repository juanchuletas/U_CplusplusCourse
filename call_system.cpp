#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>


using namespace std; 

int main ()
{
	int n_line, a = 5; 

	ifstream cap;
	string stdr;

	system("wc -l archivo.txt >dummy.dat");
	cap.open("dummy.dat",ios::in);
	cap>>n_line>>stdr;
	/*while(cap>>n_line>>stdr)
	{

	}*/
	cap.close();
	cout<<"FILE NAME "<<stdr<<" AND No. OF LINES  IS "<<n_line<<endl;
	system("rm dummy.dat");

	return 0;
}
