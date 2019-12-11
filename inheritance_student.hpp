#include <iostream>
#include <string>


using namespace std; 


class Student
{
private:
	int id;
public:
	void setId(int idIn);
	int getId();
	Student();
};
Student::Student()
{
	id = 0;
}
void Student::setId(int idIn)
{
	id = idIn;
}
int Student::getId()
{
	return id;
}

// The dearived class with Student class as base class
//

class GradStudent: public Student
{
private:
	string degree;
public:
	GradStudent();
	void setDegree(string degreeIn);
	string getDegree();
};

GradStudent::GradStudent()
{
	degree = "Undeclared";
}
void GradStudent::setDegree(string degreeIn)
{
	degree = degreeIn;
}
string GradStudent::getDegree()
{
	return degree;
}


