#include<iostream>
using namespace std;

void swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

int main()
{	
	int x,y;
	x=10;
	y=15;
	swap(x,y);
	cout<<"First Number = "<<x<<endl;
	cout<<"Second Number = "<<y;
	return 0;
}
