#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;


template <class T>
T sum(T data[],int size, T s=0)
{
	for(int i=0; i<size; i++)
	{
		s+=data[i];
	}
	return s;
}
int main (void)
{
	double a[]={1.0,1.0,1.0,1.0,1.0,1.0};
	int b[] = {2,2,2,2,2};

	int r_int;
	double r_double;

	r_int = sum(b,5);
	r_double = sum(a,6);

	cout<<"The result for integer sum is: "<<r_int<<endl;
	cout<<"The result for double sum is: "<<std::fixed<<std::setprecision(6)<<r_double<<endl;
	cout<<"The result for double sum is: "<<r_double<<endl;
	cout<<"The result for double sum is: "<<1.0 + 1.0<<endl;


	return 123;
}
