#include<iostream>
using namespace std;

int main()
{	//Every pointer irrespective of data type 
	//occupies the same amount of space.
	int a=10;
	int *p;
	p=&a;
	cout<<a<<endl;
	cout<<*p<<endl;
	cout<<"-------------------------------------"<<endl;
	
	int A[5]={2,4,6,8,10};
	int *p1;
	p1=A; // & not needed incase of Array. Or write p=&A[0]
	
	for(int i=0;i<5;i++)
		cout<<p1[i]<<endl;
	cout<<"-------------------------------------"<<endl;
	// Creating Array in Heap
	
	int *p2;
	p2=new int[5];
	
	p2[0]=10; p2[1]=20; p2[2]=30; p2[3]=40; p2[4]=50;
	
	for(int i=0;i<5;i++)
		cout<<p2[i]<<endl;
	free(p2); // Freeing memory allocated in heap
	cout<<"-------------------------------------"<<endl;
	
	
	return 0;
}
