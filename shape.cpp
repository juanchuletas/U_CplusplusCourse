#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Shape
{
public: 
	//Constructor definition
	Shape(int l = 2,int w = 2)
	{
		length = l;
		width = w;

	}
	double Area()
	{
		return length*width;
	}
	//Use of this to compare areas
	int compareWithThis(Shape shape)
	{
		return this->Area() > shape.Area();
	}
	// This is not necessary to compare shapes
	int compare(Shape shapeIn)
	{
		return Area() > shapeIn.Area();
	}
private:
	int length;
	int width;
};

int main()
{
	Shape sh1;
	Shape sh2(3,3);

	if(sh1.compare(sh2))
	{
		cout<<"Shape 2 is smaller than shape 1\n";
	}
	else
	{
		cout<<"Shape 2 is equal or larger than shape 1\n";
	}
	if(sh1.compareWithThis(sh2))
	{
		cout<<"Shape 2 is smaller than shape 1\n";

	}
	else
	{
		cout<<"Shape 2 is equal or larger than shape 1\n";
	}

	return 0;
}
