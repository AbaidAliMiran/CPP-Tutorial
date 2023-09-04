#include<iostream>
using namespace std;
int main(){
	int num,i,j;
	int array[2][2];
	
	cout<<"*****Input*****"<<endl;
	for(i=0; i<=1; i++){
		for(j=0; j<=1; j++){
		cout<<"Enter array["<<i<<"]["<<j<<"] element:";
		cin>>array[i][j];
	}}
	cout<<"\n\n*****Output*****"<<endl;
	for(i=0; i<=1; i++){
		for(j=0; j<=1; j++){
			cout<<"Value at array["<<i<<"]["<<j<<"] is "<<array[i][j]<<endl;
		}
	}
}


