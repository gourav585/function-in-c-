#include<iostream>
using namespace std;
bool iseven(int a){
	if(a%2==0){
		return true;
	}else{ 
		return false;
	}
}
int main(){
	int a;
	cout<<"enter your number to check number is even and odd"<<endl;
	cin>>a;
	int c = iseven(a);
	cout<<c;
}
