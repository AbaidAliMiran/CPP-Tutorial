#include<iostream>
using namespace std;
int area(int,int);
int main()
{
	int base,height;
	cout<<"Enter base:";
	cin>>base;
	cout<<"Enter height:";
	cin>>height;
	float a = area(base,height);
	cout<<"Area of triangle :"<<a;
return 0;
}
int area(int b,int h)
{
	float ar;
	ar=0.5*b*h;
	return ar;
}


