#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter any number:";
	cin>>num;
	cout<<"Natural number from "<<num<<" to 1 is :";
	for(int i=num; i>=1; i--){
		cout<<i<<" ";
	}

}


