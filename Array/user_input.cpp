#include<iostream>
using namespace std;
int main(){
	int num;
	int array[num];
	cout<<"Enter total number of elements:";
	cin>>num;
	cout<<"*****Input*****"<<endl;
	for(int i=0; i<num; i++){
		cout<<"Enter "<<i+1<<" element:"<<endl;
		cin>>array[i];
	}
	cout<<"*****Output*****"<<endl;
	for(int j=0; j<num; j++){
		cout<<array[j]<<" ";
	}
}


