#include<iostream>
using namespace std;

void fun(int *A,int n)
{
	for(int i=0;i<n;i++)
		cout<<A[i]<<" ";
	A[0]=15;
}

int main()
{	
	int A[]={2,4,6,8,10};
	int n=5;
	fun(A,n);
	
	for(int i:A)
		cout<<i<<" ";
}
