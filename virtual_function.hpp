#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

class Employee
{
	private:
		float payRate;
		string name;
		int employeeNumber;
	public:
		void setPayRate(float rateIn);
		float getPayRate();
		//Declaring the virtual function
		virtual float calcWeeklyPay();

};
void Employee::setPayRate(float rateIn)
{
	payRate = rateIn;
}
float Employee::getPayRate()
{
	return payRate;
}
float Employee::calcWeeklyPay()
{
	return 40*payRate;
}
// The class Manager inherits from Employee
// The only difference is that the managers are salary
// employees. So the pay is calculated differently
//
class Manager : public Employee
{
	public:
		float calcWeeklyPay();
};
float Manager::calcWeeklyPay()
{

	//Weekly pay is based on the yearly salary
	//divided by 52 weeks.
	return Employee::getPayRate()/52;
}

