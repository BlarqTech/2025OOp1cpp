#include <iostream>
using namespace std;

double area_ofTriangle(double base, double height);
double area_ofRectangle(double length, double width);

int main()
{
	double tri, rec;
	tri = area_ofTriangle(8, 4);
	rec = area_ofRectangle(4, 6);
	
	cout<<"....Triangle...."<<endl;
	cout<<"Area of triangle ="<<tri<<endl;
	cout<<"....rectangle...."<<endl;
	cout<<"Area of triangle ="<<rec<<endl;
	return 0;
}
double area_ofTriangle(double base, double height)
{
	return (base * height)/2;
}
double area_ofRectangle(double length, double width)
{
	return length * width;
}