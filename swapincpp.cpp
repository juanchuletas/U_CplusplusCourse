#include <iostream>

using namespace std; //replace the std::cout by cout<<


inline void swap(int &a, int &b)
{
	cout<<"Using swap for integers automatically"<<endl;
	int temp = a;
	a = b;
	b = temp;
}
inline void swap(double &a, double &b)
{
	cout<<"Using swap for doubles automatically"<<endl;
	double temp = a;
	a = b;
	b = temp;
}
int main ()
{
	int a,b;
	double c,d;
	cout<<"Int number a"<<endl;
	cin>>a;
	cout<<"Int number b"<<endl;
	cin>>b;

	cout<<"Before swapping a="<<a<<"b="<<b<<endl;
	swap(a,b);
	cout<<"After swapping a="<<a<<"b="<<b<<endl;


	cout<<"Double number c"<<endl;
	cin>>c;
	cout<<"Double number d"<<endl;
	cin>>d;
	cout<<"Before swapping c="<<c<<"d="<<d<<endl;
	swap(c,d);
	cout<<"After swapping c="<<c<<"d="<<d<<endl;
	return 0;
}
