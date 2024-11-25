#include<iostream>
using namespace std;

int sum(int n)
{
	if(n==0)
		return 0;
	if(n>0)
		return sum(n-1)+n; 
}

int forsum(int n)
{
	int s=0;
	for(int i=1;i<=n;i++)
	{
		s=s+i;
	}
	return s;
}

int main()
{
	int n;
	cout<<"Enter number of natural numbers=";
	cin>>n;
	cout<<sum(n)<<endl;
	cout<<forsum(n);
	return 0;
}
