#include<iostream>
using namespace std;
int div(int num1,int num2){
	int div=num1/num2;
	cout<<num1<<"/"<<num2<<"="<<div;
}
int main(){
	int a;
	int b;
	cout<<"Enter first element:";
	cin>>a;
	cout<<"Enter Second element:";
	cin>>b;
	div(a,b);
}
