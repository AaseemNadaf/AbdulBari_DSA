#include<iostream>
#include<stdio.h>
using namespace std;

struct Rectangle // Defining Structure
{
	int length;
	int breadth;
	char x;
}r1;  // Global Declaration of Variable



int main()
{
	//struct Rectangle r1; Declaration
	r1={10,5}; // Initialization
	
	//Accessing Members
	r1.length=15;
	r1.breadth=7;
	
	cout<<sizeof(r1)<<endl;
	cout<<"Length="<<r1.length<<endl;
	cout<<"Breadth="<<r1.breadth;
}
