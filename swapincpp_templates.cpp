#include <iostream>

using namespace std; //replace the std::cout by cout<<

template <class T>
inline void swapping(T& a, T& b)
{
	cout<<"Using swap as a template"<<endl;
	T temp = a;
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
	swapping(a,b);
	cout<<"After swapping a="<<a<<"b="<<b<<endl;


	cout<<"Double number c"<<endl;
	cin>>c;
	cout<<"Double number d"<<endl;
	cin>>d;
	cout<<"Before swapping c="<<c<<"d="<<d<<endl;
	swapping(c,d);
	cout<<"After swapping c="<<c<<"d="<<d<<endl;
	return 0;
}
