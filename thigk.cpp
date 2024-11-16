#include <iostream>
using namespace std;

void ktraChan(int n){
	if(n%2==0)
		cout<<n<<" la so chan"<<endl;
	else
		cout<<n<<" khong la so chan"<<endl;
}

void main(){
	int n;
	cout<<"Nhap vao mot so nguyen: ";
	cin>>n;
	ktraChan(n);
}