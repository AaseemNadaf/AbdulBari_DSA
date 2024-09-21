#include<iostream>
using namespace std;

class Rect{
	private:
		int length;
		int breadth;
	public:
		Rect()
		{
			length=breadth=0;
		}
		Rect(int l,int b)
		{
			length=l;
			breadth=b;
		}
		int area()
		{
			return length*breadth;
		}
		int perimeter()
		{
			return 2*(length+breadth);
		}
		void setLength(int l)
		{
			length=l;
		}
		void setBreadth(int b)
		{
			breadth=b;
		}
		int getLength()
		{
			return length;
		}
		int getBreadth()
		{
			return breadth;
		}
		~Rect()
		{
			cout<<"Destructor";
		} 
};

int main()
{
	Rect r(10,5);
	cout<<"Area="<<r.area()<<endl;
	cout<<"Perimeter="<<r.perimeter()<<endl;
	
	return 0;
}
