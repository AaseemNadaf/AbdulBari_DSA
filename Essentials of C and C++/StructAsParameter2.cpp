#include<iostream>
using namespace std;

//Creating structure in heap
struct Rect{
	int length;
	int breadth;
};

struct Rect *fun()
{
	struct Rect *p;
	p=new Rect;
	p->length=20;
	p->breadth=15;
	
	return p;
}

int main()
{
	struct Rect *ptr=fun();
	cout<<"Length="<<ptr->length<<endl;
	cout<<"Breadth="<<ptr->breadth<<endl;
}
