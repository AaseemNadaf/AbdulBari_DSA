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
	int x,y,sum;
	x=10;
	y=15;
	sum=add(x,y);
	cout<<"Sum is = "<<sum;
	return 0;
}