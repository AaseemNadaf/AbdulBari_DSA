#include<iostream>
using namespace std;

int main()
{
	int length=0,breadth=0,area,perimeter;
	cout<<"Enter length=";
	cin>>length;
	cout<<"\nEnter breadth=";
	cin>>breadth;
	area=length*breadth;
	cout<<"\nArea="<<area<<endl;
	perimeter=2*(length+breadth);
	cout<<"Perimeter="<<perimeter;
}
