#include<iostream>
using namespace std;

int main()
{	//Declaring Array and Initializing each index
	int A[5];
	A[0]=1;
	A[1]=10;
	A[3]=25;
	
	cout<<sizeof(A)<<endl;
	cout<<"Array A\n"<<A[0]<<endl;
	cout<<A[1]<<endl;
	
	//Initializing and Declaring
	int B[5]={1,2,3};
	cout<<"Array B:\n"<<B[0]<<endl;
	cout<<B[4]<<endl;
	
	//For loop to display
	for(int i=0;i<5;i++)
		cout<<B[i]<<" ";
	
	//Size input 
	int n;
	cout<<"\nEnter size:";
	cin>>n;
	int C[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Enter element:";
		cin>>C[i];
	}	
	for(int j=0;j<n;j++)
		cout<<C[j]<<" ";
}
