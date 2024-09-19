#include<iostream>
using namespace std;

int area(int length,int breadth)
{
	return length*breadth;
}
int perimeter(int length,int breadth)
{
	int p;
	p=2*(length+breadth);
	return p;
}

int main()
{
	int length=0,breadth=0,a;
	cout<<"Enter length=";
	cin>>length;
	cout<<"\nEnter breadth=";
	cin>>breadth;
	a=area(length,breadth);
	cout<<"\nArea="<<a<<endl;
	cout<<"Perimeter="<<perimeter(length,breadth);
	return 0;
}
