#include<iostream>
using namespace std;
void Factorial(int);
int main()
{
	int num;
	cout<<"Enter a number:";
	cin>>num;
	Factorial(num);
return 0;
}
void Factorial(int f)
{
	long fact=1;
	for(int n=1; n<=f; n++)
	{
		fact=fact*n;
	}
	cout<<"Factorial of "<<f<<" is:"<<fact;
}


