#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float b, a, c;
	cout<<"Enter base:";
	cin>>b;
	cout<<"Enter perp:";
	cin>>a;
	
	c= sqrt(b*b + a*a);
	
	cout<<"hypotenus is:"<<c;
	return 0;
}