#include "virtual_function.hpp"



int main()
{
	const string status = "salary"; //Options: hourly or salary
	//Asign a manager to e1
	string level = "salary";
	Employee *e1; //e1 is a pointer to Employee class


	if(status!=level)
	{
		e1 = new Employee();
	}
	else
	{
		e1 = new Manager();
	}
	e1->setPayRate(12000.00);

	cout<<"\nEmployee 1  pay: $ "<<e1->calcWeeklyPay();

	//Assign an Employee to e2
	//
	level = "hourly";
	Employee *e2;
	if(status!=level)
	{
		e2 = new Employee();

	}
	else
	{
		e2 = new Manager();
	}
	e2->setPayRate(10.00);
	cout<<"\nEmployee 2 pay: $"<<e2->calcWeeklyPay();
	cout<<"\n";
}
