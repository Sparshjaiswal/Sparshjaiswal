#include<iostream>
using namespace std;
void area(int a);
void area(int l, int b);
void area(float r);
int main()
{
	int a, l, b;
	float r;

	cout<<"enter the sides of a square";
	cin>>a;
	cout<<"enter the length and breadth of a square";
	cin>>l>>b;
	cout<<"enter the radius";
	cin>>r;
	area(a);
	area(l,b);
	area(r);
	return 0;
}
	void area(int a)
{
	int ar;
	ar=a*a;
	cout<<"the area of square is:"<<ar;
}
	void area(int l, int b)
{
         int ar;
	ar=l*b;
	cout<<"the area of rectangle is:"<<ar;
}
	void area (float r)
{
	int ar;
	int pi=3.14;
	ar=3.14*r*r;
	cout<<"the area of circle is:"<<ar;
}
	
