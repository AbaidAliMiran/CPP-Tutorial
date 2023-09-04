#include<iostream>
using namespace std;
int main(){
	int array[3][3]={{10,11,12},{13,14,15},{16,17,18}};
	for(int i=0; i<=2; i++){
		for(int j=0; j<=2; j++){
			cout<<"Value at array["<<i<<"]["<<j<<"] is "<<array[i][j]<<endl;
		}
	}
}


