#include<iostream>
using namespace std;
int mul(int num1,int num2){
	int mul=num1*num2;
	cout<<num1<<"x"<<num2<<"="<<mul;
}
int main(){
	int a;
	int b;
	cout<<"Enter first element:";
	cin>>a;
	cout<<"Enter Second element:";
	cin>>b;
	mul(a,b);
}


