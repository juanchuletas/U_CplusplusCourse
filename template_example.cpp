#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

template <typename T> //Tell the compiler we are using a template
T findSmaller(T  input1,T  input2)
{
    if(input1 < input2)
        return input1;
    else
        return input2;
}

int main()
{
	int a = 54;
	int b = 89; 
	float f1 = 7.8;
	float f2 = 3.4;
	char  c1 = 'A';
	char  c2 = 'B';
	string s1 = "Hello there!";
	string s2 = "Have fun!";

	   //Wow! We can use one function for different variable types
  
	cout<<"\nIntegers compared: "<<findSmaller(a,b);
    	cout<<"\nFloats compared: "<<findSmaller(f1,f2);
       	cout<<"\nChars compared: "<<findSmaller(c1,c2);
	cout<<"\nStrings compared: "<<findSmaller(s1,s2);
    	return 0;
}

