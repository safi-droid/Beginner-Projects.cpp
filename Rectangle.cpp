#include<iostream>
using namespace std;
int main()
{
	int area , perimeter;
	int const lenght = 8;
	int const width = 3;
	cout<<"enter lenght:";
	cout<<"enter width:";
	area = lenght * width;
	perimeter = 2*(lenght + width);
	cout<<"area is"<<area<<"perimeter is"<<perimeter;
	return 0;
}