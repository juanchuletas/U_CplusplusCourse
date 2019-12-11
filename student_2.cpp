#include "student_2.hpp"

int main()
{
	Student s1;
	s1.setId(2121);
	s1.setGrade(0,9);
	s1.setGrade(1,10);
	s1.setGrade(2,10);
	s1.setGrade(3,10);
	s1.setGrade(4,10);
	s1.printinfo();
	cout<<"Average: "<<s1.getAverage()<<"\n";


	return 0;

}
