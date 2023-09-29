#include<iostream>
using namespace std;
class Array{
	private:
		int a[5];
	public:
		void fill();
		void show();
		int max();
		int min();
		
};
void Array::fill(){
	for(int i=0; i<5; i++){
		cout<<"Enter ["<<i<<"]:";
		cin>>a[i];
	}
}
void Array::show(){
		for(int i=0; i<5; i++){
		cout<<"a["<<i<<"]:"<<a[i]<<endl;
	}
}
int Array::max(){
	int m;
	m=a[0];
	for(int i=0; i<=4; i++){
		if(m<a[i]){
			m=a[i];
			
		}
		
	}
	return m;
	}
int Array::min(){
	int m;
	m=a[0];
	for(int i=0; i<=4; i++){
		if(m>a[i]){
			m=a[i];
		}
		return m;
	}
	
}
int main()
{
	Array arr;
	arr.fill();
	arr.show();
	cout<<"Max number is:"<<arr.max()<<endl;
	cout<<"Min number is:"<<arr.min();
return 0;
}


