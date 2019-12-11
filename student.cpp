#include <iostream>
#include <string>

using namespace std;
class Student
{
	int id;
	string name;
	int gradDate;


	public:
		void setName(string nameIn);
		void setId(int idIn);
		void setGradeDate(int dateIn);
		string getName();
		int getId();
		int getGrade();
		void print();

};
// Declaration of modifying function members 
void Student::setName(string nameIn)
{
	name = nameIn;
}
//The way that the "this" pointer acts in the member function 
//declarated above
/*
 void setName(Student *const this,string name)
 {
       this->name = nameIn;
 }
*/
void Student::setId(int idIn)
{
	id = idIn;
}
void Student::setGradeDate(int dateIn)
{
	gradDate = dateIn;
}
// Declaration of the accesing function members
string Student::getName()
{
	return name;
}
int Student::getId()
{
	return id;
}
int Student::getGrade()
{
	return gradDate;
}
void Student::print()
{
	cout<<name<<" \n"<<id<<" \n"<<gradDate<<"\n";
}
int main()
{
	Student student1;



	student1.setName("Juan G.");
	student1.setId(2121);
	student1.setGradeDate(2019);


	cout<<"Using the Student::print function\n";
	cout<<"Student 1\n";
	student1.print();
}
