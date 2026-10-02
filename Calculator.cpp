#include<iostream>
using namespace std;
int main()
{
	cout<<"------------------calculator---------------/n";
	float num1,num2;
	num1=num2=0;
	
	cout<<"Enter number1:";
	cin>>num1;
	
	cout<<"Enter number2:";
	cin>>num2;
	
	
	float substraction=num1-num2;
	cout<< substraction <<endl;
	
	float addition=num1+num2;
	cout<< addition <<endl;

	float multiplication=num1*num2;
	cout<< multiplication <<endl;
	
	float division=num1/num2;
	cout<< division <<endl;
	
	return 0;
}