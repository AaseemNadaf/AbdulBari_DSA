#include<iostream>
using namespace std;

void fun1(int n)
{
	if(n>0)
	{
		cout<<n<<" ";
		fun1(n-1);
	}
}

int main()
{
	int x;
	x=3;
	fun1(x);
	return 0;
}
