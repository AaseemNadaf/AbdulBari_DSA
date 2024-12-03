#include<iostream>
using namespace std;

int fact(int n)
{
	if(n==0)
		return 1;
	else 
		return fact(n-1)*n;
}

int nCr(int n,int r)
{
	int num=fact(n);
	int den=fact(r)*fact(n-r);
	
	return num/den;
}

int nCrRecursive(int n,int r) // Calculated using Pascal's Triangle
{
	if(n==r || r==0)
		return 1;
	return nCrRecursive(n-1,r-1)+nCrRecursive(n-1,r);
}

int main()
{
	cout<<"nCr = "<<nCrRecursive(9,5);
	return 0;	
}
