#include<iostream>
using namespace std;
int x=0;
int fun1(int n)
{
	//static int x=0;
	if(n>0)
	{
		cout<<n<<"       ";
		fun1(n-1);
		fun1(n-1);
	}
}

int main()
{
	fun1(3);
	return 0;
}
