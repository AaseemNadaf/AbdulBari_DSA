#include<iostream>
using namespace std;

int * fun(int n)
{
	int *p;
	p=new int[n];
	
	for(int i=0;i<n;i++)
		p[i]=i+1;
	
	return p;
}

int main()
{
	int *ptr,n=5;
	ptr=fun(n);
	
	for(int i=0;i<n;i++)
		cout<<ptr[i]<<" ";
	return 0;
}
