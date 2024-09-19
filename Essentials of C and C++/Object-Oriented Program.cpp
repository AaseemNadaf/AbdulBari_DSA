#include<iostream>
using namespace std;

struct Rect{
	int length;
	int breadth;
public:

void init(int l,int b)
{
	length=l;
	breadth=b;
}
int area()
{
	return length*breadth;
}
int perimeter()
{
	int p;
	p=2*(length+breadth);
	return p;
}
};

int main()
{
	Rect r;
	int l,b,a;
	cout<<"Enter length=";
	cin>>l;
	cout<<"\nEnter breadth=";
	cin>>b;
	r.init(l,b);
	a=r.area();
	cout<<"\nArea="<<a<<endl;
	cout<<"Perimeter="<<r.perimeter();
	return 0;
}
