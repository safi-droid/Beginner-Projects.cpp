#include<iostream>
using namespace std;
int main()
{
	float area , circumference , radius;
	float const pie = 3.14;
	cout<<"enter radius:";
	cin>>radius;
	
	area = pie * radius * radius;
	circumference = 2 * pie * radius ;
	cout<<"area is"<<area<<"circumference is"<<circumference;
	return 0;
}