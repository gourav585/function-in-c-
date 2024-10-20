#include<iostream>
using namespace std;
void dtb(int n){
    int rem =0 ,pow=1,bin=0;
    while(n>0){
        rem = n%2;
        bin = bin +rem*pow;
        n = n/2;
        pow = pow*10;
    }
    cout<<bin<<endl;
}
int main(){
    int n ;
    cout<<"enter your number "<<endl;
    cin>>n;
    dtb(n);
}
