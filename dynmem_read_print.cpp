#include <iostream>
#include <cstdlib>
#include <string.h>
#include <fstream>

using namespace std;



int main ()
{
	int n=10;
	int a,b,c;
	int numline;
	string stdr;
	ifstream cap_file; 
	system("wc -l SALIDA.DAT > dummy.dat");
	cap_file.open("dummy.dat",ios::in);
	if(cap_file) cout<<"FILE dummy.dat FOUND"<<endl;
	if(!cap_file) cout<<"FILE NOT FOUND"<<endl;
	cap_file>>numline>>stdr;

	ifstream in_file;
	in_file.open("SALIDA.DAT",ios::in);
        if(in_file) cout<<"FILE FOUND"<<endl;
        if(!in_file) cout<<"FILE NOT FOUND"<<endl;

	double* arr1=NULL;
	double* arr2=NULL;
	double* arr3=NULL;

	arr1 = new double[numline];
	arr2 = new double[numline];
	arr3 = new double[numline];

	int l=0;

	while(in_file>>arr1[l]>>arr2[l]>>arr3[l]){
               cout<<arr1[l]<<" "<<arr2[l]<<" "<<arr3[l]<<endl;
		l++;
	}


	system("rm dummy.dat");


	delete [] arr1;
	delete [] arr2;
	delete [] arr3;
	arr1 = NULL;
	arr2 = NULL;
	arr3 = NULL;

	in_file.close();
	cap_file.close();


	return 0;


}
