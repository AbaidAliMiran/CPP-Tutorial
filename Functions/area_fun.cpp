#include<iostream>
using namespace std;
void area(float radius)
{
	float ra = 3.14 * radius * radius;
	cout<<"Area of Circle is:"<<ra;
}
int main()
{
	float r;
	cout<<"Enter radius of circle:";
	cin>>r;
	area(r);
return 0;
}


