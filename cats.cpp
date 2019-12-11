#include<iostream>
#include<string>

using namespace std;


class Cats
{
	string name;
	string breed;
	int age;

public:
	Cats(); //Declaring the constructor
	void setName(string nameIn);
	void setBreed(string breedIn);
	void setAge(int ageIn);
	string getName();
	string getBreed();
	int getAge();
	void printinfo();
};

//Defining the constructor

Cats::Cats()
{
	cout<<"Assigning initial values in the constructor\n";
	name  = "NO NAME";
	breed = "NO BREED";
	age = 99;
}
void Cats::setName(string nameIn)
{
    name = nameIn;
}

void Cats::setBreed(string breedIn)
{
    breed = breedIn;
}

void Cats::setAge(int ageIn)
{
    age = ageIn;
}
string Cats::getName()
{
    return name;
}
string Cats::getBreed()
{
    return breed;
}
int Cats::getAge()
{
    return age;
}
void Cats::printinfo()
{
    cout<<name<<" \n"<<breed<<"\n "<<age<<"\n";
}
int main()
{
    Cats cat1;
    cout<<"Cat1 information: \n";
    cat1.printinfo();
    return 0;
}
