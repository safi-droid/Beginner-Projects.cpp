#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double grade1,grade2,grade3,avg;
	cout<<"Enter grade1:";
	cin>>grade1;
	cout<<"Enter grade2:";
	cin>>grade2;
	cout<<"Enter grade3:";
	cin>>grade3;
	
	cout<<fixed<<setprecision(2);
	
	avg=(grade1+grade2+grade3)/3;
	cout<<"average is"<<avg;
	return 0;
}