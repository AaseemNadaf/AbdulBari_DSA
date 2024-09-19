#include<iostream>
using namespace std;

struct Rect{
	int length;
	int breadth;
};

void init(Rect *r,int l,int b)
{
	r->length=l;
	r->breadth=b;
}
int area(Rect r)
{
	return r.length*r.breadth;
}
int perimeter(Rect r)
{
	int p;
	p=2*(r.length+r.breadth);
	return p;
}

int main()
{
	Rect r={0,0};
	int l,b,a;
	cout<<"Enter length=";
	cin>>l;
	cout<<"\nEnter breadth=";
	cin>>b;
	init(&r,l,b);
	a=area(r);
	cout<<"\nArea="<<a<<endl;
	cout<<"Perimeter="<<perimeter(r);
	return 0;
}
