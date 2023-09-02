#include<iostream>
using namespace std;
int sub(int num1,int num2){
	int sub=num1-num2;
	cout<<num1<<"-"<<num2<<"="<<sub;
}
int main(){
	int a;
	int b;
	cout<<"Enter first element:";
	cin>>a;
	cout<<"Enter Second element:";
	cin>>b;
	sub(a,b);
}


