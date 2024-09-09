#include<iostream>
using namespace std;

struct Rect{
	int length;
	int breadth;
};

int main()
{
	/*Rect r={10,5};
	cout<<r.length<<endl;
	cout<<r.breadth<<endl;*/
	
	Rect *p;
	p=new Rect;
	p->length=15;
	p->breadth=10;
	cout<<p->length<<endl;
	cout<<p->breadth<<endl;
		
	return 0;
}
