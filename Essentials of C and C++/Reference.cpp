#include<iostream>
using namespace std;

int main()
{
	int a=1;
	int &r=a; //Declaring and intializing reference
	
	r=25;
	
	int b=30;
	r=b;
	
	cout<<a<<endl<<r<<endl;
	
	return 0;
}
