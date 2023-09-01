#include<iostream>
using namespace std;
int main(){
	int p,b,f=1;
	cout<<"Enter base:";
	cin>>b;
	cout<<"Enter power:";
	cin>>p;
	for(int i=1; i<=p; i++){
		f*=b;  // f*=b = f=f*b 
	}
	cout<<"Result:"<<f;
}


