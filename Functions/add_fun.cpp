#include<iostream>
using namespace std;
int add(int num1,int num2){
	int sum=num1+num2;
	cout<<num1<<"+"<<num2<<"="<<sum;
}
int main(){
	int a;
	int b;
	cout<<"Enter first element:";
	cin>>a;
	cout<<"Enter Second element:";
	cin>>b;
	add(a,b);
}


