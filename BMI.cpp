#include <iostream>
#include <string>
using namespace std;

int main()
{
	double BMI, weight, height;
	string category;
	cout<<"Enter weight: "<<endl;
	cin>>weight;
	cout<<"Enter height: "<<endl;
	cin>>height;
	
	BMI = weight/(height*height);
	
	if(BMI < 18.5)
	{
		category = "Underweight";
	}
	else if(BMI >= 18.5 && BMI <= 24.9)
	{
		category = "Normal Weight";
	}
	else if(BMI >=25 && BMI <= 29.9)
	{
		category = "Overweight";
	}
	else
	{
		category = "Obesity";
	}
	
	cout<<"weight: "<<weight<<" kg"<<endl;
	cout<<"Height: "<<height<<" m"<<endl;
	cout<<"BMI = "<<BMI<<"kg/m^2"<<endl;
	cout<<category<<endl;
	
	return 0;
}