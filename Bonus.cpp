#include <iostream>
using namespace std;

int main()
{
	int salary, YearsofService, bonus;
	cout<<"How much is Your salary?"<<endl;
	cin>>salary;
	cout<<"How long have you been in service?"<<endl;
	cin>>YearsofService;
	if (YearsofService > 10)
	{
		bonus = 12;
	}
	else if(YearsofService >= 6 && YearsofService <= 11)
	{
		bonus = 10;
	}

	else 
	{
		bonus = 8;
	}

	float netBonus = (bonus * salary)/100;
	float totalSalary = netBonus + salary;
	cout<<"Net Bonus Amount: ksh "<<netBonus<<endl;
	cout<<"Total Salary = ksh "<<totalSalary<<endl;
	
	return 0;
}