#include<iostream>
using namespace std;

struct Rect{
	int length;
	int breadth;
};

/* Call By Value
void fun(struct Rect r1)
{
	r1.length=20;
	cout<<"Length="<<r1.length<<endl;
	cout<<"Breadth="<<r1.breadth<<endl;
}*/
//Call by Address
void fun(struct Rect *p)
{
	p->length=20;
	cout<<"Length="<<p->length<<endl;
	cout<<"Breadth="<<p->breadth<<endl;
}

int main()
{
	struct Rect r={10,5};
	fun(&r);
	cout<<"Length="<<r.length;
	return 0;
}
