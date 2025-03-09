#include <iostream>
using namespace std;
double traingle(double base, double height);
double rectangle(double length, double width);
int main()
{
	double base, height, areaT, areaR, length, width;
	areaT = traingle(base, height);
	areaR = rectangle(length, width);
	cout<<"Area of the Tringle = "<<areaT<<endl;
	cout<<"Area of the Rectangle = "<<areaR<<endl;
	return 0;
}
double traingle(double base, double height)
{
	cout<<".....Tringle....."<<endl;
    cout<<"\nEnter base and height"<<endl;
	cin>>base>>height;
	int aT = base * height / 2;

	return aT;
}
double rectangle(double length, double width)
{
	cout<<"\n.....Rectangle....."<<endl;
    cout<<"\nEnter length and width"<<endl;
	cin>>length>>width;
	int aR = length * width;

	return aR;
}