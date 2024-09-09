#include<iostream>
using namespace std;

int add(int a,int b)
{
	int c;
	c=a+b;
	
	return c;
}

int main()
{
	int num1,num2,sum;
	num1=10;
	num2=20;
	sum=add(num1,num2);
	cout<<"Sum is "<<sum;
}
