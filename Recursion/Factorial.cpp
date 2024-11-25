#include<iostream>
using namespace std;

int fact(int n)
{
	if(n==0)
		return 1;
	if(n>0)
		return fact(n-1)*n; 
}

int forfact(int n)
{
	int p=1;
	for(int i=1;i<=n;i++)
	{
		p=p*i;
	}
	return p;
}

int main()
{
	int n;
	cout<<"Enter number=";
	cin>>n;
	cout<<fact(n)<<endl;
	cout<<forfact(n);
	return 0;
}
